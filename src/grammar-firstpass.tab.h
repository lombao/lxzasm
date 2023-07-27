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
#include "lines.h"
#include "code.h"
   

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
    EQU = 258,                     /* EQU  */
    ORG = 259,                     /* ORG  */
    ALIGN = 260,                   /* ALIGN  */
    END = 261,                     /* END  */
    DEFS = 262,                    /* DEFS  */
    DS = 263,                      /* DS  */
    DEFB = 264,                    /* DEFB  */
    DB = 265,                      /* DB  */
    DEFM = 266,                    /* DEFM  */
    DM = 267,                      /* DM  */
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
    RLCA = 312,                    /* RLCA  */
    RRCA = 313,                    /* RRCA  */
    RLA = 314,                     /* RLA  */
    RLC = 315,                     /* RLC  */
    SLA = 316,                     /* SLA  */
    SLL = 317,                     /* SLL  */
    SRL = 318,                     /* SRL  */
    RR = 319,                      /* RR  */
    RL = 320,                      /* RL  */
    RRC = 321,                     /* RRC  */
    SRA = 322,                     /* SRA  */
    BIT = 323,                     /* BIT  */
    SET = 324,                     /* SET  */
    RES = 325,                     /* RES  */
    PUSH = 326,                    /* PUSH  */
    POP = 327,                     /* POP  */
    CP = 328,                      /* CP  */
    CPI = 329,                     /* CPI  */
    CPIR = 330,                    /* CPIR  */
    CPD = 331,                     /* CPD  */
    CPDR = 332,                    /* CPDR  */
    EX = 333,                      /* EX  */
    EXX = 334,                     /* EXX  */
    CCF = 335,                     /* CCF  */
    COMMA = 336,                   /* COMMA  */
    NZ = 337,                      /* NZ  */
    Z = 338,                       /* Z  */
    NC = 339,                      /* NC  */
    PO = 340,                      /* PO  */
    PE = 341,                      /* PE  */
    P = 342,                       /* P  */
    M = 343,                       /* M  */
    IN = 344,                      /* IN  */
    OUT = 345,                     /* OUT  */
    INI = 346,                     /* INI  */
    INIR = 347,                    /* INIR  */
    IND = 348,                     /* IND  */
    INDR = 349,                    /* INDR  */
    OUTI = 350,                    /* OUTI  */
    OUTD = 351,                    /* OUTD  */
    OTIR = 352,                    /* OTIR  */
    OTDR = 353,                    /* OTDR  */
    LABEL = 354,                   /* LABEL  */
    LITERAL = 355,                 /* LITERAL  */
    INTEGER = 356,                 /* INTEGER  */
    STRING = 357,                  /* STRING  */
    PARLEFT = 358,                 /* PARLEFT  */
    PARRIGHT = 359,                /* PARRIGHT  */
    OPADD = 360,                   /* OPADD  */
    OPSUB = 361,                   /* OPSUB  */
    OPMUL = 362,                   /* OPMUL  */
    OPDIV = 363                    /* OPDIV  */
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

#line 198 "grammar-firstpass.tab.h"

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


#line 221 "grammar-firstpass.tab.h"

#endif /* !YY_FIRSTPASS_GRAMMAR_FIRSTPASS_TAB_H_INCLUDED  */
