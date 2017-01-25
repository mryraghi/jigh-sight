%{
#include "util.h"
int lineno=0;
FILE *listing;
FILE *code;
FILE *source;
code
int TraceScan = 1;
int EchoSource = 1;
// used to output source code listing // used to output assembly code
// used to input tiny program source
/* lexeme of identifier or reserved word */
char tokenString[MAXTOKENLEN+1];

%}
digit [0-9]
number {digit}+
letter [a-zA-Z]
identifier {letter}+
newline \n
whitespace [ \t]+

%%
"if" {return IF;}
"then" {return THEN;}
"else" {return ELSE;}
"end" {return END;}
"repeat" {return REPEAT;}
"until" {return UNTIL;}
"read" {return READ;}
"write" {return WRITE;}
":=" {return ASSIGN;}
"=" {return EQ;}
"<" {return LT;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return TIMES;}
"/" {return OVER;}
"(" {return LPAREN;}
")" {return RPAREN;}
";" {return SEMI;}
. {return ERROR;}

{number} {return NUM;}
{identifier} {return ID;}
{newline} {lineno++;}
{whitespace} {/* skip whitespace */}
"{" {
  char c;
  do {
    c = input();
    if (c == '\n') lineno++;
    } while (c != '}');
  }

%%
TokenType getToken(void) {
  static int firstTime = TRUE;
  TokenType currentToken;
  if (firstTime) {
    firstTime = FALSE;
    lineno++;
    yyin = source=stdin; yyout = listing=stdout;
  }
  currentToken = (TokenType)yylex();
  strncpy(tokenString,yytext,MAXTOKENLEN);
  if (TraceScan) {
    fprintf(listing,"\t%d: ",lineno);
    printToken(currentToken,tokenString); }
    return currentToken;
  }

  int main() {
    TraceScan = TRUE;
    while(getToken() != ENDFILE); return 0;
  }
