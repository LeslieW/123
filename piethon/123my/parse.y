%{
#include <iostream>
#include "expression.h"

extern int yylex();

%}
%union {
	int				intVal;
	Expression*		exp;

}
%token<intVal>	INTNUM	"int"



%token PLUSEQ	"+="



%type<exp>		expression
%%
expression	: '(' expression ')'
				{ $$ = $2; }
			| INTNUM
				{ $$ = new Constant($1); }



