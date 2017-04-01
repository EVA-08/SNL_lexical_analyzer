%{
	enum type {
		IDENTIFIER, 
		RESERVED_WORDS,  
		SINGLE_CHARACTER_DELIMITER,
		DOUBLE_CHARACTER_DELIMITER, 
		ANNOTATION_HEADER,
		ANNOTATION_TERMINATOR, 
		CHARACTER_IDENTIFIER,
		ARRAY_INDEX,
		UNSIGNED_INTEGER
	};
%}
%%
program|type|integer|char|array|of {
	printf("'%s' RESERVED_WRODS\n", yytext);
}

intc|record|end|var|procedure|begin|end|if {
	printf("'%s' RESERVED_WRODS\n", yytext);
}

then|else|fi|while|do|read|write|return {
	printf("'%s' RESERVED_WRODS\n", yytext);
}

\:= {
	printf("'%s' DOUBLE_CHARACTER_DELIMITER\n", yytext);
}

\{ {
	printf("'%s' ANNOTATION_HEADER\n", yytext);
}

\} {
	printf("'%s' ANNOTATION_TERMINATOR\n", yytext);
}

\.\. {
	printf("'%s' ARRAY_INDEX\n", yytext);
}

[\+\*-/\(\)\[\];\.<=\t<<EOF>>] {
	printf("'%s' SINGLE_CHARACTER_DELIMITER\n", yytext);
}

[1-9][0-9]* {
	printf("'%s' UNSIGNED_INTEGER\n", yytext);
}

[a-zA-Z][a-zA-z0-9]* {
	printf("'%s' IDENTIFIER\n", yytext);
}

%%
int main() {
	yylex();
	system("pause");
}

int yywrap() {
	return 1;
}
