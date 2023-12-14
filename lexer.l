%{
   // Definitions
    #include <iostream>
    #include "parser.tab.h"
    #include <cstdio>
    using namespace std;
     int line = 1;
%}
DIGIT   [0-9]
LETTER  ([a-zA-Z])
KEYWORDS (if|else|while|break|read|write|function|let|call|return)
%%
   // rules

"#".*        {/* Ignoring comments */}
" "*
"\t"*
"\r"*
"\n"          { line++; }
"=="          { cout << "EQUALEQUAL" << endl; }
"!="          { cout << "NOTEQUAL" << endl; }
"<"           { cout << "LESS" << endl; }
"<="          { cout << "LESSOREQUAL" << endl; }
">"           { cout << "GREATER" << endl; }
">="          { cout << "GREATEROREQUAL" << endl; }
"+"           { cout << "PLUS" << endl; }
"-"           { cout << "MINUS" << endl; }
"*"           { cout << "TIMES" << endl; }
"/"           { cout << "DIVIDE" << endl; }
"%"           { cout << "MODULUS" << endl; }
"~"           { cout << "TILDE" << endl; }
"|"           { cout << "BAR" << endl; }
"&"           { cout << "AMPERSAND" << endl; }
"!"           { cout << "EXCLAMATION" << endl; }
"{"           { cout << "O_BRACE" << endl; }
"}"           { cout << "C_BRACE" << endl; }
"("           { cout << "O_BRACK" << endl; }
")"           { cout << "C_BRACK" << endl; }
","           { cout << "COMMA" << endl; }
";"           { cout << "SEMICOLON" << endl; }
"="           { cout << "EQUAL" << endl; }
"if"          { cout << "IF" << endl; }
"else"        { cout << "ELSE" << endl; }
"while"       { cout << "WHILE" << endl; }
"break"       { cout << "BREAK" << endl; }
"read"        { cout << "READ" << endl; }
"write"       { cout << "WRITE" << endl; }
"function"    { cout << "FUNCTION" << endl; }
"let"         { cout << "LET" << endl; }
"call"        { cout << "CALL" << endl; }
"return"      { cout << "RETURN" << endl; }
{DIGIT}+      { cout << "NUMBER" << endl; }
{LETTER}({LETTER}|{DIGIT}|_)*    { cout << "IDENTIFIER" << endl; } 

%%

//Code Section
int yywrap(){}
int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " input_file" << endl;
        return 1;
    }

    FILE* file = fopen(argv[1], "r");
    if (!file) {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    yyin = file; // Set yyin to read from the opened file

    // Call yylex to start lexing
    yylex();

    fclose(file); // Close the file after reading

    return 0;
}
