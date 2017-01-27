%{
#include <string.h>

char* stringbuffer;
int column = 0;
int line = 0;
char error_buffer[256];
variables *identifier(char *identifier_name);

void count();
%}

%option noyywrap

DIGIT [0-9]
CHAR [$_a-zA-Z]

%x MULTILINE_STRING

%%

\n                                  { count(); }

[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/] { /* Multiline comment */ }
"//".*                              { /* one-line one */ }

console                             { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return CONSOLE; }
break                               { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return BREAK; }
case                                { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return CASE; }
catch                               { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return CATCH; }
class                               { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return CLASS; }
const                               { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return CONST; }
continue                            { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return CONTINUE; }
debugger                            { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return DEBUGGER; }
default                             { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return DEFAULT; }
delete                              { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return DELETE; }
do                                  { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return DO; }
else                                { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return ELSE; }
export                              { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return EXPORT; }
extends                             { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return EXTENDS; }
finally                             { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return FINALLY; }
for                                 { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return FOR; }
function                            { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return FUNCTION; }
if                                  { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return IF; }
import                              { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return IMPORT; }
in                                  { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return IN; }
instanceof                          { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return INSTANCEOF; }
let                                 { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return LET; }
new                                 { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return NEW; }
of                                  { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return OF; }
return                              { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return RETURN; }
super                               { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return SUPER; }
switch                              { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return SWITCH; }
this                                { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return THIS; }
throw                               { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return THROW; }
try                                 { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return TRY; }
typeof                              { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return TYPEOF; }
var                                 { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return VAR; }
void                                { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return VOID; }
while                               { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return WHILE; }
with                                { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return WITH; }
yield                               { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return YIELD; }
enum                                { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return ENUM; }
await                               { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return AWAIT; }
implements                          { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return IMPLEMENTS; }
interface                           { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return INTERFACE; }
package                             { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return PACKAGE; }
private                             { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return PRIVATE; }
protected                           { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return PROTECTED; }
public                              { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return PUBLIC; }
null                                { count(); printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return LITERAL_NULL; }
true                                { count(); yylval.string_value = "true"; printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return LITERAL_TRUE; }
false                               { count(); yylval.string_value = "false"; printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return LITERAL_FALSE; }
undefined                           { count(); yylval.string_value = "undefined"; printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return LITERAL_UNDEFINED; }
NaN                                 { count(); yylval.string_value = "NaN"; printf("reserved,%d,%lu,%d\n", line, strlen(yytext), column); return LITERAL_NAN; }
"++"                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return UNARY_ADD; }
"--"                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return UNARY_SUBTRACT; }
"!"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LOGICAL_NOT; }
"*"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return MULTIPLY; }
"/"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return DIVIDE; }
"%"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return MODULO; }
"+"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return ADD; }
"-"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return SUBTRACT; }
"=="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return EQUAL; }
"!="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return NOT_EQUAL; }
"==="                               { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return EXACTLY_EQUAL; }
"!=="                               { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return NOT_EXACTLY_EQUAL; }
"<<"                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LEFT_SHIFT; }
">>"                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return SIGNED_RIGHT_SHIFT; }
">>>"                               { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return UNSIGNED_RIGHT_SHIFT; }
"<"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LESS_THAN; }
">"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return GREATER_THAN; }
"<="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LESS_THAN_OR_EQUAL; }
">="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return GREATER_THAN_OR_EQUAL; }
"?"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return QUESTION_MARK; }
":"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return COLON; }
"&&"                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LOGICAL_AND; }
"||"                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LOGICAL_OR; }
"&"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return BITWISE_AND; }
"|"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return BITWISE_OR; }
"^"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return BITWISE_XOR; }
"~"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return BITWISE_NOT; }
"="                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return ASSIGNMENT; }
"+="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return ADDITION_ASSIGNMENT; }
"-="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return SUBTRACTION_ASSIGNMENT; }
"*="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return MULTIPLICATION_ASSIGNMENT; }
"/="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return DIVISION_ASSIGNMENT; }
"%="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return MODULUS_ASSIGNMENT; }
"**="                               { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return EXPONENTIATION_ASSIGNMENT; }
"<<="                               { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LEFT_SHIFT_ASSIGNMENT; }
">>="                               { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return SIGNED_RIGHT_SHIFT_ASSIGNMENT; }
">>>="                              { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return UNSIGNED_RIGHT_SHIFT_ASSIGNMENT; }
"&="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return BITWISE_AND_ASSIGNMENT; }
"^="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return BITWISE_XOR_ASSIGNMENT; }
"|="                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return BITWISE_OR_ASSIGNMENT; }
"=>"                                { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return ARROW_FUNCTION; }
")"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return RIGHT_PAREN; }
"("                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LEFT_PAREN; }
"}"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return RIGHT_BRACE; }
"{"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LEFT_BRACE; }
"]"                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return RIGHT_BRACKET; }
"["                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return LEFT_BRACKET; }
","                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return COMMA; }
"."                                 { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return FULL_STOP; }
"..."                               { count(); printf("operator,%d,%lu,%d\n", line, strlen(yytext), column); return ELLIPSIS; }
";"                                 { count(); return SEMICOLON; }
"\""                                { count(); return DOUBLE_QUOTE; }
"'"                                 { count(); return SINGLE_QUOTE; }

{DIGIT}+\.{DIGIT}+                  { yylval.double_value = atof(yytext); count(); return VALUE_DOUBLE; }
{DIGIT}+                            { yylval.string_value = strdup(yytext); count(); printf("digit,%d,%lu,%d\n", line, strlen(yytext), column); return VALUE_INTEGER; }
\"(\\.|[^\\"])*\"                   {
                                      yylval.string_value = strdup(yytext);
                                      count();
                                      printf("string,%d,%lu,%d\n", line, strlen(yytext), column);
                                      return VALUE_STRING; }
\'(\\.|[^\\"])*\'                   {
                                      yylval.string_value = strdup(yytext);
                                      count();
                                      printf("string,%d,%lu,%d\n", line, strlen(yytext), column);
                                      return VALUE_STRING;
                                    }

 /*
 http://dinosaur.compilertools.net/flex/flex_11.html
 Start conditions are declared in the definitions (first) section of the
 input using unindented lines beginning with either `%s' or `%x' followed by
 a list of names. The former declares inclusive start conditions, the latter
 exclusive start conditions. A start condition is activated using the BEGIN
 action. Until the next BEGIN action is executed, rules with the given start
 condition will be active and rules with other start conditions will be
 inactive. If the start condition is inclusive, then rules with no start
 conditions at all will also be active. If it is exclusive, then only rules
 qualified with the start condition will be active. A set of rules contingent
 on the same exclusive start condition describe a scanner which is
 independent of any of the other rules in the flex input. Because of this,
 exclusive start conditions make it easy to specify "mini-scanners" which
 scan portions of the input that are syntactically different from the rest
 (e.g., comments).
 */

 /*
 Allocating memory need for a char
 */

\`                                  {
                                      BEGIN(MULTILINE_STRING);
                                      stringbuffer = strcat(NULL, malloc(sizeof(char*)));
                                    }

 /*
 BEGIN(INITIAL) returns to the original state where only the rules with no
 start conditions are active
 */

<MULTILINE_STRING>\`                {
                                      BEGIN(INITIAL);
                                      count();
                                      yylval.string_value = strdup(stringbuffer);
                                      return VALUE_STRING;
                                      free(stringbuffer);
                                    }
<MULTILINE_STRING>\n                { count(); }
<MULTILINE_STRING>.                 { stringbuffer = strcat(stringbuffer, yytext); }

{CHAR}({DIGIT}|{CHAR})*             {
                                      count();
                                      yylval.string_value = strdup(yytext);
                                      printf("identifier,%d,%lu,%d\n", line, strlen(yytext), column);
                                      return IDENTIFIER;
                                    }

"\n"                                /*{ return LINE_FEED; }*/ { count(); }
"\r"                                /*{ return CARRIAGE_RETURN; }*/ { count(); }

[ \t]                               { count(); } /* spaces and tabs, do nothing */
<<EOF>>                             { return END_OF_FILE; } /* <<EOF>> */
.                                   {
                                      count();
                                      yyerror("Unknown character");
                                    }
%%

void count() {
  int i;
  /* error_buffer could be implemented in the future */
  static char *eb = error_buffer;
  for (i = 0; yytext[i] != '\0'; i++) {
    if (yytext[i] == '\n') {
      column = 0;
      line++;
      eb = error_buffer;
    } else {
      *eb++ = yytext[i];
      column++;
      *eb = 0;
    }
  }
}
