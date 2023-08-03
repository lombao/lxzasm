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

#ifndef YY_SECONDPASS_GRAMMAR_SECONDPASS_TAB_H_INCLUDED
# define YY_SECONDPASS_GRAMMAR_SECONDPASS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef SECONDPASSDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define SECONDPASSDEBUG 1
#  else
#   define SECONDPASSDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define SECONDPASSDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined SECONDPASSDEBUG */
#if SECONDPASSDEBUG
extern int secondpassdebug;
#endif
/* "%code requires" blocks.  */
#line 2 "grammar-secondpass.y"


#include <stdint.h>
#include "defs.h"
#include "parseerrors.h"
#include "symbols.h" 
#include "code.h"
#include "preproc.h"
   

#line 68 "grammar-secondpass.tab.h"

/* Token kinds.  */
#ifndef SECONDPASSTOKENTYPE
# define SECONDPASSTOKENTYPE
  enum secondpasstokentype
  {
    SECONDPASSEMPTY = -2,
    SECONDPASSEOF = 0,             /* "end of file"  */
    SECONDPASSerror = 256,         /* error  */
    SECONDPASSUNDEF = 257,         /* "invalid token"  */
    EQU = 258,                     /* EQU  */
    ORG = 259,                     /* ORG  */
    ALIGN = 260,                   /* ALIGN  */
    END = 261,                     /* END  */
    INCBIN = 262,                  /* INCBIN  */
    DEFS = 263,                    /* DEFS  */
    DEFB = 264,                    /* DEFB  */
    DEFM = 265,                    /* DEFM  */
    DEFW = 266,                    /* DEFW  */
    ENTER = 267,                   /* ENTER  */
    IXH = 268,                     /* IXH  */
    IXL = 269,                     /* IXL  */
    IYH = 270,                     /* IYH  */
    IYL = 271,                     /* IYL  */
    AF = 272,                      /* AF  */
    BC = 273,                      /* BC  */
    DE = 274,                      /* DE  */
    HL = 275,                      /* HL  */
    IX = 276,                      /* IX  */
    IY = 277,                      /* IY  */
    SP = 278,                      /* SP  */
    AFPLUS = 279,                  /* AFPLUS  */
    A = 280,                       /* A  */
    F = 281,                       /* F  */
    B = 282,                       /* B  */
    C = 283,                       /* C  */
    D = 284,                       /* D  */
    E = 285,                       /* E  */
    H = 286,                       /* H  */
    L = 287,                       /* L  */
    I = 288,                       /* I  */
    R = 289,                       /* R  */
    INC = 290,                     /* INC  */
    DEC = 291,                     /* DEC  */
    ADC = 292,                     /* ADC  */
    ADD = 293,                     /* ADD  */
    SUB = 294,                     /* SUB  */
    SBC = 295,                     /* SBC  */
    DJNZ = 296,                    /* DJNZ  */
    JR = 297,                      /* JR  */
    RET = 298,                     /* RET  */
    RETN = 299,                    /* RETN  */
    RETI = 300,                    /* RETI  */
    RST = 301,                     /* RST  */
    JP = 302,                      /* JP  */
    CALL = 303,                    /* CALL  */
    DI = 304,                      /* DI  */
    EI = 305,                      /* EI  */
    LD = 306,                      /* LD  */
    HALT = 307,                    /* HALT  */
    NOP = 308,                     /* NOP  */
    XOR = 309,                     /* XOR  */
    AND = 310,                     /* AND  */
    OR = 311,                      /* OR  */
    NEG = 312,                     /* NEG  */
    CP = 313,                      /* CP  */
    CPI = 314,                     /* CPI  */
    CPIR = 315,                    /* CPIR  */
    CPD = 316,                     /* CPD  */
    CPDR = 317,                    /* CPDR  */
    EX = 318,                      /* EX  */
    EXX = 319,                     /* EXX  */
    LDI = 320,                     /* LDI  */
    LDIR = 321,                    /* LDIR  */
    SCF = 322,                     /* SCF  */
    CCF = 323,                     /* CCF  */
    RLCA = 324,                    /* RLCA  */
    RRCA = 325,                    /* RRCA  */
    RLA = 326,                     /* RLA  */
    RLC = 327,                     /* RLC  */
    SLA = 328,                     /* SLA  */
    SLL = 329,                     /* SLL  */
    SRL = 330,                     /* SRL  */
    RR = 331,                      /* RR  */
    RL = 332,                      /* RL  */
    RRC = 333,                     /* RRC  */
    SRA = 334,                     /* SRA  */
    BIT = 335,                     /* BIT  */
    SET = 336,                     /* SET  */
    RES = 337,                     /* RES  */
    PUSH = 338,                    /* PUSH  */
    POP = 339,                     /* POP  */
    COMMA = 340,                   /* COMMA  */
    NZ = 341,                      /* NZ  */
    Z = 342,                       /* Z  */
    NC = 343,                      /* NC  */
    PO = 344,                      /* PO  */
    PE = 345,                      /* PE  */
    P = 346,                       /* P  */
    M = 347,                       /* M  */
    IN = 348,                      /* IN  */
    OUT = 349,                     /* OUT  */
    INI = 350,                     /* INI  */
    INIR = 351,                    /* INIR  */
    IND = 352,                     /* IND  */
    INDR = 353,                    /* INDR  */
    OUTI = 354,                    /* OUTI  */
    OUTD = 355,                    /* OUTD  */
    OTIR = 356,                    /* OTIR  */
    OTDR = 357,                    /* OTDR  */
    LITERAL = 358,                 /* LITERAL  */
    INTEGER = 359,                 /* INTEGER  */
    STRING = 360,                  /* STRING  */
    PARLEFT = 361,                 /* PARLEFT  */
    PARRIGHT = 362,                /* PARRIGHT  */
    OPADD = 363,                   /* OPADD  */
    OPSUB = 364,                   /* OPSUB  */
    OPMUL = 365,                   /* OPMUL  */
    OPDIV = 366                    /* OPDIV  */
  };
  typedef enum secondpasstokentype secondpasstoken_kind_t;
#endif

/* Value type.  */
#if ! defined SECONDPASSSTYPE && ! defined SECONDPASSSTYPE_IS_DECLARED
union SECONDPASSSTYPE
{
#line 15 "grammar-secondpass.y"

  int32_t 		normal;
  char 			literal[MAX_SIZE_LITERAL];

#line 201 "grammar-secondpass.tab.h"

};
typedef union SECONDPASSSTYPE SECONDPASSSTYPE;
# define SECONDPASSSTYPE_IS_TRIVIAL 1
# define SECONDPASSSTYPE_IS_DECLARED 1
#endif


extern SECONDPASSSTYPE secondpasslval;


int secondpassparse (void);

/* "%code provides" blocks.  */
#line 22 "grammar-secondpass.y"

  // Tell Flex the expected prototype of yylex.
  #define YY_DECL int secondpasslex ()
  // Declare the scanner.
  YY_DECL;


#line 224 "grammar-secondpass.tab.h"

#endif /* !YY_SECONDPASS_GRAMMAR_SECONDPASS_TAB_H_INCLUDED  */
