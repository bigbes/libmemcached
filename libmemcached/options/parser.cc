/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         config_parse
#define yylex           config_lex
#define yyerror         config_error
#define yylval          config_lval
#define yychar          config_char
#define yydebug         config_debug
#define yynerrs         config_nerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 36 "libmemcached/options/parser.yy"


#include <config.h>

#include <stdint.h>

#include <libmemcached/common.h>
#include <libmemcached/options/context.h>
#include <libmemcached/options/string.h>
#include <libmemcached/options/symbol.h>
#include <libmemcached/options/scanner.h>

#pragma GCC diagnostic ignored "-Wold-style-cast"

int conf_lex(YYSTYPE* lvalp, void* scanner);

#define parser_abort(A, B) do { (A)->abort((B)); YYABORT; } while (0) 

inline void config_error(Context *context, yyscan_t *scanner, const char *error)
{
  if (not context->end())
    context->abort(error);
}



/* Line 189 of yacc.c  */
#line 107 "libmemcached/options/parser.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMMENT = 258,
     END = 259,
     ERROR = 260,
     RESET = 261,
     PARSER_DEBUG = 262,
     INCLUDE = 263,
     CONFIGURE_FILE = 264,
     EMPTY_LINE = 265,
     SERVER = 266,
     SERVERS = 267,
     SERVERS_OPTION = 268,
     UNKNOWN_OPTION = 269,
     UNKNOWN = 270,
     BINARY_PROTOCOL = 271,
     BUFFER_REQUESTS = 272,
     CONNECT_TIMEOUT = 273,
     DISTRIBUTION = 274,
     HASH = 275,
     HASH_WITH_NAMESPACE = 276,
     IO_BYTES_WATERMARK = 277,
     IO_KEY_PREFETCH = 278,
     IO_MSG_WATERMARK = 279,
     KETAMA_HASH = 280,
     KETAMA_WEIGHTED = 281,
     NOREPLY = 282,
     NUMBER_OF_REPLICAS = 283,
     POLL_TIMEOUT = 284,
     RANDOMIZE_REPLICA_READ = 285,
     RCV_TIMEOUT = 286,
     REMOVE_FAILED_SERVERS = 287,
     RETRY_TIMEOUT = 288,
     SND_TIMEOUT = 289,
     SOCKET_RECV_SIZE = 290,
     SOCKET_SEND_SIZE = 291,
     SORT_HOSTS = 292,
     SUPPORT_CAS = 293,
     USER_DATA = 294,
     USE_UDP = 295,
     VERIFY_KEY = 296,
     _TCP_KEEPALIVE = 297,
     _TCP_KEEPIDLE = 298,
     _TCP_NODELAY = 299,
     NAMESPACE = 300,
     POOL_MIN = 301,
     POOL_MAX = 302,
     MD5 = 303,
     CRC = 304,
     FNV1_64 = 305,
     FNV1A_64 = 306,
     FNV1_32 = 307,
     FNV1A_32 = 308,
     HSIEH = 309,
     MURMUR = 310,
     JENKINS = 311,
     CONSISTENT = 312,
     MODULA = 313,
     RANDOM = 314,
     TRUE = 315,
     FALSE = 316,
     FLOAT = 317,
     NUMBER = 318,
     PORT = 319,
     WEIGHT_START = 320,
     IPADDRESS = 321,
     HOSTNAME = 322,
     STRING = 323,
     QUOTED_STRING = 324,
     FILE_PATH = 325
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 218 "libmemcached/options/parser.cc"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   73

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  82

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    73,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    62,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    64,    65,    66,
      67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    13,    15,    17,    19,
      21,    23,    27,    32,    37,    40,    43,    46,    48,    51,
      54,    59,    62,    65,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     118,   120,   121,   123,   125,   127,   129,   131,   133,   135,
     137,   139,   141,   143,   145,   147,   149
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      75,     0,    -1,    76,    -1,    75,    73,    76,    -1,    77,
      -1,     3,    -1,    10,    -1,     4,    -1,     5,    -1,     6,
      -1,     7,    -1,     8,    73,    84,    -1,    11,    69,    81,
      82,    -1,    11,    68,    81,    82,    -1,     9,    84,    -1,
      46,    65,    -1,    47,    65,    -1,    78,    -1,    45,    84,
      -1,    19,    85,    -1,    19,    85,    62,    83,    -1,    20,
      83,    -1,    79,    65,    -1,    80,    -1,    39,    -1,    32,
      -1,    18,    -1,    24,    -1,    22,    -1,    23,    -1,    28,
      -1,    29,    -1,    31,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,    16,    -1,    17,    -1,    21,    -1,    27,
      -1,    30,    -1,    37,    -1,    38,    -1,    44,    -1,    42,
      -1,    43,    -1,    40,    -1,    41,    -1,    -1,    66,    -1,
      -1,    67,    -1,    48,    -1,    49,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    70,    -1,    71,    -1,    57,    -1,    58,    -1,    59,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   156,   156,   157,   161,   163,   165,   167,   172,   177,
     181,   185,   196,   204,   212,   216,   220,   224,   228,   235,
     242,   253,   260,   267,   274,   280,   284,   288,   292,   296,
     300,   304,   308,   312,   316,   320,   324,   331,   335,   339,
     343,   347,   351,   355,   359,   363,   367,   371,   375,   382,
     383,   388,   389,   394,   398,   402,   406,   410,   414,   418,
     422,   426,   433,   437,   445,   449,   453
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMENT", "END", "ERROR", "RESET",
  "PARSER_DEBUG", "INCLUDE", "CONFIGURE_FILE", "EMPTY_LINE", "SERVER",
  "SERVERS", "SERVERS_OPTION", "UNKNOWN_OPTION", "UNKNOWN",
  "BINARY_PROTOCOL", "BUFFER_REQUESTS", "CONNECT_TIMEOUT", "DISTRIBUTION",
  "HASH", "HASH_WITH_NAMESPACE", "IO_BYTES_WATERMARK", "IO_KEY_PREFETCH",
  "IO_MSG_WATERMARK", "KETAMA_HASH", "KETAMA_WEIGHTED", "NOREPLY",
  "NUMBER_OF_REPLICAS", "POLL_TIMEOUT", "RANDOMIZE_REPLICA_READ",
  "RCV_TIMEOUT", "REMOVE_FAILED_SERVERS", "RETRY_TIMEOUT", "SND_TIMEOUT",
  "SOCKET_RECV_SIZE", "SOCKET_SEND_SIZE", "SORT_HOSTS", "SUPPORT_CAS",
  "USER_DATA", "USE_UDP", "VERIFY_KEY", "_TCP_KEEPALIVE", "_TCP_KEEPIDLE",
  "_TCP_NODELAY", "NAMESPACE", "POOL_MIN", "POOL_MAX", "MD5", "CRC",
  "FNV1_64", "FNV1A_64", "FNV1_32", "FNV1A_32", "HSIEH", "MURMUR",
  "JENKINS", "CONSISTENT", "MODULA", "RANDOM", "TRUE", "FALSE", "','",
  "'='", "FLOAT", "NUMBER", "PORT", "WEIGHT_START", "IPADDRESS",
  "HOSTNAME", "STRING", "QUOTED_STRING", "FILE_PATH", "' '", "$accept",
  "begin", "statement", "expression", "behaviors", "behavior_number",
  "behavior_boolean", "optional_port", "optional_weight", "hash", "string",
  "distribution", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    44,    61,   317,   318,   319,   320,   321,   322,
     323,   324,   325,    32
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    85,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     2,     2,     2,     1,     2,     2,
       4,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     7,     8,     9,    10,     0,     0,     6,     0,
      37,    38,    26,     0,     0,    39,    28,    29,    27,    40,
      30,    31,    41,    32,    25,    33,    34,    35,    36,    42,
      43,    24,    47,    48,    45,    46,    44,     0,     0,     0,
       0,     2,     4,    17,     0,    23,     0,    62,    63,    14,
      49,    49,    64,    65,    66,    19,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    21,    18,    15,    16,     1,
       0,    22,    11,    50,    51,    51,     0,     3,    52,    13,
      12,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    40,    41,    42,    43,    44,    45,    74,    79,    65,
      49,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -61
static const yytype_int8 yypact[] =
{
      -2,   -61,   -61,   -61,   -61,   -61,   -60,   -23,   -61,   -45,
     -61,   -61,   -61,   -47,     8,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -23,   -16,   -15,
       0,   -61,   -61,   -61,   -14,   -61,   -23,   -61,   -61,   -61,
     -13,   -13,   -61,   -61,   -61,   -10,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
      -2,   -61,   -61,   -61,    -1,    -1,     8,   -61,   -61,   -61,
     -61,   -61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,    -5,   -61,   -61,   -61,   -61,     3,    -8,    -7,
       9,   -61
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      69,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      52,    53,    54,    46,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    50,    51,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    66,    47,    48,    67,
      68,    71,    76,    73,    75,    72,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    77,    78,    80,     0,    81,
       0,     0,     0,    70
};

static const yytype_int8 yycheck[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      57,    58,    59,    73,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    68,    69,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    37,    70,    71,    65,
      65,    65,    62,    66,    51,    46,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    70,    67,    75,    -1,    76,
      -1,    -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      75,    76,    77,    78,    79,    80,    73,    70,    71,    84,
      68,    69,    57,    58,    59,    85,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    83,    84,    65,    65,     0,
      73,    65,    84,    66,    81,    81,    62,    76,    67,    82,
      82,    83
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (context, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, context, scanner); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Context *context, yyscan_t *scanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, context, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Context *context;
    yyscan_t *scanner;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (context);
  YYUSE (scanner);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Context *context, yyscan_t *scanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, context, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Context *context;
    yyscan_t *scanner;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, context, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Context *context, yyscan_t *scanner)
#else
static void
yy_reduce_print (yyvsp, yyrule, context, scanner)
    YYSTYPE *yyvsp;
    int yyrule;
    Context *context;
    yyscan_t *scanner;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , context, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, context, scanner); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Context *context, yyscan_t *scanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, context, scanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Context *context;
    yyscan_t *scanner;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (context);
  YYUSE (scanner);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (Context *context, yyscan_t *scanner);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (Context *context, yyscan_t *scanner)
#else
int
yyparse (context, scanner)
    Context *context;
    yyscan_t *scanner;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1464 of yacc.c  */
#line 162 "libmemcached/options/parser.yy"
    { ;}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 164 "libmemcached/options/parser.yy"
    { ;}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 166 "libmemcached/options/parser.yy"
    { ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 168 "libmemcached/options/parser.yy"
    {
            context->set_end();
            YYACCEPT;
          ;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 173 "libmemcached/options/parser.yy"
    {
            context->rc= MEMCACHED_PARSE_USER_ERROR;
            parser_abort(context, NULL);
          ;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 178 "libmemcached/options/parser.yy"
    {
            memcached_reset(context->memc);
          ;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 182 "libmemcached/options/parser.yy"
    {
            yydebug= 1;
          ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 186 "libmemcached/options/parser.yy"
    {
            if ((context->rc= memcached_parse_configure_file(context->memc, (yyvsp[(3) - (3)].string).c_str, (yyvsp[(3) - (3)].string).length)) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);
            }
          ;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 197 "libmemcached/options/parser.yy"
    {
            if ((context->rc= memcached_server_add_with_weight(context->memc, (yyvsp[(2) - (4)].server).c_str, (yyvsp[(2) - (4)].server).port, (yyvsp[(2) - (4)].server).weight)) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);
            }
            context->unset_server();
          ;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 205 "libmemcached/options/parser.yy"
    {
            if ((context->rc= memcached_server_add_with_weight(context->memc, (yyvsp[(2) - (4)].server).c_str, (yyvsp[(2) - (4)].server).port, (yyvsp[(2) - (4)].server).weight)) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);
            }
            context->unset_server();
          ;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 213 "libmemcached/options/parser.yy"
    {
            memcached_set_configuration_file(context->memc, (yyvsp[(2) - (2)].string).c_str, (yyvsp[(2) - (2)].string).length);
          ;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 217 "libmemcached/options/parser.yy"
    {
            context->memc->configure.initial_pool_size= (yyvsp[(2) - (2)].number);
          ;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 221 "libmemcached/options/parser.yy"
    {
            context->memc->configure.max_pool_size= (yyvsp[(2) - (2)].number);
          ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 229 "libmemcached/options/parser.yy"
    {
            if ((context->rc= memcached_set_prefix_key(context->memc, (yyvsp[(2) - (2)].string).c_str, (yyvsp[(2) - (2)].string).length)) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);;
            }
          ;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 236 "libmemcached/options/parser.yy"
    {
            if ((context->rc= memcached_behavior_set(context->memc, MEMCACHED_BEHAVIOR_DISTRIBUTION, (yyvsp[(2) - (2)].distribution))) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);;
            }
          ;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 243 "libmemcached/options/parser.yy"
    {
            if ((context->rc= memcached_behavior_set(context->memc, MEMCACHED_BEHAVIOR_DISTRIBUTION, (yyvsp[(2) - (4)].distribution))) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);;
            }
            if ((context->rc= memcached_behavior_set_distribution_hash(context->memc, (yyvsp[(4) - (4)].hash))) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);;
            }
          ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 254 "libmemcached/options/parser.yy"
    {
            if ((context->rc= memcached_behavior_set(context->memc, MEMCACHED_BEHAVIOR_HASH, (yyvsp[(2) - (2)].hash))) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);; 
            }
          ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 261 "libmemcached/options/parser.yy"
    {
            if ((context->rc= memcached_behavior_set(context->memc, (yyvsp[(1) - (2)].behavior), (yyvsp[(2) - (2)].number))) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);;
            }
          ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 268 "libmemcached/options/parser.yy"
    {
            if ((context->rc= memcached_behavior_set(context->memc, (yyvsp[(1) - (1)].behavior), true)) != MEMCACHED_SUCCESS)
            {
              parser_abort(context, NULL);;
            }
          ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 275 "libmemcached/options/parser.yy"
    {
          ;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 281 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_REMOVE_FAILED_SERVERS;
          ;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 285 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_CONNECT_TIMEOUT;
          ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 289 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_IO_MSG_WATERMARK;
          ;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 293 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_IO_BYTES_WATERMARK;
          ;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 297 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_IO_KEY_PREFETCH;
          ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 301 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_NUMBER_OF_REPLICAS;
          ;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 305 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_POLL_TIMEOUT;
          ;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 309 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_RCV_TIMEOUT;
          ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 313 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_RETRY_TIMEOUT;
          ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 317 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_SND_TIMEOUT;
          ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 321 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_SOCKET_RECV_SIZE;
          ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 325 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_SOCKET_SEND_SIZE;
          ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 332 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_BINARY_PROTOCOL;
          ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 336 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_BUFFER_REQUESTS;
          ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 340 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_HASH_WITH_PREFIX_KEY;
          ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 344 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_NOREPLY;
          ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 348 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_RANDOMIZE_REPLICA_READ;
          ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 352 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_SORT_HOSTS;
          ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 356 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_SUPPORT_CAS;
          ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 360 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_TCP_NODELAY;
          ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 364 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_TCP_KEEPALIVE;
          ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 368 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_TCP_KEEPIDLE;
          ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 372 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_USE_UDP;
          ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 376 "libmemcached/options/parser.yy"
    {
            (yyval.behavior)= MEMCACHED_BEHAVIOR_VERIFY_KEY;
          ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 382 "libmemcached/options/parser.yy"
    { ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 384 "libmemcached/options/parser.yy"
    { ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 388 "libmemcached/options/parser.yy"
    { ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 390 "libmemcached/options/parser.yy"
    { ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 395 "libmemcached/options/parser.yy"
    {
            (yyval.hash)= MEMCACHED_HASH_MD5;
          ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 399 "libmemcached/options/parser.yy"
    {
            (yyval.hash)= MEMCACHED_HASH_CRC;
          ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 403 "libmemcached/options/parser.yy"
    {
            (yyval.hash)= MEMCACHED_HASH_FNV1_64;
          ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 407 "libmemcached/options/parser.yy"
    {
            (yyval.hash)= MEMCACHED_HASH_FNV1A_64;
          ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 411 "libmemcached/options/parser.yy"
    {
            (yyval.hash)= MEMCACHED_HASH_FNV1_32;
          ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 415 "libmemcached/options/parser.yy"
    {
            (yyval.hash)= MEMCACHED_HASH_FNV1A_32;
          ;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 419 "libmemcached/options/parser.yy"
    {
            (yyval.hash)= MEMCACHED_HASH_HSIEH;
          ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 423 "libmemcached/options/parser.yy"
    {
            (yyval.hash)= MEMCACHED_HASH_MURMUR;
          ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 427 "libmemcached/options/parser.yy"
    {
            (yyval.hash)= MEMCACHED_HASH_JENKINS;
          ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 434 "libmemcached/options/parser.yy"
    {
            (yyval.string)= (yyvsp[(1) - (1)].string);
          ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 438 "libmemcached/options/parser.yy"
    {
            (yyval.string).c_str= (yyvsp[(1) - (1)].string).c_str +1; // +1 to move use passed the initial quote
            (yyval.string).length= (yyvsp[(1) - (1)].string).length -1; // -1 removes the end quote
          ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 446 "libmemcached/options/parser.yy"
    {
            (yyval.distribution)= MEMCACHED_DISTRIBUTION_CONSISTENT;
          ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 450 "libmemcached/options/parser.yy"
    {
            (yyval.distribution)= MEMCACHED_DISTRIBUTION_MODULA;
          ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 454 "libmemcached/options/parser.yy"
    {
            (yyval.distribution)= MEMCACHED_DISTRIBUTION_RANDOM;
          ;}
    break;



/* Line 1464 of yacc.c  */
#line 2104 "libmemcached/options/parser.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (context, scanner, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (context, scanner, yymsg);
	  }
	else
	  {
	    yyerror (context, scanner, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, context, scanner);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, context, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (context, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, context, scanner);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, context, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 459 "libmemcached/options/parser.yy"
 

void Context::start() 
{
  config_parse(this, (void **)scanner);
}

