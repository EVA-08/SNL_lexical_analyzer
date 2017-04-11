%{
	#include<map>
	#include<string>
	#include<utility>
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
	std::map<std::string, int> identifiers;
	std::map<int, int> unsignedIntegers;
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

[ \"\+\*-/\(\)\[\];\.\n\t<=<<EOF>>] {
	printf("'%s' SINGLE_CHARACTER_DELIMITER\n", yytext);
}


[1-9][0-9]* {
	int num = atoi(yytext);
	if (unsignedIntegers.count(num)) {
		printf("'%s' UNSIGNED_INTEGER ID=%d\n", yytext, unsignedIntegers[num]);
	} else {
		printf("'%s' UNSIGNED_INTEGER ID=%d\n", yytext, unsignedIntegers.size());
		unsignedIntegers.insert(std::pair<int, int>(num, unsignedIntegers.size()));
	}
}

[a-zA-Z][a-zA-Z0-9]* {
	std::string str(yytext);
	if (identifiers.count(str)) {
		printf("'%s' IDENTIFIER ID=%d\n", yytext, identifiers[str]);
	} else {
		printf("'%s' IDENTIFIER ID=%d\n", yytext, identifiers.size());
		identifiers.insert(std::pair<std::string, int>(str, identifiers.size()));
	}
	
}

%%
int main() {
	yylex();
	system("pause");
}

int yywrap() {
	return 1;
}
