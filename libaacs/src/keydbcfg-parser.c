
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "keydbcfg-parser.y"

/*
 * This file is part of libaacs
 * Copyright (C) 2010  gates
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders of libaacs
 * gives permission to link the code of its release of libaacs with the
 * OpenSSL project's "OpenSSL" library (or with modified versions of it
 * that use the same license as the "OpenSSL" library), and distribute
 * the linked library.  You must obey the GNU Lesser General Public
 * License in all respects for all of the code used other than "OpenSSL".
 * If you modify this file, you may extend this exception to your
 * version of the file, but you are not obligated to do so.  If you do
 * not wish to do so, delete this exception statement from your version.
 */

#include "keydbcfg.h"
#include "util/macro.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Disable some warnings triggered by generated parser */
#if defined __GNUC__
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
#pragma GCC diagnostic ignored "-Wundef"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#define DIGIT_KEY_PAIR_LIST_FREE(X) do   \
{                                        \
  while (X)                              \
  {                                      \
    digit_key_pair_list *next = X->next; \
    X_FREE(X->key_pair.key);             \
    X_FREE(X);                           \
    X = next;                            \
  }                                      \
} while (0);

/* enum used in certain functions to add proper entry */
enum
{
  ENTRY_TYPE_DISCID,
  ENTRY_TYPE_TITLE,
  ENTRY_TYPE_DATE,
  ENTRY_TYPE_MEK,
  ENTRY_TYPE_VID,
  ENTRY_TYPE_BN,
  ENTRY_TYPE_VUK,
  ENTRY_TYPE_PAK,
  ENTRY_TYPE_TK,
  ENTRY_TYPE_UK
};

static pk_list *new_pk_list();
static pk_list *add_pk_list_entry(pk_list *list, const char *key);
static cert_list *new_cert_list();
static cert_list *add_cert_list(cert_list *list, const char *host_priv_key,
                         const char *host_cert, const char *host_nonce,
                         const char *host_key_point);
static config_entry_list *new_config_entry_list();
static int add_entry(config_entry_list *list, int type, const char *entry);
static digit_key_pair_list *new_digit_key_pair_list();
static digit_key_pair_list *add_digit_key_pair_entry(digit_key_pair_list *list,
                              int type, unsigned int digit, const char *key);
static int add_date_entry(config_entry_list *list, unsigned int year,
                          unsigned int month, unsigned int day);
void yyerror (void *scanner, pk_list *pklist, cert_list *clist,
              config_entry_list *celist, digit_key_pair_list *dkplist,
              const char *msg);
extern int yyget_lineno  (void *scanner);

/* uncomment the line below for debugging */
// int yydebug = 1;


/* Line 189 of yacc.c  */
#line 167 "keydbcfg-parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     HEXSTRING = 258,
     DISC_TITLE = 259,
     DIGIT = 260,
     KEYWORD_BEGIN = 261,
     KEYWORD_END = 262,
     KEYWORD_PK_LIST = 263,
     KEYWORD_HOST_CERT_LIST = 264,
     KEYWORD_HOST_CERT_ENTRY = 265,
     PUNCT_EQUALS_SIGN = 266,
     PUNCT_VERTICAL_BAR = 267,
     PUNCT_HYPHEN = 268,
     ENTRY_ID_DATE = 269,
     ENTRY_ID_MEK = 270,
     ENTRY_ID_VID = 271,
     ENTRY_ID_BN = 272,
     ENTRY_ID_VUK = 273,
     ENTRY_ID_PAK = 274,
     ENTRY_ID_TK = 275,
     ENTRY_ID_UK = 276,
     NEWLINE = 277,
     BAD_ENTRY = 278
   };
#endif
/* Tokens.  */
#define HEXSTRING 258
#define DISC_TITLE 259
#define DIGIT 260
#define KEYWORD_BEGIN 261
#define KEYWORD_END 262
#define KEYWORD_PK_LIST 263
#define KEYWORD_HOST_CERT_LIST 264
#define KEYWORD_HOST_CERT_ENTRY 265
#define PUNCT_EQUALS_SIGN 266
#define PUNCT_VERTICAL_BAR 267
#define PUNCT_HYPHEN 268
#define ENTRY_ID_DATE 269
#define ENTRY_ID_MEK 270
#define ENTRY_ID_VID 271
#define ENTRY_ID_BN 272
#define ENTRY_ID_VUK 273
#define ENTRY_ID_PAK 274
#define ENTRY_ID_TK 275
#define ENTRY_ID_UK 276
#define NEWLINE 277
#define BAD_ENTRY 278




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 109 "keydbcfg-parser.y"

  char *string;
  unsigned int digit;



/* Line 214 of yacc.c  */
#line 256 "keydbcfg-parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 268 "keydbcfg-parser.c"

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
# if YYENABLE_NLS
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   278

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    11,    16,    20,    25,    29,    33,
      36,    39,    41,    45,    50,    54,    59,    63,    66,    68,
      72,    77,    81,    86,    90,    95,    99,   102,   106,   109,
     113,   116,   120,   123,   126,   128,   131,   135,   138,   142,
     145,   149,   152,   155,   157,   161,   163,   165,   168,   170,
     172,   174,   176,   178,   180,   182,   184,   186,   193,   196,
     199,   202,   206,   208,   212,   215,   218,   222,   224,   228,
     231,   235,   237,   241,   244,   248,   250
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      25,     0,    -1,    26,    31,    43,    -1,    27,    29,    28,
      -1,    46,     6,     8,    22,    -1,     6,     8,    22,    -1,
      46,     7,     8,    22,    -1,     7,     8,    22,    -1,    29,
      30,    22,    -1,    30,    22,    -1,    46,     3,    -1,     3,
      -1,    32,    34,    33,    -1,    46,     6,     9,    22,    -1,
       6,     9,    22,    -1,    46,     7,     9,    22,    -1,     7,
       9,    22,    -1,    34,    35,    -1,    35,    -1,    36,    38,
      37,    -1,    46,     6,    10,    22,    -1,     6,    10,    22,
      -1,    46,     7,    10,    22,    -1,     7,    10,    22,    -1,
      39,    40,    41,    42,    -1,    46,     3,    22,    -1,     3,
      22,    -1,    46,     3,    22,    -1,     3,    22,    -1,    46,
       3,    22,    -1,     3,    22,    -1,    46,     3,    22,    -1,
       3,    22,    -1,    44,    46,    -1,    44,    -1,    44,     1,
      -1,    44,    45,    22,    -1,    45,    22,    -1,    44,     1,
      22,    -1,     1,    22,    -1,    46,    47,    50,    -1,    47,
      50,    -1,    46,    22,    -1,    22,    -1,    48,    11,    49,
      -1,     3,    -1,     4,    -1,    50,    51,    -1,    51,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    58,    -1,
      59,    -1,    62,    -1,    65,    -1,    14,     5,    13,     5,
      13,     5,    -1,    15,     3,    -1,    16,     3,    -1,    17,
      56,    -1,    56,    12,    57,    -1,    57,    -1,     5,    13,
       3,    -1,    18,     3,    -1,    19,    60,    -1,    60,    12,
      61,    -1,    61,    -1,     5,    13,     3,    -1,    20,    63,
      -1,    63,    12,    64,    -1,    64,    -1,     5,    13,     3,
      -1,    21,    66,    -1,    66,    12,    67,    -1,    67,    -1,
       5,    13,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   144,   144,   148,   152,   153,   157,   158,   162,   163,
     167,   171,   178,   182,   183,   187,   188,   192,   193,   197,
     201,   202,   206,   207,   211,   218,   220,   225,   227,   232,
     234,   239,   241,   246,   247,   248,   256,   261,   266,   271,
     279,   280,   284,   285,   289,   297,   301,   305,   306,   310,
     311,   312,   313,   314,   315,   316,   317,   321,   328,   335,
     342,   349,   350,   354,   366,   373,   380,   381,   385,   397,
     404,   405,   409,   421,   428,   429,   433
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HEXSTRING", "DISC_TITLE", "DIGIT",
  "KEYWORD_BEGIN", "KEYWORD_END", "KEYWORD_PK_LIST",
  "KEYWORD_HOST_CERT_LIST", "KEYWORD_HOST_CERT_ENTRY", "PUNCT_EQUALS_SIGN",
  "PUNCT_VERTICAL_BAR", "PUNCT_HYPHEN", "ENTRY_ID_DATE", "ENTRY_ID_MEK",
  "ENTRY_ID_VID", "ENTRY_ID_BN", "ENTRY_ID_VUK", "ENTRY_ID_PAK",
  "ENTRY_ID_TK", "ENTRY_ID_UK", "NEWLINE", "BAD_ENTRY", "$accept",
  "config_file", "pk_block", "pk_list_start", "pk_list_end", "pk_list",
  "pk_entry", "host_cert_list_block", "host_cert_list_start",
  "host_cert_list_end", "host_cert_entries", "host_cert_entry_block",
  "host_cert_entry_start", "host_cert_entry_end", "host_cert_entry",
  "host_priv_key", "host_cert", "host_nonce", "host_key_point",
  "config_entries", "config_entry_list", "config_entry", "newline_list",
  "disc_info", "discid", "disc_title", "entry_list", "entry", "date_entry",
  "mek_entry", "vid_entry", "bn_entry", "bn_data_list", "bn_data",
  "vuk_entry", "pak_entry", "pak_data_list", "pak_data", "tk_entry",
  "tk_data_list", "tk_data", "uk_entry", "uk_data_list", "uk_data", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    24,    25,    26,    27,    27,    28,    28,    29,    29,
      30,    30,    31,    32,    32,    33,    33,    34,    34,    35,
      36,    36,    37,    37,    38,    39,    39,    40,    40,    41,
      41,    42,    42,    43,    43,    43,    44,    44,    44,    44,
      45,    45,    46,    46,    47,    48,    49,    50,    50,    51,
      51,    51,    51,    51,    51,    51,    51,    52,    53,    54,
      55,    56,    56,    57,    58,    59,    60,    60,    61,    62,
      63,    63,    64,    65,    66,    66,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     4,     3,     4,     3,     3,     2,
       2,     1,     3,     4,     3,     4,     3,     2,     1,     3,
       4,     3,     4,     3,     4,     3,     2,     3,     2,     3,
       2,     3,     2,     2,     1,     2,     3,     2,     3,     2,
       3,     2,     2,     1,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     2,     2,
       2,     3,     1,     3,     2,     2,     3,     1,     3,     2,
       3,     1,     3,     2,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    43,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,    11,     0,     0,     0,     0,    42,     5,
       0,     0,    45,     2,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,     0,     3,     0,     0,     9,
      10,     0,    14,    39,    35,     0,    33,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,     0,     0,
      12,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     4,    38,    36,    40,     0,    58,    59,     0,
      60,    62,    64,     0,    65,    67,     0,    69,    71,     0,
      73,    75,    47,    46,    44,    21,     0,     0,    26,     0,
      19,     0,     0,     0,     0,     0,     0,    13,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,    28,     0,     0,     0,     0,    25,    20,
       6,     0,    63,    61,    68,    66,    72,    70,    76,    74,
      15,    23,     0,    30,     0,    24,     0,     0,    27,     0,
      22,    32,     0,    29,    57,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    36,    14,    15,    10,    11,    70,
      30,    31,    32,   110,    74,    75,   113,   135,   155,    23,
      24,    25,     6,    27,    28,   104,    57,    58,    59,    60,
      61,    62,    90,    91,    63,    64,    94,    95,    65,    97,
      98,    66,   100,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -56
static const yytype_int16 yypact[] =
{
      37,    34,   -56,    54,    39,    12,    43,    42,   -56,    57,
       2,    47,    50,   -56,     1,    46,    13,    66,   -56,   -56,
      65,    67,   -56,   -56,    11,    68,    15,    64,    75,    78,
      41,   -56,    16,    51,    82,    84,   -56,    71,    10,   -56,
     -56,    72,   -56,   -56,    73,    74,    15,   -56,    64,    92,
      95,    96,    97,    98,    99,   100,   101,    64,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   103,    81,    91,
     -56,   -56,    45,    86,    53,    18,    19,   102,    88,    89,
     -56,   105,   -56,   -56,   -56,    64,    63,   -56,   -56,   104,
     106,   -56,   -56,   107,   109,   -56,   110,   112,   -56,   113,
     115,   -56,   -56,   -56,   -56,   -56,    93,   116,   -56,   118,
     -56,    55,    94,    22,    24,   108,   111,   -56,   -56,   114,
     117,   126,    97,   129,    99,   131,   100,   132,   101,   -56,
     119,   120,   127,   -56,   121,    28,    33,   122,   -56,   -56,
     -56,   125,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   123,   -56,   124,   -56,    36,   128,   -56,   134,
     -56,   -56,   130,   -56,   -56,   -56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -56,   -56,   -56,   -56,   -56,   -56,   133,   -56,   -56,   -56,
     -56,   135,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,    90,    -4,   -17,   -56,   -56,   136,   -55,   -56,   -56,
     -56,   -56,   -56,    -3,   -56,   -56,   -56,    25,   -56,   -56,
      14,   -56,   -56,    20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -35
static const yytype_int16 yytable[] =
{
      12,    16,   102,    21,    13,    22,    26,    33,    35,    48,
      38,   -34,    44,    40,    22,    13,    40,    81,    22,    73,
      46,   112,   115,     2,     2,   134,    72,   137,    76,    48,
     102,   154,    18,     2,     2,    18,   157,    18,     2,   162,
       2,    18,     7,     1,     2,     9,    18,    29,    69,    17,
       2,    77,   107,    29,     8,    18,    34,    77,    18,     2,
     109,     2,   132,     2,    19,    18,    20,    18,    39,     2,
     111,   114,    18,    18,    41,     2,   120,    18,    49,    50,
      51,    52,    53,    54,    55,    56,    67,    42,    68,    43,
      47,    78,    79,    80,    82,    83,    84,    86,    87,    88,
     106,    92,    89,   105,    93,    96,    99,   103,   108,   136,
     117,   118,   116,   119,    45,   129,   133,   121,   122,   143,
     123,   124,   141,   125,   126,   130,   127,   128,   131,   142,
     138,   156,   144,   139,   146,   148,   140,   152,   159,   164,
     147,   150,   151,   153,   158,   160,   161,    37,   149,   145,
     163,     0,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85
};

static const yytype_int16 yycheck[] =
{
       4,     5,    57,     1,     3,     3,    10,    11,     7,    26,
      14,     0,     1,     3,     3,     3,     3,     7,     3,     3,
      24,     3,     3,    22,    22,     3,    30,     3,    32,    46,
      85,     3,    22,    22,    22,    22,     3,    22,    22,     3,
      22,    22,     8,     6,    22,     6,    22,     6,     7,     6,
      22,     6,     7,     6,     0,    22,     6,     6,    22,    22,
       7,    22,     7,    22,    22,    22,     9,    22,    22,    22,
      74,    75,    22,    22,     8,    22,    13,    22,    14,    15,
      16,    17,    18,    19,    20,    21,    11,    22,    10,    22,
      22,     9,     8,    22,    22,    22,    22,     5,     3,     3,
       9,     3,     5,    22,     5,     5,     5,     4,    22,   113,
      22,    22,    10,     8,    24,    22,    22,    13,    12,   122,
      13,    12,     5,    13,    12,     9,    13,    12,    10,     3,
      22,   135,     3,    22,     3,     3,    22,    10,    13,     5,
     126,    22,    22,    22,    22,    22,    22,    14,   128,   124,
      22,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    22,    25,    26,    27,    46,     8,     0,     6,
      31,    32,    46,     3,    29,    30,    46,     6,    22,    22,
       9,     1,     3,    43,    44,    45,    46,    47,    48,     6,
      34,    35,    36,    46,     6,     7,    28,    30,    46,    22,
       3,     8,    22,    22,     1,    45,    46,    22,    47,    14,
      15,    16,    17,    18,    19,    20,    21,    50,    51,    52,
      53,    54,    55,    58,    59,    62,    65,    11,    10,     7,
      33,    35,    46,     3,    38,    39,    46,     6,     9,     8,
      22,     7,    22,    22,    22,    50,     5,     3,     3,     5,
      56,    57,     3,     5,    60,    61,     5,    63,    64,     5,
      66,    67,    51,     4,    49,    22,     9,     7,    22,     7,
      37,    46,     3,    40,    46,     3,    10,    22,    22,     8,
      13,    13,    12,    13,    12,    13,    12,    13,    12,    22,
       9,    10,     7,    22,     3,    41,    46,     3,    22,    22,
      22,     5,     3,    57,     3,    61,     3,    64,     3,    67,
      22,    22,    10,    22,     3,    42,    46,     3,    22,    13,
      22,    22,     3,    22,     5,    22
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

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
      yyerror (scanner, pklist, clist, celist, dkplist, YY_("syntax error: cannot back up")); \
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
# if YYLTYPE_IS_TRIVIAL
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
		  Type, Value, scanner, pklist, clist, celist, dkplist); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner, pk_list *pklist, cert_list *clist, config_entry_list *celist, digit_key_pair_list *dkplist)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner, pklist, clist, celist, dkplist)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *scanner;
    pk_list *pklist;
    cert_list *clist;
    config_entry_list *celist;
    digit_key_pair_list *dkplist;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (scanner);
  YYUSE (pklist);
  YYUSE (clist);
  YYUSE (celist);
  YYUSE (dkplist);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner, pk_list *pklist, cert_list *clist, config_entry_list *celist, digit_key_pair_list *dkplist)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, scanner, pklist, clist, celist, dkplist)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *scanner;
    pk_list *pklist;
    cert_list *clist;
    config_entry_list *celist;
    digit_key_pair_list *dkplist;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner, pklist, clist, celist, dkplist);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, void *scanner, pk_list *pklist, cert_list *clist, config_entry_list *celist, digit_key_pair_list *dkplist)
#else
static void
yy_reduce_print (yyvsp, yyrule, scanner, pklist, clist, celist, dkplist)
    YYSTYPE *yyvsp;
    int yyrule;
    void *scanner;
    pk_list *pklist;
    cert_list *clist;
    config_entry_list *celist;
    digit_key_pair_list *dkplist;
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
		       		       , scanner, pklist, clist, celist, dkplist);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, scanner, pklist, clist, celist, dkplist); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *scanner, pk_list *pklist, cert_list *clist, config_entry_list *celist, digit_key_pair_list *dkplist)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, scanner, pklist, clist, celist, dkplist)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    void *scanner;
    pk_list *pklist;
    cert_list *clist;
    config_entry_list *celist;
    digit_key_pair_list *dkplist;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (scanner);
  YYUSE (pklist);
  YYUSE (clist);
  YYUSE (celist);
  YYUSE (dkplist);

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
int yyparse (void *scanner, pk_list *pklist, cert_list *clist, config_entry_list *celist, digit_key_pair_list *dkplist);
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
yyparse (void *scanner, pk_list *pklist, cert_list *clist, config_entry_list *celist, digit_key_pair_list *dkplist)
#else
int
yyparse (scanner, pklist, clist, celist, dkplist)
    void *scanner;
    pk_list *pklist;
    cert_list *clist;
    config_entry_list *celist;
    digit_key_pair_list *dkplist;
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
        case 10:

/* Line 1455 of yacc.c  */
#line 168 "keydbcfg-parser.y"
    {
      pklist = add_pk_list_entry(pklist, (yyvsp[(2) - (2)].string));
    }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 172 "keydbcfg-parser.y"
    {
      pklist = add_pk_list_entry(pklist, (yyvsp[(1) - (1)].string));
    }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 212 "keydbcfg-parser.y"
    {
      clist = add_cert_list(clist, (yyvsp[(1) - (4)].string), (yyvsp[(2) - (4)].string), (yyvsp[(3) - (4)].string), (yyvsp[(4) - (4)].string));
    }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 219 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 221 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 226 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 228 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 233 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 235 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 240 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 242 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 249 "keydbcfg-parser.y"
    {
      if (yychar == YYEOF)
        fprintf(stderr, "warning: last entry ended without newline\n");
    }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 257 "keydbcfg-parser.y"
    {
      celist->next = new_config_entry_list();
      celist = celist->next;
    }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 262 "keydbcfg-parser.y"
    {
      celist->next = new_config_entry_list();
      celist = celist->next;
    }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 267 "keydbcfg-parser.y"
    {
      fprintf(stderr, "bad entry at line %d\n", yyget_lineno(scanner) - 1);
      yyerrok;
    }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 272 "keydbcfg-parser.y"
    {
      fprintf(stderr, "bad entry at line %d\n", yyget_lineno(scanner) - 1);
      yyerrok;
    }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 290 "keydbcfg-parser.y"
    {
      add_entry(celist, ENTRY_TYPE_DISCID, (yyvsp[(1) - (3)].string));
      add_entry(celist, ENTRY_TYPE_TITLE, (yyvsp[(3) - (3)].string));
    }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 322 "keydbcfg-parser.y"
    {
      add_date_entry(celist, (yyvsp[(2) - (6)].digit), (yyvsp[(4) - (6)].digit), (yyvsp[(6) - (6)].digit));
    }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 329 "keydbcfg-parser.y"
    {
      add_entry(celist, ENTRY_TYPE_MEK, (yyvsp[(2) - (2)].string));
    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 336 "keydbcfg-parser.y"
    {
      add_entry(celist, ENTRY_TYPE_VID, (yyvsp[(2) - (2)].string));
    }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 343 "keydbcfg-parser.y"
    {
      dkplist = NULL;
    }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 355 "keydbcfg-parser.y"
    {
      if (!dkplist)
      {
        dkplist = (digit_key_pair_list *)malloc(sizeof(*dkplist));
        celist->entry.bn = dkplist;
      }
      dkplist = add_digit_key_pair_entry(dkplist, ENTRY_TYPE_BN, (yyvsp[(1) - (3)].digit), (yyvsp[(3) - (3)].string));
    }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 367 "keydbcfg-parser.y"
    {
      add_entry(celist, ENTRY_TYPE_VUK, (yyvsp[(2) - (2)].string));
    }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 374 "keydbcfg-parser.y"
    {
      dkplist = NULL;
    }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 386 "keydbcfg-parser.y"
    {
      if (!dkplist)
      {
        dkplist = (digit_key_pair_list *)malloc(sizeof(*dkplist));
        celist->entry.pak = dkplist;
      }
      dkplist = add_digit_key_pair_entry(dkplist, ENTRY_TYPE_PAK, (yyvsp[(1) - (3)].digit), (yyvsp[(3) - (3)].string));
    }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 398 "keydbcfg-parser.y"
    {
      dkplist = NULL;
    }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 410 "keydbcfg-parser.y"
    {
      if (!dkplist)
      {
        dkplist = (digit_key_pair_list *)malloc(sizeof(*dkplist));
        celist->entry.tk = dkplist;
      }
      dkplist = add_digit_key_pair_entry(dkplist, ENTRY_TYPE_TK, (yyvsp[(1) - (3)].digit), (yyvsp[(3) - (3)].string));
    }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 422 "keydbcfg-parser.y"
    {
      dkplist = NULL;
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 434 "keydbcfg-parser.y"
    {
      if (!dkplist)
      {
        dkplist = (digit_key_pair_list *)malloc(sizeof(*dkplist));
        celist->entry.uk = dkplist;
      }
      dkplist = add_digit_key_pair_entry(dkplist, ENTRY_TYPE_UK, (yyvsp[(1) - (3)].digit), (yyvsp[(3) - (3)].string));
    }
    break;



/* Line 1455 of yacc.c  */
#line 1912 "keydbcfg-parser.c"
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
      yyerror (scanner, pklist, clist, celist, dkplist, YY_("syntax error"));
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
	    yyerror (scanner, pklist, clist, celist, dkplist, yymsg);
	  }
	else
	  {
	    yyerror (scanner, pklist, clist, celist, dkplist, YY_("syntax error"));
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
		      yytoken, &yylval, scanner, pklist, clist, celist, dkplist);
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
		  yystos[yystate], yyvsp, scanner, pklist, clist, celist, dkplist);
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
  yyerror (scanner, pklist, clist, celist, dkplist, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, scanner, pklist, clist, celist, dkplist);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, scanner, pklist, clist, celist, dkplist);
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



/* Line 1675 of yacc.c  */
#line 443 "keydbcfg-parser.y"

/* Function to parse a config file */
int keydbcfg_parse_config(config_file *cfgfile, const char *path)
{
  FILE * fp = fopen(path, "r");
  if (!fp)
    return 0;

  pk_list *head_pklist = new_pk_list();
  cert_list *head_clist = new_cert_list();
  config_entry_list *head_celist = new_config_entry_list();
  digit_key_pair_list *dkplist = NULL;

  void *scanner;
  yylex_init(&scanner);
  yyset_in(fp, scanner);
  int retval = yyparse(scanner, head_pklist, head_clist, head_celist, dkplist);
  yylex_destroy(scanner);

  cfgfile->pkl = head_pklist;
  cfgfile->host_cert_list = head_clist;
  cfgfile->list = head_celist;

  if (retval)
    return 0;

  return 1;
}

/* Function that returns pointer to new config file object */
config_file *keydbcfg_new_config_file()
{
  config_file *cfgfile = (config_file *)malloc(sizeof(*cfgfile));
  cfgfile->pkl = NULL;
  cfgfile->list = NULL;
  return cfgfile;
}

/* Function that closes and frees a config file object */
int keydbcfg_config_file_close(config_file *cfgfile)
{
  /* free pk list */
  while (cfgfile->pkl)
  {
    pk_list *next = cfgfile->pkl->next;
    X_FREE(cfgfile->pkl->key);
    X_FREE(cfgfile->pkl);
    cfgfile->pkl = next;
  }

  /* free host cert list */
  while (cfgfile->host_cert_list)
  {
    cert_list *next = cfgfile->host_cert_list->next;
    X_FREE(cfgfile->host_cert_list->host_priv_key);
    X_FREE(cfgfile->host_cert_list->host_cert);
    X_FREE(cfgfile->host_cert_list->host_nonce);
    X_FREE(cfgfile->host_cert_list->host_key_point);
    X_FREE(cfgfile->host_cert_list);
    cfgfile->host_cert_list = next;
  }

  /* free title entries */
  while (cfgfile->list)
  {
    config_entry_list *next = cfgfile->list->next;
    X_FREE(cfgfile->list->entry.discid);
    X_FREE(cfgfile->list->entry.title);
    X_FREE(cfgfile->list->entry.mek);
    X_FREE(cfgfile->list->entry.vid);
    DIGIT_KEY_PAIR_LIST_FREE(cfgfile->list->entry.bn);
    X_FREE(cfgfile->list->entry.vuk);
    DIGIT_KEY_PAIR_LIST_FREE(cfgfile->list->entry.pak);
    DIGIT_KEY_PAIR_LIST_FREE(cfgfile->list->entry.tk);
    DIGIT_KEY_PAIR_LIST_FREE(cfgfile->list->entry.uk);
    X_FREE(cfgfile->list);
    cfgfile->list = next;
  }

  /* free the config file object */
  X_FREE(cfgfile);

  return 1;
}

/* Function to return new pk_list object */
static pk_list *new_pk_list()
{
  pk_list *pkl = (pk_list *)malloc(sizeof(*pkl));
  pkl->key = NULL;
  pkl->next = NULL;
  return pkl;
}

/* Function to add pk to config file */
static pk_list *add_pk_list_entry(pk_list *list, const char *key)
{
  if (!list)
  {
    printf("Error: No pk list passed as parameter.\n");
    return NULL;
  }

  list->key = (char*)malloc(strlen(key) + 1);
  strcpy(list->key, key);

  list->next = new_pk_list();

  return list->next;
}

/* Function to create new certificate list */
static cert_list *new_cert_list()
{
  cert_list *list = (cert_list *)malloc(sizeof(*list));
  if (!list)
  {
    printf("Error allocating memory for new certificate list!\n");
    return NULL;
  }

  list->host_priv_key = NULL;
  list->host_cert = NULL;
  list->host_nonce = NULL;
  list->host_key_point = NULL;
  list->next = NULL;

  return list;
}

/* Function to add certificate list entry into config file object */
static cert_list *add_cert_list(cert_list *list, const char *host_priv_key,
                         const char *host_cert, const char *host_nonce,
                         const char *host_key_point)
{
  if (!list)
  {
    printf("Error: no certificate list object passed as parameter.\n");
    return NULL;
  }

  list->host_priv_key = (char*)malloc(strlen(host_priv_key) + 1);
  strcpy(list->host_priv_key, host_priv_key);
  list->host_cert = (char*)malloc(strlen(host_cert) + 1);
  strcpy(list->host_cert, host_cert);
  list->host_nonce = (char*)malloc(strlen(host_nonce) + 1);
  strcpy(list->host_nonce, host_nonce);
  list->host_key_point = (char*)malloc(strlen(host_key_point) + 1);
  strcpy(list->host_key_point, host_key_point);

  list->next = new_cert_list();

  return list->next;
}

/* Function that returns pointer to new config entry list */
config_entry_list *new_config_entry_list()
{
  config_entry_list *list = (config_entry_list *)malloc(sizeof(*list));
  if (!list)
  {
    printf("Error allocating memory for new config entry list!\n");
    return NULL;
  }

  list->entry.discid = NULL;
  list->entry.title = NULL;
  list->entry.date.year = 0;
  list->entry.date.month = 0;
  list->entry.date.day = 0;
  list->entry.mek = NULL;
  list->entry.vid = NULL;
  list->entry.bn = NULL;
  list->entry.vuk = NULL;
  list->entry.pak = NULL;
  list->entry.tk = NULL;
  list->entry.uk = NULL;
  list->next = NULL;

  return list;
}

/* Function to add standard string entries to a config entry */
static int add_entry(config_entry_list *list, int type, const char *entry)
{
  if (!list)
  {
    printf("Error: No config list passed as parameter.\n");
    return 0;
  }

  switch (type)
  {
    case ENTRY_TYPE_DISCID:
      list->entry.discid = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.discid, entry);
      break;

    case ENTRY_TYPE_TITLE:
      list->entry.title = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.title, entry);
      break;

    case ENTRY_TYPE_MEK:
      list->entry.mek = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.mek, entry);
      break;

    case ENTRY_TYPE_VID:
      list->entry.vid = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.vid, entry);
      break;

    case ENTRY_TYPE_VUK:
      list->entry.vuk = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.vuk, entry);
      break;

    default:
      printf("WARNING: entry type passed in unknown\n");
      return 0;
  }

  return 1;
}

/* Function that returns pointer to new digit key pair list */
static digit_key_pair_list *new_digit_key_pair_list()
{
  digit_key_pair_list *list = (digit_key_pair_list *)malloc(sizeof(*list));
  if (!list)
  {
    printf("Error allocating memory for new digit key pair entry list!\n");
    return NULL;
  }

  list->key_pair.digit = 0;
  list->key_pair.key = NULL;
  list->next = NULL;

  return list;
}

/* Function used to add a digit/key pair to a list of digit key pair entries */
static digit_key_pair_list *add_digit_key_pair_entry(digit_key_pair_list *list,
                              int type, unsigned int digit, const char *key)
{
  if (!list)
  {
    printf("Error: No digit key pair list passed as parameter.\n");
    return NULL;
  }

  list->key_pair.digit = digit;
  list->key_pair.key = (char*)malloc(strlen(key) + 1);
  strcpy(list->key_pair.key, key);

  list->next = new_digit_key_pair_list();

  return list->next;
}

/* Function to add a date entry */
static int add_date_entry(config_entry_list *list, unsigned int year,
                          unsigned int month, unsigned int day)
{
  if (!list)
  {
    printf("Error: No config list passed as parameter.\n");
    return 0;
  }

  list->entry.date.year = year;
  list->entry.date.month = month;
  list->entry.date.day = day;

  return 1;
}

/* Our definition of yyerror */
void yyerror (void *scanner, pk_list *pklist, cert_list *clist,
              config_entry_list *celist, digit_key_pair_list *dkplist,
              const char *msg)
{
  fprintf(stderr, "%s: line %d\n", msg, yyget_lineno(scanner));
}

