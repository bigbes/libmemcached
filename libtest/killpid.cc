/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 * 
 *  uTest
 *
 *  Copyright (C) 2011 Data Differential, http://datadifferential.com/
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *      * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above
 *  copyright notice, this list of conditions and the following disclaimer
 *  in the documentation and/or other materials provided with the
 *  distribution.
 *
 *      * The names of its contributors may not be used to endorse or
 *  promote products derived from this software without specific prior
 *  written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <libtest/common.h>

#include <cstdlib>
#include <cstring>
#include <iostream>

#include <libtest/killpid.h>
#include <libtest/stream.h>

using namespace libtest;

bool kill_pid(pid_t pid_arg)
{
  if (pid_arg <= 1)
    return false;

  if ((::kill(pid_arg, SIGTERM) == -1))
  {
    switch (errno)
    {
    case EPERM:
      perror(__func__);
      Error << __func__ << " -> Does someone else have a process running locally for " << int(pid_arg) << "?";
      return false;

    case ESRCH:
      perror(__func__);
      Error << "Process " << int(pid_arg) << " not found.";
      return false;

    default:
    case EINVAL:
      perror(__func__);
      return false;
    }
  }

  int status= 0;
  pid_t pid= waitpid(pid_arg, &status, 0);
  if (pid == -1)
  {
    switch (errno)
    {
    case ECHILD:
      return true;
    }

    Error << "Error occured while waitpid(" << strerror(errno) << ") on pid " << int(pid_arg);

    return false;
  }

  if (WIFEXITED(status))
    return true;

  if (WCOREDUMP(status))
    return true;

  return false;
}


void kill_file(const std::string &filename)
{
  FILE *fp;

  if (filename.empty())
    return;

  if ((fp= fopen(filename.c_str(), "r")))
  {
    char pid_buffer[1024];

    char *ptr= fgets(pid_buffer, sizeof(pid_buffer), fp);
    fclose(fp);

    if (ptr)
    {
      pid_t pid= (pid_t)atoi(pid_buffer);
      if (pid != 0)
      {
        kill_pid(pid);
        unlink(filename.c_str()); // If this happens we may be dealing with a dead server that left its pid file.
      }
    }
  }
}
