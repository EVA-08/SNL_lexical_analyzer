%{
	#define YYSTYPE Node*
	#include<map>
	#include<string>
	#include<utility>
	#include"ast.hpp"
	#include"syntex.tab.h"
	
	std::map<std::string, int> reservedWords{{"program", PROGRAM}, {"type", TYPE}, {"var", VAR},
	{"procedure", PROCEDURE}, {"begin", BEGIN1}, {"end", END1}, {"array", ARRAY}, {"of", OF},
	{"record", RECORD}, {"if", IF}, {"then", THEN}, {"else", ELSE}, {"fi", FI}, {"while", WHILE},
	{"do", DO}, {"endwh", ENDWH}, {"read", READ}, {"write", WRITE}, {"return", RETURN1}, 
	{"integer", INTEGER}, {"char", CHAR1}};
	bool in_comment = false;

	std::map<std::string, std::string> reservedWordsMap{{"program", "PROGRAM"}, {"type", "TYPE"}, {"var", "VAR"},
	{"procedure", "PROCEDURE"}, {"begin", "BEGIN1"}, {"end", "END1"}, {"array", "ARRAY"}, {"of", "OF"},
	{"record", "RECORD"}, {"if", "IF"}, {"then", "THEN"}, {"else", "ELSE"}, {"fi", "FI"}, {"while", "WHILE"},
	{"do", "DO"}, {"endwh", "ENDWH"}, {"read", "READ"}, {"write", "WRITE"}, {"return", "RETURN1"}, 
	{"integer", "INTEGER"}, {"char", "CHAR1"}};

%}
%%

"+" {
	if (!in_comment) {
		yylval = new Leaf("PLUS");
		return PLUS;
	}
}

"-" {
	if (!in_comment) {
		yylval = new Leaf("MINUS");
		return MINUS;
	}
}

"*" {
	if (!in_comment) {
		yylval = new Leaf("TIMES");
		return TIMES;
	}
}

"/" {
	if (!in_comment) {
		yylval = new Leaf("OVER");
		return OVER;
	}
}

"(" {
	if (!in_comment) {
		yylval = new Leaf("LPAREN");
		return LPAREN;
	}
}

")" {
	if (!in_comment) {
		yylval = new Leaf("RPAREN");
		return RPAREN;
	}
}

"." {
	if (!in_comment) {
		yylval = new Leaf("DOT");
		return DOT;
	}
}

"[" {
	if (!in_comment) {
		yylval = new Leaf("LMIDPAREN");
		return LMIDPAREN;
	}
}

"]" {
	if (!in_comment) {
		yylval = new Leaf("RMIDPAREN");
		return RMIDPAREN;
	}
}

";" {
	if (!in_comment) {
		yylval = new Leaf("SEMI");
		return SEMI;
	}
}

":" {
	if (!in_comment) {
		yylval = new Leaf("COLON");
		return COLON;
	}
}

"," {
	if (!in_comment) {
		yylval = new Leaf("COMMA");
		return COMMA;
	}
}

"<" {
	if (!in_comment) {
		yylval = new Leaf("LT");
		return LT;
	}
}

"=" {
	if (!in_comment) {
		yylval = new Leaf("EQ");
		return EQ;
	}
}

":=" {
	if (!in_comment) {
		yylval = new Leaf("ASSIGN");
		return ASSIGN;
	}
}

"{" {
	in_comment = true;
}

"}" {
	in_comment = false;
}

".." {
	if (!in_comment) {
		yylval = new Leaf("UNDERANGE");
		return UNDERANGE;
	}
}

[ \n\t] {}

0|[1-9][0-9]* {
	if (!in_comment) {
		yylval = new Leaf("INTC");
		return INTC;
	}
}

[a-zA-Z][a-zA-Z0-9]* {
	if (!in_comment) {
		std::string str(yytext);
		if (reservedWords.count(str)) {
			yylval = new Leaf(reservedWordsMap[str]);
			return reservedWords[str];
		} else {
			yylval = new Leaf("ID");
			return ID;
		}
	}
	
	
}

%%

int yywrap() {
	return 1;
}
