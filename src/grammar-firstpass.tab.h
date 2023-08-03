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

#ifndef YY_FIRSTPASS_GRAMMAR_FIRSTPASS_TAB_H_INCLUDED
# define YY_FIRSTPASS_GRAMMAR_FIRSTPASS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef FIRSTPASSDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define FIRSTPASSDEBUG 1
#  else
#   define FIRSTPASSDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define FIRSTPASSDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined FIRSTPASSDEBUG */
#if FIRSTPASSDEBUG
extern int firstpassdebug;
#endif
/* "%code requires" blocks.  */
#line 2 "grammar-firstpass.y"


#include <stdint.h>
#include "defs.h"
#include "parseerrors.h"
#include "symbols.h" 
#include "code.h"
#include "preproc.h"
   

#line 68 "grammar-firstpass.tab.h"

/* Token kinds.  */
#ifndef FIRSTPASSTOKENTYPE
# define FIRSTPASSTOKENTYPE
  enum firstpasstokentype
  {
    FIRSTPASSEMPTY = -2,
    FIRSTPASSEOF = 0,              /* "end of file"  */
    FIRSTPASSerror = 256,          /* error  */
    FIRSTPASSUNDEF = 257,          /* "invalid token"  */
    ENTER = 258,                   /* ENTER  */
    EQU = 259,                     /* EQU  */
    ORG = 260,                     /* ORG  */
    ALIGN = 261,                   /* ALIGN  */
    END = 262,                     /* END  */
    INCBIN = 263,                  /* INCBIN  */
    DEFS = 264,                    /* DEFS  */
    DEFB = 265,                    /* DEFB  */
    DEFM = 266,                    /* DEFM  */
    DEFW = 267,                    /* DEFW  */
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
    RLCA = 313,                    /* RLCA  */
    RRCA = 314,                    /* RRCA  */
    RLA = 315,                     /* RLA  */
    RLC = 316,                     /* RLC  */
    SLA = 317,                     /* SLA  */
    SLL = 318,                     /* SLL  */
    SRL = 319,                     /* SRL  */
    RR = 320,                      /* RR  */
    RL = 321,                      /* RL  */
    RRC = 322,                     /* RRC  */
    SRA = 323,                     /* SRA  */
    BIT = 324,                     /* BIT  */
    SET = 325,                     /* SET  */
    RES = 326,                     /* RES  */
    LDI = 327,                     /* LDI  */
    LDIR = 328,                    /* LDIR  */
    PUSH = 329,                    /* PUSH  */
    POP = 330,                     /* POP  */
    CP = 331,                      /* CP  */
    CPI = 332,                     /* CPI  */
    CPIR = 333,                    /* CPIR  */
    CPD = 334,                     /* CPD  */
    CPDR = 335,                    /* CPDR  */
    EX = 336,                      /* EX  */
    EXX = 337,                     /* EXX  */
    SCF = 338,                     /* SCF  */
    CCF = 339,                     /* CCF  */
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
    LABEL = 358,                   /* LABEL  */
    LITERAL = 359,                 /* LITERAL  */
    INTEGER = 360,                 /* INTEGER  */
    STRING = 361,                  /* STRING  */
    PARLEFT = 362,                 /* PARLEFT  */
    PARRIGHT = 363,                /* PARRIGHT  */
    OPADD = 364,                   /* OPADD  */
    OPSUB = 365,                   /* OPSUB  */
    OPMUL = 366,                   /* OPMUL  */
    OPDIV = 367                    /* OPDIV  */
  };
  typedef enum firstpasstokentype firstpasstoken_kind_t;
#endif

/* Value type.  */
#if ! defined FIRSTPASSSTYPE && ! defined FIRSTPASSSTYPE_IS_DECLARED
union FIRSTPASSSTYPE
{
#line 15 "grammar-firstpass.y"

  int32_t 		normal;
  char 			literal[MAX_SIZE_LITERAL];

#line 202 "grammar-firstpass.tab.h"

};
typedef union FIRSTPASSSTYPE FIRSTPASSSTYPE;
# define FIRSTPASSSTYPE_IS_TRIVIAL 1
# define FIRSTPASSSTYPE_IS_DECLARED 1
#endif


extern FIRSTPASSSTYPE firstpasslval;


int firstpassparse (void);

/* "%code provides" blocks.  */
#line 22 "grammar-firstpass.y"

  // Tell Flex the expected prototype of yylex.
  #define YY_DECL int firstpasslex ()
  // Declare the scanner.
  YY_DECL;


#line 225 "grammar-firstpass.tab.h"

#endif /* !YY_FIRSTPASS_GRAMMAR_FIRSTPASS_TAB_H_INCLUDED  */
