#include "common.h"
#include "memcached_io.h"

static memcached_return memcached_value_fetch(memcached_st *ptr, char *key, size_t *key_length, 
                                              memcached_string_st *value,
                                              uint16_t *flags,
                                              uint64_t *cas,
                                              char load_key,
                                              unsigned int server_key)
{
  memcached_return rc;
  char buffer[MEMCACHED_DEFAULT_COMMAND_SIZE];
  char *string_ptr;
  char *end_ptr;

  end_ptr= buffer + MEMCACHED_DEFAULT_COMMAND_SIZE;

  *flags= 0;

  memcached_string_reset(value);

  rc= memcached_response(ptr, buffer, MEMCACHED_DEFAULT_COMMAND_SIZE, server_key);

  if (rc == MEMCACHED_SUCCESS)
  {
    char *next_ptr;
    size_t value_length;

    string_ptr= buffer;
    string_ptr+= 6; /* "VALUE " */

    /* We load the key */
    if (load_key)
    {
      *key_length= 0;

      for (; end_ptr > string_ptr && *string_ptr != ' '; string_ptr++)
      {
        *key= *string_ptr;
        key++;
        (*key_length)++;
      }
    }
    else /* Skip characters */
      for (; end_ptr > string_ptr && *string_ptr != ' '; string_ptr++);

    if (end_ptr == string_ptr)
        goto read_error;

    /* Flags fetch move past space */
    string_ptr++;
    if (end_ptr == string_ptr)
        goto read_error;
    for (next_ptr= string_ptr; end_ptr > string_ptr && *string_ptr != ' '; string_ptr++);
    *flags= (uint16_t)strtol(next_ptr, &string_ptr, 10);

    if (end_ptr == string_ptr)
        goto read_error;

    /* Length fetch move past space*/
    string_ptr++;
    if (end_ptr == string_ptr)
        goto read_error;

    for (next_ptr= string_ptr; end_ptr > string_ptr && *string_ptr != ' '; string_ptr++);
    value_length= (size_t)strtoll(next_ptr, &string_ptr, 10);

    if (end_ptr == string_ptr)
        goto read_error;

    /* Skip spaces */
    if (*string_ptr == '\r')
    {
      /* Skip past the \r\n */
      string_ptr+= 2;
    }
    else
    {
      string_ptr++;
      for (next_ptr= string_ptr; end_ptr > string_ptr && *string_ptr != ' '; string_ptr++);
      if (cas)
        *cas= (size_t)strtoll(next_ptr, &string_ptr, 10);
    }

    if (end_ptr < string_ptr)
        goto read_error;

    if (value_length)
    {
      size_t read_length;
      size_t to_read;
      char *value_ptr;

      /* We add two bytes so that we can walk the \r\n */
      rc= memcached_string_check(value, value_length+2);
      if (rc != MEMCACHED_SUCCESS)
      {
        value_length= 0;
        return MEMCACHED_MEMORY_ALLOCATION_FAILURE;
      }

      value_ptr= memcached_string_value(value);
      read_length= 0;
      /* 
        We read the \r\n into the string since not doing so is more 
        cycles then the waster of memory to do so.

        We are null terminating through, which will most likely make
        some people lazy about using the return length.
      */
      to_read= (value_length) + 2;

      read_length= memcached_io_read(ptr, server_key,
                                     value_ptr, to_read);

      if (read_length != (size_t)(value_length + 2))
      {
        goto read_error;
      }

      /* This next bit blows the API, but this is internal....*/
      {
        char *char_ptr;
        char_ptr= memcached_string_value(value);;
        char_ptr[value_length]= 0;
        char_ptr[value_length + 1]= 0;
        memcached_string_set_length(value, value_length);
      }

      return MEMCACHED_SUCCESS;
    }
  }
  else if (rc == MEMCACHED_END)
    rc= MEMCACHED_NOTFOUND;

  return rc;

read_error:
  return MEMCACHED_PARTIAL_READ;
}

/* 
  What happens if no servers exist?
*/
char *memcached_get(memcached_st *ptr, char *key, size_t key_length, 
                    size_t *value_length, 
                    uint16_t *flags,
                    memcached_return *error)
{
  char buffer[MEMCACHED_DEFAULT_COMMAND_SIZE];
  char *buf_ptr= buffer;
  unsigned int server_key;
  memcached_string_st *result_buffer;
  LIBMEMCACHED_MEMCACHED_GET_START();

  if (key_length == 0)
  {
    *error= MEMCACHED_NO_KEY_PROVIDED;
    return NULL;
  }

  if (ptr->hosts == NULL || ptr->number_of_hosts == 0)
  {
    *error= MEMCACHED_NO_SERVERS;
    return NULL;
  }

  server_key= memcached_generate_hash(ptr, key, key_length);
  result_buffer= &ptr->result_buffer;

  *value_length= 0;
  memcpy(buf_ptr, "get ", 4);
  buf_ptr+= 4;
  memcpy(buf_ptr, key, key_length);
  buf_ptr+= key_length;
  memcpy(buf_ptr, "\r\n", 2);
  buf_ptr+= 2;

  *error= memcached_do(ptr, server_key, buffer, (size_t)(buf_ptr - buffer), 1);
  if (*error != MEMCACHED_SUCCESS)
    goto error;

  *error= memcached_value_fetch(ptr, key, &key_length, result_buffer, 
                                flags, NULL, 0, server_key);
  *value_length= memcached_string_length(result_buffer);
  if (*error == MEMCACHED_END && *value_length == 0)
  {
    *error= MEMCACHED_NOTFOUND;
    goto error;
  }
  else if (*error == MEMCACHED_END)
  {
    WATCHPOINT_ASSERT(0); /* If this happens we have somehow messed up the fetch */
  }
  else if (*error == MEMCACHED_SUCCESS)
  {
    memcached_return rc;
    /* We need to read END */
    rc= memcached_response(ptr, buffer, MEMCACHED_DEFAULT_COMMAND_SIZE, server_key);

    if (rc != MEMCACHED_END)
    {
      *error= MEMCACHED_PROTOCOL_ERROR;
      goto error;
    }
  }
  else 
      goto error;

  LIBMEMCACHED_MEMCACHED_GET_END();


  return  memcached_string_c_copy(result_buffer);

error:
  *value_length= 0;

  LIBMEMCACHED_MEMCACHED_GET_END();

    return NULL;
}

memcached_return memcached_mget(memcached_st *ptr, 
                                char **keys, size_t *key_length, 
                                unsigned int number_of_keys)
{
  unsigned int x;
  memcached_return rc= MEMCACHED_NOTFOUND;
  char *get_command= "get ";
  uint8_t get_command_length= 4

  LIBMEMCACHED_MEMCACHED_MGET_START();
  ptr->cursor_server= 0;

  if (number_of_keys == 0)
    return MEMCACHED_NOTFOUND;

  if (ptr->number_of_hosts == 0)
    return MEMCACHED_NO_SERVERS;

  if (ptr->flags & MEM_SUPPORT_CAS)
  {
    get_command= "gets ";
    get_command_length= 5;
  }

  for (x= 0; x < number_of_keys; x++)
  {
    unsigned int server_key;

    server_key= memcached_generate_hash(ptr, keys[x], key_length[x]);

    if (ptr->hosts[server_key].cursor_active == 0)
    {
      rc= memcached_connect(ptr, server_key);

      if ((memcached_io_write(ptr, server_key, get_command, get_command_length, 0)) == -1)
      {
        memcached_quit_server(ptr, server_key);
        rc= MEMCACHED_SOME_ERRORS;
        continue;
      }
      ptr->hosts[server_key].cursor_active= 1;
    }

    if ((memcached_io_write(ptr, server_key, keys[x], key_length[x], 0)) == -1)
    {
      ptr->hosts[server_key].cursor_active = 0;
      memcached_quit_server(ptr, server_key);
      rc= MEMCACHED_SOME_ERRORS;
      continue;
    }

    if ((memcached_io_write(ptr, server_key, " ", 1, 0)) == -1)
    {
      ptr->hosts[server_key].cursor_active = 0;
      memcached_quit_server(ptr, server_key);
      rc= MEMCACHED_SOME_ERRORS;
      continue;
    }
  }


  /*
    Should we muddle on if some servers are dead?
  */
  for (x= 0; x < ptr->number_of_hosts; x++)
  {
    if (ptr->hosts[x].cursor_active == 1)
    {
      /* We need to doo something about non-connnected hosts in the future */
      if ((memcached_io_write(ptr, x, "\r\n", 2, 1)) == -1)
      {
        memcached_quit_server(ptr, x);
        rc= MEMCACHED_SOME_ERRORS;
      }
    }
  }

  LIBMEMCACHED_MEMCACHED_MGET_END();
  return rc;
}

char *memcached_fetch(memcached_st *ptr, char *key, size_t *key_length, 
                    size_t *value_length, 
                    uint16_t *flags,
                    memcached_return *error)
{
  memcached_string_st *result_buffer;
  result_buffer= &ptr->result_buffer;

  while (ptr->cursor_server < ptr->number_of_hosts)
  {
    if (!ptr->hosts[ptr->cursor_server].cursor_active)
    {
      ptr->cursor_server++;
      continue;
    }

    *error = memcached_value_fetch(ptr, key, key_length, result_buffer, 
                                   flags, NULL, 1, ptr->cursor_server);
    *value_length= memcached_string_length(result_buffer);
    
    if (*error == MEMCACHED_NOTFOUND)
    {
      ptr->hosts[ptr->cursor_server].cursor_active = 0;
      ptr->cursor_server++;
    }
    else if (*error == MEMCACHED_END && *value_length == 0)
    {
      return NULL;
    }
    else if (*error == MEMCACHED_END)
    {
      WATCHPOINT_ASSERT(0); /* If this happens we have somehow messed up the fetch */
      *value_length= 0;
      return NULL;
    }
    else if (*error != MEMCACHED_SUCCESS)
    {
      return NULL;
    }
    else
    {
      return  memcached_string_c_copy(result_buffer);
    }

  }

  *value_length= 0;
  return NULL;
}

memcached_result_st *memcached_fetch_result(memcached_st *ptr, 
                                            memcached_result_st *result,
                                            memcached_return *error)
{
  if (result == NULL)
    result= memcached_result_create(ptr, NULL);

  while (ptr->cursor_server < ptr->number_of_hosts)
  {
    if (!ptr->hosts[ptr->cursor_server].cursor_active)
    {
      ptr->cursor_server++;
      continue;
    }

    result->cas= 0; /* We do this so we do not send in any junk */
    *error= memcached_value_fetch(ptr, result->key, &result->key_length, 
                                       &result->value, 
                                       &result->flags,
                                       &result->cas,
                                       1, ptr->cursor_server);
    
    if (*error == MEMCACHED_NOTFOUND)
    {
      ptr->hosts[ptr->cursor_server].cursor_active = 0;
      ptr->cursor_server++;
    }
    else if (*error == MEMCACHED_END && memcached_string_length((memcached_string_st *)(&result->value)) == 0)
    {
      return NULL;
    }
    else if (*error == MEMCACHED_END)
    {
      WATCHPOINT_ASSERT(0); /* If this happens we have somehow messed up the fetch */
      return NULL;
    }
    else if (*error != MEMCACHED_SUCCESS)
    {
      return NULL;
    }
    else
    {
      return result;
    }

  }

  return NULL;
}
