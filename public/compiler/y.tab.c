/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END_OF_FILE = 0,
     BREAK = 258,
     CASE = 259,
     CATCH = 260,
     CLASS = 261,
     CONST = 262,
     CONTINUE = 263,
     DEBUGGER = 264,
     DEFAULT = 265,
     DELETE = 266,
     DO = 267,
     ELSE = 268,
     EXPORT = 269,
     EXTENDS = 270,
     FINALLY = 271,
     FOR = 272,
     FUNCTION = 273,
     IF = 274,
     IMPORT = 275,
     IN = 276,
     INSTANCEOF = 277,
     LET = 278,
     NEW = 279,
     OF = 280,
     RETURN = 281,
     SUPER = 282,
     SWITCH = 283,
     THIS = 284,
     THROW = 285,
     TRY = 286,
     TYPEOF = 287,
     VAR = 288,
     VOID = 289,
     WHILE = 290,
     WITH = 291,
     YIELD = 292,
     ENUM = 293,
     AWAIT = 294,
     IMPLEMENTS = 295,
     INTERFACE = 296,
     PACKAGE = 297,
     PRIVATE = 298,
     PROTECTED = 299,
     PUBLIC = 300,
     LITERAL_NULL = 301,
     LITERAL_TRUE = 302,
     LITERAL_FALSE = 303,
     LITERAL_UNDEFINED = 304,
     LITERAL_NAN = 305,
     UNARY_ADD = 306,
     UNARY_SUBTRACT = 307,
     LOGICAL_NOT = 308,
     MULTIPLY = 309,
     DIVIDE = 310,
     MODULO = 311,
     ADD = 312,
     SUBTRACT = 313,
     EQUAL = 314,
     NOT_EQUAL = 315,
     EXACTLY_EQUAL = 316,
     NOT_EXACTLY_EQUAL = 317,
     LEFT_SHIFT = 318,
     SIGNED_RIGHT_SHIFT = 319,
     UNSIGNED_RIGHT_SHIFT = 320,
     LESS_THAN = 321,
     GREATER_THAN = 322,
     LESS_THAN_OR_EQUAL = 323,
     GREATER_THAN_OR_EQUAL = 324,
     QUESTION_MARK = 325,
     COLON = 326,
     LOGICAL_AND = 327,
     LOGICAL_OR = 328,
     BITWISE_AND = 329,
     BITWISE_OR = 330,
     BITWISE_XOR = 331,
     BITWISE_NOT = 332,
     ASSIGNMENT = 333,
     ADDITION_ASSIGNMENT = 334,
     SUBTRACTION_ASSIGNMENT = 335,
     MULTIPLICATION_ASSIGNMENT = 336,
     DIVISION_ASSIGNMENT = 337,
     MODULUS_ASSIGNMENT = 338,
     EXPONENTIATION_ASSIGNMENT = 339,
     LEFT_SHIFT_ASSIGNMENT = 340,
     SIGNED_RIGHT_SHIFT_ASSIGNMENT = 341,
     UNSIGNED_RIGHT_SHIFT_ASSIGNMENT = 342,
     BITWISE_AND_ASSIGNMENT = 343,
     BITWISE_XOR_ASSIGNMENT = 344,
     BITWISE_OR_ASSIGNMENT = 345,
     ARROW_FUNCTION = 346,
     RIGHT_PAREN = 347,
     LEFT_PAREN = 348,
     RIGHT_BRACE = 349,
     LEFT_BRACE = 350,
     RIGHT_BRACKET = 351,
     LEFT_BRACKET = 352,
     COMMA = 353,
     FULL_STOP = 354,
     ELLIPSIS = 355,
     SEMICOLON = 356,
     DOUBLE_QUOTE = 357,
     SINGLE_QUOTE = 358,
     VALUE_INTEGER = 359,
     VALUE_DOUBLE = 360,
     VALUE_STRING = 361,
     IDENTIFIER = 362,
     LINE_FEED = 363,
     CARRIAGE_RETURN = 364,
     LINE_SEPARATOR = 365,
     PARAGRAPH_SEPARATOR = 366
   };
#endif
/* Tokens.  */
#define END_OF_FILE 0
#define BREAK 258
#define CASE 259
#define CATCH 260
#define CLASS 261
#define CONST 262
#define CONTINUE 263
#define DEBUGGER 264
#define DEFAULT 265
#define DELETE 266
#define DO 267
#define ELSE 268
#define EXPORT 269
#define EXTENDS 270
#define FINALLY 271
#define FOR 272
#define FUNCTION 273
#define IF 274
#define IMPORT 275
#define IN 276
#define INSTANCEOF 277
#define LET 278
#define NEW 279
#define OF 280
#define RETURN 281
#define SUPER 282
#define SWITCH 283
#define THIS 284
#define THROW 285
#define TRY 286
#define TYPEOF 287
#define VAR 288
#define VOID 289
#define WHILE 290
#define WITH 291
#define YIELD 292
#define ENUM 293
#define AWAIT 294
#define IMPLEMENTS 295
#define INTERFACE 296
#define PACKAGE 297
#define PRIVATE 298
#define PROTECTED 299
#define PUBLIC 300
#define LITERAL_NULL 301
#define LITERAL_TRUE 302
#define LITERAL_FALSE 303
#define LITERAL_UNDEFINED 304
#define LITERAL_NAN 305
#define UNARY_ADD 306
#define UNARY_SUBTRACT 307
#define LOGICAL_NOT 308
#define MULTIPLY 309
#define DIVIDE 310
#define MODULO 311
#define ADD 312
#define SUBTRACT 313
#define EQUAL 314
#define NOT_EQUAL 315
#define EXACTLY_EQUAL 316
#define NOT_EXACTLY_EQUAL 317
#define LEFT_SHIFT 318
#define SIGNED_RIGHT_SHIFT 319
#define UNSIGNED_RIGHT_SHIFT 320
#define LESS_THAN 321
#define GREATER_THAN 322
#define LESS_THAN_OR_EQUAL 323
#define GREATER_THAN_OR_EQUAL 324
#define QUESTION_MARK 325
#define COLON 326
#define LOGICAL_AND 327
#define LOGICAL_OR 328
#define BITWISE_AND 329
#define BITWISE_OR 330
#define BITWISE_XOR 331
#define BITWISE_NOT 332
#define ASSIGNMENT 333
#define ADDITION_ASSIGNMENT 334
#define SUBTRACTION_ASSIGNMENT 335
#define MULTIPLICATION_ASSIGNMENT 336
#define DIVISION_ASSIGNMENT 337
#define MODULUS_ASSIGNMENT 338
#define EXPONENTIATION_ASSIGNMENT 339
#define LEFT_SHIFT_ASSIGNMENT 340
#define SIGNED_RIGHT_SHIFT_ASSIGNMENT 341
#define UNSIGNED_RIGHT_SHIFT_ASSIGNMENT 342
#define BITWISE_AND_ASSIGNMENT 343
#define BITWISE_XOR_ASSIGNMENT 344
#define BITWISE_OR_ASSIGNMENT 345
#define ARROW_FUNCTION 346
#define RIGHT_PAREN 347
#define LEFT_PAREN 348
#define RIGHT_BRACE 349
#define LEFT_BRACE 350
#define RIGHT_BRACKET 351
#define LEFT_BRACKET 352
#define COMMA 353
#define FULL_STOP 354
#define ELLIPSIS 355
#define SEMICOLON 356
#define DOUBLE_QUOTE 357
#define SINGLE_QUOTE 358
#define VALUE_INTEGER 359
#define VALUE_DOUBLE 360
#define VALUE_STRING 361
#define IDENTIFIER 362
#define LINE_FEED 363
#define CARRIAGE_RETURN 364
#define LINE_SEPARATOR 365
#define PARAGRAPH_SEPARATOR 366




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex(void);
void yyerror(char *);

extern int line;
extern int column;

char *jserror = "- [Jigh-Sight Error]";
char *jserrortype = "ERROR TYPE";



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 130 "yacc.y"
{
    int ival;
    double dval;
    const char* sval;
    bool bval;
    char cval;
}
/* Line 193 of yacc.c.  */
#line 345 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 358 "y.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  223
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  354
/* YYNRULES -- Number of states.  */
#define YYNSTATES  697

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   371

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
       2,     2,     2,     2,     2,     2,     2,   118,     2,     2,
       2,     2,   117,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    10,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    42,    45,    49,    53,    55,    57,    59,    61,    63,
      65,    67,    69,    71,    73,    75,    77,    79,    81,    83,
      85,    89,    92,    97,   104,   106,   108,   110,   112,   115,
     119,   123,   129,   134,   137,   139,   142,   144,   149,   153,
     158,   162,   164,   167,   170,   173,   177,   182,   184,   188,
     190,   192,   196,   198,   200,   202,   204,   206,   208,   212,
     215,   218,   220,   225,   229,   231,   235,   240,   244,   246,
     249,   252,   254,   257,   262,   266,   269,   272,   276,   278,
     281,   285,   290,   292,   294,   300,   302,   305,   308,   311,
     314,   317,   320,   323,   326,   329,   331,   335,   337,   339,
     341,   343,   347,   351,   353,   357,   361,   364,   366,   370,
     374,   378,   382,   386,   388,   392,   396,   400,   404,   406,
     410,   412,   416,   418,   422,   424,   428,   430,   434,   436,
     442,   444,   446,   448,   452,   456,   458,   460,   462,   464,
     466,   468,   470,   472,   474,   476,   478,   480,   484,   486,
     488,   490,   492,   494,   496,   498,   500,   502,   504,   506,
     508,   510,   512,   514,   516,   518,   520,   522,   524,   526,
     528,   530,   534,   537,   539,   542,   544,   546,   550,   552,
     554,   556,   560,   563,   566,   570,   572,   576,   578,   581,
     584,   586,   588,   591,   595,   600,   603,   607,   611,   616,
     620,   626,   632,   639,   641,   645,   647,   651,   653,   656,
     658,   662,   664,   666,   669,   671,   674,   677,   679,   682,
     690,   696,   704,   710,   718,   728,   739,   748,   756,   765,
     773,   781,   790,   798,   801,   803,   805,   808,   812,   815,
     819,   822,   826,   832,   838,   841,   845,   850,   855,   861,
     863,   866,   870,   875,   878,   882,   886,   888,   890,   894,
     898,   902,   907,   913,   916,   918,   920,   923,   932,   940,
     949,   957,   959,   960,   962,   964,   966,   970,   972,   976,
     978,   980,   982,   983,   985,   989,   991,   993,   995,   999,
    1007,  1009,  1017,  1026,  1028,  1037,  1047,  1056,  1066,  1075,
    1077,  1079,  1082,  1086,  1090,  1093,  1096,  1100,  1103,  1107,
    1111,  1116,  1119,  1121,  1123,  1126,  1128,  1131,  1133,  1136,
    1138,  1143,  1148,  1152,  1155,  1158,  1162,  1166,  1171,  1174,
    1178,  1183,  1185,  1189,  1191
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     120,     0,    -1,    -1,   121,    -1,   181,    -1,   123,    -1,
     122,   124,    -1,   112,    -1,   113,    -1,   107,    -1,   112,
      -1,   113,    -1,   107,    -1,    46,    -1,    47,    -1,    48,
      -1,   128,    -1,   129,    -1,   105,    -1,   104,    -1,   103,
     103,    -1,   102,   102,    -1,   103,   106,   103,    -1,   102,
     106,   102,    -1,   134,    -1,    37,    -1,   134,    -1,    37,
      -1,   134,    -1,    37,    -1,   122,    -1,    29,    -1,   131,
      -1,   137,    -1,   138,    -1,   142,    -1,   224,    -1,   244,
      -1,   240,    -1,   136,    -1,    93,   174,    92,    -1,    93,
      92,    -1,    93,   100,   132,    92,    -1,    93,   174,    98,
     100,   132,    92,    -1,   125,    -1,   126,    -1,   127,    -1,
     130,    -1,    97,    96,    -1,    97,   140,    96,    -1,    97,
     139,    96,    -1,    97,   139,    98,   140,    96,    -1,    97,
     139,    98,    96,    -1,   140,   172,    -1,   172,    -1,   140,
     141,    -1,   141,    -1,   139,    98,   140,   172,    -1,   139,
      98,   172,    -1,   139,    98,   140,   141,    -1,   139,    98,
     141,    -1,    98,    -1,   140,    98,    -1,   100,   172,    -1,
      95,    94,    -1,    95,   143,    94,    -1,    95,   143,    98,
      94,    -1,   144,    -1,   143,    98,   144,    -1,   131,    -1,
     148,    -1,   145,    71,   172,    -1,   236,    -1,   146,    -1,
     147,    -1,   122,    -1,   130,    -1,   127,    -1,    97,   172,
      96,    -1,   131,   149,    -1,    78,   172,    -1,   135,    -1,
     150,    97,   174,    96,    -1,   150,    99,   134,    -1,   151,
      -1,    24,   150,   155,    -1,    27,    97,   174,    96,    -1,
      27,    99,   122,    -1,   150,    -1,    24,   152,    -1,   150,
     155,    -1,   154,    -1,   153,   155,    -1,   153,    97,   174,
      96,    -1,   153,    99,   122,    -1,    27,   155,    -1,    93,
      92,    -1,    93,   156,    92,    -1,   172,    -1,   100,   172,
      -1,   156,    98,   172,    -1,   156,    98,   100,   172,    -1,
     152,    -1,   153,    -1,   157,   157,    51,   157,    52,    -1,
     158,    -1,    11,   159,    -1,    34,   159,    -1,    32,   159,
      -1,    51,   159,    -1,    52,   159,    -1,    57,   159,    -1,
      58,   159,    -1,    77,   159,    -1,    53,   159,    -1,   159,
      -1,   160,   161,   159,    -1,    54,    -1,    55,    -1,    56,
      -1,   160,    -1,   162,    57,   160,    -1,   162,    58,   160,
      -1,   162,    -1,   163,    63,   162,    -1,   163,    64,   162,
      -1,   163,    65,    -1,   163,    -1,   164,    66,   163,    -1,
     164,    67,   163,    -1,   164,    68,   163,    -1,   164,    69,
     163,    -1,   164,    22,   163,    -1,   164,    -1,   165,    59,
     164,    -1,   165,    60,   164,    -1,   165,    61,   164,    -1,
     165,    62,   164,    -1,   165,    -1,   166,    74,   165,    -1,
     166,    -1,   167,    76,   166,    -1,   167,    -1,   168,    75,
     167,    -1,   168,    -1,   169,    72,   168,    -1,   169,    -1,
     170,    73,   169,    -1,   170,    -1,   170,    70,   172,    71,
     172,    -1,   171,    -1,   242,    -1,   233,    -1,   157,    78,
     172,    -1,   157,   173,   172,    -1,    81,    -1,    82,    -1,
      83,    -1,    79,    -1,    80,    -1,    85,    -1,    86,    -1,
      87,    -1,    88,    -1,    89,    -1,    90,    -1,   172,    -1,
     174,    98,   172,    -1,   179,    -1,   187,    -1,   200,    -1,
     201,    -1,   202,    -1,   178,    -1,   208,    -1,   206,    -1,
     207,    -1,   209,    -1,   215,    -1,   217,    -1,   218,    -1,
     222,    -1,   177,    -1,   243,    -1,   183,    -1,   252,    -1,
     223,    -1,   239,    -1,   203,    -1,   210,    -1,   180,    -1,
      95,   181,    94,    -1,    95,    94,    -1,   182,    -1,   181,
     182,    -1,   175,    -1,   176,    -1,   184,   185,   101,    -1,
      23,    -1,     7,    -1,   186,    -1,   185,    98,   186,    -1,
     132,   149,    -1,   190,   149,    -1,    33,   188,   101,    -1,
     189,    -1,   188,    98,   189,    -1,   132,    -1,   132,   149,
      -1,   190,   149,    -1,   191,    -1,   192,    -1,    95,    94,
      -1,    95,   193,    94,    -1,    95,   193,    98,    94,    -1,
      97,    96,    -1,    97,   199,    96,    -1,    97,   140,    96,
      -1,    97,   140,   199,    96,    -1,    97,   194,    96,    -1,
      97,   194,    98,   140,    96,    -1,    97,   194,    98,   199,
      96,    -1,    97,   194,    98,   140,   199,    96,    -1,   196,
      -1,   193,    98,   196,    -1,   195,    -1,   194,    98,   195,
      -1,   197,    -1,   140,   197,    -1,   198,    -1,   145,    71,
     197,    -1,   198,    -1,   190,    -1,   190,   149,    -1,   132,
      -1,   132,   149,    -1,   100,   132,    -1,   101,    -1,   174,
     101,    -1,    19,    93,   174,    92,   175,    13,   175,    -1,
      19,    93,   174,    92,   175,    -1,    12,   175,    35,    93,
     174,    92,   101,    -1,    35,    93,   174,    92,   175,    -1,
      35,    93,   174,    92,    95,   175,    94,    -1,    17,    93,
     174,   101,   174,   101,   174,    92,   175,    -1,    17,    93,
      33,   188,   101,   174,   101,   174,    92,   175,    -1,    17,
      93,   183,   174,   101,   174,    92,   175,    -1,    17,    93,
     157,    21,   174,    92,   175,    -1,    17,    93,    33,   205,
      21,   174,    92,   175,    -1,    17,    93,   204,    21,   174,
      92,   175,    -1,    17,    93,   157,    25,   172,    92,   175,
      -1,    17,    93,    33,   205,    25,   172,    92,   175,    -1,
      17,    93,   204,    25,   172,    92,   175,    -1,   184,   205,
      -1,   132,    -1,   190,    -1,     8,   101,    -1,     8,   133,
     101,    -1,     3,   101,    -1,     3,   133,   101,    -1,    26,
     101,    -1,    26,   174,   101,    -1,    36,    93,   174,    92,
     175,    -1,    28,    93,   174,    92,   211,    -1,    95,    94,
      -1,    95,   212,    94,    -1,    95,   214,   212,    94,    -1,
      95,   212,   214,    94,    -1,    95,   212,   214,   212,    94,
      -1,   213,    -1,   212,   213,    -1,     4,   174,    71,    -1,
       4,   174,    71,   181,    -1,    10,    71,    -1,    10,    71,
     181,    -1,   133,    71,   216,    -1,   175,    -1,   223,    -1,
      30,   174,   101,    -1,    31,   180,   219,    -1,    31,   180,
     220,    -1,    31,   180,   219,   220,    -1,     5,    93,   221,
      92,   180,    -1,    16,   180,    -1,   132,    -1,   190,    -1,
       9,   101,    -1,    18,   132,    93,   226,    92,    95,   231,
      94,    -1,    18,    93,   226,    92,    95,   231,    94,    -1,
      18,   132,    93,   226,    92,    95,   231,    94,    -1,    18,
      93,   226,    92,    95,   231,    94,    -1,   226,    -1,    -1,
     227,    -1,   229,    -1,   228,    -1,   228,    98,   229,    -1,
     230,    -1,   228,    98,   230,    -1,   199,    -1,   197,    -1,
     232,    -1,    -1,   181,    -1,   234,    91,   235,    -1,   132,
      -1,   136,    -1,   172,    -1,    96,   231,    97,    -1,   145,
      93,   225,    92,    94,   231,    95,    -1,   238,    -1,   114,
     145,    93,    92,    95,   231,    94,    -1,   115,   145,    93,
     237,    92,    95,   231,    94,    -1,   230,    -1,    54,   145,
      93,   225,    92,    95,   241,    94,    -1,    18,    54,   132,
      93,   230,    92,    95,   241,    94,    -1,    18,    54,    93,
     230,    92,    95,   241,    94,    -1,    18,    54,   132,    93,
     226,    92,    95,   241,    94,    -1,    18,    54,    93,   226,
      92,    95,   241,    94,    -1,   231,    -1,    37,    -1,    37,
     172,    -1,    37,    54,   172,    -1,     6,   132,   245,    -1,
       6,   245,    -1,     6,   245,    -1,     6,   132,   245,    -1,
      95,    94,    -1,   246,    95,    94,    -1,    95,   247,    94,
      -1,   246,    95,   247,    94,    -1,    15,   157,    -1,   248,
      -1,   249,    -1,   248,   249,    -1,   236,    -1,   116,   236,
      -1,   101,    -1,   117,   251,    -1,   130,    -1,    14,    54,
     250,   101,    -1,    14,   253,   250,   101,    -1,    14,   253,
     101,    -1,    14,   187,    -1,    14,   176,    -1,    14,    10,
     177,    -1,    14,    10,   243,    -1,    14,    10,   172,   101,
      -1,    95,    94,    -1,    95,   254,    94,    -1,    95,   254,
      98,    94,    -1,   255,    -1,   254,    98,   255,    -1,   122,
      -1,   122,   118,   122,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   176,   176,   178,   182,   209,   210,   214,   215,   216,
     220,   221,   222,   230,   238,   239,   247,   254,   255,   259,
     268,   269,   270,   271,   287,   288,   292,   293,   297,   298,
     302,   310,   311,   312,   313,   314,   315,   316,   317,   320,
     324,   325,   326,   327,   335,   336,   337,   338,   346,   347,
     348,   349,   350,   354,   355,   356,   357,   358,   359,   360,
     361,   365,   366,   370,   378,   379,   380,   384,   385,   389,
     390,   391,   392,   396,   397,   401,   402,   403,   407,   411,
     415,   431,   432,   433,   435,   437,   441,   442,   453,   454,
     458,   459,   460,   461,   462,   467,   471,   472,   476,   477,
     478,   479,   483,   484,   492,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   519,   520,   524,   525,   526,
     534,   535,   536,   544,   545,   546,   547,   555,   556,   557,
     558,   559,   560,   574,   575,   576,   577,   578,   586,   587,
     591,   592,   596,   597,   605,   606,   610,   611,   619,   620,
     628,   629,   630,   631,   632,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   654,   655,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   680,   681,   682,   683,   687,   688,   692,   693,
     701,   705,   706,   710,   711,   715,   716,   724,   728,   729,
     733,   734,   739,   740,   748,   752,   753,   757,   758,   759,
     767,   768,   772,   773,   774,   778,   779,   780,   781,   782,
     783,   784,   785,   789,   790,   794,   795,   799,   800,   804,
     805,   809,   810,   811,   815,   816,   820,   828,   837,   846,
     847,   855,   856,   857,   859,   860,   861,   863,   864,   865,
     866,   867,   868,   872,   876,   877,   885,   886,   894,   895,
     903,   904,   912,   920,   924,   925,   926,   927,   928,   932,
     933,   937,   938,   942,   943,   951,   955,   956,   964,   972,
     973,   974,   978,   982,   986,   987,   994,  1002,  1003,  1007,
    1008,  1012,  1015,  1017,  1021,  1022,  1023,  1027,  1028,  1032,
    1036,  1040,  1043,  1045,  1053,  1057,  1058,  1063,  1064,  1072,
    1073,  1074,  1075,  1079,  1087,  1091,  1092,  1096,  1097,  1101,
    1105,  1106,  1107,  1115,  1116,  1120,  1121,  1125,  1126,  1127,
    1128,  1132,  1136,  1140,  1141,  1145,  1146,  1147,  1206,  1220,
    1232,  1233,  1234,  1235,  1236,  1237,  1238,  1240,  1244,  1245,
    1246,  1250,  1251,  1255,  1256
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "END_OF_FILE", "error", "$undefined", "BREAK", "CASE", "CATCH", "CLASS",
  "CONST", "CONTINUE", "DEBUGGER", "DEFAULT", "DELETE", "DO", "ELSE",
  "EXPORT", "EXTENDS", "FINALLY", "FOR", "FUNCTION", "IF", "IMPORT", "IN",
  "INSTANCEOF", "LET", "NEW", "OF", "RETURN", "SUPER", "SWITCH", "THIS",
  "THROW", "TRY", "TYPEOF", "VAR", "VOID", "WHILE", "WITH", "YIELD",
  "ENUM", "AWAIT", "IMPLEMENTS", "INTERFACE", "PACKAGE", "PRIVATE",
  "PROTECTED", "PUBLIC", "LITERAL_NULL", "LITERAL_TRUE", "LITERAL_FALSE",
  "LITERAL_UNDEFINED", "LITERAL_NAN", "UNARY_ADD", "UNARY_SUBTRACT",
  "LOGICAL_NOT", "MULTIPLY", "DIVIDE", "MODULO", "ADD", "SUBTRACT",
  "EQUAL", "NOT_EQUAL", "EXACTLY_EQUAL", "NOT_EXACTLY_EQUAL", "LEFT_SHIFT",
  "SIGNED_RIGHT_SHIFT", "UNSIGNED_RIGHT_SHIFT", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_OR_EQUAL", "GREATER_THAN_OR_EQUAL",
  "QUESTION_MARK", "COLON", "LOGICAL_AND", "LOGICAL_OR", "BITWISE_AND",
  "BITWISE_OR", "BITWISE_XOR", "BITWISE_NOT", "ASSIGNMENT",
  "ADDITION_ASSIGNMENT", "SUBTRACTION_ASSIGNMENT",
  "MULTIPLICATION_ASSIGNMENT", "DIVISION_ASSIGNMENT", "MODULUS_ASSIGNMENT",
  "EXPONENTIATION_ASSIGNMENT", "LEFT_SHIFT_ASSIGNMENT",
  "SIGNED_RIGHT_SHIFT_ASSIGNMENT", "UNSIGNED_RIGHT_SHIFT_ASSIGNMENT",
  "BITWISE_AND_ASSIGNMENT", "BITWISE_XOR_ASSIGNMENT",
  "BITWISE_OR_ASSIGNMENT", "ARROW_FUNCTION", "RIGHT_PAREN", "LEFT_PAREN",
  "RIGHT_BRACE", "LEFT_BRACE", "RIGHT_BRACKET", "LEFT_BRACKET", "COMMA",
  "FULL_STOP", "ELLIPSIS", "SEMICOLON", "DOUBLE_QUOTE", "SINGLE_QUOTE",
  "VALUE_INTEGER", "VALUE_DOUBLE", "VALUE_STRING", "IDENTIFIER",
  "LINE_FEED", "CARRIAGE_RETURN", "LINE_SEPARATOR", "PARAGRAPH_SEPARATOR",
  "\"$\"", "\"_\"", "\"get\"", "\"set\"", "\"static\"", "'from'", "'as'",
  "$accept", "Script", "ScriptBody", "IdentifierName", "IdentifierStart",
  "IdentifierPart", "NullLiteral", "BooleanLiteral", "NumericLiteral",
  "DecimalLiteral", "DecimalIntegerLiteral", "StringLiteral",
  "IdentifierReference", "BindingIdentifier", "LabelIdentifier",
  "Identifier", "PrimaryExpression",
  "CoverParenthesizedExpressionAndArrowParameterList", "Literal",
  "ArrayLiteral", "ElementList", "Elision", "SpreadElement",
  "ObjectLiteral", "PropertyDefinitionList", "PropertyDefinition",
  "PropertyName", "LiteralPropertyName", "ComputedPropertyName",
  "CoverInitializedName", "Initialiser", "MemberExpression",
  "SuperProperty", "NewExpression", "CallExpression", "SuperCall",
  "Arguments", "ArgumentList", "LeftHandSideExpression",
  "PostfixExpression", "UnaryExpression", "MultiplicativeExpression",
  "MultiplicativeOperator", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "BitwiseANDExpression",
  "BitwiseXORExpression", "BitwiseORExpression", "LogicalANDExpression",
  "LogicalORExpression", "ConditionalExpression", "AssignmentExpression",
  "AssignmentOperator", "Expression", "Statement", "Declaration",
  "HoistableDeclaration", "BreakableStatement", "BlockStatement", "Block",
  "StatementList", "StatementListItem", "LexicalDeclaration", "LetOrConst",
  "BindingList", "LexicalBinding", "VariableStatement",
  "VariableDeclarationList", "VariableDeclaration", "BindingPattern",
  "ObjectBindingPattern", "ArrayBindingPattern", "BindingPropertyList",
  "BindingElementList", "BindingElisionElement", "BindingProperty",
  "BindingElement", "SingleNameBinding", "BindingRestElement",
  "EmptyStatement", "ExpressionStatement", "IfStatement",
  "IterationStatement", "ForDeclaration", "ForBinding",
  "ContinueStatement", "BreakStatement", "ReturnStatement",
  "WithStatement", "SwitchStatement", "CaseBlock", "CaseClauses",
  "CaseClause", "DefaultClause", "LabelledStatement", "LabelledItem",
  "ThrowStatement", "TryStatement", "Catch", "Finally", "CatchParameter",
  "DebuggerStatement", "FunctionDeclaration", "FunctionExpression",
  "StrictFormalParameters", "FormalParameters", "FormalParameterList",
  "FormalsList", "FunctionRestParameter", "FormalParameter",
  "FunctionBody", "FunctionStatementList", "ArrowFunction",
  "ArrowParameters", "ConciseBody", "MethodDefinition",
  "PropertySetParameterList", "GeneratorMethod", "GeneratorDeclaration",
  "GeneratorExpression", "GeneratorBody", "YieldExpression",
  "ClassDeclaration", "ClassExpression", "ClassTail", "ClassHeritage",
  "ClassBody", "ClassElementList", "ClassElement", "FromClause",
  "ModuleSpecifier", "ExportDeclaration", "ExportClause", "ExportsList",
  "ExportSpecifier", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   102,    97
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   119,   120,   120,   121,   122,   122,   123,   123,   123,
     124,   124,   124,   125,   126,   126,   127,   128,   128,   129,
     130,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   137,   137,   137,   137,   138,   138,
     138,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   140,   140,   141,   142,   142,   142,   143,   143,   144,
     144,   144,   144,   145,   145,   146,   146,   146,   147,   148,
     149,   150,   150,   150,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   153,   153,   154,   155,   155,   156,   156,
     156,   156,   157,   157,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   160,   160,   161,   161,   161,
     162,   162,   162,   163,   163,   163,   163,   164,   164,   164,
     164,   164,   164,   165,   165,   165,   165,   165,   166,   166,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   172,   172,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   176,   176,   176,   176,   177,   177,   178,   178,
     179,   180,   180,   181,   181,   182,   182,   183,   184,   184,
     185,   185,   186,   186,   187,   188,   188,   189,   189,   189,
     190,   190,   191,   191,   191,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   197,   197,   198,   198,   199,   200,   201,   202,
     202,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   209,   210,   211,   211,   211,   211,   211,   212,
     212,   213,   213,   214,   214,   215,   216,   216,   217,   218,
     218,   218,   219,   220,   221,   221,   222,   223,   223,   224,
     224,   225,   226,   226,   227,   227,   227,   228,   228,   229,
     230,   231,   232,   232,   233,   234,   234,   235,   235,   236,
     236,   236,   236,   237,   238,   239,   239,   240,   240,   241,
     242,   242,   242,   243,   243,   244,   244,   245,   245,   245,
     245,   246,   247,   248,   248,   249,   249,   249,   250,   251,
     252,   252,   252,   252,   252,   252,   252,   252,   253,   253,
     253,   254,   254,   255,   255
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     4,     6,     1,     1,     1,     1,     2,     3,
       3,     5,     4,     2,     1,     2,     1,     4,     3,     4,
       3,     1,     2,     2,     2,     3,     4,     1,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     1,     4,     3,     1,     3,     4,     3,     1,     2,
       2,     1,     2,     4,     3,     2,     2,     3,     1,     2,
       3,     4,     1,     1,     5,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     2,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     2,     1,     1,     3,     1,     1,
       1,     3,     2,     2,     3,     1,     3,     1,     2,     2,
       1,     1,     2,     3,     4,     2,     3,     3,     4,     3,
       5,     5,     6,     1,     3,     1,     3,     1,     2,     1,
       3,     1,     1,     2,     1,     2,     2,     1,     2,     7,
       5,     7,     5,     7,     9,    10,     8,     7,     8,     7,
       7,     8,     7,     2,     1,     1,     2,     3,     2,     3,
       2,     3,     5,     5,     2,     3,     4,     4,     5,     1,
       2,     3,     4,     2,     3,     3,     1,     1,     3,     3,
       3,     4,     5,     2,     1,     1,     2,     8,     7,     8,
       7,     1,     0,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     0,     1,     3,     1,     1,     1,     3,     7,
       1,     7,     8,     1,     8,     9,     8,     9,     8,     1,
       1,     2,     3,     3,     2,     2,     3,     2,     3,     3,
       4,     2,     1,     1,     2,     1,     2,     1,     2,     1,
       4,     4,     3,     2,     2,     3,     3,     4,     2,     3,
       4,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,   199,     0,     0,     0,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,    25,    13,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
       0,    19,    18,     9,     7,     8,     0,     3,    30,     5,
      44,    45,    46,    16,    17,    47,    32,   305,     0,    24,
      81,    39,    33,    34,    35,    88,    84,   102,   103,    91,
       0,   105,   115,   120,   123,   127,   133,   138,   140,   142,
     144,   146,   148,   150,   166,     0,   195,   196,   182,   173,
     168,   190,     4,   193,   184,     0,   169,   170,   171,   172,
     188,   175,   176,   174,   177,   189,   178,   179,   180,   181,
     186,    36,   152,     0,   187,    38,   151,   183,    37,   185,
      29,   258,     0,    28,     0,    27,     0,     0,    26,   324,
       0,   256,     0,   286,     0,     0,    25,     0,    24,    39,
       0,   106,     0,     0,     0,     0,     0,     0,   344,   343,
       0,     0,     0,   292,     0,     0,     0,    88,    89,    25,
     260,    24,     0,     0,     0,     0,    95,     0,     0,     0,
       0,   108,     0,     0,   207,     0,   205,     0,   210,   211,
     107,     0,     0,     0,   321,   109,   110,   114,   111,   112,
     113,    41,     0,     0,     0,    64,     0,     0,     0,    30,
      46,    47,    32,     0,    67,     0,    73,    74,    70,     0,
      72,   310,    48,    61,     0,     0,     0,    56,    54,    21,
       0,    20,     0,     1,    12,    10,    11,     6,     0,     0,
       0,    90,     0,     0,    92,     0,   158,   159,   155,   156,
     157,   160,   161,   162,   163,   164,   165,     0,     0,   117,
     118,   119,     0,     0,     0,     0,     0,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,   194,     0,     0,   200,     0,
       0,   259,   331,   327,     0,   337,     0,    75,    77,    76,
       0,   335,     0,   332,   333,   323,     0,   257,     0,   325,
       0,   292,     0,    64,    69,     0,     0,   324,     0,   345,
     346,     0,   292,     0,     0,     0,   348,   353,     0,   351,
     342,     0,     0,     0,     0,     0,     0,     0,   292,     0,
       0,   234,   232,   300,   231,   299,     0,   293,   295,   294,
     297,   292,     0,    85,   261,    96,     0,     0,    98,     0,
      87,     0,   278,   192,     0,     0,   279,   280,   212,     0,
       0,   223,   229,   215,     0,     0,   225,   227,     0,     0,
     208,     0,   204,   209,     0,     0,   322,     0,    40,     0,
       0,    54,     0,     0,    79,    65,     0,     0,   292,   191,
      63,    50,     0,    49,    62,    55,    53,    23,    22,     0,
     276,   275,   277,     0,    83,     0,    94,   153,     0,   154,
     116,   121,   122,   124,   125,   132,   128,   129,   130,   131,
     134,   135,   136,   137,   139,   141,   143,   145,     0,   147,
     167,   202,     0,   197,   203,     0,   307,   304,     0,   336,
     329,   334,   328,     0,   326,   292,     0,     0,   292,     0,
     323,   347,     0,     0,     0,   292,   339,   338,   340,     0,
     349,     0,   341,   207,     0,   255,     0,     0,     0,     0,
       0,   254,   255,   253,     0,     0,     0,   297,   292,   236,
     235,   233,     0,     0,     0,     0,    99,    97,     0,    86,
       0,     0,   283,   281,     0,   213,     0,   217,   228,     0,
     219,     0,   216,    80,   206,     0,     0,    42,     0,   292,
      78,     0,     0,    66,    68,    71,     0,   291,    52,     0,
      60,    58,    82,    93,     0,     0,   201,   303,     0,   301,
     330,   292,     0,     0,     0,     0,     0,     0,     0,   354,
     350,   352,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   297,   302,   296,   298,     0,   240,
       0,   100,     0,   263,   284,   285,     0,   230,   214,   224,
     218,     0,   226,     0,     0,   242,   262,     0,     0,     0,
     313,     0,     0,    51,    59,    57,   104,   149,   308,   302,
       0,     0,     0,   302,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   302,   302,     0,     0,     0,   302,
       0,   101,     0,     0,   264,     0,   269,     0,     0,   220,
       0,   221,   195,    43,     0,   302,     0,     0,     0,   302,
     241,     0,   302,     0,     0,     0,   247,   250,     0,     0,
     249,   252,   319,     0,     0,   302,   302,   288,     0,   239,
       0,   273,   265,   270,     0,     0,   282,   222,   243,   302,
       0,   302,     0,   290,     0,   288,     0,     0,   248,   251,
       0,   246,   318,   316,     0,     0,   287,   271,   274,   267,
       0,   266,     0,   311,     0,   309,   289,   287,     0,   244,
     317,   315,   272,   268,   314,   312,   245
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    46,    47,    48,    49,   227,    50,    51,    52,    53,
      54,    55,    56,    57,    58,   161,    60,    61,    62,    63,
     215,   216,   217,    64,   203,   204,   205,   206,   207,   208,
     370,    65,    66,    67,    68,    69,   166,   347,    70,    71,
      72,    73,   252,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   248,    85,    86,    87,    88,    89,
      90,    91,   527,    93,    94,    95,   277,   278,    96,   175,
     176,   332,   178,   179,   360,   365,   366,   361,   333,   334,
     335,    97,    98,    99,   100,   327,   466,   101,   102,   103,
     104,   105,   563,   615,   616,   617,   106,   401,   107,   108,
     356,   357,   566,   109,   110,   111,   516,   476,   337,   338,
     339,   340,   642,   529,   112,   113,   437,   210,   581,   211,
     114,   115,   643,   116,   117,   118,   129,   130,   292,   293,
     294,   315,   457,   119,   150,   318,   319
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -581
static const yytype_int16 yypact[] =
{
    1509,   337,    10,  -581,   500,   -74,  2829,  1617,    66,   -12,
      37,    -5,  -581,   928,  2575,    49,    38,  -581,  2861,    46,
    2829,   119,  2829,    86,   164,  1961,  -581,  -581,  -581,  2829,
    2829,  2829,  2829,  2829,  2829,  2453,  1178,  1993,  -581,    -9,
      30,  -581,  -581,  -581,  -581,  -581,   220,  -581,   184,  -581,
    -581,  -581,  -581,  -581,  -581,  -581,  -581,  -581,   200,   -20,
    -581,   158,  -581,  -581,  -581,   209,  -581,  -581,   290,  -581,
    2086,  -581,  -581,   156,     2,   271,   178,   420,   216,   227,
     297,   274,   108,  -581,  -581,   140,  -581,  -581,  -581,  -581,
    -581,  -581,  1509,  -581,  -581,   119,  -581,  -581,  -581,  -581,
    -581,  -581,  -581,  -581,  -581,  -581,  -581,  -581,  -581,  -581,
    -581,  -581,  -581,   286,  -581,  -581,  -581,  -581,  -581,  -581,
    -581,  -581,   281,  -581,  2983,  -581,  1144,    31,  -581,   839,
     309,  -581,   366,  -581,    10,    64,  -581,   560,  -581,  -581,
    2983,  -581,   434,    10,  2951,   245,   371,    -4,  -581,  -581,
     -32,  2189,   247,   180,   382,  2861,    92,   209,  -581,  1036,
    -581,   399,   212,  2485,  2861,   306,  -581,  2861,   386,  1293,
      63,  -581,   416,   364,   419,   401,  -581,   419,  -581,  -581,
    -581,  2861,  2861,  2861,  -581,  -581,  -581,  -581,  -581,  -581,
    -581,  -581,   310,    62,   601,  3094,  1993,   601,   601,   184,
     432,   433,    61,    13,  -581,   -15,  -581,  -581,  -581,  1401,
    -581,  -581,  -581,  -581,  2861,    14,  2221,  -581,  -581,  -581,
     414,  -581,   412,  -581,  -581,  -581,  -581,  -581,  1725,  2861,
     306,  -581,  2861,   306,  -581,  2861,  -581,  -581,  -581,  -581,
    -581,  -581,  -581,  -581,  -581,  -581,  -581,   475,  2861,  -581,
    -581,  -581,  2829,  2829,  2829,  2829,  2829,  -581,  2829,  2829,
    2829,  2829,  2829,  2829,  2829,  2829,  2829,  2829,  2829,  2829,
    2829,  2861,  2829,  2861,  -581,  -581,   419,   413,  -581,   419,
    2607,  -581,  -581,  -581,  2861,  -581,  1468,   184,  -581,  -581,
     439,  -581,   444,  1360,  -581,  1402,  1259,  -581,    31,  -581,
     268,   180,   440,  -581,   419,   447,    31,  -581,   448,  -581,
    -581,   470,   180,   455,   293,   453,  -581,   130,    72,  -581,
    -581,   460,   119,  1871,   424,  2861,   119,    94,   180,   469,
     310,   419,   419,  -581,  -581,  -581,   477,  -581,   482,  -581,
    -581,   180,    88,  -581,  -581,  -581,  2861,    98,  -581,   183,
     184,   196,  -581,  -581,   493,    46,   572,  -581,  -581,   519,
     135,  -581,  -581,  -581,   660,   267,  -581,  -581,   495,  2861,
    -581,   119,  -581,  -581,   226,   233,  -581,   504,  -581,  2707,
     507,   510,   522,   524,  -581,  -581,   707,  2861,   180,  -581,
    -581,  -581,  2321,  -581,  -581,  -581,  -581,  -581,  -581,   313,
    -581,  -581,  -581,   318,  -581,   358,   184,  -581,  2983,  -581,
    -581,   156,   156,     2,     2,   271,   271,   271,   271,   271,
     178,   178,   178,   178,   420,   216,   227,   297,   547,   274,
    -581,  -581,   119,  -581,  -581,  1509,  -581,  -581,   510,  -581,
    -581,  -581,  -581,   532,  -581,   180,   537,   544,   180,  2861,
    -581,  -581,   119,   545,   548,   180,  -581,  -581,  -581,   306,
    -581,   285,  -581,    73,   441,   419,   330,  2861,  2861,  2861,
     446,   419,   419,  -581,  2861,  2861,   549,   550,   180,  -581,
    -581,  -581,   542,   180,   557,  1617,  -581,  -581,  2739,  -581,
     555,   119,  -581,  -581,   119,  -581,   463,  -581,  -581,   556,
    -581,   127,  -581,  -581,  -581,  1833,  1617,  -581,   310,   180,
    -581,   561,   119,  -581,  -581,  -581,   566,  -581,  -581,  2353,
    -581,  -581,  -581,  -581,   608,  2861,  -581,  1509,   569,  -581,
    -581,   180,   574,   579,   270,   550,   119,   581,   589,   184,
    -581,  -581,  2861,  2861,  2861,   302,   593,   458,  2861,   338,
     594,   588,   592,   597,   598,  1509,  -581,  -581,   596,   686,
    2861,  -581,    34,  -581,  -581,  -581,   610,  -581,  -581,  -581,
    -581,   761,  -581,   611,  1178,  -581,  -581,   618,   624,   622,
    -581,   626,   625,  -581,  -581,  -581,  -581,  -581,  -581,  1509,
     628,   619,   598,  1509,   629,   480,   339,   633,  1617,  1617,
    2861,   348,  1617,  1617,  1509,  1509,   636,   637,   627,  1509,
    1617,  -581,  2861,   665,  -581,    44,  -581,   733,    46,  -581,
     642,  -581,   645,  -581,   647,  1509,   648,  1509,   646,  1509,
    -581,   651,  1509,  2861,  1617,  1617,  -581,  -581,   359,  1617,
    -581,  -581,  -581,   653,   654,  1509,  1509,  1510,   655,  -581,
     -21,  1509,  -581,  -581,    12,    19,  -581,  -581,  -581,  1509,
     657,  1509,   658,  -581,   668,  -581,   669,   374,  -581,  -581,
    1617,  -581,  -581,  -581,   671,   675,  1598,  1509,  1509,  -581,
      20,  -581,   676,  -581,   687,  -581,  -581,  -581,  1617,  -581,
    -581,  -581,  1509,  -581,  -581,  -581,  -581
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -581,  -581,  -581,   172,  -581,  -581,  -581,  -581,    21,  -581,
    -581,   -10,   -33,   400,   583,     0,  -581,   746,  -581,  -581,
    -581,  -156,  -198,  -581,  -581,   396,  -111,  -581,  -581,  -581,
     -81,   770,  -581,   771,  -581,  -581,   -25,  -581,   910,  -581,
      33,   175,  -581,   218,   362,   430,   518,   521,   517,   520,
     523,  -581,  -581,   591,  -581,   260,    45,   783,   649,  -581,
    -581,    -7,     5,   -84,   641,   643,  -581,   365,   788,   478,
     435,     7,  -581,  -581,  -581,  -581,   312,   319,  -162,  -153,
    -159,  -581,  -581,  -581,  -581,  -581,   491,  -581,  -581,  -581,
    -581,  -581,  -581,  -572,  -580,   203,  -581,  -581,  -581,  -581,
    -581,   467,  -581,  -581,   599,  -581,   315,    15,  -581,  -581,
     342,  -163,  -426,  -581,  -581,  -581,  -581,   -89,  -581,  -581,
    -581,  -581,  -212,  -581,   684,  -581,   -85,  -581,   533,  -581,
     538,   680,  -581,  -581,  -581,  -581,   372
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -327
static const yytype_int16 yytable[] =
{
      59,   123,   128,   202,   123,    92,   138,    59,   275,   528,
     128,   367,   170,   138,   368,   290,   612,   364,   395,   362,
     138,   128,   138,   612,   612,   124,   201,   133,   177,   138,
     138,   138,   138,   138,   138,   653,    59,   291,   612,   141,
     231,   209,   295,   234,   613,   655,   124,   125,   612,   299,
     677,   -28,   142,   171,   613,   180,   387,   200,   307,   253,
     254,   359,   185,   186,   187,   188,   189,   190,   354,   320,
     138,   -26,   143,     3,   125,   653,   144,   273,   388,   355,
       8,   151,   680,   380,   145,   314,   382,   383,   155,    12,
     316,   152,    59,   219,  -254,   128,   373,   220,  -254,    21,
     653,   125,   279,    43,   304,   126,   679,   385,    44,    45,
     391,   386,   392,   681,   693,   474,   289,    43,   300,   475,
     146,   384,    44,    45,   138,   275,   126,   289,   614,   608,
     153,   167,   343,   221,   128,   128,   222,   138,   652,   369,
     138,   169,   163,   128,    43,   128,   164,   288,   165,    44,
      45,   369,   128,   128,   378,   -69,   125,   301,   288,   -69,
     379,   147,   289,   628,   125,   477,   460,   631,   336,    59,
     461,    43,   128,   128,   209,   290,    44,    45,   271,   181,
     485,   272,   290,   648,   289,   290,   273,   289,   289,   164,
     487,   165,   128,   288,   520,   431,   488,   439,   434,   660,
     258,   662,   498,   664,   291,   499,   666,   291,   199,    59,
     249,   250,   251,   444,   172,   288,   173,   125,   288,   288,
     223,   450,   172,   384,   173,   213,    43,   330,    59,   495,
     404,    44,    45,   496,    43,   684,   519,   224,   273,    44,
      45,   274,   225,   226,   259,   260,   261,   262,   459,  -306,
     480,   481,   138,   138,   138,   138,   138,   182,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   228,   138,   400,   162,   172,   289,   173,   168,   489,
     330,   273,   125,   289,   125,   410,   289,    43,   490,   535,
     267,   224,    44,    45,   273,   193,   225,   226,   287,   311,
     128,   128,   163,   268,   456,   125,   229,   288,   230,   199,
     273,   128,   128,   344,   288,   554,   447,   288,   505,   317,
     557,   584,   128,   138,   273,   506,   128,   454,   128,   465,
     128,   273,   567,   472,   255,   256,   257,   350,   312,   367,
     328,   128,   573,   362,   199,   571,   270,   125,   492,   580,
     125,   543,    43,   304,    43,   544,   484,    44,    45,    44,
      45,   445,   591,   500,   128,   501,   287,   300,   273,   287,
     287,   128,   269,   592,   120,    43,   289,   280,   177,   540,
      44,    45,   281,   163,   373,   359,   138,   232,   128,   233,
     431,   434,    43,   644,   598,    39,    40,    44,    45,   128,
     273,   125,   127,   517,   296,   406,   153,   288,   138,   498,
     154,   324,   620,    43,   522,   342,   273,    43,    44,    45,
      43,   174,    44,    45,   349,    44,    45,   351,   411,   412,
     602,   634,   128,   674,   675,    59,   273,   273,   121,   279,
     639,   374,   375,   275,    43,   128,   273,   682,   128,    44,
      45,   670,   128,   125,   523,   128,   273,   273,   287,   172,
     363,   173,   213,   533,   330,   287,   688,   297,   287,   305,
     538,    43,   273,   413,   414,   341,    44,    45,   128,   263,
     264,   265,   266,   128,   273,    59,   289,   352,   314,   403,
     -26,   128,   405,   553,   128,   276,   128,   369,   565,   371,
     125,   128,   372,   -77,   -76,    59,    59,   125,   128,   128,
     358,   432,   128,   284,   433,   398,   397,   288,    39,    40,
      41,    42,   273,    43,   517,   469,   408,    59,    44,    45,
     559,   128,   388,   448,   298,   302,   128,   120,   440,   371,
     449,   202,   542,   306,   273,   313,   553,   548,   455,   451,
     575,   576,   329,   331,   458,    59,   273,   568,   199,   600,
     284,   462,   478,   452,   201,    39,    40,    41,    42,   482,
      43,   128,   331,   331,    59,    44,    45,    43,   273,   209,
     483,   633,    44,    45,   122,   470,   491,   132,   355,    59,
     494,   502,   377,    59,   275,   200,   507,   136,    59,    59,
     509,   131,    59,    59,    59,    59,   510,    43,   275,    59,
      59,   656,    44,    45,   194,   511,   184,   512,   525,   622,
     415,   416,   417,   418,   419,    59,   530,    59,   218,    59,
     531,   539,    59,   317,    59,    59,   532,   555,   536,    59,
     537,   551,   552,   636,   637,    59,    59,   640,   641,   558,
     562,    59,   570,   579,   303,   649,   678,   284,   582,    59,
     586,    59,    39,    40,    41,    42,   588,    43,   199,   589,
      59,   590,    44,    45,   197,   198,   593,    59,    59,   668,
     669,   594,   692,   604,   671,   599,   603,   605,    59,   606,
     607,   609,    59,   420,   421,   422,   423,   125,   284,   610,
     446,   331,   618,    39,    40,    41,    42,   621,    43,   534,
     623,   453,   331,    44,    45,   689,   624,   625,   626,   627,
     630,   647,   463,   629,   632,   635,   471,   545,   331,   547,
     479,   645,   646,   696,   549,   308,   651,   612,   657,   658,
     663,   331,   659,   661,   136,   665,   199,   672,   673,   676,
     184,   683,   139,   685,   348,   172,   497,   173,   394,   139,
     330,   194,   686,   687,   331,   690,   139,    43,   139,   691,
     694,   174,    44,    45,   376,   139,   139,   139,   139,   139,
     139,   695,   514,   157,   158,   424,   426,   381,   331,   425,
     427,   148,   325,   309,   326,   429,   149,   526,   125,   154,
     464,   513,   595,   596,   284,   390,   504,   396,   601,    39,
      40,    41,    42,   572,    43,   569,   139,   473,   654,    44,
      45,   197,   198,   493,   578,   556,   407,   402,   310,   443,
     321,   441,   276,   541,     0,     0,     0,     0,     0,   409,
       0,     0,     0,     0,     0,   331,     0,     0,   331,     0,
       0,     0,   331,     0,     0,   331,   172,   619,   173,   394,
     638,   330,   428,     0,   430,     0,     0,     0,    43,     0,
     139,   436,   650,    44,    45,   438,     0,     0,   331,     0,
       0,     0,     0,   331,     0,     0,   139,     0,     0,     0,
       0,   564,     0,   667,   331,     0,   331,     0,     0,     0,
       0,   331,     0,     0,     0,     0,     0,     0,   577,   331,
       0,     0,   331,     0,     0,     0,   140,  -325,  -325,  -325,
    -325,  -325,  -325,     0,  -325,  -325,  -325,  -325,  -325,  -325,
     140,   331,   140,     0,   134,     0,   331,   486,  -325,   140,
     140,   140,   140,   140,   140,     0,   135,     0,     0,     0,
       0,     0,    13,     0,     0,   156,     0,    17,     0,     0,
     503,     0,     0,     0,     0,   136,     0,     0,     0,     0,
     430,   331,     0,     0,    26,    27,    28,     0,   515,     0,
     247,     0,     0,   521,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   139,   139,
     139,   139,   139,     0,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,     0,   139,     0,
       0,    35,     0,   137,     0,    37,     0,     0,     0,     0,
      39,    40,    41,    42,   282,    43,     0,     0,     0,     0,
      44,    45,   134,     0,     0,     0,     0,     6,     0,     0,
     247,     0,     0,     0,   135,     0,     0,     0,     0,   546,
      13,   323,     0,    15,     0,    17,   550,     0,    20,   139,
      22,     0,     0,   159,     0,     0,     0,     0,     0,   561,
       0,     0,    26,    27,    28,     0,     0,    29,    30,    31,
     183,     0,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -320,     0,     0,
     585,     0,     0,    34,     0,     0,   587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -27,  -320,    35,
    -320,   137,  -320,    37,  -320,   597,     0,  -320,    39,    40,
      41,    42,     0,    43,     0,     0,     0,     0,    44,    45,
       0,   611,     0,     0,   139,     0,     0,     0,     0,     0,
       0,     0,   140,   140,   140,   140,   140,     0,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,     1,   140,     0,     2,     3,     4,     5,     0,     6,
       7,     0,     8,     0,     0,     9,    10,    11,   194,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,    28,     0,     0,    29,
      30,    31,   194,   247,     0,    32,    33,     0,   283,     0,
       0,   284,     0,     0,     0,   285,    39,    40,    41,    42,
       0,    43,     0,     0,     0,    34,    44,    45,   197,   198,
     286,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,   195,    36,     0,   196,     0,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,     0,     0,     0,
      44,    45,   197,   198,     0,     0,     1,     0,     0,     2,
       3,     4,     5,     0,     6,     7,     0,     8,     0,     0,
       9,    10,    11,   194,     0,     0,    12,    13,   524,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,    33,     0,   442,     0,     0,   284,     0,     0,     0,
     285,    39,    40,    41,    42,     0,    43,     0,     0,     0,
      34,    44,    45,   197,   198,   286,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,   353,    36,     0,
      37,     0,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,     0,     0,     1,    44,    45,     2,     3,     4,
       5,     0,     6,     7,   194,     8,     0,     0,     9,    10,
      11,     0,     0,     0,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,   284,    32,    33,
       0,   285,    39,    40,    41,    42,     0,    43,     0,     0,
       0,     0,    44,    45,   197,   198,   286,     0,    34,     0,
    -326,  -326,  -326,  -326,  -326,  -326,     0,  -326,  -326,  -326,
    -326,  -326,  -326,     0,    35,   389,    36,     0,    37,     0,
       0,  -326,    38,    39,    40,    41,    42,     0,    43,     0,
       0,     0,     1,    44,    45,     2,     3,     4,     5,     0,
       6,     7,   194,     8,     0,     0,     9,    10,    11,     0,
       0,     0,    12,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27,    28,     0,     0,
      29,    30,    31,     0,     0,   284,    32,    33,     0,     0,
      39,    40,    41,    42,     0,    43,     0,     0,     0,     0,
      44,    45,   197,   198,     0,     0,    34,     0,  -290,  -290,
    -290,  -290,  -290,  -290,     0,  -290,  -290,  -290,  -290,  -290,
    -290,     0,    35,     0,    36,     0,    37,     0,     0,  -290,
      38,    39,    40,    41,    42,     0,    43,     0,     0,     0,
       1,    44,    45,   134,     0,     4,     5,     0,     6,     7,
       0,     0,     0,     0,     9,   135,    11,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,  -289,  -289,  -289,  -289,
    -289,  -289,     0,  -289,  -289,  -289,  -289,  -289,  -289,     0,
       0,     0,     0,     0,    34,     0,     0,  -289,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,    36,     0,    37,     0,     0,     0,    38,    39,
      40,    41,    42,     0,    43,     0,     0,     0,     1,    44,
      45,   134,     0,     4,     5,     0,     6,     7,     0,     0,
       0,     0,     9,   399,    11,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
      36,     0,    37,     0,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,     0,     0,     1,    44,    45,   134,
       0,     4,     5,     0,     6,     7,     0,     0,     0,     0,
       9,   135,    11,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,   134,     0,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,   135,
      32,    33,   467,     0,     0,    13,   468,     0,    15,     0,
      17,     0,     0,     0,     0,     0,     0,     0,   136,     0,
      34,     0,     0,     0,     0,     0,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,    35,     0,   574,     0,
      37,     0,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,     0,     0,     0,    44,    45,     0,     0,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,   244,
     245,   246,     0,     0,    35,     0,   137,   134,    37,     0,
       0,     0,     6,    39,    40,    41,    42,     0,    43,   135,
       0,     0,     0,    44,    45,    13,     0,     0,    15,     0,
      17,     0,     0,    20,     0,    22,     0,     0,   159,   134,
       0,     0,     0,     0,     6,     0,     0,    26,    27,    28,
       0,   135,    29,    30,    31,   183,     0,    13,    32,    33,
      15,     0,    17,     0,     0,    20,     0,    22,     0,     0,
     159,     0,   -29,     0,     0,     0,     0,     0,    34,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,    33,   -27,     0,    35,     0,   137,     0,    37,     0,
       0,     0,  -320,    39,    40,    41,    42,     0,    43,     0,
      34,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,   137,   212,
      37,   213,   134,   214,     0,    39,    40,    41,    42,     0,
      43,     0,     0,     0,   135,    44,    45,     0,     0,     0,
      13,     0,     0,    15,     0,    17,     0,     0,     0,     0,
       0,     0,     0,   136,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,   244,   245,   246,     0,     0,    35,
       0,   137,     0,    37,     0,     0,     0,     0,    39,    40,
      41,    42,     0,    43,     0,   134,     3,     0,    44,    45,
       6,     0,     0,     0,     0,     0,     0,   135,     0,     0,
       0,     0,    12,    13,     0,     0,    15,     0,    17,     0,
       0,    20,   322,    22,     0,     0,   159,   134,     0,     0,
       0,     0,     6,     0,     0,    26,    27,    28,     0,   135,
      29,    30,    31,     0,     0,    13,    32,    33,    15,     0,
      17,     0,     0,    20,     0,    22,     0,     0,   159,     0,
       0,     0,     0,     0,     0,     0,    34,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,    35,     0,   137,     0,    37,     0,     0,     0,
       0,    39,    40,    41,    42,     0,    43,     0,    34,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,   137,   393,    37,   394,
       0,   214,     0,    39,    40,    41,    42,   134,    43,     0,
       0,     0,     6,    44,    45,     0,     0,     0,     0,   135,
       0,     0,     0,     0,     0,    13,     0,     0,    15,     0,
      17,     0,     0,    20,     0,    22,     0,     0,   159,   134,
       0,     0,     0,     0,     6,     0,     0,    26,    27,    28,
       0,   135,    29,    30,    31,     0,     0,    13,    32,    33,
      15,     0,    17,     0,     0,    20,     0,    22,     0,     0,
     159,     0,     0,     0,     0,     0,     0,     0,    34,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,    33,     0,     0,    35,     0,   137,   518,    37,   213,
       0,   214,     0,    39,    40,    41,    42,     0,    43,     0,
      34,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,   137,   583,
      37,   394,     0,   214,     0,    39,    40,    41,    42,   134,
      43,     0,     0,     0,     6,    44,    45,     0,     0,     0,
       0,   135,     0,     0,     0,     0,     0,    13,     0,     0,
      15,     0,    17,     0,     0,    20,     0,    22,     0,     0,
     159,   134,     0,     0,     0,     0,     6,     0,     0,    26,
      27,    28,     0,   135,    29,    30,    31,     0,     0,    13,
      32,    33,    15,     0,    17,     0,     0,    20,     0,    22,
       0,     0,   159,     0,     0,     0,     0,     0,     0,     0,
      34,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,    33,     0,   191,    35,     0,   137,     0,
      37,     0,     0,   192,     0,    39,    40,    41,    42,     0,
      43,     0,    34,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   345,    35,     0,
     137,   134,    37,     0,     0,   346,     6,    39,    40,    41,
      42,     0,    43,   135,     0,     0,     0,    44,    45,    13,
       0,     0,    15,     0,    17,     0,     0,    20,     0,    22,
       0,     0,   159,   134,     0,     0,     0,     0,     6,     0,
       0,    26,    27,    28,     0,   135,    29,    30,    31,     0,
       0,    13,    32,    33,    15,     0,    17,     0,     0,    20,
       0,    22,     0,     0,   159,     0,     0,     0,     0,     0,
       0,     0,    34,    26,    27,    28,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,     0,     0,    35,     0,
     137,     0,    37,     0,     0,     0,   160,    39,    40,    41,
      42,     0,    43,     0,    34,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,   137,   435,    37,     0,     0,     0,     0,    39,
      40,    41,    42,   134,    43,     0,     0,     0,     6,    44,
      45,     0,     0,     0,     0,   135,     0,     0,     0,     0,
       0,    13,     0,     0,    15,     0,    17,     0,     0,    20,
       0,    22,     0,     0,   159,   134,     0,     0,     0,     0,
       6,     0,     0,    26,    27,    28,     0,   135,    29,    30,
      31,     0,     0,    13,    32,    33,    15,     0,    17,     0,
       0,    20,     0,    22,     0,     0,   159,     0,     0,     0,
       0,     0,     0,     0,    34,    26,    27,    28,     0,     0,
      29,    30,    31,     0,     0,     0,    32,    33,     0,     0,
      35,     0,   137,     0,    37,     0,     0,   508,     0,    39,
      40,    41,    42,     0,    43,     0,    34,     0,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,     0,   137,   134,    37,     0,     0,   560,
       6,    39,    40,    41,    42,     0,    43,   135,     0,     0,
       0,    44,    45,    13,     0,     0,    15,     0,    17,     0,
       0,    20,     0,    22,     0,     0,   136,   134,     0,     0,
       0,     0,     6,     0,     0,    26,    27,    28,     0,   135,
      29,    30,    31,     0,     0,    13,    32,    33,    15,     0,
      17,     0,     0,    20,     0,    22,     0,     0,   159,     0,
       0,     0,     0,     0,     0,     0,    34,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,    35,     0,   137,     0,    37,     0,     0,     0,
       0,    39,    40,    41,    42,     0,    43,     0,    34,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,   137,     2,    37,     0,
       0,     0,     6,    39,    40,    41,    42,     0,    43,    10,
       0,     0,     0,    44,    45,    13,     0,     0,    15,     0,
      17,     0,     0,    20,     0,    22,     0,     0,   159,   134,
       0,     0,     0,     0,     0,     0,     0,    26,    27,    28,
       0,   135,    29,    30,    31,     0,     0,    13,    32,    33,
      15,     0,    17,     0,     0,     0,     0,     0,     0,     0,
     136,     0,     0,     0,     0,     0,     0,     0,    34,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,   137,     0,    37,     0,
       0,     0,     0,    39,    40,    41,    42,     0,    43,     0,
       0,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,   137,     0,
      37,     0,     0,     0,     0,    39,    40,    41,    42,     0,
      43,     0,     0,     0,  -192,    44,    45,  -192,  -192,     0,
       0,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,     0,
       0,  -192,     0,  -192,     0,     0,     0,  -192,     0,     0,
    -192,     0,  -192,     0,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -192,  -192,  -192,     0,     0,
       0,  -192,  -192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -192,     0,
       0,     0,     0,     0,     0,  -192
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,    36,     4,     0,     6,     7,    92,   435,
      10,   173,    19,    13,   173,   126,     4,   173,   216,   172,
      20,    21,    22,     4,     4,    15,    36,   101,    21,    29,
      30,    31,    32,    33,    34,   615,    36,   126,     4,     6,
      65,    36,   127,    68,    10,   617,    15,    37,     4,   134,
      71,    71,     7,    20,    10,    22,    71,    36,   143,    57,
      58,   172,    29,    30,    31,    32,    33,    34,     5,   101,
      70,    91,     6,     7,    37,   655,    10,    98,    93,    16,
      14,    93,   654,   194,    18,   117,   197,   198,    93,    23,
      94,    54,    92,   102,    21,    95,   177,   106,    25,    33,
     680,    37,    95,   107,   137,    95,    94,    94,   112,   113,
      96,    98,    98,    94,    94,    21,   126,   107,    54,    25,
      54,   202,   112,   113,   124,   209,    95,   137,    94,   555,
      93,    93,   157,   103,   134,   135,   106,   137,    94,    78,
     140,    95,    93,   143,   107,   145,    97,   126,    99,   112,
     113,    78,   152,   153,    92,    94,    37,    93,   137,    98,
      98,    95,   172,   589,    37,   328,    94,   593,   153,   169,
      98,   107,   172,   173,   169,   286,   112,   113,    70,    93,
      92,    73,   293,   609,   194,   296,    98,   197,   198,    97,
      92,    99,   192,   172,   392,   276,    98,   286,   279,   625,
      22,   627,   364,   629,   293,   364,   632,   296,    36,   209,
      54,    55,    56,   298,    95,   194,    97,    37,   197,   198,
       0,   306,    95,   304,    97,    98,   107,   100,   228,    94,
     230,   112,   113,    98,   107,   661,   392,   107,    98,   112,
     113,   101,   112,   113,    66,    67,    68,    69,   118,    91,
     331,   332,   252,   253,   254,   255,   256,    93,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,    71,   272,   228,    14,    95,   286,    97,    18,    96,
     100,    98,    37,   293,    37,   252,   296,   107,    92,   452,
      74,   107,   112,   113,    98,    35,   112,   113,   126,    54,
     300,   301,    93,    76,   314,    37,    97,   286,    99,   137,
      98,   311,   312,   101,   293,   478,   301,   296,    92,   147,
     483,   519,   322,   323,    98,    92,   326,   312,   328,   322,
     330,    98,   494,   326,    63,    64,    65,   165,    93,   501,
      93,   341,   501,   496,   172,   501,    72,    37,   355,   512,
      37,    21,   107,   386,   107,    25,   341,   112,   113,   112,
     113,    93,    92,    96,   364,    98,   194,    54,    98,   197,
     198,   371,    75,   536,    37,   107,   386,    91,   371,    94,
     112,   113,   101,    93,   465,   496,   386,    97,   388,    99,
     471,   472,   107,   605,    92,   102,   103,   112,   113,   399,
      98,    37,     2,   388,    95,   233,    93,   386,   408,   571,
      10,   151,   571,   107,    96,   155,    98,   107,   112,   113,
     107,    21,   112,   113,   164,   112,   113,   167,   253,   254,
      92,    92,   432,   645,   646,   435,    98,    98,   101,   432,
      92,   181,   182,   527,   107,   445,    98,   659,   448,   112,
     113,    92,   452,    37,    96,   455,    98,    98,   286,    95,
      96,    97,    98,   448,   100,   293,    92,   101,   296,    35,
     455,   107,    98,   255,   256,    93,   112,   113,   478,    59,
      60,    61,    62,   483,    98,   485,   496,   101,   117,   229,
      91,   491,   232,   478,   494,    95,   496,    78,   491,    98,
      37,   501,   101,    71,    71,   505,   506,    37,   508,   509,
      94,    98,   512,    97,   101,   103,   102,   496,   102,   103,
     104,   105,    98,   107,   509,   101,    51,   527,   112,   113,
     485,   531,    93,    93,   134,   135,   536,    37,    94,    98,
      93,   574,   101,   143,    98,   145,   531,   101,    93,   101,
     505,   506,   152,   153,   101,   555,    98,    94,   386,   101,
      97,   101,    93,    93,   574,   102,   103,   104,   105,    92,
     107,   571,   172,   173,   574,   112,   113,   107,    98,   574,
      98,   101,   112,   113,     1,   325,    93,     4,    16,   589,
      71,    96,   192,   593,   678,   574,    92,    37,   598,   599,
      93,   101,   602,   603,   604,   605,    96,   107,   692,   609,
     610,   618,   112,   113,    54,    93,    25,    93,    71,   574,
     258,   259,   260,   261,   262,   625,    94,   627,    37,   629,
      93,   459,   632,   461,   634,   635,    92,    95,    93,   639,
      92,    92,    92,   598,   599,   645,   646,   602,   603,    92,
      95,   651,    96,    92,    94,   610,   651,    97,    92,   659,
      52,   661,   102,   103,   104,   105,    97,   107,   496,    95,
     670,    92,   112,   113,   114,   115,    95,   677,   678,   634,
     635,    92,   677,    95,   639,    92,    92,    95,   688,    92,
      92,    95,   692,   263,   264,   265,   266,    37,    97,    13,
     300,   301,    92,   102,   103,   104,   105,    96,   107,   449,
      92,   311,   312,   112,   113,   670,    92,    95,    92,    94,
     101,    94,   322,    95,    95,    92,   326,   467,   328,   469,
     330,    95,    95,   688,   474,   144,    71,     4,    96,    94,
      94,   341,    95,    95,    37,    94,   574,    94,    94,    94,
     159,    94,     6,    95,   163,    95,    96,    97,    98,    13,
     100,    54,    94,    94,   364,    94,    20,   107,    22,    94,
      94,   371,   112,   113,   183,    29,    30,    31,    32,    33,
      34,    94,   386,    13,    13,   267,   269,   196,   388,   268,
     270,     8,   151,   144,   151,   272,     8,   432,    37,   399,
     322,    94,   542,   543,    97,   214,   371,   216,   548,   102,
     103,   104,   105,   501,   107,   496,    70,   326,   615,   112,
     113,   114,   115,   356,   509,   483,   235,   228,   144,   296,
     150,   293,   432,   461,    -1,    -1,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   445,    -1,    -1,   448,    -1,
      -1,    -1,   452,    -1,    -1,   455,    95,    96,    97,    98,
     600,   100,   271,    -1,   273,    -1,    -1,    -1,   107,    -1,
     124,   280,   612,   112,   113,   284,    -1,    -1,   478,    -1,
      -1,    -1,    -1,   483,    -1,    -1,   140,    -1,    -1,    -1,
      -1,   491,    -1,   633,   494,    -1,   496,    -1,    -1,    -1,
      -1,   501,    -1,    -1,    -1,    -1,    -1,    -1,   508,   509,
      -1,    -1,   512,    -1,    -1,    -1,     6,    78,    79,    80,
      81,    82,    83,    -1,    85,    86,    87,    88,    89,    90,
      20,   531,    22,    -1,     6,    -1,   536,   346,    99,    29,
      30,    31,    32,    33,    34,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
     369,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
     379,   571,    -1,    -1,    46,    47,    48,    -1,   387,    -1,
      70,    -1,    -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,   253,
     254,   255,   256,    -1,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,    -1,   272,    -1,
      -1,    93,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   124,   107,    -1,    -1,    -1,    -1,
     112,   113,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,
     140,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,   468,
      24,   151,    -1,    27,    -1,    29,   475,    -1,    32,   323,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,   488,
      -1,    -1,    46,    47,    48,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
     519,    -1,    -1,    77,    -1,    -1,   525,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,   544,    -1,   101,   102,   103,
     104,   105,    -1,   107,    -1,    -1,    -1,    -1,   112,   113,
      -1,   560,    -1,    -1,   408,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   252,   253,   254,   255,   256,    -1,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,     3,   272,    -1,     6,     7,     8,     9,    -1,    11,
      12,    -1,    14,    -1,    -1,    17,    18,    19,    54,    -1,
      -1,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    51,
      52,    53,    54,   323,    -1,    57,    58,    -1,    94,    -1,
      -1,    97,    -1,    -1,    -1,   101,   102,   103,   104,   105,
      -1,   107,    -1,    -1,    -1,    77,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    -1,    97,    -1,    -1,    -1,   101,
     102,   103,   104,   105,    -1,   107,    -1,    -1,    -1,    -1,
     112,   113,   114,   115,    -1,    -1,     3,    -1,    -1,     6,
       7,     8,     9,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    19,    54,    -1,    -1,    23,    24,   408,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,
     101,   102,   103,   104,   105,    -1,   107,    -1,    -1,    -1,
      77,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    -1,
      97,    -1,    -1,    -1,   101,   102,   103,   104,   105,    -1,
     107,    -1,    -1,    -1,     3,   112,   113,     6,     7,     8,
       9,    -1,    11,    12,    54,    14,    -1,    -1,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    51,    52,    53,    -1,    -1,    97,    57,    58,
      -1,   101,   102,   103,   104,   105,    -1,   107,    -1,    -1,
      -1,    -1,   112,   113,   114,   115,   116,    -1,    77,    -1,
      78,    79,    80,    81,    82,    83,    -1,    85,    86,    87,
      88,    89,    90,    -1,    93,    94,    95,    -1,    97,    -1,
      -1,    99,   101,   102,   103,   104,   105,    -1,   107,    -1,
      -1,    -1,     3,   112,   113,     6,     7,     8,     9,    -1,
      11,    12,    54,    14,    -1,    -1,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    -1,    97,    57,    58,    -1,    -1,
     102,   103,   104,   105,    -1,   107,    -1,    -1,    -1,    -1,
     112,   113,   114,   115,    -1,    -1,    77,    -1,    78,    79,
      80,    81,    82,    83,    -1,    85,    86,    87,    88,    89,
      90,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,    99,
     101,   102,   103,   104,   105,    -1,   107,    -1,    -1,    -1,
       3,   112,   113,     6,    -1,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    78,    79,    80,    81,
      82,    83,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,    -1,   101,   102,
     103,   104,   105,    -1,   107,    -1,    -1,    -1,     3,   112,
     113,     6,    -1,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    -1,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,    -1,   101,   102,   103,   104,
     105,    -1,   107,    -1,    -1,    -1,     3,   112,   113,     6,
      -1,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    -1,    18,
      57,    58,    21,    -1,    -1,    24,    25,    -1,    27,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,    -1,   101,   102,   103,   104,   105,    -1,
     107,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    78,
      79,    80,    81,    82,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    93,    -1,    95,     6,    97,    -1,
      -1,    -1,    11,   102,   103,   104,   105,    -1,   107,    18,
      -1,    -1,    -1,   112,   113,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    -1,    34,    -1,    -1,    37,     6,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    46,    47,    48,
      -1,    18,    51,    52,    53,    54,    -1,    24,    57,    58,
      27,    -1,    29,    -1,    -1,    32,    -1,    34,    -1,    -1,
      37,    -1,    71,    -1,    -1,    -1,    -1,    -1,    77,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,    -1,   101,   102,   103,   104,   105,    -1,   107,    -1,
      77,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    96,
      97,    98,     6,   100,    -1,   102,   103,   104,   105,    -1,
     107,    -1,    -1,    -1,    18,   112,   113,    -1,    -1,    -1,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    93,
      -1,    95,    -1,    97,    -1,    -1,    -1,    -1,   102,   103,
     104,   105,    -1,   107,    -1,     6,     7,    -1,   112,   113,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    32,    33,    34,    -1,    -1,    37,     6,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    46,    47,    48,    -1,    18,
      51,    52,    53,    -1,    -1,    24,    57,    58,    27,    -1,
      29,    -1,    -1,    32,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    46,    47,    48,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,    -1,   107,    -1,    77,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    95,    96,    97,    98,
      -1,   100,    -1,   102,   103,   104,   105,     6,   107,    -1,
      -1,    -1,    11,   112,   113,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    -1,    34,    -1,    -1,    37,     6,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    46,    47,    48,
      -1,    18,    51,    52,    53,    -1,    -1,    24,    57,    58,
      27,    -1,    29,    -1,    -1,    32,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    93,    -1,    95,    96,    97,    98,
      -1,   100,    -1,   102,   103,   104,   105,    -1,   107,    -1,
      77,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    96,
      97,    98,    -1,   100,    -1,   102,   103,   104,   105,     6,
     107,    -1,    -1,    -1,    11,   112,   113,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    32,    -1,    34,    -1,    -1,
      37,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    46,
      47,    48,    -1,    18,    51,    52,    53,    -1,    -1,    24,
      57,    58,    27,    -1,    29,    -1,    -1,    32,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    46,    47,    48,    -1,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    92,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,   102,   103,   104,   105,    -1,
     107,    -1,    77,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      95,     6,    97,    -1,    -1,   100,    11,   102,   103,   104,
     105,    -1,   107,    18,    -1,    -1,    -1,   112,   113,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    -1,    34,
      -1,    -1,    37,     6,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    46,    47,    48,    -1,    18,    51,    52,    53,    -1,
      -1,    24,    57,    58,    27,    -1,    29,    -1,    -1,    32,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    46,    47,    48,    -1,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,    -1,   101,   102,   103,   104,
     105,    -1,   107,    -1,    77,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    95,    96,    97,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,     6,   107,    -1,    -1,    -1,    11,   112,
     113,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,
      -1,    34,    -1,    -1,    37,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    46,    47,    48,    -1,    18,    51,    52,
      53,    -1,    -1,    24,    57,    58,    27,    -1,    29,    -1,
      -1,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    46,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,   102,
     103,   104,   105,    -1,   107,    -1,    77,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    95,     6,    97,    -1,    -1,   100,
      11,   102,   103,   104,   105,    -1,   107,    18,    -1,    -1,
      -1,   112,   113,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    32,    -1,    34,    -1,    -1,    37,     6,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    46,    47,    48,    -1,    18,
      51,    52,    53,    -1,    -1,    24,    57,    58,    27,    -1,
      29,    -1,    -1,    32,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    46,    47,    48,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,    -1,   107,    -1,    77,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    95,     6,    97,    -1,
      -1,    -1,    11,   102,   103,   104,   105,    -1,   107,    18,
      -1,    -1,    -1,   112,   113,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    -1,    34,    -1,    -1,    37,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    18,    51,    52,    53,    -1,    -1,    24,    57,    58,
      27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,    -1,   107,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,    -1,    -1,   102,   103,   104,   105,    -1,
     107,    -1,    -1,    -1,     0,   112,   113,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,   101
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    11,    12,    14,    17,
      18,    19,    23,    24,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    46,    47,    48,    51,
      52,    53,    57,    58,    77,    93,    95,    97,   101,   102,
     103,   104,   105,   107,   112,   113,   120,   121,   122,   123,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   142,   150,   151,   152,   153,   154,
     157,   158,   159,   160,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   187,   200,   201,   202,
     203,   206,   207,   208,   209,   210,   215,   217,   218,   222,
     223,   224,   233,   234,   239,   240,   242,   243,   244,   252,
      37,   101,   133,   134,    15,    37,    95,   132,   134,   245,
     246,   101,   133,   101,     6,    18,    37,    95,   134,   136,
     157,   159,   175,     6,    10,    18,    54,    95,   176,   187,
     253,    93,    54,    93,   132,    93,    27,   150,   152,    37,
     101,   134,   174,    93,    97,    99,   155,    93,   174,    95,
     180,   159,    95,    97,   132,   188,   189,   190,   191,   192,
     159,    93,    93,    54,   172,   159,   159,   159,   159,   159,
     159,    92,   100,   174,    54,    94,    97,   114,   115,   122,
     127,   130,   131,   143,   144,   145,   146,   147,   148,   181,
     236,   238,    96,    98,   100,   139,   140,   141,   172,   102,
     106,   103,   106,     0,   107,   112,   113,   124,    71,    97,
      99,   155,    97,    99,   155,    78,    79,    80,    81,    82,
      83,    85,    86,    87,    88,    89,    90,   157,   173,    54,
      55,    56,   161,    57,    58,    63,    64,    65,    22,    66,
      67,    68,    69,    59,    60,    61,    62,    74,    76,    75,
      72,    70,    73,    98,   101,   182,   132,   185,   186,   190,
      91,   101,   157,    94,    97,   101,   116,   122,   127,   130,
     145,   236,   247,   248,   249,   245,    95,   101,   132,   245,
      54,    93,   132,    94,   131,    35,   132,   245,   172,   177,
     243,    54,    93,   132,   117,   250,    94,   122,   254,   255,
     101,   250,    33,   157,   174,   183,   184,   204,    93,   132,
     100,   132,   190,   197,   198,   199,   226,   227,   228,   229,
     230,    93,   174,   155,   101,    92,   100,   156,   172,   174,
     122,   174,   101,    94,     5,    16,   219,   220,    94,   145,
     193,   196,   198,    96,   140,   194,   195,   197,   199,    78,
     149,    98,   101,   149,   174,   174,   172,   132,    92,    98,
     145,   172,   145,   145,   149,    94,    98,    71,    93,    94,
     172,    96,    98,    96,    98,   141,   172,   102,   103,    18,
     175,   216,   223,   174,   134,   174,   122,   172,    51,   172,
     159,   160,   160,   162,   162,   163,   163,   163,   163,   163,
     164,   164,   164,   164,   165,   166,   167,   168,   172,   169,
     172,   149,    98,   101,   149,    96,   172,   235,   172,   236,
      94,   249,    94,   247,   245,    93,   132,   226,    93,    93,
     245,   101,    93,   132,   226,    93,   130,   251,   101,   118,
      94,    98,   101,   132,   188,   190,   205,    21,    25,   101,
     174,   132,   190,   205,    21,    25,   226,   230,    93,   132,
     149,   149,    92,    98,   226,    92,   172,    92,    98,    96,
      92,    93,   180,   220,    71,    94,    98,    96,   197,   199,
      96,    98,    96,   172,   189,    92,    92,    92,   100,    93,
      96,    93,    93,    94,   144,   172,   225,   226,    96,   140,
     141,   172,    96,    96,   157,    71,   186,   181,   231,   232,
      94,    93,    92,   226,   174,   230,    93,    92,   226,   122,
      94,   255,   101,    21,    25,   174,   172,   174,   101,   174,
     172,    92,    92,   226,   230,    95,   229,   230,    92,   175,
     100,   172,    95,   211,   132,   190,   221,   197,    94,   196,
      96,   140,   195,   199,    95,   175,   175,   132,   225,    92,
     230,   237,    92,    96,   141,   172,    52,   172,    97,    95,
      92,    92,   230,    95,    92,   174,   174,   172,    92,    92,
     101,   174,    92,    92,    95,    95,    92,    92,   231,    95,
      13,   172,     4,    10,    94,   212,   213,   214,    92,    96,
     199,    96,   175,    92,    92,    95,    92,    94,   231,    95,
     101,   231,    95,   101,    92,    92,   175,   175,   174,    92,
     175,   175,   231,   241,   241,    95,    95,    94,   231,   175,
     174,    71,    94,   213,   214,   212,   180,    96,    94,    95,
     231,    95,   231,    94,   231,    94,   231,   174,   175,   175,
      92,   175,    94,    94,   241,   241,    94,    71,   181,    94,
     212,    94,   241,    94,   231,    95,    94,    94,    92,   175,
      94,    94,   181,    94,    94,    94,   175
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 5:
#line 209 "yacc.y"
    {}
    break;

  case 7:
#line 214 "yacc.y"
    {}
    break;

  case 8:
#line 215 "yacc.y"
    {}
    break;

  case 14:
#line 238 "yacc.y"
    { printf("boolean,%d,%d,%d\n", line, 4, column); }
    break;

  case 15:
#line 239 "yacc.y"
    { printf("boolean,%d,%d,%d\n", line, 5, column); }
    break;

  case 18:
#line 255 "yacc.y"
    { printf("double,%d,%lu,%d\n", line, strlen((yyvsp[(1) - (1)].sval)), column); }
    break;

  case 19:
#line 259 "yacc.y"
    { printf("integer,%d,%lu,%d\n", line, strlen((yyvsp[(1) - (1)].sval)), column); }
    break;

  case 22:
#line 270 "yacc.y"
    { printf("string,%d,%lu,%d\n", line, strlen((yyvsp[(1) - (3)].sval)), column); }
    break;

  case 23:
#line 271 "yacc.y"
    { printf("string,%d,%lu,%d\n", line, strlen((yyvsp[(1) - (3)].sval)), column); }
    break;

  case 25:
#line 288 "yacc.y"
    {}
    break;

  case 27:
#line 293 "yacc.y"
    {}
    break;

  case 29:
#line 298 "yacc.y"
    {}
    break;

  case 31:
#line 310 "yacc.y"
    {}
    break;

  case 73:
#line 396 "yacc.y"
    { printf("property_name,%d,%lu,%d\n", line, strlen((yyvsp[(1) - (1)].sval)), column); }
    break;

  case 84:
#line 435 "yacc.y"
    {}
    break;

  case 85:
#line 437 "yacc.y"
    {}
    break;

  case 89:
#line 454 "yacc.y"
    { printf("- new expression at line%d\n", line); }
    break;

  case 97:
#line 472 "yacc.y"
    { printf("- (ARGS) at line %d\n", line); }
    break;

  case 106:
#line 503 "yacc.y"
    { printf("- DELETE at line %d\n", line); }
    break;

  case 107:
#line 504 "yacc.y"
    { printf("- VOID at line %d\n", line); }
    break;

  case 108:
#line 505 "yacc.y"
    { printf("- TYPEOF at line %d\n", line); }
    break;

  case 109:
#line 506 "yacc.y"
    { printf("- UNARY_ADD at line %d\n", line); }
    break;

  case 110:
#line 507 "yacc.y"
    { printf("- UNARY_SUBTRACT at line %d\n", line); }
    break;

  case 111:
#line 508 "yacc.y"
    { printf("- ADD at line %d\n", line); }
    break;

  case 112:
#line 509 "yacc.y"
    { printf("subtract,%d,%d,%d\n", line, 1, column); }
    break;

  case 113:
#line 510 "yacc.y"
    { printf("- BITWISE_NOT at line %d\n", line); }
    break;

  case 114:
#line 511 "yacc.y"
    { printf("- LOGICAL_NOT at line %d\n", line); }
    break;

  case 117:
#line 524 "yacc.y"
    { printf("- MULTIPLY at line %d\n", line); }
    break;

  case 118:
#line 525 "yacc.y"
    { printf("- DIVIDE at line %d\n", line); }
    break;

  case 119:
#line 526 "yacc.y"
    { printf("- MODULO at line %d\n", line); }
    break;

  case 121:
#line 535 "yacc.y"
    { printf("- BINARY ADD at line %d\n", line); }
    break;

  case 122:
#line 536 "yacc.y"
    { printf("- BINARY SUBTRACT at line %d\n", line); }
    break;

  case 124:
#line 545 "yacc.y"
    { printf("- LEFT_SHIFT at line %d\n", line); }
    break;

  case 125:
#line 546 "yacc.y"
    { printf("- SIGNED_RIGHT_SHIFT at line %d\n", line); }
    break;

  case 126:
#line 547 "yacc.y"
    { printf("- UNSIGNED_RIGHT_SHIFT at line %d\n", line); }
    break;

  case 128:
#line 556 "yacc.y"
    { printf("- LESS_THAN at line %d\n", line); }
    break;

  case 129:
#line 557 "yacc.y"
    { printf("- GREATER_THAN at line %d\n", line); }
    break;

  case 130:
#line 558 "yacc.y"
    { printf("- LESS_THAN_OR_EQUAL at line %d\n", line); }
    break;

  case 131:
#line 559 "yacc.y"
    { printf("- GREATER_THAN_OR_EQUAL at line %d\n", line); }
    break;

  case 132:
#line 560 "yacc.y"
    { printf("- INSTANCEOF at line %d\n", line); }
    break;

  case 139:
#line 587 "yacc.y"
    { printf("- BITWISE_AND at line %d\n", line);  }
    break;

  case 141:
#line 592 "yacc.y"
    { printf("- BITWISE_XOR at line %d\n", line);  }
    break;

  case 143:
#line 597 "yacc.y"
    { printf("- BITWISE_OR at line %d\n", line);  }
    break;

  case 145:
#line 606 "yacc.y"
    { printf("- LOGICAL_AND at line %d\n", line); }
    break;

  case 147:
#line 611 "yacc.y"
    { printf("- LOGICAL_OR at line %d\n", line); }
    break;

  case 149:
#line 620 "yacc.y"
    { printf("ConditionalExpression at line %d\n", line); }
    break;

  case 153:
#line 631 "yacc.y"
    { printf("- ASSIGNMENT at line %d\n", line); }
    break;

  case 154:
#line 632 "yacc.y"
    { printf("- ASSIGNMENT with OPERATOR at line %d\n", line); }
    break;

  case 155:
#line 636 "yacc.y"
    { printf("- MULTIPLICATION_ASSIGNMENT at line %d\n", line);  }
    break;

  case 156:
#line 637 "yacc.y"
    { printf("- DIVISION_ASSIGNMENT at line %d\n", line);  }
    break;

  case 157:
#line 638 "yacc.y"
    { printf("- MODULUS_ASSIGNMENT at line %d\n", line);  }
    break;

  case 158:
#line 639 "yacc.y"
    { printf("- ADDITION_ASSIGNMENT at line %d\n", line);  }
    break;

  case 159:
#line 640 "yacc.y"
    { printf("- SUBTRACTION_ASSIGNMENT at line %d\n", line);  }
    break;

  case 160:
#line 641 "yacc.y"
    { printf("- LEFT_SHIFT_ASSIGNMENT at line %d\n", line);  }
    break;

  case 161:
#line 642 "yacc.y"
    { printf("- SIGNED_RIGHT_SHIFT_ASSIGNMENT at line %d\n", line);  }
    break;

  case 162:
#line 643 "yacc.y"
    { printf("- UNSIGNED_RIGHT_SHIFT_ASSIGNMENT at line %d\n", line);  }
    break;

  case 163:
#line 644 "yacc.y"
    { printf("- BITWISE_AND_ASSIGNMENT at line %d\n", line);  }
    break;

  case 164:
#line 645 "yacc.y"
    { printf("- BITWISE_XOR_ASSIGNMENT at line %d\n", line);  }
    break;

  case 165:
#line 646 "yacc.y"
    { printf("- BITWISE_OR_ASSIGNMENT at line %d\n", line);  }
    break;

  case 168:
#line 663 "yacc.y"
    {}
    break;

  case 169:
#line 664 "yacc.y"
    {}
    break;

  case 170:
#line 665 "yacc.y"
    {}
    break;

  case 171:
#line 666 "yacc.y"
    {}
    break;

  case 173:
#line 668 "yacc.y"
    {}
    break;

  case 174:
#line 669 "yacc.y"
    {}
    break;

  case 175:
#line 670 "yacc.y"
    {}
    break;

  case 176:
#line 671 "yacc.y"
    {}
    break;

  case 177:
#line 672 "yacc.y"
    {}
    break;

  case 178:
#line 673 "yacc.y"
    {}
    break;

  case 179:
#line 674 "yacc.y"
    {}
    break;

  case 180:
#line 675 "yacc.y"
    {}
    break;

  case 181:
#line 676 "yacc.y"
    {}
    break;

  case 191:
#line 705 "yacc.y"
    { printf("- {BLOCK} at line %d\n", line); }
    break;

  case 239:
#line 846 "yacc.y"
    { printf("- IF ELSE at line %d\n", line); }
    break;

  case 240:
#line 847 "yacc.y"
    { printf("- IF at line %d\n", line); }
    break;

  case 275:
#line 951 "yacc.y"
    { printf("- STATEMENT (:) at line %d\n", line); }
    break;

  case 278:
#line 964 "yacc.y"
    { printf("THROW at line %d\n", line); }
    break;

  case 289:
#line 1007 "yacc.y"
    {}
    break;

  case 290:
#line 1008 "yacc.y"
    {}
    break;

  case 304:
#line 1053 "yacc.y"
    { printf("- ArrowFunction at line %d\n", line); }
    break;

  case 310:
#line 1073 "yacc.y"
    {}
    break;

  case 311:
#line 1074 "yacc.y"
    {}
    break;

  case 312:
#line 1075 "yacc.y"
    {}
    break;

  case 317:
#line 1096 "yacc.y"
    {}
    break;

  case 318:
#line 1097 "yacc.y"
    {}
    break;

  case 320:
#line 1105 "yacc.y"
    {}
    break;

  case 321:
#line 1106 "yacc.y"
    {}
    break;

  case 322:
#line 1107 "yacc.y"
    {}
    break;

  case 324:
#line 1116 "yacc.y"
    { printf("- ClassDeclaration at line %d\n", line); }
    break;

  case 325:
#line 1120 "yacc.y"
    {}
    break;

  case 326:
#line 1121 "yacc.y"
    { printf("- ClassExpression at line %d\n", line); }
    break;

  case 331:
#line 1132 "yacc.y"
    { printf("- ClassHeritage at line %d\n", line); }
    break;

  case 332:
#line 1136 "yacc.y"
    { printf("- ClassBody at line %d\n", line); }
    break;

  case 338:
#line 1206 "yacc.y"
    {}
    break;


/* Line 1267 of yacc.c.  */
#line 3225 "y.tab.c"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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


#line 1259 "yacc.y"


#include "lex.yy.c"

void yyerror(char *s) {
    fprintf(stderr, "%s at line %d: %s\n", jserror, yylineno, s);
}

int main(void) {
    yyparse();
    return 0;
}

