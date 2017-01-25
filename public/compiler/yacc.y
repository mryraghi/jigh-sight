%{
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex(void);
void yyerror(char *);

extern int line;
extern int column;

char *jserror = "[Jigh-Sight Error]";
char *jserrortype = "ERROR TYPE";

%}

%token END_OF_FILE 0
%token BREAK
%token CASE
%token CATCH
%token CLASS
%token CONST
%token CONTINUE
%token DEBUGGER
%token DEFAULT
%token DELETE
%token DO
%token ELSE
%token EXPORT
%token EXTENDS
%token FINALLY
%token FOR
%token FUNCTION
%token IF
%token IMPORT
%token IN
%token INSTANCEOF
%token LET
%token NEW
%token OF
%token RETURN
%token <sval> SUPER
%token SWITCH
%token <sval> THIS
%token THROW
%token TRY
%token TYPEOF
%token VAR
%token VOID
%token WHILE
%token WITH
%token YIELD
%token ENUM
%token AWAIT
%token IMPLEMENTS
%token INTERFACE
%token PACKAGE
%token PRIVATE
%token PROTECTED
%token PUBLIC
%token <sval> LITERAL_NULL                // null
%token <sval> LITERAL_TRUE                // true
%token <sval> LITERAL_FALSE               // false
%token LITERAL_UNDEFINED                  // undefined
%token LITERAL_NAN                        // NaN
%token UNARY_ADD                          // ++
%token UNARY_SUBTRACT                     // --
%token LOGICAL_NOT                        // !
%token MULTIPLY                           // *
%token DIVIDE                             // /
%token MODULO                             // %
%token ADD                                // +
%token SUBTRACT                           // -
%token EQUAL                              // ==
%token NOT_EQUAL                          // !=
%token EXACTLY_EQUAL                      // ===
%token NOT_EXACTLY_EQUAL                  // !==
%token LEFT_SHIFT                         // <<
%token SIGNED_RIGHT_SHIFT                 // >>
%token UNSIGNED_RIGHT_SHIFT               // >>>
%token LESS_THAN                          // <
%token GREATER_THAN                       // >
%token LESS_THAN_OR_EQUAL                 // <=
%token GREATER_THAN_OR_EQUAL              // >=
%token QUESTION_MARK                      // ?
%token COLON                              // :
%token LOGICAL_AND                        // &&
%token LOGICAL_OR                         // ||
%token BITWISE_AND                        // &
%token BITWISE_OR                         // |
%token BITWISE_XOR                        // ^
%token BITWISE_NOT                        // ~
%token ASSIGNMENT                         // =
%token ADDITION_ASSIGNMENT                // +=
%token SUBTRACTION_ASSIGNMENT             // -=
%token MULTIPLICATION_ASSIGNMENT          // *=
%token DIVISION_ASSIGNMENT                // /=
%token MODULUS_ASSIGNMENT                 // %=
%token EXPONENTIATION_ASSIGNMENT          // **=
%token LEFT_SHIFT_ASSIGNMENT              // <<=
%token SIGNED_RIGHT_SHIFT_ASSIGNMENT      // >>=
%token UNSIGNED_RIGHT_SHIFT_ASSIGNMENT    // >>>=
%token BITWISE_AND_ASSIGNMENT             // &=
%token BITWISE_XOR_ASSIGNMENT             // ^=
%token BITWISE_OR_ASSIGNMENT              // |=
%token ARROW_FUNCTION                     // =>
%token <sval> RIGHT_PAREN                 // )
%token <sval> LEFT_PAREN                  // (
%token <sval> RIGHT_BRACE                 // }
%token <sval> LEFT_BRACE                  // {
%token <sval> RIGHT_BRACKET               // ]
%token <sval> LEFT_BRACKET                // [
%token COMMA                              // ,
%token FULL_STOP                          // .
%token ELLIPSIS                           // ...
%token SEMICOLON                          // ;
%token <sval> DOUBLE_QUOTE                // "
%token <sval> SINGLE_QUOTE                // '
%token <sval> VALUE_INTEGER
%token <sval> VALUE_DOUBLE
%token <sval> VALUE_STRING
%token <sval> IDENTIFIER
%token LINE_FEED
%token CARRIAGE_RETURN
%token LINE_SEPARATOR
%token PARAGRAPH_SEPARATOR


%union {
    int ival;
    double dval;
    const char* sval;
    bool bval;
    char cval;
}


%error-verbose

%nonassoc ELSE

%nonassoc EQUAL
%nonassoc NOT_EQUAL
%nonassoc EXACTLY_EQUAL
%nonassoc NOT_EXACTLY_EQUAL
%nonassoc ASSIGNMENT


%type <sval> Identifier IdentifierName IdentifierStart Statement IfStatement Expression DecimalIntegerLiteral DecimalLiteral NumericLiteral
  Literal PrimaryExpression MemberExpression NewExpression LeftHandSideExpression
  PostfixExpression UnaryExpression  MultiplicativeExpression AdditiveExpression
  ShiftExpression RelationalExpression EqualityExpression AssignmentExpression
  ConditionalExpression LogicalANDExpression LogicalORExpression BitwiseORExpression
  BitwiseANDExpression BitwiseXORExpression IdentifierReference BindingIdentifier LabelIdentifier StringLiteral
  CatchParameter LiteralPropertyName ComputedPropertyName PropertyName PropertyDefinition ObjectLiteral BindingPattern
  ObjectBindingPattern ArrayBindingPattern YieldExpression ArrowFunction CallExpression NullLiteral BooleanLiteral
  ArrayLiteral ClassExpression GeneratorExpression MethodDefinition CoverInitializedName
  CoverParenthesizedExpressionAndArrowParameterList FunctionExpression SuperCall BindingElement FormalParameter
  SingleNameBinding FromClause
%type <cval> MultiplicativeOperator AssignmentOperator

%%

/*
 * Javascript EcmaScript 2015 (ES6) Lexical Grammar
 * http://www.ecma-international.org/ecma-262/6.0/#sec-lexical-grammar
 */

/* TODO: 12.14.5 Destructuring Assignment (Supplementary Grammar)*/

/* 15.1 Scripts
 * http://www.ecma-international.org/ecma-262/6.0/#sec-scripts
 */

Script:
    /* empty */
    | ScriptBody
    ;

ScriptBody:
    StatementList
    ;

/* 11.3 Line Terminators
 * http://www.ecma-international.org/ecma-262/6.0/#sec-line-terminators
 */
/*
LineTerminator:
    LINE_FEED
    | CARRIAGE_RETURN
    | LINE_SEPARATOR
    | PARAGRAPH_SEPARATOR
    ;

LineTerminatorSequence:
    LINE_FEED
    | CARRIAGE_RETURN
    | LINE_SEPARATOR
    | PARAGRAPH_SEPARATOR
    | CARRIAGE_RETURN LINE_FEED
    ;
*/
/* 11.6 Name and Keywords
 * http://www.ecma-international.org/ecma-262/6.0/#sec-names-and-keywords
 */

IdentifierName:
    IdentifierStart {}
    | IdentifierName IdentifierPart
    ;

IdentifierStart:
    "$"             {}
    | "_"           {}
    | IDENTIFIER
    ;

IdentifierPart:
    "$"
    | "_"
    | IDENTIFIER
    ;

/* 11.8.1 Null Literals
 * http://www.ecma-international.org/ecma-262/6.0/#sec-null-literals
 */

NullLiteral:
    LITERAL_NULL
    ;

/* 11.8.2 Boolean Literals
 * http://www.ecma-international.org/ecma-262/6.0/#sec-boolean-literals
 */

BooleanLiteral:
    LITERAL_TRUE           { printf("boolean,%d,%d,%d\n", line, 4, column); }
    | LITERAL_FALSE        { printf("boolean,%d,%d,%d\n", line, 5, column); }
    ;

/* 11.8.3 Numeric Literals
 * http://www.ecma-international.org/ecma-262/6.0/#sec-literals-numeric-literals
 */

NumericLiteral:
    DecimalLiteral
    //| BinaryIntegerLiteral
    //| OctalIntegerLiteral
    //| HexIntegerLiteral
    ;

DecimalLiteral:
    DecimalIntegerLiteral
    | VALUE_DOUBLE                           { printf("double,%d,%lu,%d\n", line, strlen($1), column); }
    ;

DecimalIntegerLiteral:
    VALUE_INTEGER	                           { printf("integer,%d,%lu,%d\n", line, strlen($1), column); }
    ;


/* 11.8.4 String Literals
 * http://www.ecma-international.org/ecma-262/6.0/#sec-literals-string-literals
 */

 StringLiteral:
    SINGLE_QUOTE SINGLE_QUOTE
    | DOUBLE_QUOTE DOUBLE_QUOTE
    | SINGLE_QUOTE VALUE_STRING SINGLE_QUOTE { printf("string,%d,%lu,%d\n", line, strlen($1), column); }
    | DOUBLE_QUOTE VALUE_STRING DOUBLE_QUOTE { printf("string,%d,%lu,%d\n", line, strlen($1), column); }
    ;

/* TODO: 11.8.5 Regular Expression Literals
 * http://www.ecma-international.org/ecma-262/6.0/#sec-literals-regular-expression-literals
 */

/* TODO: 11.8.6 Template Literal Lexical Components
 * http://www.ecma-international.org/ecma-262/6.0/#sec-template-literal-lexical-components
 */

/* 12.1 Identifier
 * http://www.ecma-international.org/ecma-262/6.0/#sec-identifiers
 */

IdentifierReference:
    Identifier
    | YIELD {}
    ;

BindingIdentifier:
    Identifier
    | YIELD {}
    ;

LabelIdentifier:
    Identifier
    | YIELD {}
    ;

Identifier:
    IdentifierName
    ;

/* 12.2 Primary Expression
 * http://www.ecma-international.org/ecma-262/6.0/#sec-primary-expression
 */

PrimaryExpression:
    THIS {}
    | IdentifierReference
    | Literal
    | ArrayLiteral
    | ObjectLiteral
    | FunctionExpression
    | ClassExpression
    | GeneratorExpression
    // | RegularExpressionLiteral
    // | TemplateLiteral
    | CoverParenthesizedExpressionAndArrowParameterList
    ;

CoverParenthesizedExpressionAndArrowParameterList:
    LEFT_PAREN Expression RIGHT_PAREN
    | LEFT_PAREN RIGHT_PAREN
    | LEFT_PAREN ELLIPSIS BindingIdentifier RIGHT_PAREN
    | LEFT_PAREN Expression COMMA ELLIPSIS BindingIdentifier RIGHT_PAREN
    ;

/* 12.2.4 Literals
 * http://www.ecma-international.org/ecma-262/6.0/#sec-primary-expression-literals
 */

Literal:
    NullLiteral
    | BooleanLiteral
    | NumericLiteral
    | StringLiteral
    ;

/* 12.2.5 Array Initializer
 * http://www.ecma-international.org/ecma-262/6.0/#sec-array-initializer
 */

ArrayLiteral:
    LEFT_BRACKET RIGHT_BRACKET
    | LEFT_BRACKET Elision RIGHT_BRACKET
    | LEFT_BRACKET ElementList RIGHT_BRACKET
    | LEFT_BRACKET ElementList COMMA Elision RIGHT_BRACKET
    | LEFT_BRACKET ElementList COMMA RIGHT_BRACKET
    ;

ElementList:
    Elision AssignmentExpression
    | AssignmentExpression
    | Elision SpreadElement
    | SpreadElement
    | ElementList COMMA Elision AssignmentExpression
    | ElementList COMMA AssignmentExpression
    | ElementList COMMA Elision SpreadElement
    | ElementList COMMA SpreadElement
    ;

Elision:
    COMMA
    | Elision COMMA
    ;

SpreadElement:
    ELLIPSIS AssignmentExpression
    ;

/* 12.2.6 Object Initialiser
 * http://www.ecma-international.org/ecma-262/6.0/#sec-object-initializer
 */

 ObjectLiteral:
 	  LEFT_BRACE RIGHT_BRACE
    | LEFT_BRACE PropertyDefinitionList RIGHT_BRACE
 	  | LEFT_BRACE PropertyDefinitionList COMMA RIGHT_BRACE
 	  ;

PropertyDefinitionList:
  	PropertyDefinition
    | PropertyDefinitionList COMMA PropertyDefinition
	  ;

PropertyDefinition:
	  IdentifierReference
	  | CoverInitializedName /* TODO: Cannot find real code of this use case */
    | PropertyName COLON AssignmentExpression
	  | MethodDefinition
	  ;

PropertyName:
    LiteralPropertyName 	{ printf("property_name,%d,%lu,%d\n", line, strlen($1), column); }
    | ComputedPropertyName
    ;

LiteralPropertyName:
    IdentifierName
    | StringLiteral
    | NumericLiteral
    ;

ComputedPropertyName:
	  LEFT_BRACKET AssignmentExpression RIGHT_BRACKET
	  ;

CoverInitializedName:
	  IdentifierReference Initialiser
	  ;

Initialiser:
    ASSIGNMENT AssignmentExpression
    ;

/* TODO: 12.2.8 Regular Expression Literals (RegularExpressionLiteral)
 * http://www.ecma-international.org/ecma-262/6.0/#sec-primary-expression-regular-expression-literals
 */

/* TODO: 12.2.9 Template Literals (TemplateLiteral)
 * http://www.ecma-international.org/ecma-262/6.0/#sec-template-literals
 */

/* 12.3 Left-Hand-Side Expressions
 * http://www.ecma-international.org/ecma-262/6.0/#sec-left-hand-side-expressions
 */

MemberExpression:
    PrimaryExpression
    | MemberExpression LEFT_BRACKET Expression RIGHT_BRACKET
    | MemberExpression FULL_STOP Identifier
    //| MemberExpression TemplateLiteral
    | SuperProperty {}
    //| MetaProperty
    | NEW MemberExpression Arguments {}
    ;

SuperProperty:
    SUPER LEFT_BRACKET Expression RIGHT_BRACKET
    | SUPER FULL_STOP IdentifierName
    ;

//MetaProperty:
//    NewTarget
//    ;

//NewTarget:
//    NEW FULL_STOP TARGET

NewExpression:
    MemberExpression
    | NEW NewExpression                     { printf("- new expression at line%d\n", line); }
    ;

CallExpression:
    MemberExpression Arguments
    | SuperCall
    | CallExpression Arguments
    | CallExpression LEFT_BRACKET Expression RIGHT_BRACKET
    | CallExpression FULL_STOP IdentifierName
    /* | CallExpression TemplateLiteral */
    ;

SuperCall:
    SUPER Arguments
    ;

Arguments:
    LEFT_PAREN RIGHT_PAREN
    | LEFT_PAREN ArgumentList RIGHT_PAREN   { printf("- (ARGS) at line %d\n", line); }
    ;

ArgumentList:
    AssignmentExpression
    | ELLIPSIS AssignmentExpression
    | ArgumentList COMMA AssignmentExpression
    | ArgumentList COMMA ELLIPSIS AssignmentExpression
    ;

LeftHandSideExpression:
    NewExpression
    | CallExpression
    ;

/* 12.4 Postfix Expression
 * http://www.ecma-international.org/ecma-262/6.0/#sec-postifx-expression
 */

PostfixExpression:
    LeftHandSideExpression
    LeftHandSideExpression UNARY_ADD
    LeftHandSideExpression UNARY_SUBTRACT
    ;

/* 12.5 Unary Operators
 * http://www.ecma-international.org/ecma-262/6.0/#sec-unary-operators
 */

UnaryExpression:
    PostfixExpression
	  | DELETE UnaryExpression                    { printf("- DELETE at line %d\n", line); }
	  | VOID UnaryExpression                      { printf("- VOID at line %d\n", line); }
	  | TYPEOF UnaryExpression                    { printf("- TYPEOF at line %d\n", line); }
    | UNARY_ADD UnaryExpression			            { printf("- UNARY_ADD at line %d\n", line); }
    | UNARY_SUBTRACT UnaryExpression		        { printf("- UNARY_SUBTRACT at line %d\n", line); }
    | ADD UnaryExpression 				              { printf("- ADD at line %d\n", line); }
    | SUBTRACT UnaryExpression 			            { printf("subtract,%d,%d,%d\n", line, 1, column); }
	  | BITWISE_NOT UnaryExpression               { printf("- BITWISE_NOT at line %d\n", line); }
	  | LOGICAL_NOT UnaryExpression               { printf("- LOGICAL_NOT at line %d\n", line); }
    ;

/* 12.6 Multiplicative Operators
 * http://www.ecma-international.org/ecma-262/6.0/#sec-multiplicative-operators
 */

MultiplicativeExpression:
    UnaryExpression
	  | MultiplicativeExpression MultiplicativeOperator UnaryExpression
    ;

MultiplicativeOperator:
	  MULTIPLY { printf("- MULTIPLY at line %d\n", line); }
    | DIVIDE { printf("- DIVIDE at line %d\n", line); }
    | MODULO { printf("- MODULO at line %d\n", line); }
	  ;

/* 12.7 Additive Operators
 * http://www.ecma-international.org/ecma-262/6.0/#sec-additive-operators
 */

AdditiveExpression:
    MultiplicativeExpression
    | AdditiveExpression ADD MultiplicativeExpression		{ printf("- BINARY ADD at line %d\n", line); }
    | AdditiveExpression SUBTRACT MultiplicativeExpression	{ printf("- BINARY SUBTRACT at line %d\n", line); }
    ;

/* 12.8 Bitwise Shift Operators
 * http://www.ecma-international.org/ecma-262/6.0/#sec-bitwise-shift-operators
 */

ShiftExpression:
    AdditiveExpression
	  | ShiftExpression LEFT_SHIFT AdditiveExpression { printf("- LEFT_SHIFT at line %d\n", line); }
	  | ShiftExpression SIGNED_RIGHT_SHIFT AdditiveExpression { printf("- SIGNED_RIGHT_SHIFT at line %d\n", line); }
	  | ShiftExpression UNSIGNED_RIGHT_SHIFT { printf("- UNSIGNED_RIGHT_SHIFT at line %d\n", line); }
    ;

/* 12.9 Relational Operators
 * http://www.ecma-international.org/ecma-262/6.0/#sec-relational-operators
 */

RelationalExpression:
    ShiftExpression
	  | RelationalExpression LESS_THAN ShiftExpression { printf("- LESS_THAN at line %d\n", line); }
	  | RelationalExpression GREATER_THAN ShiftExpression { printf("- GREATER_THAN at line %d\n", line); }
	  | RelationalExpression LESS_THAN_OR_EQUAL ShiftExpression { printf("- LESS_THAN_OR_EQUAL at line %d\n", line); }
	  | RelationalExpression GREATER_THAN_OR_EQUAL ShiftExpression { printf("- GREATER_THAN_OR_EQUAL at line %d\n", line); }
	  | RelationalExpression INSTANCEOF ShiftExpression { printf("- INSTANCEOF at line %d\n", line); }
    //| RelationalExpression IN ShiftExpression
	  //| LEFT_BRACKET ADD IN RIGHT_BRACKET RelationalExpression IN ShiftExpression /* unknown */
    //| Expression EQUAL Expression { printf("- EQUAL at line %d\n", line); }
    //| Expression NOT_EQUAL Expression { printf("- NOT_EQUAL at line %d\n", line); }
    //| Expression EXACTLY_EQUAL Expression { printf("- EXACTLY_EQUAL at line %d\n", line); }
    //| Expression NOT_EXACTLY_EQUAL Expression { printf("- NOT_EXACTLY_EQUAL at line %d\n", line); }
    ;

/* 12.10 Equality Operators
 * http://www.ecma-international.org/ecma-262/6.0/#sec-equality-operators
 */

EqualityExpression:
    RelationalExpression
    | EqualityExpression EQUAL RelationalExpression
    | EqualityExpression NOT_EQUAL RelationalExpression
	  | EqualityExpression EXACTLY_EQUAL RelationalExpression
	  | EqualityExpression NOT_EXACTLY_EQUAL RelationalExpression
    ;

/* 12.11 Binary Bitwise Operators
 * http://www.ecma-international.org/ecma-262/6.0/#sec-binary-bitwise-operators
 */

BitwiseANDExpression:
    EqualityExpression
    | BitwiseANDExpression BITWISE_AND EqualityExpression { printf("- BITWISE_AND at line %d\n", line);  }
    ;

BitwiseXORExpression:
    BitwiseANDExpression
    | BitwiseXORExpression BITWISE_XOR BitwiseANDExpression { printf("- BITWISE_XOR at line %d\n", line);  }
    ;

BitwiseORExpression:
    BitwiseXORExpression
    | BitwiseORExpression BITWISE_OR BitwiseXORExpression { printf("- BITWISE_OR at line %d\n", line);  }
    ;

/* 12.12 Binary Logic Operators
 * http://www.ecma-international.org/ecma-262/6.0/#sec-binary-logical-operators
 */

LogicalANDExpression:
    BitwiseORExpression
    | LogicalANDExpression LOGICAL_AND BitwiseORExpression { printf("- LOGICAL_AND at line %d\n", line); }
    ;

LogicalORExpression:
    LogicalANDExpression
    | LogicalORExpression LOGICAL_OR LogicalANDExpression { printf("- LOGICAL_OR at line %d\n", line); }
    ;

/* 12.13 Conditional Operator
 * http://www.ecma-international.org/ecma-262/6.0/#sec-conditional-operator
 */

ConditionalExpression:
    LogicalORExpression
    | LogicalORExpression QUESTION_MARK AssignmentExpression COLON AssignmentExpression { printf("ConditionalExpression at line %d\n", line); }
    ;

/* 12.14 AssignmentOperator
 * http://www.ecma-international.org/ecma-262/6.0/#sec-assignment-operators
 */

AssignmentExpression:
    ConditionalExpression
    | YieldExpression
    | ArrowFunction
    | LeftHandSideExpression ASSIGNMENT AssignmentExpression { printf("- ASSIGNMENT at line %d\n", line); }
    | LeftHandSideExpression AssignmentOperator AssignmentExpression  { printf("- ASSIGNMENT with OPERATOR at line %d\n", line); } /* reachable? */
    ;

AssignmentOperator:
    MULTIPLICATION_ASSIGNMENT         { printf("- MULTIPLICATION_ASSIGNMENT at line %d\n", line);  }
    | DIVISION_ASSIGNMENT             { printf("- DIVISION_ASSIGNMENT at line %d\n", line);  }
    | MODULUS_ASSIGNMENT              { printf("- MODULUS_ASSIGNMENT at line %d\n", line);  }
    | ADDITION_ASSIGNMENT             { printf("- ADDITION_ASSIGNMENT at line %d\n", line);  }
    | SUBTRACTION_ASSIGNMENT          { printf("- SUBTRACTION_ASSIGNMENT at line %d\n", line);  }
    | LEFT_SHIFT_ASSIGNMENT           { printf("- LEFT_SHIFT_ASSIGNMENT at line %d\n", line);  }
    | SIGNED_RIGHT_SHIFT_ASSIGNMENT   { printf("- SIGNED_RIGHT_SHIFT_ASSIGNMENT at line %d\n", line);  }
    | UNSIGNED_RIGHT_SHIFT_ASSIGNMENT { printf("- UNSIGNED_RIGHT_SHIFT_ASSIGNMENT at line %d\n", line);  }
    | BITWISE_AND_ASSIGNMENT          { printf("- BITWISE_AND_ASSIGNMENT at line %d\n", line);  }
    | BITWISE_XOR_ASSIGNMENT          { printf("- BITWISE_XOR_ASSIGNMENT at line %d\n", line);  }
    | BITWISE_OR_ASSIGNMENT           { printf("- BITWISE_OR_ASSIGNMENT at line %d\n", line);  }
    ;

/* 12.15 Comma Operator
 * http://www.ecma-international.org/ecma-262/6.0/#sec-comma-operator
 */

Expression:
    AssignmentExpression
    | Expression COMMA AssignmentExpression
    ;

/* 13 Statements and Declations
 * http://www.ecma-international.org/ecma-262/6.0/#sec-ecmascript-language-statements-and-declarations
 */

Statement:
    BlockStatement {}
    | VariableStatement {}
    | EmptyStatement {}
    | ExpressionStatement {}
    | IfStatement
    | BreakableStatement {}
    | ReturnStatement {}
    | ContinueStatement {}
    | BreakStatement {}
    | WithStatement {}
    | LabelledStatement {}
    | ThrowStatement {}
    | TryStatement {}
    | DebuggerStatement {}
    ;

 Declaration:
    HoistableDeclaration
    | ClassDeclaration
    //| LexicalDeclaration
    | ExportDeclaration
    ;

 HoistableDeclaration:
    FunctionDeclaration
    | GeneratorDeclaration
    ;

BreakableStatement:
    IterationStatement
    | SwitchStatement
    ;

/* 13.2 Block
 * http://www.ecma-international.org/ecma-262/6.0/#sec-block
 */

BlockStatement:
    Block
    ;

Block:
    LEFT_BRACE StatementList RIGHT_BRACE 	{ printf("- {BLOCK} at line %d\n", line); }
    | LEFT_BRACE RIGHT_BRACE
    ;

StatementList:
    StatementListItem
    | StatementList StatementListItem
    ;

StatementListItem:
    Statement
    | Declaration
    ;

/* 13.3.1 Let and Const Declaration
 * http://www.ecma-international.org/ecma-262/6.0/#sec-let-and-const-declarations
 */

LexicalDeclaration:
    LetOrConst BindingList SEMICOLON
    ;

LetOrConst:
    LET
    | CONST
    ;

BindingList:
    LexicalBinding
    | BindingList COMMA LexicalBinding
    ;

LexicalBinding:
    BindingIdentifier
    | BindingIdentifier Initialiser
    | BindingPattern Initialiser
    ;

/* 13.3.2 Variable Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-variable-statement
 */

VariableStatement:
    VAR VariableDeclarationList SEMICOLON
    ;

VariableDeclarationList:
    VariableDeclaration
    | VariableDeclarationList COMMA VariableDeclaration
    ;

VariableDeclaration:
    BindingIdentifier
    | BindingIdentifier Initialiser
    | BindingPattern Initialiser
    ;

/* 13.3.3 Destructuting Binding Patterns
 * http://www.ecma-international.org/ecma-262/6.0/#sec-destructuring-binding-patterns
 */

BindingPattern:
	ObjectBindingPattern
    | ArrayBindingPattern
	;

ObjectBindingPattern:
    LEFT_BRACE RIGHT_BRACE
    | LEFT_BRACE BindingPropertyList RIGHT_BRACE
    | LEFT_BRACE BindingPropertyList COMMA RIGHT_BRACE
    ;

ArrayBindingPattern:
    LEFT_BRACKET RIGHT_BRACKET
    | LEFT_BRACKET BindingRestElement RIGHT_BRACKET
    | LEFT_BRACKET Elision RIGHT_BRACKET
    | LEFT_BRACKET Elision BindingRestElement RIGHT_BRACKET
    | LEFT_BRACKET BindingElementList RIGHT_BRACKET
    | LEFT_BRACKET BindingElementList COMMA Elision RIGHT_BRACKET
    | LEFT_BRACKET BindingElementList COMMA BindingRestElement RIGHT_BRACKET
    | LEFT_BRACKET BindingElementList COMMA Elision BindingRestElement RIGHT_BRACKET
    ;

BindingPropertyList:
    BindingProperty
    | BindingPropertyList COMMA BindingProperty
    ;

BindingElementList:
    BindingElisionElement
    | BindingElementList COMMA BindingElisionElement
    ;

BindingElisionElement:
    BindingElement
    | Elision BindingElement
    ;

BindingProperty:
    SingleNameBinding
    | PropertyName COLON BindingElement
    ;

BindingElement:
    SingleNameBinding
    | BindingPattern
    | BindingPattern Initialiser
    ;

SingleNameBinding:
    BindingIdentifier
    | BindingIdentifier Initialiser
    ;

BindingRestElement:
    ELLIPSIS BindingIdentifier
    ;

/* 13.4 Empty Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-empty-statement
 */

EmptyStatement:
    SEMICOLON
    ;

 /* 13.5 Expression Statement
  * http://www.ecma-international.org/ecma-262/6.0/#sec-expression-statement
  */

ExpressionStatement:
// TODO Check look-ahead, see 13.5: ≠ {, ≠ function, ≠ class, ≠ let [
    Expression SEMICOLON
  //| Expression          /* TODO: not included, check this */
    ;

/* 13.6 If Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-if-statement
 */

IfStatement:
    IF LEFT_PAREN Expression RIGHT_PAREN Statement ELSE Statement     { printf("- IF ELSE at line %d\n", line); }
    | IF LEFT_PAREN Expression RIGHT_PAREN Statement                  { printf("- IF at line %d\n", line); }
    ;

/* 13.7 Iteration Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-iteration-statements
 */
 // TODO: optional parameters have not been considered in IterationStatement
IterationStatement:
    DO Statement WHILE LEFT_PAREN Expression RIGHT_PAREN SEMICOLON
    | WHILE LEFT_PAREN Expression RIGHT_PAREN Statement
    | WHILE LEFT_PAREN Expression RIGHT_PAREN LEFT_BRACE Statement RIGHT_BRACE
    // check look-ahead at 13.7: ≠ let [
    | FOR LEFT_PAREN Expression SEMICOLON Expression SEMICOLON Expression RIGHT_PAREN Statement
    | FOR LEFT_PAREN VAR VariableDeclarationList SEMICOLON Expression SEMICOLON Expression RIGHT_PAREN Statement
    | FOR LEFT_PAREN LexicalDeclaration Expression SEMICOLON Expression RIGHT_PAREN Statement
    // check look-ahead at 13.7: ≠ let
    | FOR LEFT_PAREN LeftHandSideExpression IN Expression RIGHT_PAREN Statement
    | FOR LEFT_PAREN VAR ForBinding IN Expression RIGHT_PAREN Statement
    | FOR LEFT_PAREN ForDeclaration IN Expression RIGHT_PAREN Statement
    | FOR LEFT_PAREN LeftHandSideExpression OF AssignmentExpression RIGHT_PAREN Statement
    | FOR LEFT_PAREN VAR ForBinding OF AssignmentExpression RIGHT_PAREN Statement
    | FOR LEFT_PAREN ForDeclaration OF AssignmentExpression RIGHT_PAREN Statement
    ;

ForDeclaration:
    LetOrConst ForBinding
    ;

ForBinding:
    BindingIdentifier
    | BindingPattern
    ;

/* 13.8 The continue Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-continue-statement
 */

ContinueStatement:
    CONTINUE SEMICOLON
    | CONTINUE LabelIdentifier SEMICOLON
    ;

/* 13.9 The break Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-break-statement
 */

BreakStatement:
    BREAK SEMICOLON
    | BREAK LabelIdentifier SEMICOLON
    ;

/* 13.10 The return Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-return-statement
 */

ReturnStatement:
    RETURN SEMICOLON
    | RETURN Expression SEMICOLON
    ;

/* 13.11 The with Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-with-statement
 */

WithStatement:
    WITH LEFT_PAREN Expression RIGHT_PAREN Statement
    ;

/* 13.12 The switch Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-switch-statement
 */

SwitchStatement:
    SWITCH LEFT_PAREN Expression RIGHT_PAREN CaseBlock
    ;

CaseBlock:
    LEFT_BRACE RIGHT_BRACE
    | LEFT_BRACE CaseClauses RIGHT_BRACE
    | LEFT_BRACE DefaultClause CaseClauses RIGHT_BRACE
    | LEFT_BRACE CaseClauses DefaultClause RIGHT_BRACE
    | LEFT_BRACE CaseClauses DefaultClause CaseClauses RIGHT_BRACE
    ;

CaseClauses:
    CaseClause
    | CaseClauses CaseClause
    ;

CaseClause:
    CASE Expression COLON
    | CASE Expression COLON StatementList
    ;

DefaultClause:
    DEFAULT COLON
    | DEFAULT COLON StatementList
    ;

/* 13.13 Labelled Statements
 * http://www.ecma-international.org/ecma-262/6.0/#sec-labelled-statements
 */

LabelledStatement:
    LabelIdentifier COLON LabelledItem      { printf("- STATEMENT (:) at line %d\n", line); }
    ;

LabelledItem:
    Statement
    | FunctionDeclaration
    ;

/* 13.14 The throw Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-throw-statement
 */

ThrowStatement:
    THROW Expression SEMICOLON                { printf("THROW at line %d\n", line); }
    ;

/* 13.15 The try Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-try-statement
 */

TryStatement:
    TRY Block Catch
    | TRY Block Finally
    | TRY Block Catch Finally
    ;

Catch:
    CATCH LEFT_PAREN CatchParameter RIGHT_PAREN Block
    ;

Finally:
    FINALLY Block
    ;

CatchParameter:
	BindingIdentifier
	| BindingPattern

/* 13.16 The debugger Statement
 * http://www.ecma-international.org/ecma-262/6.0/#sec-debugger-statement
 */

DebuggerStatement:
    DEBUGGER SEMICOLON
    ;

/* 14.1 Function Definitions
 * http://www.ecma-international.org/ecma-262/6.0/#sec-function-definitions
 */

FunctionDeclaration:
    FUNCTION BindingIdentifier LEFT_PAREN FormalParameters RIGHT_PAREN LEFT_BRACE FunctionBody RIGHT_BRACE
    | FUNCTION LEFT_PAREN FormalParameters RIGHT_PAREN LEFT_BRACE FunctionBody RIGHT_BRACE
    ;

FunctionExpression:
    FUNCTION BindingIdentifier LEFT_PAREN FormalParameters RIGHT_PAREN LEFT_BRACE FunctionBody RIGHT_BRACE {}
    | FUNCTION LEFT_PAREN FormalParameters RIGHT_PAREN LEFT_BRACE FunctionBody RIGHT_BRACE {}
    ;

StrictFormalParameters:
    FormalParameters
    ;

FormalParameters:
    /* empty */
    | FormalParameterList
    ;

FormalParameterList:
    FunctionRestParameter
    | FormalsList
    | FormalsList COMMA FunctionRestParameter
    ;

FormalsList:
    FormalParameter
    | FormalsList COMMA FormalParameter
    ;

FunctionRestParameter:
    BindingRestElement
    ;

FormalParameter:
    BindingElement
    ;

FunctionBody:
    FunctionStatementList
    ;

FunctionStatementList:
    /* empty */
    | StatementList
    ;

/* 14.2 Arrow Function Definitions
 * http://www.ecma-international.org/ecma-262/6.0/#sec-arrow-function-definitions
 */

ArrowFunction:
    ArrowParameters ARROW_FUNCTION ConciseBody { printf("- ArrowFunction at line %d\n", line); }
    ;

ArrowParameters:
    BindingIdentifier
    | CoverParenthesizedExpressionAndArrowParameterList
    ;

ConciseBody:
    // TODO: check look-ahead at 14.2: ≠ {
    AssignmentExpression
    | RIGHT_BRACKET FunctionBody LEFT_BRACKET
    ;

/* 14.3 Method Definitions
 * http://www.ecma-international.org/ecma-262/6.0/#sec-method-definitions
 */

MethodDefinition:
    PropertyName LEFT_PAREN StrictFormalParameters RIGHT_PAREN RIGHT_BRACE FunctionBody LEFT_BRACE
    | GeneratorMethod {}
    | "get" PropertyName LEFT_PAREN RIGHT_PAREN LEFT_BRACE FunctionBody RIGHT_BRACE {}
    | "set" PropertyName LEFT_PAREN PropertySetParameterList RIGHT_PAREN LEFT_BRACE FunctionBody RIGHT_BRACE {}
    ;

PropertySetParameterList:
    FormalParameter
    ;

/* 14.4 Generator Function Definitions
 * http://www.ecma-international.org/ecma-262/6.0/#sec-generator-function-definitions
 */

GeneratorMethod:
    MULTIPLY PropertyName LEFT_PAREN StrictFormalParameters RIGHT_PAREN LEFT_BRACE GeneratorBody RIGHT_BRACE
    ;

GeneratorDeclaration:
    FUNCTION MULTIPLY BindingIdentifier LEFT_PAREN FormalParameter RIGHT_PAREN LEFT_BRACE GeneratorBody RIGHT_BRACE
    | FUNCTION MULTIPLY LEFT_PAREN FormalParameter RIGHT_PAREN LEFT_BRACE GeneratorBody RIGHT_BRACE
    ;

GeneratorExpression :
    FUNCTION MULTIPLY BindingIdentifier LEFT_PAREN FormalParameters RIGHT_PAREN LEFT_BRACE GeneratorBody RIGHT_BRACE {}
    | FUNCTION MULTIPLY LEFT_PAREN FormalParameters RIGHT_PAREN LEFT_BRACE GeneratorBody RIGHT_BRACE {}
    ;

GeneratorBody:
    FunctionBody
    ;

YieldExpression:
    YIELD {}
    | YIELD AssignmentExpression {}
    | YIELD MULTIPLY AssignmentExpression {}
    ;

/* 14.5 Class Declarations
 * http://www.ecma-international.org/ecma-262/6.0/#sec-class-declarations
 */

ClassDeclaration:
    CLASS BindingIdentifier ClassTail
    | CLASS ClassTail         { printf("- ClassDeclaration at line %d\n", line); }
    ;

ClassExpression:
    CLASS ClassTail {}
    | CLASS BindingIdentifier ClassTail { printf("- ClassExpression at line %d\n", line); }
    ;

ClassTail:
    LEFT_BRACE RIGHT_BRACE;
    | ClassHeritage LEFT_BRACE RIGHT_BRACE
    | LEFT_BRACE ClassBody RIGHT_BRACE
    | ClassHeritage LEFT_BRACE ClassBody RIGHT_BRACE
    ;

ClassHeritage:
    EXTENDS LeftHandSideExpression { printf("- ClassHeritage at line %d\n", line); }
    ;

ClassBody:
    ClassElementList { printf("- ClassBody at line %d\n", line); }
    ;

ClassElementList:
    ClassElement
    | ClassElementList ClassElement
    ;

ClassElement:
    MethodDefinition
    | "static" MethodDefinition
    | SEMICOLON
    ;

/* 15.2 Modules
 * http://www.ecma-international.org/ecma-262/6.0/#sec-modules
 */
/*
Module:
    // TODO: ModuleBody is optional
    ModuleBody
    ;

ModuleBody:
    ModuleItemList
    ;

ModuleItemList:
    ModuleItem
    | ModuleItemList ModuleItem
    ;

ModuleItem:
    ImportDeclaration
    | ExportDeclaration
    | StatementListItem
    ;
*/
/* 15.2.2 Imports
 * http://www.ecma-international.org/ecma-262/6.0/#sec-imports
 */
/*
ImportDeclaration:
    IMPORT ImportClause FromClause SEMICOLON
    | IMPORT ModuleSpecifier SEMICOLON
    ;

ImportClause:
    ImportedDefaultBinding
    | NameSpaceImport
    | NamedImports
    | ImportedDefaultBinding COMMA NameSpaceImport
    | ImportedDefaultBinding COMMA NamedImports
    ;

ImportedDefaultBinding:
    | ImportedBinding
    ;

NameSpaceImport:
    MULTIPLY 'as' ImportedBinding
    ;

NamedImports:
    LEFT_BRACE RIGHT_BRACE
    | LEFT_BRACE ImportsList RIGHT_BRACE
    | LEFT_BRACE ImportsList COMMA RIGHT_BRACE
    ;
*/
FromClause:
    'from' ModuleSpecifier {}
    ;
/*
ImportsList:
    ImportSpecifier
    | ImportsList COMMA ImportSpecifier
    ;

ImportSpecifier:
    ImportedBinding
    | IdentifierName 'as' ImportedBinding
    ;
*/
ModuleSpecifier:
    StringLiteral
    ;
/*
ImportedBinding:
    BindingIdentifier
    ;
*/
/* 15.2.3 Exports
* http://www.ecma-international.org/ecma-262/6.0/#sec-exports
*/

ExportDeclaration:
    EXPORT MULTIPLY FromClause SEMICOLON
    | EXPORT ExportClause FromClause SEMICOLON
    | EXPORT ExportClause SEMICOLON
    | EXPORT VariableStatement
    | EXPORT Declaration
    | EXPORT DEFAULT HoistableDeclaration
    | EXPORT DEFAULT ClassDeclaration
    // TODO: check look-ahead: ≠ function, ≠ class
    | EXPORT DEFAULT AssignmentExpression SEMICOLON
    ;

ExportClause:
    LEFT_BRACE RIGHT_BRACE
    | LEFT_BRACE ExportsList RIGHT_BRACE
    | LEFT_BRACE ExportsList COMMA RIGHT_BRACE
    ;

ExportsList:
    ExportSpecifier
    | ExportsList COMMA ExportSpecifier
    ;

ExportSpecifier:
    IdentifierName
    | IdentifierName 'as' IdentifierName
    ;

%%

#include "lex.yy.c"

void yyerror(char *s) {
    fprintf(stderr, "%s at line %d: %s\n", jserror, yylineno, s);
}

int main(void) {
    yyparse();
    return 0;
}
