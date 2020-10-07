/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TIPO = 258,
    NUMERO_REAL = 259,
    ATRIBUICAO = 260,
    DIFERENTE = 261,
    IDENTIFICADOR = 262,
    MAIS = 263,
    MENOS = 264,
    ASTERISCO = 265,
    BARRA = 266,
    POTENCIA = 267,
    FIM_LINHA = 268,
    TABULACAO = 269,
    E = 270,
    OU = 271,
    MAIS_ATRIBUICAO = 272,
    MENOS_ATRIBUICAO = 273,
    ASTERISCO_ATRIBUICAO = 274,
    BARRA_ATRIBUICAO = 275,
    MENOR = 276,
    MAIOR = 277,
    MAIOR_IGUAL = 278,
    MENOR_IGUAL = 279,
    IGUAL = 280,
    EXCLAMACAO = 281,
    COMENTARIO = 282,
    E_COMERCIAL = 283,
    BARRA_VERTICAL = 284,
    DOIS_PONTOS = 285,
    PONTO_E_VIRGULA = 286,
    VIRGULA = 287,
    CHAVE_ESQUERDA = 288,
    CHAVE_DIREITA = 289,
    COLCHETE_ESQUERDO = 290,
    COLCHETE_DIREITO = 291,
    PARENTESIS_ESQUERDO = 292,
    PARENTESIS_DIREITO = 293,
    INCLUA = 294,
    PRINCIPAL = 295,
    DEFINA = 296,
    LEIA = 297,
    ESCREVA = 298,
    SE = 299,
    SENAO = 300,
    ENQUANTO = 301,
    FACA = 302,
    RETORNE = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "sintatico.y"

	int number;
	char caracter;
	char* string;

#line 112 "sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
