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
     CONSOLE = 258,
     BREAK = 259,
     CASE = 260,
     CATCH = 261,
     CLASS = 262,
     CONST = 263,
     CONTINUE = 264,
     DEBUGGER = 265,
     DEFAULT = 266,
     DELETE = 267,
     DO = 268,
     ELSE = 269,
     EXPORT = 270,
     EXTENDS = 271,
     FINALLY = 272,
     FOR = 273,
     FUNCTION = 274,
     IF = 275,
     IMPORT = 276,
     IN = 277,
     INSTANCEOF = 278,
     LET = 279,
     NEW = 280,
     OF = 281,
     RETURN = 282,
     SUPER = 283,
     SWITCH = 284,
     THIS = 285,
     THROW = 286,
     TRY = 287,
     TYPEOF = 288,
     VAR = 289,
     VOID = 290,
     WHILE = 291,
     WITH = 292,
     YIELD = 293,
     ENUM = 294,
     AWAIT = 295,
     IMPLEMENTS = 296,
     INTERFACE = 297,
     PACKAGE = 298,
     PRIVATE = 299,
     PROTECTED = 300,
     PUBLIC = 301,
     LITERAL_NULL = 302,
     LITERAL_TRUE = 303,
     LITERAL_FALSE = 304,
     LITERAL_UNDEFINED = 305,
     LITERAL_NAN = 306,
     UNARY_ADD = 307,
     UNARY_SUBTRACT = 308,
     LOGICAL_NOT = 309,
     MULTIPLY = 310,
     DIVIDE = 311,
     MODULO = 312,
     ADD = 313,
     SUBTRACT = 314,
     EQUAL = 315,
     NOT_EQUAL = 316,
     EXACTLY_EQUAL = 317,
     NOT_EXACTLY_EQUAL = 318,
     LEFT_SHIFT = 319,
     SIGNED_RIGHT_SHIFT = 320,
     UNSIGNED_RIGHT_SHIFT = 321,
     LESS_THAN = 322,
     GREATER_THAN = 323,
     LESS_THAN_OR_EQUAL = 324,
     GREATER_THAN_OR_EQUAL = 325,
     QUESTION_MARK = 326,
     COLON = 327,
     LOGICAL_AND = 328,
     LOGICAL_OR = 329,
     BITWISE_AND = 330,
     BITWISE_OR = 331,
     BITWISE_XOR = 332,
     BITWISE_NOT = 333,
     ASSIGNMENT = 334,
     ADDITION_ASSIGNMENT = 335,
     SUBTRACTION_ASSIGNMENT = 336,
     MULTIPLICATION_ASSIGNMENT = 337,
     DIVISION_ASSIGNMENT = 338,
     MODULUS_ASSIGNMENT = 339,
     EXPONENTIATION_ASSIGNMENT = 340,
     LEFT_SHIFT_ASSIGNMENT = 341,
     SIGNED_RIGHT_SHIFT_ASSIGNMENT = 342,
     UNSIGNED_RIGHT_SHIFT_ASSIGNMENT = 343,
     BITWISE_AND_ASSIGNMENT = 344,
     BITWISE_XOR_ASSIGNMENT = 345,
     BITWISE_OR_ASSIGNMENT = 346,
     ARROW_FUNCTION = 347,
     RIGHT_PAREN = 348,
     LEFT_PAREN = 349,
     RIGHT_BRACE = 350,
     LEFT_BRACE = 351,
     RIGHT_BRACKET = 352,
     LEFT_BRACKET = 353,
     COMMA = 354,
     FULL_STOP = 355,
     ELLIPSIS = 356,
     SEMICOLON = 357,
     DOUBLE_QUOTE = 358,
     SINGLE_QUOTE = 359,
     VALUE_INTEGER = 360,
     VALUE_DOUBLE = 361,
     VALUE_STRING = 362,
     IDENTIFIER = 363,
     LINE_FEED = 364,
     CARRIAGE_RETURN = 365,
     LINE_SEPARATOR = 366,
     PARAGRAPH_SEPARATOR = 367
   };
#endif
/* Tokens.  */
#define END_OF_FILE 0
#define CONSOLE 258
#define BREAK 259
#define CASE 260
#define CATCH 261
#define CLASS 262
#define CONST 263
#define CONTINUE 264
#define DEBUGGER 265
#define DEFAULT 266
#define DELETE 267
#define DO 268
#define ELSE 269
#define EXPORT 270
#define EXTENDS 271
#define FINALLY 272
#define FOR 273
#define FUNCTION 274
#define IF 275
#define IMPORT 276
#define IN 277
#define INSTANCEOF 278
#define LET 279
#define NEW 280
#define OF 281
#define RETURN 282
#define SUPER 283
#define SWITCH 284
#define THIS 285
#define THROW 286
#define TRY 287
#define TYPEOF 288
#define VAR 289
#define VOID 290
#define WHILE 291
#define WITH 292
#define YIELD 293
#define ENUM 294
#define AWAIT 295
#define IMPLEMENTS 296
#define INTERFACE 297
#define PACKAGE 298
#define PRIVATE 299
#define PROTECTED 300
#define PUBLIC 301
#define LITERAL_NULL 302
#define LITERAL_TRUE 303
#define LITERAL_FALSE 304
#define LITERAL_UNDEFINED 305
#define LITERAL_NAN 306
#define UNARY_ADD 307
#define UNARY_SUBTRACT 308
#define LOGICAL_NOT 309
#define MULTIPLY 310
#define DIVIDE 311
#define MODULO 312
#define ADD 313
#define SUBTRACT 314
#define EQUAL 315
#define NOT_EQUAL 316
#define EXACTLY_EQUAL 317
#define NOT_EXACTLY_EQUAL 318
#define LEFT_SHIFT 319
#define SIGNED_RIGHT_SHIFT 320
#define UNSIGNED_RIGHT_SHIFT 321
#define LESS_THAN 322
#define GREATER_THAN 323
#define LESS_THAN_OR_EQUAL 324
#define GREATER_THAN_OR_EQUAL 325
#define QUESTION_MARK 326
#define COLON 327
#define LOGICAL_AND 328
#define LOGICAL_OR 329
#define BITWISE_AND 330
#define BITWISE_OR 331
#define BITWISE_XOR 332
#define BITWISE_NOT 333
#define ASSIGNMENT 334
#define ADDITION_ASSIGNMENT 335
#define SUBTRACTION_ASSIGNMENT 336
#define MULTIPLICATION_ASSIGNMENT 337
#define DIVISION_ASSIGNMENT 338
#define MODULUS_ASSIGNMENT 339
#define EXPONENTIATION_ASSIGNMENT 340
#define LEFT_SHIFT_ASSIGNMENT 341
#define SIGNED_RIGHT_SHIFT_ASSIGNMENT 342
#define UNSIGNED_RIGHT_SHIFT_ASSIGNMENT 343
#define BITWISE_AND_ASSIGNMENT 344
#define BITWISE_XOR_ASSIGNMENT 345
#define BITWISE_OR_ASSIGNMENT 346
#define ARROW_FUNCTION 347
#define RIGHT_PAREN 348
#define LEFT_PAREN 349
#define RIGHT_BRACE 350
#define LEFT_BRACE 351
#define RIGHT_BRACKET 352
#define LEFT_BRACKET 353
#define COMMA 354
#define FULL_STOP 355
#define ELLIPSIS 356
#define SEMICOLON 357
#define DOUBLE_QUOTE 358
#define SINGLE_QUOTE 359
#define VALUE_INTEGER 360
#define VALUE_DOUBLE 361
#define VALUE_STRING 362
#define IDENTIFIER 363
#define LINE_FEED 364
#define CARRIAGE_RETURN 365
#define LINE_SEPARATOR 366
#define PARAGRAPH_SEPARATOR 367




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex(void);
void yyerror(char *);

extern int line;
extern int column;

char *jserror = "- [Jigh-Sight Error]";
char *jserrortype = "ERROR TYPE";

struct variables
{
  char *name;
  //int type;
  union
  {
    double double_var;
    bool boolean_var;
    int int_value;
    char *string_value;
  } reference;
  struct variables *next;
};

typedef struct variables variables;

/* A chain of 'struct variables' */
extern struct variables *store;

variables *putvar (char *, char *);
char* getvar (char const *);

/* A chain of 'struct variables' */
variables *store;
//variables *identifier(char *identifier_name);
void display(variables *store);

/*static void storeVariable (char *identifier_name, char *value) {
  variables *vars = putvar (identifier_name, FNCT);
  vars->reference.string_value = value;
}*/



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
#line 164 "yacc.y"
{
    int int_value;
    double double_value;
    char* string_value;
    bool bool_value;
    char *char_value;

    variables *store;
}
/* Line 193 of yacc.c.  */
#line 382 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 395 "y.tab.c"

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
#define YYFINAL  220
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3128

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  120
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  354
/* YYNRULES -- Number of states.  */
#define YYNSTATES  696

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   372

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
       2,     2,     2,     2,     2,     2,     2,   119,     2,     2,
       2,     2,   118,     2,     2,     2,     2,     2,     2,     2,
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
     115,   116,   117
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    10,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    77,    80,
      85,    92,    94,    96,    98,   100,   103,   107,   111,   117,
     122,   125,   127,   130,   132,   137,   141,   146,   150,   152,
     155,   158,   161,   165,   170,   172,   176,   178,   180,   184,
     186,   188,   190,   192,   194,   196,   200,   203,   206,   209,
     211,   216,   220,   222,   226,   231,   235,   237,   240,   243,
     245,   248,   253,   257,   260,   263,   267,   269,   272,   276,
     281,   283,   285,   291,   293,   296,   299,   302,   305,   308,
     311,   314,   317,   320,   322,   326,   328,   330,   332,   334,
     338,   342,   344,   348,   352,   355,   357,   361,   365,   369,
     373,   377,   379,   383,   387,   391,   395,   397,   401,   403,
     407,   409,   413,   415,   419,   421,   425,   427,   433,   435,
     437,   439,   443,   447,   449,   451,   453,   455,   457,   459,
     461,   463,   465,   467,   469,   471,   475,   477,   479,   481,
     483,   485,   487,   489,   491,   493,   495,   497,   499,   501,
     503,   505,   507,   509,   511,   517,   519,   521,   523,   525,
     527,   531,   534,   536,   539,   541,   543,   547,   549,   551,
     553,   557,   559,   562,   565,   569,   571,   575,   577,   580,
     583,   585,   587,   590,   594,   599,   602,   606,   610,   615,
     619,   625,   631,   638,   640,   644,   646,   650,   652,   655,
     657,   661,   663,   665,   668,   670,   673,   676,   678,   681,
     689,   695,   703,   709,   717,   727,   738,   747,   755,   764,
     772,   780,   789,   797,   800,   802,   804,   807,   811,   814,
     818,   821,   825,   831,   837,   840,   844,   849,   854,   860,
     862,   865,   869,   874,   877,   881,   885,   887,   889,   893,
     897,   901,   906,   912,   915,   917,   919,   922,   931,   939,
     948,   956,   958,   959,   961,   963,   965,   969,   971,   975,
     977,   979,   981,   982,   984,   988,   990,   992,   994,   998,
    1006,  1008,  1016,  1025,  1027,  1036,  1046,  1055,  1065,  1074,
    1076,  1078,  1081,  1085,  1089,  1092,  1095,  1099,  1102,  1106,
    1110,  1115,  1118,  1120,  1122,  1125,  1127,  1130,  1132,  1135,
    1137,  1142,  1147,  1151,  1154,  1157,  1161,  1165,  1170,  1173,
    1177,  1182,  1184,  1188,  1190
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     121,     0,    -1,    -1,   122,    -1,   182,    -1,   124,    -1,
     123,   125,    -1,   114,    -1,   113,    -1,   108,    -1,   114,
      -1,   113,    -1,   108,    -1,    47,    -1,    48,    -1,    49,
      -1,   129,    -1,   130,    -1,   106,    -1,   105,    -1,   107,
      -1,   135,    -1,    38,    -1,   135,    -1,    38,    -1,   135,
      -1,    38,    -1,   123,    -1,    30,    -1,   132,    -1,   138,
      -1,   139,    -1,   143,    -1,   225,    -1,   245,    -1,   241,
      -1,   137,    -1,    94,   175,    93,    -1,    94,    93,    -1,
      94,   101,   133,    93,    -1,    94,   175,    99,   101,   133,
      93,    -1,   126,    -1,   127,    -1,   128,    -1,   131,    -1,
      98,    97,    -1,    98,   141,    97,    -1,    98,   140,    97,
      -1,    98,   140,    99,   141,    97,    -1,    98,   140,    99,
      97,    -1,   141,   173,    -1,   173,    -1,   141,   142,    -1,
     142,    -1,   140,    99,   141,   173,    -1,   140,    99,   173,
      -1,   140,    99,   141,   142,    -1,   140,    99,   142,    -1,
      99,    -1,   141,    99,    -1,   101,   173,    -1,    96,    95,
      -1,    96,   144,    95,    -1,    96,   144,    99,    95,    -1,
     145,    -1,   144,    99,   145,    -1,   132,    -1,   149,    -1,
     146,    72,   173,    -1,   237,    -1,   147,    -1,   148,    -1,
     123,    -1,   131,    -1,   128,    -1,    98,   173,    97,    -1,
     132,   150,    -1,    79,   138,    -1,    79,   173,    -1,   136,
      -1,   151,    98,   175,    97,    -1,   151,   100,   135,    -1,
     152,    -1,    25,   151,   156,    -1,    28,    98,   175,    97,
      -1,    28,   100,   123,    -1,   151,    -1,    25,   153,    -1,
     151,   156,    -1,   155,    -1,   154,   156,    -1,   154,    98,
     175,    97,    -1,   154,   100,   123,    -1,    28,   156,    -1,
      94,    93,    -1,    94,   157,    93,    -1,   173,    -1,   101,
     173,    -1,   157,    99,   173,    -1,   157,    99,   101,   173,
      -1,   153,    -1,   154,    -1,   158,   158,    52,   158,    53,
      -1,   159,    -1,    12,   160,    -1,    35,   160,    -1,    33,
     160,    -1,    52,   160,    -1,    53,   160,    -1,    58,   160,
      -1,    59,   160,    -1,    78,   160,    -1,    54,   160,    -1,
     160,    -1,   161,   162,   160,    -1,    55,    -1,    56,    -1,
      57,    -1,   161,    -1,   163,    58,   161,    -1,   163,    59,
     161,    -1,   163,    -1,   164,    64,   163,    -1,   164,    65,
     163,    -1,   164,    66,    -1,   164,    -1,   165,    67,   164,
      -1,   165,    68,   164,    -1,   165,    69,   164,    -1,   165,
      70,   164,    -1,   165,    23,   164,    -1,   165,    -1,   166,
      60,   165,    -1,   166,    61,   165,    -1,   166,    62,   165,
      -1,   166,    63,   165,    -1,   166,    -1,   167,    75,   166,
      -1,   167,    -1,   168,    77,   167,    -1,   168,    -1,   169,
      76,   168,    -1,   169,    -1,   170,    73,   169,    -1,   170,
      -1,   171,    74,   170,    -1,   171,    -1,   171,    71,   173,
      72,   173,    -1,   172,    -1,   243,    -1,   234,    -1,   158,
      79,   173,    -1,   158,   174,   173,    -1,    82,    -1,    83,
      -1,    84,    -1,    80,    -1,    81,    -1,    86,    -1,    87,
      -1,    88,    -1,    89,    -1,    90,    -1,    91,    -1,   173,
      -1,   175,    99,   173,    -1,   180,    -1,   188,    -1,   201,
      -1,   202,    -1,   203,    -1,   179,    -1,   209,    -1,   207,
      -1,   208,    -1,   210,    -1,   216,    -1,   218,    -1,   219,
      -1,   223,    -1,   178,    -1,   244,    -1,   184,    -1,   253,
      -1,     3,    94,   133,    93,   102,    -1,   224,    -1,   240,
      -1,   204,    -1,   211,    -1,   181,    -1,    96,   182,    95,
      -1,    96,    95,    -1,   183,    -1,   182,   183,    -1,   176,
      -1,   177,    -1,   185,   186,   102,    -1,    24,    -1,     8,
      -1,   187,    -1,   186,    99,   187,    -1,   133,    -1,   133,
     150,    -1,   191,   150,    -1,    34,   189,   102,    -1,   190,
      -1,   189,    99,   190,    -1,   133,    -1,   133,   150,    -1,
     191,   150,    -1,   192,    -1,   193,    -1,    96,    95,    -1,
      96,   194,    95,    -1,    96,   194,    99,    95,    -1,    98,
      97,    -1,    98,   200,    97,    -1,    98,   141,    97,    -1,
      98,   141,   200,    97,    -1,    98,   195,    97,    -1,    98,
     195,    99,   141,    97,    -1,    98,   195,    99,   200,    97,
      -1,    98,   195,    99,   141,   200,    97,    -1,   197,    -1,
     194,    99,   197,    -1,   196,    -1,   195,    99,   196,    -1,
     198,    -1,   141,   198,    -1,   199,    -1,   146,    72,   198,
      -1,   199,    -1,   191,    -1,   191,   150,    -1,   133,    -1,
     133,   150,    -1,   101,   133,    -1,   102,    -1,   175,   102,
      -1,    20,    94,   175,    93,   176,    14,   176,    -1,    20,
      94,   175,    93,   176,    -1,    13,   176,    36,    94,   175,
      93,   102,    -1,    36,    94,   175,    93,   176,    -1,    36,
      94,   175,    93,    96,   176,    95,    -1,    18,    94,   175,
     102,   175,   102,   175,    93,   176,    -1,    18,    94,    34,
     189,   102,   175,   102,   175,    93,   176,    -1,    18,    94,
     184,   175,   102,   175,    93,   176,    -1,    18,    94,   158,
      22,   175,    93,   176,    -1,    18,    94,    34,   206,    22,
     175,    93,   176,    -1,    18,    94,   205,    22,   175,    93,
     176,    -1,    18,    94,   158,    26,   173,    93,   176,    -1,
      18,    94,    34,   206,    26,   173,    93,   176,    -1,    18,
      94,   205,    26,   173,    93,   176,    -1,   185,   206,    -1,
     133,    -1,   191,    -1,     9,   102,    -1,     9,   134,   102,
      -1,     4,   102,    -1,     4,   134,   102,    -1,    27,   102,
      -1,    27,   175,   102,    -1,    37,    94,   175,    93,   176,
      -1,    29,    94,   175,    93,   212,    -1,    96,    95,    -1,
      96,   213,    95,    -1,    96,   215,   213,    95,    -1,    96,
     213,   215,    95,    -1,    96,   213,   215,   213,    95,    -1,
     214,    -1,   213,   214,    -1,     5,   175,    72,    -1,     5,
     175,    72,   182,    -1,    11,    72,    -1,    11,    72,   182,
      -1,   134,    72,   217,    -1,   176,    -1,   224,    -1,    31,
     175,   102,    -1,    32,   181,   220,    -1,    32,   181,   221,
      -1,    32,   181,   220,   221,    -1,     6,    94,   222,    93,
     181,    -1,    17,   181,    -1,   133,    -1,   191,    -1,    10,
     102,    -1,    19,   133,    94,   227,    93,    96,   232,    95,
      -1,    19,    94,   227,    93,    96,   232,    95,    -1,    19,
     133,    94,   227,    93,    96,   232,    95,    -1,    19,    94,
     227,    93,    96,   232,    95,    -1,   227,    -1,    -1,   228,
      -1,   230,    -1,   229,    -1,   229,    99,   230,    -1,   231,
      -1,   229,    99,   231,    -1,   200,    -1,   198,    -1,   233,
      -1,    -1,   182,    -1,   235,    92,   236,    -1,   133,    -1,
     137,    -1,   173,    -1,    97,   232,    98,    -1,   146,    94,
     226,    93,    95,   232,    96,    -1,   239,    -1,   115,   146,
      94,    93,    96,   232,    95,    -1,   116,   146,    94,   238,
      93,    96,   232,    95,    -1,   231,    -1,    55,   146,    94,
     226,    93,    96,   242,    95,    -1,    19,    55,   133,    94,
     231,    93,    96,   242,    95,    -1,    19,    55,    94,   231,
      93,    96,   242,    95,    -1,    19,    55,   133,    94,   227,
      93,    96,   242,    95,    -1,    19,    55,    94,   227,    93,
      96,   242,    95,    -1,   232,    -1,    38,    -1,    38,   173,
      -1,    38,    55,   173,    -1,     7,   133,   246,    -1,     7,
     246,    -1,     7,   246,    -1,     7,   133,   246,    -1,    96,
      95,    -1,   247,    96,    95,    -1,    96,   248,    95,    -1,
     247,    96,   248,    95,    -1,    16,   158,    -1,   249,    -1,
     250,    -1,   249,   250,    -1,   237,    -1,   117,   237,    -1,
     102,    -1,   118,   252,    -1,   131,    -1,    15,    55,   251,
     102,    -1,    15,   254,   251,   102,    -1,    15,   254,   102,
      -1,    15,   188,    -1,    15,   177,    -1,    15,    11,   178,
      -1,    15,    11,   244,    -1,    15,    11,   173,   102,    -1,
      96,    95,    -1,    96,   255,    95,    -1,    96,   255,    99,
      95,    -1,   256,    -1,   255,    99,   256,    -1,   123,    -1,
     123,   119,   123,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   204,   204,   206,   210,   237,   238,   242,   243,   244,
     248,   249,   250,   258,   266,   267,   275,   282,   283,   287,
     296,   312,   313,   317,   318,   322,   323,   327,   335,   336,
     337,   338,   339,   340,   341,   342,   345,   349,   350,   351,
     352,   360,   361,   362,   363,   371,   372,   373,   374,   375,
     379,   380,   381,   382,   383,   384,   385,   386,   390,   391,
     395,   403,   404,   405,   409,   410,   414,   415,   416,   417,
     421,   422,   426,   427,   428,   432,   436,   440,   441,   457,
     458,   459,   461,   463,   467,   468,   479,   480,   484,   485,
     486,   487,   488,   493,   497,   498,   502,   503,   504,   505,
     509,   510,   518,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   545,   546,   550,   551,   552,   560,   561,
     562,   570,   571,   572,   573,   581,   582,   583,   584,   585,
     586,   600,   601,   602,   603,   604,   612,   613,   617,   618,
     622,   623,   631,   632,   636,   637,   645,   646,   654,   655,
     656,   657,   658,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   680,   681,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   702,
     706,   707,   708,   709,   710,   714,   715,   719,   720,   728,
     732,   733,   737,   738,   742,   743,   751,   755,   756,   760,
     761,   765,   766,   767,   775,   779,   780,   784,   785,   786,
     794,   795,   799,   800,   801,   805,   806,   807,   808,   809,
     810,   811,   812,   816,   817,   821,   822,   826,   827,   831,
     832,   836,   837,   838,   842,   843,   847,   855,   864,   873,
     874,   882,   883,   884,   886,   887,   888,   890,   891,   892,
     893,   894,   895,   899,   903,   904,   912,   913,   921,   922,
     930,   931,   939,   947,   951,   952,   953,   954,   955,   959,
     960,   964,   965,   969,   970,   978,   982,   983,   991,   999,
    1000,  1001,  1005,  1009,  1013,  1014,  1021,  1029,  1030,  1034,
    1035,  1039,  1042,  1044,  1048,  1049,  1050,  1054,  1055,  1059,
    1063,  1067,  1070,  1072,  1080,  1084,  1085,  1090,  1091,  1099,
    1100,  1101,  1102,  1106,  1114,  1118,  1119,  1123,  1124,  1128,
    1132,  1133,  1134,  1142,  1143,  1147,  1148,  1152,  1153,  1154,
    1155,  1159,  1163,  1167,  1168,  1172,  1173,  1174,  1233,  1247,
    1259,  1260,  1261,  1262,  1263,  1264,  1265,  1267,  1271,  1272,
    1273,  1277,  1278,  1282,  1283
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "END_OF_FILE", "error", "$undefined", "CONSOLE", "BREAK", "CASE",
  "CATCH", "CLASS", "CONST", "CONTINUE", "DEBUGGER", "DEFAULT", "DELETE",
  "DO", "ELSE", "EXPORT", "EXTENDS", "FINALLY", "FOR", "FUNCTION", "IF",
  "IMPORT", "IN", "INSTANCEOF", "LET", "NEW", "OF", "RETURN", "SUPER",
  "SWITCH", "THIS", "THROW", "TRY", "TYPEOF", "VAR", "VOID", "WHILE",
  "WITH", "YIELD", "ENUM", "AWAIT", "IMPLEMENTS", "INTERFACE", "PACKAGE",
  "PRIVATE", "PROTECTED", "PUBLIC", "LITERAL_NULL", "LITERAL_TRUE",
  "LITERAL_FALSE", "LITERAL_UNDEFINED", "LITERAL_NAN", "UNARY_ADD",
  "UNARY_SUBTRACT", "LOGICAL_NOT", "MULTIPLY", "DIVIDE", "MODULO", "ADD",
  "SUBTRACT", "EQUAL", "NOT_EQUAL", "EXACTLY_EQUAL", "NOT_EXACTLY_EQUAL",
  "LEFT_SHIFT", "SIGNED_RIGHT_SHIFT", "UNSIGNED_RIGHT_SHIFT", "LESS_THAN",
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
  "\"_\"", "\"$\"", "\"get\"", "\"set\"", "\"static\"", "'from'", "'as'",
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
     365,   366,   367,   368,   369,   370,   371,   372,   102,    97
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   120,   121,   121,   122,   123,   123,   124,   124,   124,
     125,   125,   125,   126,   127,   127,   128,   129,   129,   130,
     131,   132,   132,   133,   133,   134,   134,   135,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   137,   137,   137,
     137,   138,   138,   138,   138,   139,   139,   139,   139,   139,
     140,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     142,   143,   143,   143,   144,   144,   145,   145,   145,   145,
     146,   146,   147,   147,   147,   148,   149,   150,   150,   151,
     151,   151,   151,   151,   152,   152,   153,   153,   154,   154,
     154,   154,   154,   155,   156,   156,   157,   157,   157,   157,
     158,   158,   159,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   161,   161,   162,   162,   162,   163,   163,
     163,   164,   164,   164,   164,   165,   165,   165,   165,   165,
     165,   166,   166,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     173,   173,   173,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   175,   175,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   178,   178,   179,   179,   180,
     181,   181,   182,   182,   183,   183,   184,   185,   185,   186,
     186,   187,   187,   187,   188,   189,   189,   190,   190,   190,
     191,   191,   192,   192,   192,   193,   193,   193,   193,   193,
     193,   193,   193,   194,   194,   195,   195,   196,   196,   197,
     197,   198,   198,   198,   199,   199,   200,   201,   202,   203,
     203,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   211,   212,   212,   212,   212,   212,   213,
     213,   214,   214,   215,   215,   216,   217,   217,   218,   219,
     219,   219,   220,   221,   222,   222,   223,   224,   224,   225,
     225,   226,   227,   227,   228,   228,   228,   229,   229,   230,
     231,   232,   233,   233,   234,   235,   235,   236,   236,   237,
     237,   237,   237,   238,   239,   240,   240,   241,   241,   242,
     243,   243,   243,   244,   244,   245,   245,   246,   246,   246,
     246,   247,   248,   249,   249,   250,   250,   250,   251,   252,
     253,   253,   253,   253,   253,   253,   253,   253,   254,   254,
     254,   255,   255,   256,   256
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     4,
       6,     1,     1,     1,     1,     2,     3,     3,     5,     4,
       2,     1,     2,     1,     4,     3,     4,     3,     1,     2,
       2,     2,     3,     4,     1,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     2,     1,
       4,     3,     1,     3,     4,     3,     1,     2,     2,     1,
       2,     4,     3,     2,     2,     3,     1,     2,     3,     4,
       1,     1,     5,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     2,     1,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     1,     1,     1,     1,
       3,     2,     1,     2,     1,     1,     3,     1,     1,     1,
       3,     1,     2,     2,     3,     1,     3,     1,     2,     2,
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
       2,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   197,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,    22,    13,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
      19,    18,    20,     9,     8,     7,     0,     3,    27,     5,
      41,    42,    43,    16,    17,    44,    29,   305,     0,    21,
      79,    36,    30,    31,    32,    86,    82,   100,   101,    89,
       0,   103,   113,   118,   121,   125,   131,   136,   138,   140,
     142,   144,   146,   148,   164,     0,   194,   195,   180,   171,
     166,   189,     4,   192,   182,     0,   167,   168,   169,   170,
     187,   173,   174,   172,   175,   188,   176,   177,   178,   179,
     185,    33,   150,     0,   186,    35,   149,   181,    34,   183,
       0,    26,   258,     0,    25,     0,    24,     0,     0,    23,
     324,     0,   256,     0,   286,     0,     0,    22,     0,    21,
      36,     0,   104,     0,     0,     0,     0,     0,     0,   344,
     343,     0,     0,     0,   292,     0,     0,     0,    86,    87,
      22,   260,    21,     0,     0,     0,     0,    93,     0,     0,
       0,     0,   106,     0,     0,   207,     0,   205,     0,   210,
     211,   105,     0,     0,     0,   321,   107,   108,   112,   109,
     110,   111,    38,     0,     0,     0,   191,     0,     0,     0,
      27,    43,    44,    29,     0,    64,     0,    70,    71,    67,
       0,    69,   310,    45,    58,     0,     0,     0,    53,    51,
       1,    12,    11,    10,     6,     0,     0,     0,    88,     0,
       0,    90,     0,   156,   157,   153,   154,   155,   158,   159,
     160,   161,   162,   163,     0,     0,   115,   116,   117,     0,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   193,   201,     0,   199,     0,     0,     0,   259,
     331,   327,     0,   337,     0,    72,    74,    73,     0,   335,
       0,   332,   333,   323,     0,   257,     0,   325,     0,   292,
       0,    61,    66,     0,     0,   324,     0,   345,   346,     0,
     292,     0,     0,     0,   348,   353,     0,   351,   342,     0,
       0,     0,     0,     0,     0,     0,   292,     0,     0,   234,
     232,   300,   231,   299,     0,   293,   295,   294,   297,   292,
       0,    83,   261,    94,     0,     0,    96,     0,    85,     0,
     278,   191,     0,     0,   279,   280,   212,     0,     0,   223,
     229,   215,     0,     0,   225,   227,     0,     0,   208,     0,
     204,   209,     0,     0,   322,     0,    37,     0,     0,    51,
       0,     0,    76,    62,     0,     0,   292,   190,    60,    47,
       0,    46,    59,    52,    50,     0,   276,   275,   277,     0,
      81,     0,    92,   151,     0,   152,   114,   119,   120,   122,
     123,   130,   126,   127,   128,   129,   132,   133,   134,   135,
     137,   139,   141,   143,     0,   145,   165,   202,     0,   196,
     203,     0,   307,   304,     0,     0,   336,   329,   334,   328,
       0,   326,   292,     0,     0,   292,     0,   323,   347,     0,
       0,     0,   292,   339,   338,   340,     0,   349,     0,   341,
     207,     0,   255,     0,     0,     0,     0,     0,   201,   255,
     253,     0,     0,     0,   297,   292,   236,   235,   233,     0,
       0,     0,     0,    97,    95,     0,    84,     0,     0,   283,
     281,     0,   213,     0,   217,   228,     0,   219,     0,   216,
      30,    78,   206,     0,     0,    39,     0,   292,    75,     0,
       0,    63,    65,    68,     0,   291,    49,     0,    57,    55,
      80,    91,     0,     0,   200,   303,     0,   301,   184,   330,
     292,     0,     0,     0,     0,     0,     0,     0,   354,   350,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   297,   302,   296,   298,     0,   240,     0,
      98,     0,   263,   284,   285,     0,   230,   214,   224,   218,
       0,   226,     0,     0,   242,   262,     0,     0,     0,   313,
       0,     0,    48,    56,    54,   102,   147,   308,   302,     0,
       0,     0,   302,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   302,   302,     0,     0,     0,   302,     0,
      99,     0,     0,   264,     0,   269,     0,     0,   220,     0,
     221,   194,    40,     0,   302,     0,     0,     0,   302,   241,
       0,   302,     0,     0,     0,   247,   250,     0,     0,   249,
     252,   319,     0,     0,   302,   302,   288,     0,   239,     0,
     273,   265,   270,     0,     0,   282,   222,   243,   302,     0,
     302,     0,   290,     0,   288,     0,     0,   248,   251,     0,
     246,   318,   316,     0,     0,   287,   271,   274,   267,     0,
     266,     0,   311,     0,   309,   289,   287,     0,   244,   317,
     315,   272,   268,   314,   312,   245
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    46,    47,    48,    49,   224,    50,    51,    52,    53,
      54,    55,    56,    57,    58,   162,    60,    61,    62,    63,
     216,   217,   218,    64,   204,   205,   206,   207,   208,   209,
     368,    65,    66,    67,    68,    69,   167,   345,    70,    71,
      72,    73,   249,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   245,    85,    86,    87,    88,    89,
      90,    91,   525,    93,    94,    95,   274,   275,    96,   176,
     177,   330,   179,   180,   358,   363,   364,   359,   331,   332,
     333,    97,    98,    99,   100,   325,   463,   101,   102,   103,
     104,   105,   562,   614,   615,   616,   106,   397,   107,   108,
     354,   355,   565,   109,   110,   111,   514,   473,   335,   336,
     337,   338,   641,   527,   112,   113,   433,   211,   580,   212,
     114,   115,   642,   116,   117,   118,   130,   131,   290,   291,
     292,   313,   454,   119,   151,   316,   317
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -589
static const yytype_int16 yypact[] =
{
    1527,   -25,   364,     8,  -589,   508,   -28,  2860,  1635,   348,
      -8,    35,     2,  -589,  1007,  2614,    33,     7,  -589,  2892,
      27,  2860,   360,  2860,    48,    73,  1979,  -589,  -589,  -589,
    2860,  2860,  2860,  2860,  2860,  2860,  2492,  1195,  2106,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,   224,  -589,   183,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,   120,   -21,
    -589,   136,  -589,  -589,  -589,   122,  -589,  -589,   444,  -589,
    2142,  -589,  -589,    58,   319,   382,   669,   730,   171,   162,
     200,   207,   -14,  -589,  -589,   -18,  -589,  -589,  -589,  -589,
    -589,  -589,  1527,  -589,  -589,   360,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,   195,  -589,  -589,  -589,  -589,  -589,  -589,
     164,  -589,  -589,   190,  -589,  3014,  -589,   445,     4,  -589,
    1067,   262,  -589,   201,  -589,     8,   192,  -589,   615,  -589,
    -589,  3014,  -589,   393,     8,  2982,   277,   274,    67,  -589,
    -589,   -38,  2234,    70,   567,   302,  2892,   299,   122,  -589,
     751,  -589,   341,    80,  2524,  2892,   205,  -589,  2892,   105,
    1311,    76,  -589,   356,   388,   362,   109,  -589,   362,  -589,
    -589,  -589,  2892,  2892,  2892,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,   164,    -5,   964,  2016,  2106,   964,   964,
     183,   378,   407,   -20,   -43,  -589,   -27,  -589,  -589,  -589,
    1419,  -589,  -589,  -589,  -589,  2892,   398,  2266,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  1743,  2892,   205,  -589,  2892,
     205,  -589,  2892,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,   413,  2892,  -589,  -589,  -589,  2860,
    2860,  2860,  2860,  2860,  -589,  2860,  2860,  2860,  2860,  2860,
    2860,  2860,  2860,  2860,  2860,  2860,  2860,  2860,  2892,  2860,
    2892,  -589,  -589,   362,   169,  -589,   362,  2646,   401,  -589,
    -589,  -589,  2892,  -589,   984,   183,  -589,  -589,   387,  -589,
     410,   905,  -589,  1176,   869,  -589,     4,  -589,   181,   567,
     427,  -589,   362,   432,     4,  -589,   453,  -589,  -589,   611,
     567,   463,   402,   472,  -589,   324,   -34,  -589,  -589,   474,
     360,  1889,   186,  2892,   360,   133,   567,   471,   164,   362,
     362,  -589,  -589,  -589,   422,  -589,   481,  -589,  -589,   567,
      31,  -589,  -589,  -589,  2892,    41,  -589,   421,   183,    52,
    -589,  -589,   487,    27,   565,  -589,  -589,   513,    92,  -589,
    -589,  -589,   415,   434,  -589,  -589,   489,  2892,  -589,   360,
    -589,  -589,    59,   155,  -589,   494,  -589,  2738,   496,   499,
     497,   505,  -589,  -589,   646,  2892,   567,  -589,  -589,  -589,
    2363,  -589,  -589,  -589,  -589,   306,  -589,  -589,  -589,   437,
    -589,   442,   183,  -589,  3014,  -589,  -589,    58,    58,   319,
     319,   382,   382,   382,   382,   382,   669,   669,   669,   669,
     730,   171,   162,   200,   521,   207,  -589,  -589,   360,  -589,
    -589,  1527,  -589,  -589,   512,   499,  -589,  -589,  -589,  -589,
     524,  -589,   567,   531,   514,   567,  2892,  -589,  -589,   360,
     533,   536,   567,  -589,  -589,  -589,   205,  -589,   298,  -589,
      18,   202,   362,   173,  2892,  2892,  2892,   232,    18,   362,
    -589,  2892,  2892,   537,   539,   567,  -589,  -589,  -589,   540,
     567,   542,  1635,  -589,  -589,  2770,  -589,   543,   360,  -589,
    -589,   360,  -589,   780,  -589,  -589,   544,  -589,   326,  -589,
     518,  -589,  -589,  1851,  1635,  -589,   164,   567,  -589,   547,
     360,  -589,  -589,  -589,   558,  -589,  -589,  2395,  -589,  -589,
    -589,  -589,   602,  2892,  -589,  1527,   559,  -589,  -589,  -589,
     567,   563,   568,   223,   539,   360,   566,   573,   183,  -589,
    -589,  2892,  2892,  2892,   242,   574,   266,  2892,   267,   578,
     576,   590,   581,   597,  1527,  -589,  -589,   598,   679,  2892,
    -589,    37,  -589,  -589,  -589,   605,  -589,  -589,  -589,  -589,
     470,  -589,   603,  1195,  -589,  -589,   609,   610,   599,  -589,
     616,   613,  -589,  -589,  -589,  -589,  -589,  -589,  1527,   608,
     614,   597,  1527,   621,   271,   288,   619,  1635,  1635,  2892,
     314,  1635,  1635,  1527,  1527,   622,   637,   639,  1527,  1635,
    -589,  2892,   668,  -589,    44,  -589,   737,    27,  -589,   648,
    -589,   652,  -589,   647,  1527,   653,  1527,   655,  1527,  -589,
     660,  1527,  2892,  1635,  1635,  -589,  -589,   322,  1635,  -589,
    -589,  -589,   661,   662,  1527,  1527,  1292,   670,  -589,   -22,
    1527,  -589,  -589,    10,    14,  -589,  -589,  -589,  1527,   672,
    1527,   673,  -589,   682,  -589,   683,   337,  -589,  -589,  1635,
    -589,  -589,  -589,   685,   687,  1400,  1527,  1527,  -589,    24,
    -589,   690,  -589,   692,  -589,  -589,  -589,  1635,  -589,  -589,
    -589,  1527,  -589,  -589,  -589,  -589
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -589,  -589,  -589,    -1,  -589,  -589,  -589,  -589,    39,  -589,
    -589,   -10,   -36,   553,   101,     0,  -589,   876,   397,  -589,
    -589,  -158,  -200,  -589,  -589,   404,   -88,  -589,  -589,  -589,
    -116,   781,  -589,   783,  -589,  -589,   -40,  -589,   924,  -589,
     210,   138,  -589,   165,   516,   552,   530,   546,   535,   541,
     538,  -589,  -589,   551,  -589,    53,    45,   793,   671,  -589,
    -589,   -11,     6,   -54,   665,   674,  -589,   392,   813,   504,
     456,   -12,  -589,  -589,  -589,  -589,   329,   338,  -162,  -155,
    -161,  -589,  -589,  -589,  -589,  -589,   506,  -589,  -589,  -589,
    -589,  -589,  -589,  -575,  -588,   218,  -589,  -589,  -589,  -589,
    -589,   480,  -589,  -589,   612,  -589,   328,    15,  -589,  -589,
     358,  -100,  -281,  -589,  -589,  -589,  -589,  -123,  -589,  -589,
    -589,  -589,  -546,  -589,   691,  -589,   -81,  -589,   545,  -589,
     549,   703,  -589,  -589,  -589,  -589,   383
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -327
static const yytype_int16 yytable[] =
{
      59,   203,   124,   129,   289,   124,    92,   139,    59,   171,
     178,   129,   365,   366,   139,   611,   362,   393,   360,   611,
     125,   139,   129,   139,   125,   228,   652,   202,   231,   611,
     139,   139,   139,   139,   139,   139,   200,    59,   272,   288,
    -254,   654,   611,   210,  -254,   385,   126,   293,   612,   611,
     676,   -25,   383,   143,   297,   612,   384,   268,   643,   367,
     269,   457,   371,   305,   318,   458,   652,   386,   163,   120,
     139,   -23,   169,   126,   134,   -66,   201,   270,   679,   -66,
     312,   270,   352,   276,   271,   357,   152,   382,   376,   194,
     153,   652,    59,   353,   377,   129,   156,   367,   673,   674,
     127,   168,   302,   123,   127,   678,   133,   378,   126,   680,
     380,   381,   681,   246,   247,   248,    43,   287,   341,   692,
     129,    44,    45,   170,   482,   139,   285,   164,   287,   154,
     270,   165,   613,   166,   484,   129,   129,   200,   139,   651,
     485,   139,   182,    43,   129,   487,   129,   315,    44,    45,
     526,   270,   503,   129,   129,   471,   272,   427,   270,   472,
     430,   436,   314,   287,   326,   348,   286,   183,   289,   334,
      59,   289,   200,   129,   129,    43,   210,   286,    43,   270,
      44,    45,   342,    44,    45,   287,   382,   492,   287,   287,
     518,   493,   225,   129,   285,   542,   288,   285,   285,   543,
     495,   496,   126,   288,   270,   322,   288,   350,   369,   340,
      59,   370,   286,   477,   478,   441,   164,   142,   347,   126,
     226,   349,   227,   447,   220,    59,   474,   400,  -306,   402,
     126,   172,   517,   181,   286,   372,   373,   286,   286,   265,
     186,   187,   188,   189,   190,   191,   264,   298,   504,   139,
     139,   139,   139,   139,   270,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   428,   139,
     396,   429,    43,   607,   287,   442,   266,    44,    45,   399,
     267,   287,   401,   285,   287,   270,   299,   277,   466,    43,
     285,   221,   279,   285,    44,    45,   222,   223,   129,   129,
      43,   369,   453,   295,   541,    44,    45,   627,   462,   129,
     129,   630,   469,    43,   444,   126,   590,   583,    44,    45,
     129,   139,   270,   286,   129,   451,   129,   647,   129,   566,
     286,   270,   309,   286,   547,   597,   365,   572,   360,   129,
     570,   270,   489,   659,   126,   661,   371,   663,   302,   534,
     665,     1,   427,   430,   481,   144,     4,   178,   294,   145,
     601,   298,   129,     9,   126,   270,   270,   146,   599,   129,
     270,   310,    13,   632,   287,   553,   467,   250,   251,   683,
     556,   633,    22,   200,   139,    43,   129,   270,   407,   408,
      44,    45,   312,   539,   126,   129,   339,   165,   126,   166,
     154,   515,   121,   147,   139,   357,    43,   638,   495,   619,
     579,    44,    45,   270,    43,   669,   276,   409,   410,    44,
      45,   270,   173,   286,   174,   214,   126,   328,   129,   303,
     687,    59,   221,   -23,    43,   591,   270,   222,   223,    44,
      45,   367,   129,   456,   148,   129,   252,   253,   254,   129,
     -74,   356,   129,   126,   282,   538,   173,   315,   174,   406,
     532,    40,    41,    42,    43,   404,   122,   537,    43,    44,
      45,   272,    43,    44,    45,   129,   564,    44,    45,   -73,
     129,   386,    59,   287,   173,   361,   174,   214,   129,   328,
     552,   129,   200,   129,   434,   389,    43,   390,   129,   533,
     195,    44,    45,    59,    59,   437,   129,   129,   126,    42,
     129,   173,   494,   174,   392,   479,   328,   544,   486,   546,
     270,   445,   515,    43,   548,    59,   446,   558,    44,    45,
     129,   497,   286,   498,   520,   129,   270,   203,   164,   521,
     281,   270,   229,   282,   230,   552,   121,   283,   574,   575,
      40,    41,    42,    43,    59,   448,   128,   452,    44,    45,
     198,   199,   284,   202,   155,   475,   173,   618,   174,   392,
     129,   328,   200,    59,   455,   175,   459,   185,    43,   210,
     480,   488,   353,    44,    45,   491,   499,   505,    59,   219,
     507,   509,    59,   523,   594,   595,   508,    59,    59,   510,
     600,    59,    59,    59,    59,   126,   655,   531,    59,    59,
     132,   -77,   201,   -77,   528,   -77,    43,   -77,   621,   529,
     -77,    44,    45,   272,    59,   530,    59,   535,    59,   536,
     550,    59,   551,    59,    59,   557,   554,   272,    59,   561,
     578,   569,   635,   636,    59,    59,   639,   640,   273,   126,
      59,   581,   637,   137,   648,   585,   677,   587,    59,   588,
      59,   589,   592,   173,   649,   174,   593,   598,   328,    59,
     195,   602,   603,   278,   605,    43,    59,    59,   667,   668,
      44,    45,   691,   670,   137,   666,   604,    59,   296,   300,
     606,    59,   255,   609,   608,   624,   306,   304,   617,   311,
     620,   195,   622,   623,   628,   449,   327,   329,   626,   625,
     301,   185,   634,   282,   688,   346,   629,   631,   644,    43,
      40,    41,    42,    43,    44,    45,   329,   329,    44,    45,
     198,   199,   695,   645,   646,   374,   256,   257,   258,   259,
     650,   511,   611,   658,   282,   656,   375,   657,   379,   660,
     662,    40,    41,    42,    43,   664,   671,   672,   135,    44,
      45,   198,   199,     7,   500,   675,   388,   682,   394,   684,
     136,   411,   412,   413,   414,   415,    14,   685,   686,    16,
     689,    18,   690,   403,    21,   693,    23,   694,   512,   160,
     260,   261,   262,   263,   420,   158,   405,   159,    27,    28,
      29,   422,   149,    30,    31,    32,   184,   425,   423,    33,
      34,   421,   416,   417,   418,   419,   307,   323,   126,   424,
     524,   426,   150,  -320,   461,   502,   324,   571,   432,    35,
     470,   568,   653,   435,   490,   577,   308,   398,   555,   440,
     438,   540,     0,   -24,  -320,    36,  -320,   138,  -320,    38,
    -320,   443,   329,  -320,   319,     0,    40,    41,    42,    43,
       0,     0,   450,   329,    44,    45,     0,     0,     0,     0,
       0,     0,     0,   460,     0,   567,     0,   468,   282,   329,
       0,   476,     0,   140,     0,    40,    41,    42,    43,     0,
     140,     0,   329,    44,    45,   483,     0,   140,     0,   140,
       0,     0,     0,     0,     0,     0,   140,   140,   140,   140,
     140,   140,     0,     0,     0,   329,     0,     0,   501,     0,
       0,     0,   175,     0,   195,     0,     0,     0,   426,     0,
       0,   141,     0,     0,     0,     0,   513,     0,     0,   329,
       0,   519,     0,     0,     0,   141,   140,   141,   155,     0,
       0,     0,     0,     0,   141,   141,   141,   141,   141,   141,
     195,     0,     0,     0,   439,     0,     0,   282,     0,     0,
       0,   283,     0,     0,    40,    41,    42,    43,     0,     0,
       0,   273,    44,    45,   198,   199,   284,     0,     0,     0,
       0,     0,     0,     0,   244,   329,     0,     0,   329,     0,
       0,   140,   329,   282,     0,   329,     0,   283,     0,     0,
      40,    41,    42,    43,   135,     0,   545,   140,    44,    45,
     198,   199,   284,   549,     0,     0,   136,     0,   329,     0,
       0,     0,    14,   329,     0,   157,   560,    18,     0,   195,
       0,   563,     0,     0,   329,   137,   329,     0,     0,   280,
       0,   329,     0,     0,    27,    28,    29,     0,     0,   576,
     329,     0,   282,   329,     0,   244,     0,     0,   584,    40,
      41,    42,    43,     0,   586,     0,   321,    44,    45,     0,
       0,     0,   282,   329,     0,     0,     0,     0,   329,    40,
      41,    42,    43,     0,   596,     0,     0,    44,    45,   198,
     199,    36,     0,   138,     0,    38,     0,     0,     0,     0,
     610,     0,    40,    41,    42,    43,     0,     0,     0,     0,
      44,    45,     0,   329,     0,   140,   140,   140,   140,   140,
       0,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,     0,   140,  -325,  -325,  -325,  -325,
    -325,  -325,     0,  -325,  -325,  -325,  -325,  -325,  -325,     0,
       0,     0,     0,     0,     0,     0,     0,  -325,     0,     0,
       0,     0,     0,   141,   141,   141,   141,   141,     0,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,     0,   141,     0,     0,     0,   140,     1,     2,
       0,     0,     3,     4,     5,     6,     0,     7,     8,     0,
       9,     0,     0,    10,    11,    12,     0,     0,     0,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,   244,     0,    30,    31,    32,
     195,     0,     0,    33,    34,  -326,  -326,  -326,  -326,  -326,
    -326,     0,  -326,  -326,  -326,  -326,  -326,  -326,     0,     0,
       0,     0,     0,    35,     0,     0,  -326,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,     0,    36,
     196,    37,     0,   197,     0,     0,     0,    39,     0,     0,
      40,    41,    42,    43,     0,     0,     0,     0,    44,    45,
     198,   199,     0,     0,     1,     2,     0,     0,     3,     4,
       5,     6,     0,     7,     8,     0,     9,     0,   522,    10,
      11,    12,     0,     0,     0,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,    30,    31,    32,     0,     0,     0,    33,
      34,  -290,  -290,  -290,  -290,  -290,  -290,     0,  -290,  -290,
    -290,  -290,  -290,  -290,     0,     0,     0,     0,     0,    35,
       0,     0,  -290,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,   351,    37,     0,    38,
       0,     0,     0,    39,     0,     0,    40,    41,    42,    43,
       0,     0,     1,     2,    44,    45,     3,     4,     5,     6,
       0,     7,     8,     0,     9,     0,     0,    10,    11,    12,
       0,     0,     0,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,    32,     0,     0,     0,    33,    34,  -289,
    -289,  -289,  -289,  -289,  -289,     0,  -289,  -289,  -289,  -289,
    -289,  -289,     0,     0,     0,     0,     0,    35,     0,     0,
    -289,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,   387,    37,     0,    38,     0,     0,
       0,    39,     0,     0,    40,    41,    42,    43,     0,     0,
       1,     2,    44,    45,     3,     4,     5,     6,     0,     7,
       8,     0,     9,     0,     0,    10,    11,    12,     0,     0,
       0,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,    32,     0,     0,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,     0,    38,     0,     0,     0,    39,
       0,     0,    40,    41,    42,    43,     0,     0,     0,     2,
      44,    45,   135,     0,     5,     6,     0,     7,     8,     0,
       0,     0,     0,    10,   136,    12,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,    32,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,     0,    38,     0,     0,     0,    39,     0,     0,
      40,    41,    42,    43,     0,     0,     0,     2,    44,    45,
     135,     0,     5,     6,     0,     7,     8,     0,     0,     0,
       0,    10,   395,    12,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,    32,     0,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    37,
       0,    38,     0,     0,     0,    39,     0,     0,    40,    41,
      42,    43,     0,     0,     0,     2,    44,    45,   135,     0,
       5,     6,     0,     7,     8,     0,     0,     0,     0,    10,
     136,    12,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,   135,     0,    27,    28,
      29,     0,     0,    30,    31,    32,     0,     0,   136,    33,
      34,   464,     0,     0,    14,   465,     0,    16,     0,    18,
       0,     0,     0,     0,     0,     0,     0,   137,     0,    35,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,     0,     0,     0,     0,    36,     0,   573,     0,    38,
       0,     0,     0,    39,     0,     0,    40,    41,    42,    43,
       0,     0,     0,     0,    44,    45,     0,     0,   232,   233,
     234,   235,   236,   237,     0,   238,   239,   240,   241,   242,
     243,     0,     0,    36,     0,   138,   135,    38,     0,     0,
       0,     7,     0,     0,    40,    41,    42,    43,   136,     0,
       0,     0,    44,    45,    14,     0,     0,    16,     0,    18,
       0,     0,    21,     0,    23,     0,     0,   160,     0,     0,
       0,     0,     0,   -61,     0,     0,    27,    28,    29,     0,
       0,    30,    31,    32,   184,   -61,     0,    33,    34,     0,
       0,   -61,     0,     0,   -61,     0,   -61,     0,     0,     0,
       0,   -26,     0,     0,   -61,     0,     0,    35,     0,     0,
       0,     0,     0,   -61,   -61,   -61,     0,     0,     0,     0,
       0,   -24,     0,    36,     0,   138,     0,    38,     0,     0,
       0,  -320,     0,     0,    40,    41,    42,    43,     0,     0,
       0,     0,    44,    45,     0,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
     -61,     0,   -61,   135,   -61,     0,   -61,     0,     7,     0,
       0,   -61,   -61,   -61,   -61,   136,     0,     0,     0,   -61,
     -61,    14,     0,     0,    16,     0,    18,     0,     0,    21,
       0,    23,     0,     0,   160,     0,     0,     0,     0,   135,
       0,     0,     0,    27,    28,    29,     0,     0,    30,    31,
      32,   136,     0,     0,    33,    34,     0,    14,     0,     0,
      16,     0,    18,     0,     0,     0,     0,     0,     0,     0,
     137,     0,     0,     0,    35,     0,     0,     0,     0,    27,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,   138,   213,    38,   214,     0,   215,     0,     0,
       0,    40,    41,    42,    43,     0,     0,     0,     0,    44,
      45,   232,   233,   234,   235,   236,   237,     0,   238,   239,
     240,   241,   242,   243,     0,     0,    36,     0,   138,     0,
      38,   135,     4,     0,     0,     0,     7,    40,    41,    42,
      43,     0,     0,   136,     0,    44,    45,     0,    13,    14,
       0,     0,    16,     0,    18,     0,     0,    21,   320,    23,
       0,     0,   160,   135,     0,     0,     0,     0,     7,     0,
       0,    27,    28,    29,     0,   136,    30,    31,    32,     0,
       0,    14,    33,    34,    16,     0,    18,     0,     0,    21,
       0,    23,     0,     0,   160,     0,     0,     0,     0,     0,
       0,     0,    35,    27,    28,    29,     0,     0,    30,    31,
      32,     0,     0,     0,    33,    34,     0,     0,    36,     0,
     138,     0,    38,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,     0,    35,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,   138,   391,    38,   392,     0,   215,     0,     0,
     135,    40,    41,    42,    43,     7,     0,     0,     0,    44,
      45,     0,   136,     0,     0,     0,     0,     0,    14,     0,
       0,    16,     0,    18,     0,     0,    21,     0,    23,     0,
       0,   160,   135,     0,     0,     0,     0,     7,     0,     0,
      27,    28,    29,     0,   136,    30,    31,    32,     0,     0,
      14,    33,    34,    16,     0,    18,     0,     0,    21,     0,
      23,     0,     0,   160,     0,     0,     0,     0,     0,     0,
       0,    35,    27,    28,    29,     0,     0,    30,    31,    32,
       0,     0,     0,    33,    34,     0,     0,    36,     0,   138,
     516,    38,   214,     0,   215,     0,     0,     0,    40,    41,
      42,    43,     0,    35,     0,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,   138,   582,    38,   392,     0,   215,     0,     0,   135,
      40,    41,    42,    43,     7,     0,     0,     0,    44,    45,
       0,   136,     0,     0,     0,     0,     0,    14,     0,     0,
      16,     0,    18,     0,     0,    21,     0,    23,     0,     0,
     160,   135,     0,     0,     0,     0,     7,     0,     0,    27,
      28,    29,     0,   136,    30,    31,    32,     0,     0,    14,
      33,    34,    16,     0,    18,     0,     0,    21,     0,    23,
       0,     0,   160,     0,     0,     0,     0,     0,     0,     0,
      35,    27,    28,    29,     0,     0,    30,    31,    32,     0,
       0,     0,    33,    34,     0,   192,    36,     0,   138,     0,
      38,     0,     0,   193,     0,     0,     0,    40,    41,    42,
      43,     0,    35,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,    36,     0,
     138,   135,    38,     0,     0,   344,     7,     0,     0,    40,
      41,    42,    43,   136,     0,     0,     0,    44,    45,    14,
       0,     0,    16,     0,    18,     0,     0,    21,     0,    23,
       0,     0,   160,   135,     0,     0,     0,     0,     7,     0,
       0,    27,    28,    29,     0,   136,    30,    31,    32,     0,
       0,    14,    33,    34,    16,     0,    18,     0,     0,    21,
       0,    23,     0,     0,   160,     0,     0,     0,     0,     0,
       0,     0,    35,    27,    28,    29,     0,     0,    30,    31,
      32,     0,     0,     0,    33,    34,     0,     0,    36,     0,
     138,     0,    38,     0,     0,     0,   161,     0,     0,    40,
      41,    42,    43,     0,    35,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,   138,   431,    38,   135,     0,     0,     0,     0,
       7,    40,    41,    42,    43,     0,     0,   136,     0,    44,
      45,     0,     0,    14,     0,     0,    16,     0,    18,     0,
       0,    21,     0,    23,     0,     0,   160,   135,     0,     0,
       0,     0,     7,     0,     0,    27,    28,    29,     0,   136,
      30,    31,    32,     0,     0,    14,    33,    34,    16,     0,
      18,     0,     0,    21,     0,    23,     0,     0,   160,     0,
       0,     0,     0,     0,     0,     0,    35,    27,    28,    29,
       0,     0,    30,    31,    32,     0,     0,     0,    33,    34,
       0,     0,    36,     0,   138,     0,    38,     0,     0,   506,
       0,     0,     0,    40,    41,    42,    43,     0,    35,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,   138,   135,    38,     0,
       0,   559,     7,     0,     0,    40,    41,    42,    43,   136,
       0,     0,     0,    44,    45,    14,     0,     0,    16,     0,
      18,     0,     0,    21,     0,    23,     0,     0,   137,   135,
       0,     0,     0,     0,     7,     0,     0,    27,    28,    29,
       0,   136,    30,    31,    32,     0,     0,    14,    33,    34,
      16,     0,    18,     0,     0,    21,     0,    23,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,    35,    27,
      28,    29,     0,     0,    30,    31,    32,     0,     0,     0,
      33,    34,     0,     0,    36,     0,   138,     0,    38,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,     0,
      35,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,   138,     3,
      38,     0,     0,     0,     7,     0,     0,    40,    41,    42,
      43,    11,     0,     0,     0,    44,    45,    14,     0,     0,
      16,     0,    18,     0,     0,    21,     0,    23,     0,     0,
     160,   135,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,   136,    30,    31,    32,     0,     0,    14,
      33,    34,    16,     0,    18,     0,     0,     0,     0,     0,
       0,     0,   137,     0,     0,     0,     0,     0,     0,     0,
      35,    27,    28,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,   138,     0,
      38,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,     0,     0,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
     138,     0,    38,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,     0,     0,     0,     0,    44,    45
};

static const yytype_int16 yycheck[] =
{
       0,    37,     2,     3,   127,     5,     0,     7,     8,    20,
      22,    11,   174,   174,    14,     5,   174,   217,   173,     5,
      16,    21,    22,    23,    16,    65,   614,    37,    68,     5,
      30,    31,    32,    33,    34,    35,    37,    37,    92,   127,
      22,   616,     5,    37,    26,    72,    38,   128,    11,     5,
      72,    72,    95,     8,   135,    11,    99,    71,   604,    79,
      74,    95,   178,   144,   102,    99,   654,    94,    15,    94,
      70,    92,    19,    38,   102,    95,    37,    99,   653,    99,
     118,    99,     6,    95,   102,   173,    94,   203,    93,    36,
      55,   679,    92,    17,    99,    95,    94,    79,   644,   645,
      96,    94,   138,     2,    96,    95,     5,   195,    38,    95,
     198,   199,   658,    55,    56,    57,   108,   127,   158,    95,
     120,   113,   114,    96,    93,   125,   127,    94,   138,    94,
      99,    98,    95,   100,    93,   135,   136,   138,   138,    95,
      99,   141,    94,   108,   144,    93,   146,   148,   113,   114,
     431,    99,    93,   153,   154,    22,   210,   273,    99,    26,
     276,   284,    95,   173,    94,   166,   127,    94,   291,   154,
     170,   294,   173,   173,   174,   108,   170,   138,   108,    99,
     113,   114,   102,   113,   114,   195,   302,    95,   198,   199,
     390,    99,    72,   193,   195,    22,   284,   198,   199,    26,
     362,   362,    38,   291,    99,   152,   294,   102,    99,   156,
     210,   102,   173,   329,   330,   296,    94,     7,   165,    38,
      98,   168,   100,   304,     0,   225,   326,   227,    92,   230,
      38,    21,   390,    23,   195,   182,   183,   198,   199,    77,
      30,    31,    32,    33,    34,    35,    75,    55,    93,   249,
     250,   251,   252,   253,    99,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,    99,   269,
     225,   102,   108,   554,   284,    94,    76,   113,   114,   226,
      73,   291,   229,   284,   294,    99,    94,    92,   102,   108,
     291,   108,   102,   294,   113,   114,   113,   114,   298,   299,
     108,    99,   312,   102,   102,   113,   114,   588,   320,   309,
     310,   592,   324,   108,   299,    38,    93,   517,   113,   114,
     320,   321,    99,   284,   324,   310,   326,   608,   328,   491,
     291,    99,    55,   294,   102,    93,   498,   498,   493,   339,
     498,    99,   353,   624,    38,   626,   462,   628,   384,   449,
     631,     3,   468,   469,   339,     7,     8,   369,    96,    11,
      93,    55,   362,    15,    38,    99,    99,    19,   102,   369,
      99,    94,    24,   102,   384,   475,   323,    58,    59,   660,
     480,    93,    34,   384,   384,   108,   386,    99,   250,   251,
     113,   114,   118,    95,    38,   395,    94,    98,    38,   100,
      94,   386,    38,    55,   404,   493,   108,    93,   570,   570,
     510,   113,   114,    99,   108,    93,   428,   252,   253,   113,
     114,    99,    96,   384,    98,    99,    38,   101,   428,    36,
      93,   431,   108,    92,   108,   535,    99,   113,   114,   113,
     114,    79,   442,   119,    96,   445,    64,    65,    66,   449,
      72,    95,   452,    38,    98,   456,    96,   458,    98,   249,
     445,   105,   106,   107,   108,    52,   102,   452,   108,   113,
     114,   525,   108,   113,   114,   475,   488,   113,   114,    72,
     480,    94,   482,   493,    96,    97,    98,    99,   488,   101,
     475,   491,   493,   493,    93,    97,   108,    99,   498,   446,
      55,   113,   114,   503,   504,    95,   506,   507,    38,   107,
     510,    96,    97,    98,    99,    93,   101,   464,    97,   466,
      99,    94,   507,   108,   471,   525,    94,   482,   113,   114,
     530,    97,   493,    99,    97,   535,    99,   573,    94,    97,
      95,    99,    98,    98,   100,   530,    38,   102,   503,   504,
     105,   106,   107,   108,   554,   102,     3,    94,   113,   114,
     115,   116,   117,   573,    11,    94,    96,    97,    98,    99,
     570,   101,   573,   573,   102,    22,   102,    26,   108,   573,
      99,    94,    17,   113,   114,    72,    97,    93,   588,    38,
      94,    94,   592,    72,   541,   542,    97,   597,   598,    94,
     547,   601,   602,   603,   604,    38,   617,    93,   608,   609,
     102,    93,   573,    95,   102,    97,   108,    99,   573,    95,
     102,   113,   114,   677,   624,    94,   626,    94,   628,    93,
      93,   631,    93,   633,   634,    93,    96,   691,   638,    96,
      93,    97,   597,   598,   644,   645,   601,   602,    95,    38,
     650,    93,   599,    38,   609,    53,   650,    98,   658,    96,
     660,    93,    96,    96,   611,    98,    93,    93,   101,   669,
      55,    93,    96,   120,    93,   108,   676,   677,   633,   634,
     113,   114,   676,   638,    38,   632,    96,   687,   135,   136,
      93,   691,    23,    14,    96,    96,   145,   144,    93,   146,
      97,    55,    93,    93,    96,    94,   153,   154,    95,    93,
      95,   160,    93,    98,   669,   164,   102,    96,    96,   108,
     105,   106,   107,   108,   113,   114,   173,   174,   113,   114,
     115,   116,   687,    96,    95,   184,    67,    68,    69,    70,
      72,    95,     5,    96,    98,    97,   193,    95,   197,    96,
      95,   105,   106,   107,   108,    95,    95,    95,     7,   113,
     114,   115,   116,    12,   367,    95,   215,    95,   217,    96,
      19,   255,   256,   257,   258,   259,    25,    95,    95,    28,
      95,    30,    95,   232,    33,    95,    35,    95,   384,    38,
      60,    61,    62,    63,   264,    14,   245,    14,    47,    48,
      49,   266,     9,    52,    53,    54,    55,   269,   267,    58,
      59,   265,   260,   261,   262,   263,   145,   152,    38,   268,
     428,   270,     9,    72,   320,   369,   152,   498,   277,    78,
     324,   493,   614,   282,   354,   507,   145,   225,   480,   294,
     291,   458,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   298,   299,   102,   151,    -1,   105,   106,   107,   108,
      -1,    -1,   309,   310,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,    95,    -1,   324,    98,   326,
      -1,   328,    -1,     7,    -1,   105,   106,   107,   108,    -1,
      14,    -1,   339,   113,   114,   344,    -1,    21,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   362,    -1,    -1,   367,    -1,
      -1,    -1,   369,    -1,    55,    -1,    -1,    -1,   377,    -1,
      -1,     7,    -1,    -1,    -1,    -1,   385,    -1,    -1,   386,
      -1,   390,    -1,    -1,    -1,    21,    70,    23,   395,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      55,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
      -1,   428,   113,   114,   115,   116,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,   442,    -1,    -1,   445,    -1,
      -1,   125,   449,    98,    -1,   452,    -1,   102,    -1,    -1,
     105,   106,   107,   108,     7,    -1,   465,   141,   113,   114,
     115,   116,   117,   472,    -1,    -1,    19,    -1,   475,    -1,
      -1,    -1,    25,   480,    -1,    28,   485,    30,    -1,    55,
      -1,   488,    -1,    -1,   491,    38,   493,    -1,    -1,   125,
      -1,   498,    -1,    -1,    47,    48,    49,    -1,    -1,   506,
     507,    -1,    98,   510,    -1,   141,    -1,    -1,   517,   105,
     106,   107,   108,    -1,   523,    -1,   152,   113,   114,    -1,
      -1,    -1,    98,   530,    -1,    -1,    -1,    -1,   535,   105,
     106,   107,   108,    -1,   543,    -1,    -1,   113,   114,   115,
     116,    94,    -1,    96,    -1,    98,    -1,    -1,    -1,    -1,
     559,    -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
     113,   114,    -1,   570,    -1,   249,   250,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,    -1,   269,    79,    80,    81,    82,
      83,    84,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,   249,   250,   251,   252,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,    -1,   269,    -1,    -1,    -1,   321,     3,     4,
      -1,    -1,     7,     8,     9,    10,    -1,    12,    13,    -1,
      15,    -1,    -1,    18,    19,    20,    -1,    -1,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,   321,    -1,    52,    53,    54,
      55,    -1,    -1,    58,    59,    79,    80,    81,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,   100,    -1,    -1,    -1,
     404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
     115,   116,    -1,    -1,     3,     4,    -1,    -1,     7,     8,
       9,    10,    -1,    12,    13,    -1,    15,    -1,   404,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,    58,
      59,    79,    80,    81,    82,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,     3,     4,   113,   114,     7,     8,     9,    10,
      -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,    58,    59,    79,
      80,    81,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
       3,     4,   113,   114,     7,     8,     9,    10,    -1,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    20,    -1,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    52,
      53,    54,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    96,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,     4,
     113,   114,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    52,    53,    54,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    96,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,    -1,     4,   113,   114,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    -1,    -1,    52,    53,    54,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,   106,
     107,   108,    -1,    -1,    -1,     4,   113,   114,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    47,    48,
      49,    -1,    -1,    52,    53,    54,    -1,    -1,    19,    58,
      59,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    79,    80,
      81,    82,    83,    84,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    94,    -1,    96,     7,    98,    -1,    -1,
      -1,    12,    -1,    -1,   105,   106,   107,   108,    19,    -1,
      -1,    -1,   113,   114,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    -1,    35,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    47,    48,    49,    -1,
      -1,    52,    53,    54,    55,    19,    -1,    58,    59,    -1,
      -1,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    38,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    94,    -1,    96,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,   114,    -1,    79,    80,    81,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      94,    -1,    96,     7,    98,    -1,   100,    -1,    12,    -1,
      -1,   105,   106,   107,   108,    19,    -1,    -1,    -1,   113,
     114,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    52,    53,
      54,    19,    -1,    -1,    58,    59,    -1,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    96,    97,    98,    99,    -1,   101,    -1,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
     114,    79,    80,    81,    82,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    94,    -1,    96,    -1,
      98,     7,     8,    -1,    -1,    -1,    12,   105,   106,   107,
     108,    -1,    -1,    19,    -1,   113,   114,    -1,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,    35,
      -1,    -1,    38,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    47,    48,    49,    -1,    19,    52,    53,    54,    -1,
      -1,    25,    58,    59,    28,    -1,    30,    -1,    -1,    33,
      -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    47,    48,    49,    -1,    -1,    52,    53,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    94,    -1,
      96,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    78,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    96,    97,    98,    99,    -1,   101,    -1,    -1,
       7,   105,   106,   107,   108,    12,    -1,    -1,    -1,   113,
     114,    -1,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    -1,    35,    -1,
      -1,    38,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      47,    48,    49,    -1,    19,    52,    53,    54,    -1,    -1,
      25,    58,    59,    28,    -1,    30,    -1,    -1,    33,    -1,
      35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    47,    48,    49,    -1,    -1,    52,    53,    54,
      -1,    -1,    -1,    58,    59,    -1,    -1,    94,    -1,    96,
      97,    98,    99,    -1,   101,    -1,    -1,    -1,   105,   106,
     107,   108,    -1,    78,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    96,    97,    98,    99,    -1,   101,    -1,    -1,     7,
     105,   106,   107,   108,    12,    -1,    -1,    -1,   113,   114,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    -1,    35,    -1,    -1,
      38,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    47,
      48,    49,    -1,    19,    52,    53,    54,    -1,    -1,    25,
      58,    59,    28,    -1,    30,    -1,    -1,    33,    -1,    35,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    47,    48,    49,    -1,    -1,    52,    53,    54,    -1,
      -1,    -1,    58,    59,    -1,    93,    94,    -1,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,    78,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,
      96,     7,    98,    -1,    -1,   101,    12,    -1,    -1,   105,
     106,   107,   108,    19,    -1,    -1,    -1,   113,   114,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    -1,    35,
      -1,    -1,    38,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    47,    48,    49,    -1,    19,    52,    53,    54,    -1,
      -1,    25,    58,    59,    28,    -1,    30,    -1,    -1,    33,
      -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    47,    48,    49,    -1,    -1,    52,    53,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    94,    -1,
      96,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,
     106,   107,   108,    -1,    78,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    96,    97,    98,     7,    -1,    -1,    -1,    -1,
      12,   105,   106,   107,   108,    -1,    -1,    19,    -1,   113,
     114,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    -1,    35,    -1,    -1,    38,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    47,    48,    49,    -1,    19,
      52,    53,    54,    -1,    -1,    25,    58,    59,    28,    -1,
      30,    -1,    -1,    33,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    47,    48,    49,
      -1,    -1,    52,    53,    54,    -1,    -1,    -1,    58,    59,
      -1,    -1,    94,    -1,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,    -1,   105,   106,   107,   108,    -1,    78,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    96,     7,    98,    -1,
      -1,   101,    12,    -1,    -1,   105,   106,   107,   108,    19,
      -1,    -1,    -1,   113,   114,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    -1,    35,    -1,    -1,    38,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    47,    48,    49,
      -1,    19,    52,    53,    54,    -1,    -1,    25,    58,    59,
      28,    -1,    30,    -1,    -1,    33,    -1,    35,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    47,
      48,    49,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,
      58,    59,    -1,    -1,    94,    -1,    96,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      78,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,     7,
      98,    -1,    -1,    -1,    12,    -1,    -1,   105,   106,   107,
     108,    19,    -1,    -1,    -1,   113,   114,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    -1,    35,    -1,    -1,
      38,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    19,    52,    53,    54,    -1,    -1,    25,
      58,    59,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,   114
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     7,     8,     9,    10,    12,    13,    15,
      18,    19,    20,    24,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    47,    48,    49,
      52,    53,    54,    58,    59,    78,    94,    96,    98,   102,
     105,   106,   107,   108,   113,   114,   121,   122,   123,   124,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   143,   151,   152,   153,   154,   155,
     158,   159,   160,   161,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   188,   201,   202,   203,
     204,   207,   208,   209,   210,   211,   216,   218,   219,   223,
     224,   225,   234,   235,   240,   241,   243,   244,   245,   253,
      94,    38,   102,   134,   135,    16,    38,    96,   133,   135,
     246,   247,   102,   134,   102,     7,    19,    38,    96,   135,
     137,   158,   160,   176,     7,    11,    19,    55,    96,   177,
     188,   254,    94,    55,    94,   133,    94,    28,   151,   153,
      38,   102,   135,   175,    94,    98,   100,   156,    94,   175,
      96,   181,   160,    96,    98,   133,   189,   190,   191,   192,
     193,   160,    94,    94,    55,   173,   160,   160,   160,   160,
     160,   160,    93,   101,   175,    55,    95,    98,   115,   116,
     123,   128,   131,   132,   144,   145,   146,   147,   148,   149,
     182,   237,   239,    97,    99,   101,   140,   141,   142,   173,
       0,   108,   113,   114,   125,    72,    98,   100,   156,    98,
     100,   156,    79,    80,    81,    82,    83,    84,    86,    87,
      88,    89,    90,    91,   158,   174,    55,    56,    57,   162,
      58,    59,    64,    65,    66,    23,    67,    68,    69,    70,
      60,    61,    62,    63,    75,    77,    76,    73,    71,    74,
      99,   102,   183,   133,   186,   187,   191,    92,   133,   102,
     158,    95,    98,   102,   117,   123,   128,   131,   146,   237,
     248,   249,   250,   246,    96,   102,   133,   246,    55,    94,
     133,    95,   132,    36,   133,   246,   173,   178,   244,    55,
      94,   133,   118,   251,    95,   123,   255,   256,   102,   251,
      34,   158,   175,   184,   185,   205,    94,   133,   101,   133,
     191,   198,   199,   200,   227,   228,   229,   230,   231,    94,
     175,   156,   102,    93,   101,   157,   173,   175,   123,   175,
     102,    95,     6,    17,   220,   221,    95,   146,   194,   197,
     199,    97,   141,   195,   196,   198,   200,    79,   150,    99,
     102,   150,   175,   175,   173,   133,    93,    99,   146,   173,
     146,   146,   150,    95,    99,    72,    94,    95,   173,    97,
      99,    97,    99,   142,   173,    19,   176,   217,   224,   175,
     135,   175,   123,   173,    52,   173,   160,   161,   161,   163,
     163,   164,   164,   164,   164,   164,   165,   165,   165,   165,
     166,   167,   168,   169,   173,   170,   173,   150,    99,   102,
     150,    97,   173,   236,    93,   173,   237,    95,   250,    95,
     248,   246,    94,   133,   227,    94,    94,   246,   102,    94,
     133,   227,    94,   131,   252,   102,   119,    95,    99,   102,
     133,   189,   191,   206,    22,    26,   102,   175,   133,   191,
     206,    22,    26,   227,   231,    94,   133,   150,   150,    93,
      99,   227,    93,   173,    93,    99,    97,    93,    94,   181,
     221,    72,    95,    99,    97,   198,   200,    97,    99,    97,
     138,   173,   190,    93,    93,    93,   101,    94,    97,    94,
      94,    95,   145,   173,   226,   227,    97,   141,   142,   173,
      97,    97,   158,    72,   187,   182,   232,   233,   102,    95,
      94,    93,   227,   175,   231,    94,    93,   227,   123,    95,
     256,   102,    22,    26,   175,   173,   175,   102,   175,   173,
      93,    93,   227,   231,    96,   230,   231,    93,   176,   101,
     173,    96,   212,   133,   191,   222,   198,    95,   197,    97,
     141,   196,   200,    96,   176,   176,   133,   226,    93,   231,
     238,    93,    97,   142,   173,    53,   173,    98,    96,    93,
      93,   231,    96,    93,   175,   175,   173,    93,    93,   102,
     175,    93,    93,    96,    96,    93,    93,   232,    96,    14,
     173,     5,    11,    95,   213,   214,   215,    93,    97,   200,
      97,   176,    93,    93,    96,    93,    95,   232,    96,   102,
     232,    96,   102,    93,    93,   176,   176,   175,    93,   176,
     176,   232,   242,   242,    96,    96,    95,   232,   176,   175,
      72,    95,   214,   215,   213,   181,    97,    95,    96,   232,
      96,   232,    95,   232,    95,   232,   175,   176,   176,    93,
     176,    95,    95,   242,   242,    95,    72,   182,    95,   213,
      95,   242,    95,   232,    96,    95,    95,    93,   176,    95,
      95,   182,    95,    95,    95,   176
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
#line 237 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); }
    break;

  case 6:
#line 238 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (2)].string_value); }
    break;

  case 7:
#line 242 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); }
    break;

  case 8:
#line 243 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); }
    break;

  case 9:
#line 244 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); }
    break;

  case 10:
#line 248 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); }
    break;

  case 11:
#line 249 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); }
    break;

  case 12:
#line 250 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); }
    break;

  case 14:
#line 266 "yacc.y"
    { printf("boolean,%d,%d,%d\n", line, 4, column); }
    break;

  case 15:
#line 267 "yacc.y"
    { printf("boolean,%d,%d,%d\n", line, 5, column); }
    break;

  case 22:
#line 313 "yacc.y"
    {}
    break;

  case 23:
#line 317 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); }
    break;

  case 24:
#line 318 "yacc.y"
    {}
    break;

  case 26:
#line 323 "yacc.y"
    {}
    break;

  case 27:
#line 327 "yacc.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); }
    break;

  case 28:
#line 335 "yacc.y"
    {}
    break;

  case 70:
#line 421 "yacc.y"
    { printf("property_name,%d,%lu,%d\n", line, strlen((yyvsp[(1) - (1)].string_value)), column); }
    break;

  case 77:
#line 440 "yacc.y"
    { (yyval.string_value) = (yyvsp[(2) - (2)].string_value); }
    break;

  case 78:
#line 441 "yacc.y"
    {}
    break;

  case 82:
#line 461 "yacc.y"
    {}
    break;

  case 83:
#line 463 "yacc.y"
    {}
    break;

  case 87:
#line 480 "yacc.y"
    { printf("- new expression at line%d\n", line); }
    break;

  case 95:
#line 498 "yacc.y"
    { printf("- (ARGS) at line %d\n", line); }
    break;

  case 104:
#line 529 "yacc.y"
    { printf("- DELETE at line %d\n", line); }
    break;

  case 105:
#line 530 "yacc.y"
    { printf("- VOID at line %d\n", line); }
    break;

  case 106:
#line 531 "yacc.y"
    { printf("- TYPEOF at line %d\n", line); }
    break;

  case 107:
#line 532 "yacc.y"
    { printf("- UNARY_ADD at line %d\n", line); }
    break;

  case 108:
#line 533 "yacc.y"
    { printf("- UNARY_SUBTRACT at line %d\n", line); }
    break;

  case 109:
#line 534 "yacc.y"
    { printf("- ADD at line %d\n", line); }
    break;

  case 110:
#line 535 "yacc.y"
    { printf("subtract,%d,%d,%d\n", line, 1, column); }
    break;

  case 111:
#line 536 "yacc.y"
    { printf("- BITWISE_NOT at line %d\n", line); }
    break;

  case 112:
#line 537 "yacc.y"
    { printf("- LOGICAL_NOT at line %d\n", line); }
    break;

  case 115:
#line 550 "yacc.y"
    { printf("- MULTIPLY at line %d\n", line); }
    break;

  case 116:
#line 551 "yacc.y"
    { printf("- DIVIDE at line %d\n", line); }
    break;

  case 117:
#line 552 "yacc.y"
    { printf("- MODULO at line %d\n", line); }
    break;

  case 119:
#line 561 "yacc.y"
    { printf("- BINARY ADD at line %d\n", line); }
    break;

  case 120:
#line 562 "yacc.y"
    { printf("- BINARY SUBTRACT at line %d\n", line); }
    break;

  case 122:
#line 571 "yacc.y"
    { printf("- LEFT_SHIFT at line %d\n", line); }
    break;

  case 123:
#line 572 "yacc.y"
    { printf("- SIGNED_RIGHT_SHIFT at line %d\n", line); }
    break;

  case 124:
#line 573 "yacc.y"
    { printf("- UNSIGNED_RIGHT_SHIFT at line %d\n", line); }
    break;

  case 126:
#line 582 "yacc.y"
    { printf("- LESS_THAN at line %d\n", line); }
    break;

  case 127:
#line 583 "yacc.y"
    { printf("- GREATER_THAN at line %d\n", line); }
    break;

  case 128:
#line 584 "yacc.y"
    { printf("- LESS_THAN_OR_EQUAL at line %d\n", line); }
    break;

  case 129:
#line 585 "yacc.y"
    { printf("- GREATER_THAN_OR_EQUAL at line %d\n", line); }
    break;

  case 130:
#line 586 "yacc.y"
    { printf("- INSTANCEOF at line %d\n", line); }
    break;

  case 137:
#line 613 "yacc.y"
    { printf("- BITWISE_AND at line %d\n", line);  }
    break;

  case 139:
#line 618 "yacc.y"
    { printf("- BITWISE_XOR at line %d\n", line);  }
    break;

  case 141:
#line 623 "yacc.y"
    { printf("- BITWISE_OR at line %d\n", line);  }
    break;

  case 143:
#line 632 "yacc.y"
    { printf("- LOGICAL_AND at line %d\n", line); }
    break;

  case 145:
#line 637 "yacc.y"
    { printf("- LOGICAL_OR at line %d\n", line); }
    break;

  case 147:
#line 646 "yacc.y"
    { printf("ConditionalExpression at line %d\n", line); }
    break;

  case 151:
#line 657 "yacc.y"
    { printf("- ASSIGNMENT at line %d\n", line); }
    break;

  case 152:
#line 658 "yacc.y"
    { printf("- ASSIGNMENT with OPERATOR at line %d\n", line); }
    break;

  case 153:
#line 662 "yacc.y"
    { printf("- MULTIPLICATION_ASSIGNMENT at line %d\n", line);  }
    break;

  case 154:
#line 663 "yacc.y"
    { printf("- DIVISION_ASSIGNMENT at line %d\n", line);  }
    break;

  case 155:
#line 664 "yacc.y"
    { printf("- MODULUS_ASSIGNMENT at line %d\n", line);  }
    break;

  case 156:
#line 665 "yacc.y"
    { printf("- ADDITION_ASSIGNMENT at line %d\n", line);  }
    break;

  case 157:
#line 666 "yacc.y"
    { printf("- SUBTRACTION_ASSIGNMENT at line %d\n", line);  }
    break;

  case 158:
#line 667 "yacc.y"
    { printf("- LEFT_SHIFT_ASSIGNMENT at line %d\n", line);  }
    break;

  case 159:
#line 668 "yacc.y"
    { printf("- SIGNED_RIGHT_SHIFT_ASSIGNMENT at line %d\n", line);  }
    break;

  case 160:
#line 669 "yacc.y"
    { printf("- UNSIGNED_RIGHT_SHIFT_ASSIGNMENT at line %d\n", line);  }
    break;

  case 161:
#line 670 "yacc.y"
    { printf("- BITWISE_AND_ASSIGNMENT at line %d\n", line);  }
    break;

  case 162:
#line 671 "yacc.y"
    { printf("- BITWISE_XOR_ASSIGNMENT at line %d\n", line);  }
    break;

  case 163:
#line 672 "yacc.y"
    { printf("- BITWISE_OR_ASSIGNMENT at line %d\n", line);  }
    break;

  case 166:
#line 689 "yacc.y"
    {}
    break;

  case 167:
#line 690 "yacc.y"
    {}
    break;

  case 168:
#line 691 "yacc.y"
    {}
    break;

  case 169:
#line 692 "yacc.y"
    {}
    break;

  case 171:
#line 694 "yacc.y"
    {}
    break;

  case 172:
#line 695 "yacc.y"
    {}
    break;

  case 173:
#line 696 "yacc.y"
    {}
    break;

  case 174:
#line 697 "yacc.y"
    {}
    break;

  case 175:
#line 698 "yacc.y"
    {}
    break;

  case 176:
#line 699 "yacc.y"
    {}
    break;

  case 177:
#line 700 "yacc.y"
    {}
    break;

  case 178:
#line 701 "yacc.y"
    {}
    break;

  case 179:
#line 702 "yacc.y"
    {}
    break;

  case 184:
#line 710 "yacc.y"
    { printf("$%s:%s;\n", (yyvsp[(3) - (5)].string_value), getvar((yyvsp[(3) - (5)].string_value))); }
    break;

  case 190:
#line 732 "yacc.y"
    { printf("- {BLOCK} at line %d\n", line); }
    break;

  case 201:
#line 765 "yacc.y"
    { (yyval.store) = putvar((yyvsp[(1) - (1)].string_value), "undefined"); }
    break;

  case 202:
#line 766 "yacc.y"
    { (yyval.store) = putvar((yyvsp[(1) - (2)].string_value), (yyvsp[(2) - (2)].string_value)); }
    break;

  case 203:
#line 767 "yacc.y"
    { /* not supported yet */ }
    break;

  case 207:
#line 784 "yacc.y"
    { (yyval.store) = putvar((yyvsp[(1) - (1)].string_value), "undefined"); }
    break;

  case 208:
#line 785 "yacc.y"
    { (yyval.store) = putvar((yyvsp[(1) - (2)].string_value), (yyvsp[(2) - (2)].string_value)); }
    break;

  case 209:
#line 786 "yacc.y"
    { /* not supported yet */ }
    break;

  case 210:
#line 794 "yacc.y"
    {}
    break;

  case 211:
#line 795 "yacc.y"
    {}
    break;

  case 239:
#line 873 "yacc.y"
    { printf("- IF ELSE at line %d\n", line); }
    break;

  case 240:
#line 874 "yacc.y"
    { printf("- IF at line %d\n", line); }
    break;

  case 275:
#line 978 "yacc.y"
    { printf("- STATEMENT (:) at line %d\n", line); }
    break;

  case 278:
#line 991 "yacc.y"
    { printf("THROW at line %d\n", line); }
    break;

  case 289:
#line 1034 "yacc.y"
    {}
    break;

  case 290:
#line 1035 "yacc.y"
    {}
    break;

  case 304:
#line 1080 "yacc.y"
    { printf("- ArrowFunction at line %d\n", line); }
    break;

  case 310:
#line 1100 "yacc.y"
    {}
    break;

  case 311:
#line 1101 "yacc.y"
    {}
    break;

  case 312:
#line 1102 "yacc.y"
    {}
    break;

  case 317:
#line 1123 "yacc.y"
    {}
    break;

  case 318:
#line 1124 "yacc.y"
    {}
    break;

  case 320:
#line 1132 "yacc.y"
    {}
    break;

  case 321:
#line 1133 "yacc.y"
    {}
    break;

  case 322:
#line 1134 "yacc.y"
    {}
    break;

  case 324:
#line 1143 "yacc.y"
    { printf("- ClassDeclaration at line %d\n", line); }
    break;

  case 325:
#line 1147 "yacc.y"
    {}
    break;

  case 326:
#line 1148 "yacc.y"
    { printf("- ClassExpression at line %d\n", line); }
    break;

  case 331:
#line 1159 "yacc.y"
    { printf("- ClassHeritage at line %d\n", line); }
    break;

  case 332:
#line 1163 "yacc.y"
    { printf("- ClassBody at line %d\n", line); }
    break;

  case 338:
#line 1233 "yacc.y"
    {}
    break;


/* Line 1267 of yacc.c.  */
#line 3318 "y.tab.c"
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


#line 1286 "yacc.y"


#include "lex.yy.c"

void yyerror(char *s) {
    fprintf(stderr, "%s at line %d: %s\n", jserror, yylineno, s);
}

void display(variables *store) {
    variables *temp;
    temp = store;
    while(temp!=NULL) {
      printf("@%s:%s;",temp->name, temp->reference.string_value);
      temp = temp->next;
    }
}


variables *putvar (char *var_name, char *var_value) {
  if (var_name != '\0') {

    // first of all check if variable already exists
    struct variables *v;
    // iterate over each variable stored
    for(v = store; v != (variables *) 0; v = (variables *)v->next){
      // if variable name exists and is not equal to
      // the variable we are trying to save then return pointer
      if(v->name && !strcmp(v->name, var_name)) {
        yyerror("variable already defined");
        return v;
      }
    }
    // allocate memory
    variables *vars = (variables *) malloc (sizeof (variables));
    vars->name = (char *) malloc (strlen (var_name) + 1);
    strcpy (vars->name,var_name);
    vars->reference.string_value = var_value; /* default is undefined */
    vars->next = (struct variables *)store;
    store = vars;
    return vars;
    /*printf("- -> putvar, name: %s, value: %s\n", var_name, var_value);*/
  }
  // otherwise return store
  return store;
}

char* getvar (char const *var_name) {
  variables *vars;
  for (vars = store; vars != (variables *) 0; vars = (variables *)vars->next)
    if (strcmp (vars->name, var_name) == 0)
      return vars->reference.string_value;
  yyerror("unknown variable");
  return "return unknown variable";
}


int main(void) {
    yyparse();
    //variables *ptr = putvar("incredibile", "0");
    display(store);
    return 0;
}

