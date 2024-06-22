#include <iostream>

int main(){

    std::cout<<"Hello World";

    return 0;
}

// to run program in terminal
// g++ .\1_intro.cpp
// .\a.exe
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Bare Minimum HTML Program":{
		"prefix": "html",
		"body":[
			"<!DOCTYPE html>",
			"<html>",
			"\t<head>",
			"\t\t<title></title>",
			"\t</head>",
			"\t<body>",
			"\t\t$1",
			"\t\t$1",
			"\t</body>",
			"</html>"
		],
		"description": "html program"
	}
}
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Bare Minimum C Program": {
		"prefix": "#in",
		"body": [
			"#include <stdio.h>",
			"#include <string.h>",
			"#include <stdlib.h>",
			"\t$1",
			"int main(){",
			"\t$1",
			"\t$1",
			"\t$1",
			"\treturn 0;",
			"}"
		],
		"description": "C Program"
	}
}
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
    "Bare Minimum C++ Program":{
		"prefix": "#inc",
		"body": [
			"#include <iostream>",
			"using namespace std;",
			"$1",
			"$1",
			"$1",
			"int main(){",
			"\t$1",
			"\t$1",
			"\t$1",
			"\treturn 0;",
			"}",
		],
		"description": "C++ Program"
	}
}
{
	// Place your snippets for c here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	"Bare Minimum C Program": {
		"prefix": "#in",
		"body": [
			"#include <stdio.h>",
			"\t$1",
			"int main(){",
			"\t$1",
			"\t$1",
			"\t$1",
			"\treturn 0;",
			"}"
		],
		"description": "C Program"
	}
}