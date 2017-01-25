/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 281 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

