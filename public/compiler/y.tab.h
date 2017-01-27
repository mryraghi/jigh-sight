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
/* Line 1529 of yacc.c.  */
#line 285 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

