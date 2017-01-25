/* Put new code here */

%{
#include <stdio.h>
#include <ctype.h>

extern int linenum;
%}


/* define all types of variables and terminals */

%union{
  int int_val;
  char *str_val;
}


/* define the individual types of variables and terminals */

%token PRINT
%token NEWLINE
%token <str_val> STRING
%token <int_val> INT
%type <int_val> expr


/* assign priorities to operators in order to
   avoid shift/reduce conflicts (grammar ambiguities) */

%left '+' '-'
%left '*' '/'
%left UMINUS


/* the start variable of your program */

%start program


/* The main Grammar with its actions */

%%

program : stmt_list
        | error       {printf("YACC: syntax error near line %d \n", linenum);
                       abort();}
        ;

stmt_list : stmt_list stmt
          | stmt
          ;

stmt : expr ';'            {printf("expression found\n");}
     | PRINT expr ';'      {printf("%d", $2);}
     | PRINT STRING ';'    {printf("%s", $2);}
     | PRINT NEWLINE ';'   {printf("\n");}
     ;

expr : '(' expr ')'     {$$ = $2;}
     | expr '+' expr    {$$ = $1 + $3;}
     | expr '-' expr    {$$ = $1 - $3;}
     | expr '*' expr    {$$ = $1 * $3;}
     | expr '/' expr    {$$ = $1 / $3;}
     | '-' expr         %prec UMINUS {$$ = -$2;}
     | INT              {$$ = $1;}
     ;

%%

/* link lex code */

#include "lex.yy.c"

/* insert additional code here */
