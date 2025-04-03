/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_FILTYY_FILT_PARSER_H_INCLUDED
# define YY_FILTYY_FILT_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int filtyydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    EOS = 258,                     /* EOS  */
    LPAREN = 259,                  /* LPAREN  */
    RPAREN = 260,                  /* RPAREN  */
    GREATER = 261,                 /* GREATER  */
    GREATER_EQ = 262,              /* GREATER_EQ  */
    LESS = 263,                    /* LESS  */
    LESS_EQ = 264,                 /* LESS_EQ  */
    EQUAL = 265,                   /* EQUAL  */
    NEQUAL = 266,                  /* NEQUAL  */
    NOT = 267,                     /* NOT  */
    AND = 268,                     /* AND  */
    OR = 269,                      /* OR  */
    BAND = 270,                    /* BAND  */
    BOR = 271,                     /* BOR  */
    PLUS = 272,                    /* PLUS  */
    MINUS = 273,                   /* MINUS  */
    TIMES = 274,                   /* TIMES  */
    DIVIDE = 275,                  /* DIVIDE  */
    MOD = 276,                     /* MOD  */
    VARIABLE = 277,                /* VARIABLE  */
    STRING = 278,                  /* STRING  */
    SIGNED = 279,                  /* SIGNED  */
    UNSIGNED = 280,                /* UNSIGNED  */
    BOOL = 281,                    /* BOOL  */
    IPADDR = 282                   /* IPADDR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define EOS 258
#define LPAREN 259
#define RPAREN 260
#define GREATER 261
#define GREATER_EQ 262
#define LESS 263
#define LESS_EQ 264
#define EQUAL 265
#define NEQUAL 266
#define NOT 267
#define AND 268
#define OR 269
#define BAND 270
#define BOR 271
#define PLUS 272
#define MINUS 273
#define TIMES 274
#define DIVIDE 275
#define MOD 276
#define VARIABLE 277
#define STRING 278
#define SIGNED 279
#define UNSIGNED 280
#define BOOL 281
#define IPADDR 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 70 "./filt_parser.y"
 /* the types that we use in the tokens */
    char *string;
    long signed_long;
    u_long unsigned_long;
    ipaddr *pipaddr;
    Bool bool;
    enum optype op;
    struct filter_node *pf;

#line 131 "filt_parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE filtyylval;


int filtyyparse (void);


#endif /* !YY_FILTYY_FILT_PARSER_H_INCLUDED  */
