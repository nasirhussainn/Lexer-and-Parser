
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FUNCTION_TOK = 258,
     IDENTIFIER = 259,
     NUMBER = 260,
     BREAK = 261,
     CALL = 262,
     IF = 263,
     ELSE = 264,
     LET = 265,
     READ = 266,
     RETURN = 267,
     WHILE = 268,
     WRITE = 269,
     O_BRACK = 270,
     C_BRACK = 271,
     O_BRACE = 272,
     C_BRACE = 273,
     SEMICOLON = 274,
     EQUAL = 275,
     COMMA = 276,
     PLUS = 277,
     MINUS = 278,
     TIMES = 279,
     DIVIDE = 280,
     MODULUS = 281,
     LESS = 282,
     GREATER = 283,
     LESSOREQUAL = 284,
     GREATEROREQUAL = 285,
     EQUALEQUAL = 286,
     NOTEQUAL = 287,
     AMPERSAND = 288,
     BAR = 289,
     TILDE = 290,
     EXCLAMATION = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


