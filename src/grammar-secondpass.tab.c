/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         SECONDPASSSTYPE
/* Substitute the variable and function names.  */
#define yyparse         secondpassparse
#define yylex           secondpasslex
#define yyerror         secondpasserror
#define yydebug         secondpassdebug
#define yynerrs         secondpassnerrs
#define yylval          secondpasslval
#define yychar          secondpasschar


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "grammar-secondpass.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_EQU = 3,                        /* EQU  */
  YYSYMBOL_ORG = 4,                        /* ORG  */
  YYSYMBOL_ALIGN = 5,                      /* ALIGN  */
  YYSYMBOL_END = 6,                        /* END  */
  YYSYMBOL_INCBIN = 7,                     /* INCBIN  */
  YYSYMBOL_DEFS = 8,                       /* DEFS  */
  YYSYMBOL_DEFB = 9,                       /* DEFB  */
  YYSYMBOL_DEFM = 10,                      /* DEFM  */
  YYSYMBOL_DEFW = 11,                      /* DEFW  */
  YYSYMBOL_ENTER = 12,                     /* ENTER  */
  YYSYMBOL_IXH = 13,                       /* IXH  */
  YYSYMBOL_IXL = 14,                       /* IXL  */
  YYSYMBOL_IYH = 15,                       /* IYH  */
  YYSYMBOL_IYL = 16,                       /* IYL  */
  YYSYMBOL_AF = 17,                        /* AF  */
  YYSYMBOL_BC = 18,                        /* BC  */
  YYSYMBOL_DE = 19,                        /* DE  */
  YYSYMBOL_HL = 20,                        /* HL  */
  YYSYMBOL_IX = 21,                        /* IX  */
  YYSYMBOL_IY = 22,                        /* IY  */
  YYSYMBOL_SP = 23,                        /* SP  */
  YYSYMBOL_AFPLUS = 24,                    /* AFPLUS  */
  YYSYMBOL_A = 25,                         /* A  */
  YYSYMBOL_F = 26,                         /* F  */
  YYSYMBOL_B = 27,                         /* B  */
  YYSYMBOL_C = 28,                         /* C  */
  YYSYMBOL_D = 29,                         /* D  */
  YYSYMBOL_E = 30,                         /* E  */
  YYSYMBOL_H = 31,                         /* H  */
  YYSYMBOL_L = 32,                         /* L  */
  YYSYMBOL_I = 33,                         /* I  */
  YYSYMBOL_R = 34,                         /* R  */
  YYSYMBOL_INC = 35,                       /* INC  */
  YYSYMBOL_DEC = 36,                       /* DEC  */
  YYSYMBOL_ADC = 37,                       /* ADC  */
  YYSYMBOL_ADD = 38,                       /* ADD  */
  YYSYMBOL_SUB = 39,                       /* SUB  */
  YYSYMBOL_SBC = 40,                       /* SBC  */
  YYSYMBOL_DJNZ = 41,                      /* DJNZ  */
  YYSYMBOL_JR = 42,                        /* JR  */
  YYSYMBOL_RET = 43,                       /* RET  */
  YYSYMBOL_RETN = 44,                      /* RETN  */
  YYSYMBOL_RETI = 45,                      /* RETI  */
  YYSYMBOL_RST = 46,                       /* RST  */
  YYSYMBOL_JP = 47,                        /* JP  */
  YYSYMBOL_CALL = 48,                      /* CALL  */
  YYSYMBOL_DI = 49,                        /* DI  */
  YYSYMBOL_EI = 50,                        /* EI  */
  YYSYMBOL_LD = 51,                        /* LD  */
  YYSYMBOL_HALT = 52,                      /* HALT  */
  YYSYMBOL_NOP = 53,                       /* NOP  */
  YYSYMBOL_XOR = 54,                       /* XOR  */
  YYSYMBOL_AND = 55,                       /* AND  */
  YYSYMBOL_OR = 56,                        /* OR  */
  YYSYMBOL_NEG = 57,                       /* NEG  */
  YYSYMBOL_CP = 58,                        /* CP  */
  YYSYMBOL_CPI = 59,                       /* CPI  */
  YYSYMBOL_CPIR = 60,                      /* CPIR  */
  YYSYMBOL_CPD = 61,                       /* CPD  */
  YYSYMBOL_CPDR = 62,                      /* CPDR  */
  YYSYMBOL_EX = 63,                        /* EX  */
  YYSYMBOL_EXX = 64,                       /* EXX  */
  YYSYMBOL_LDI = 65,                       /* LDI  */
  YYSYMBOL_LDIR = 66,                      /* LDIR  */
  YYSYMBOL_SCF = 67,                       /* SCF  */
  YYSYMBOL_CCF = 68,                       /* CCF  */
  YYSYMBOL_RLCA = 69,                      /* RLCA  */
  YYSYMBOL_RRCA = 70,                      /* RRCA  */
  YYSYMBOL_RLA = 71,                       /* RLA  */
  YYSYMBOL_RLC = 72,                       /* RLC  */
  YYSYMBOL_SLA = 73,                       /* SLA  */
  YYSYMBOL_SLL = 74,                       /* SLL  */
  YYSYMBOL_SRL = 75,                       /* SRL  */
  YYSYMBOL_RR = 76,                        /* RR  */
  YYSYMBOL_RL = 77,                        /* RL  */
  YYSYMBOL_RRC = 78,                       /* RRC  */
  YYSYMBOL_SRA = 79,                       /* SRA  */
  YYSYMBOL_BIT = 80,                       /* BIT  */
  YYSYMBOL_SET = 81,                       /* SET  */
  YYSYMBOL_RES = 82,                       /* RES  */
  YYSYMBOL_PUSH = 83,                      /* PUSH  */
  YYSYMBOL_POP = 84,                       /* POP  */
  YYSYMBOL_COMMA = 85,                     /* COMMA  */
  YYSYMBOL_NZ = 86,                        /* NZ  */
  YYSYMBOL_Z = 87,                         /* Z  */
  YYSYMBOL_NC = 88,                        /* NC  */
  YYSYMBOL_PO = 89,                        /* PO  */
  YYSYMBOL_PE = 90,                        /* PE  */
  YYSYMBOL_P = 91,                         /* P  */
  YYSYMBOL_M = 92,                         /* M  */
  YYSYMBOL_IN = 93,                        /* IN  */
  YYSYMBOL_OUT = 94,                       /* OUT  */
  YYSYMBOL_INI = 95,                       /* INI  */
  YYSYMBOL_INIR = 96,                      /* INIR  */
  YYSYMBOL_IND = 97,                       /* IND  */
  YYSYMBOL_INDR = 98,                      /* INDR  */
  YYSYMBOL_OUTI = 99,                      /* OUTI  */
  YYSYMBOL_OUTD = 100,                     /* OUTD  */
  YYSYMBOL_OTIR = 101,                     /* OTIR  */
  YYSYMBOL_OTDR = 102,                     /* OTDR  */
  YYSYMBOL_LITERAL = 103,                  /* LITERAL  */
  YYSYMBOL_INTEGER = 104,                  /* INTEGER  */
  YYSYMBOL_STRING = 105,                   /* STRING  */
  YYSYMBOL_PARLEFT = 106,                  /* PARLEFT  */
  YYSYMBOL_PARRIGHT = 107,                 /* PARRIGHT  */
  YYSYMBOL_OPADD = 108,                    /* OPADD  */
  YYSYMBOL_OPSUB = 109,                    /* OPSUB  */
  YYSYMBOL_OPMUL = 110,                    /* OPMUL  */
  YYSYMBOL_OPDIV = 111,                    /* OPDIV  */
  YYSYMBOL_YYACCEPT = 112,                 /* $accept  */
  YYSYMBOL_program = 113,                  /* program  */
  YYSYMBOL_lines = 114,                    /* lines  */
  YYSYMBOL_line = 115,                     /* line  */
  YYSYMBOL_directive = 116,                /* directive  */
  YYSYMBOL_instruction = 117,              /* instruction  */
  YYSYMBOL_rlccommand = 118,               /* rlccommand  */
  YYSYMBOL_rrccommand = 119,               /* rrccommand  */
  YYSYMBOL_rrcommand = 120,                /* rrcommand  */
  YYSYMBOL_rlcommand = 121,                /* rlcommand  */
  YYSYMBOL_sracommand = 122,               /* sracommand  */
  YYSYMBOL_slacommand = 123,               /* slacommand  */
  YYSYMBOL_srlcommand = 124,               /* srlcommand  */
  YYSYMBOL_rescommand = 125,               /* rescommand  */
  YYSYMBOL_setcommand = 126,               /* setcommand  */
  YYSYMBOL_bitcommand = 127,               /* bitcommand  */
  YYSYMBOL_incommand = 128,                /* incommand  */
  YYSYMBOL_outcommand = 129,               /* outcommand  */
  YYSYMBOL_ldcommand = 130,                /* ldcommand  */
  YYSYMBOL_andcommand = 131,               /* andcommand  */
  YYSYMBOL_xorcommand = 132,               /* xorcommand  */
  YYSYMBOL_orcommand = 133,                /* orcommand  */
  YYSYMBOL_cpcommand = 134,                /* cpcommand  */
  YYSYMBOL_inccommand = 135,               /* inccommand  */
  YYSYMBOL_deccommand = 136,               /* deccommand  */
  YYSYMBOL_adccommand = 137,               /* adccommand  */
  YYSYMBOL_addcommand = 138,               /* addcommand  */
  YYSYMBOL_subcommand = 139,               /* subcommand  */
  YYSYMBOL_sbccommand = 140,               /* sbccommand  */
  YYSYMBOL_excommand = 141,                /* excommand  */
  YYSYMBOL_pushcommand = 142,              /* pushcommand  */
  YYSYMBOL_popcommand = 143,               /* popcommand  */
  YYSYMBOL_jrcommand = 144,                /* jrcommand  */
  YYSYMBOL_jpcommand = 145,                /* jpcommand  */
  YYSYMBOL_callcommand = 146,              /* callcommand  */
  YYSYMBOL_djnzcommand = 147,              /* djnzcommand  */
  YYSYMBOL_relativejump = 148,             /* relativejump  */
  YYSYMBOL_retcommand = 149,               /* retcommand  */
  YYSYMBOL_rstcommand = 150,               /* rstcommand  */
  YYSYMBOL_expression = 151,               /* expression  */
  YYSYMBOL_expression2 = 152,              /* expression2  */
  YYSYMBOL_expritem = 153,                 /* expritem  */
  YYSYMBOL_listexpr = 154,                 /* listexpr  */
  YYSYMBOL_reg8 = 155                      /* reg8  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined SECONDPASSSTYPE_IS_TRIVIAL && SECONDPASSSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  373
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1566

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  593
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1089

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   366


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111
};

#if SECONDPASSDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    93,    93,    95,    96,    98,    99,   100,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   119,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   265,   266,
     267,   268,   270,   271,   272,   273,   275,   276,   277,   278,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   639,   640,   641,   642,   643,   645,   646,   647,
     648,   649,   650,   652,   653,   654,   655,   656,   657,   659,
     660,   661,   662,   663,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   679,   680,   681,   682,
     683,   684,   685,   686,   687,   689,   691,   692,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   722,   737,   738,
     739,   740,   741,   742,   744,   745,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   758,   759,
     760,   762,   763,   772,   773,   774,   775,   779,   780,   781,
     782,   783,   784,   785
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "EQU", "ORG", "ALIGN",
  "END", "INCBIN", "DEFS", "DEFB", "DEFM", "DEFW", "ENTER", "IXH", "IXL",
  "IYH", "IYL", "AF", "BC", "DE", "HL", "IX", "IY", "SP", "AFPLUS", "A",
  "F", "B", "C", "D", "E", "H", "L", "I", "R", "INC", "DEC", "ADC", "ADD",
  "SUB", "SBC", "DJNZ", "JR", "RET", "RETN", "RETI", "RST", "JP", "CALL",
  "DI", "EI", "LD", "HALT", "NOP", "XOR", "AND", "OR", "NEG", "CP", "CPI",
  "CPIR", "CPD", "CPDR", "EX", "EXX", "LDI", "LDIR", "SCF", "CCF", "RLCA",
  "RRCA", "RLA", "RLC", "SLA", "SLL", "SRL", "RR", "RL", "RRC", "SRA",
  "BIT", "SET", "RES", "PUSH", "POP", "COMMA", "NZ", "Z", "NC", "PO", "PE",
  "P", "M", "IN", "OUT", "INI", "INIR", "IND", "INDR", "OUTI", "OUTD",
  "OTIR", "OTDR", "LITERAL", "INTEGER", "STRING", "PARLEFT", "PARRIGHT",
  "OPADD", "OPSUB", "OPMUL", "OPDIV", "$accept", "program", "lines",
  "line", "directive", "instruction", "rlccommand", "rrccommand",
  "rrcommand", "rlcommand", "sracommand", "slacommand", "srlcommand",
  "rescommand", "setcommand", "bitcommand", "incommand", "outcommand",
  "ldcommand", "andcommand", "xorcommand", "orcommand", "cpcommand",
  "inccommand", "deccommand", "adccommand", "addcommand", "subcommand",
  "sbccommand", "excommand", "pushcommand", "popcommand", "jrcommand",
  "jpcommand", "callcommand", "djnzcommand", "relativejump", "retcommand",
  "rstcommand", "expression", "expression2", "expritem", "listexpr",
  "reg8", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-401)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      59,   238,   -93,   238,  -401,   -75,   238,   -85,   -54,   238,
    -401,    27,   150,    19,    55,   170,   192,   -43,   315,   572,
    -401,  -401,   238,  1035,  1056,  -401,  -401,   357,  -401,  -401,
     178,   200,   208,  -401,   233,  -401,  -401,  -401,  -401,   -13,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,   -15,   852,
     955,   963,   980,   996,  1028,   -51,   -32,   -30,   127,   280,
    1043,  1051,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
      81,   167,    59,  -401,   162,   164,  -401,  -401,   238,    79,
    -401,  -401,    79,  -401,   -76,  -401,  -401,   111,  -401,    79,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,    16,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,   352,  -401,   119,   126,
    -401,   134,   135,   149,   159,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,   465,  -401,   241,
    -401,   168,   169,  -401,  -401,  -401,  -401,  -401,   172,   174,
     181,   190,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,    79,   198,   203,   220,   228,   235,
     243,   253,   255,   481,  -401,    79,   270,   281,   284,   298,
     319,   322,   324,   349,  -401,    79,   354,   359,   365,   366,
     375,   377,   386,   387,   391,   393,   419,   420,   430,   250,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,   526,  -401,   241,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,   530,  -401,   241,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
     583,  -401,   241,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,   645,  -401,   241,   434,   443,   312,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,   490,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,   686,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,   866,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,   874,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,   897,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  1115,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  1143,  -401,   447,  -401,   449,  -401,   460,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,   464,   468,   472,   474,   477,   478,
     485,   337,  -401,   489,   492,   501,   503,   510,   513,   516,
     409,  -401,   238,  -401,  -401,  -401,  -401,   433,    47,    47,
      47,    47,   238,  1415,   486,   446,   499,   509,   511,   519,
     232,   264,   267,   508,   451,   294,   518,   523,   527,   342,
     587,   469,   505,   534,   565,   376,   302,   -43,   -43,   -43,
     -43,   238,   238,   238,   238,   238,   238,   238,   238,   532,
     549,   566,   238,   238,   238,   238,   238,   238,   238,   238,
     715,   745,   767,   802,   961,  1000,   332,   427,   452,   493,
     551,   763,   772,   568,   570,   577,   571,   580,   705,   578,
     594,   603,   605,   607,   610,   614,   619,   622,   626,   628,
     631,   718,   598,   643,   648,   651,   652,   659,   660,   672,
     671,   676,   688,   698,   701,   703,   699,   709,   714,   717,
     722,   724,   719,   726,   729,  1060,  1068,  1088,   735,   737,
     744,   746,   749,   751,   752,   758,   762,   768,   816,   817,
     820,   823,   826,   828,    79,  -401,  -401,  -401,  -401,  -401,
      79,  -401,  -401,  -401,   238,   238,  -401,   238,   238,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,   661,   241,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,   670,   241,
    -401,   238,   238,   321,   342,  -401,   342,  -401,   342,  -401,
     342,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,   679,   241,  -401,
    -401,  -401,  -401,    79,    79,    79,    79,    79,    79,    79,
      79,  -401,  -401,  -401,    79,    79,    79,    79,    79,    79,
      79,    79,   342,   241,   342,   241,   342,   241,   342,   241,
     342,   241,   342,   241,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,   517,   241,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,   683,   241,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,   704,   241,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,   732,   241,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,   736,   241,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,   741,   241,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,   750,   241,   853,   857,   869,
     238,   238,   871,  -401,   238,   238,  -401,   238,   238,  -401,
     238,   238,  -401,   238,   238,  -401,  -401,   892,  -401,   238,
     238,  -401,   238,   238,  -401,   238,   238,  -401,   238,   238,
    -401,   238,   238,  -401,   238,   238,  -401,   238,   238,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  1501,  -401,  1504,  -401,
    1507,  -401,   -25,   946,   951,   978,   990,  1008,  1009,  -401,
     -21,  1012,  1014,  1015,  1019,  1022,  1026,  -401,   753,   804,
     842,   861,   882,   954,   958,   970,   986,   993,   889,   906,
    1089,  1403,  1407,  1411,   922,  1021,  1044,  1061,   998,   999,
    1001,  1069,  1074,  1079,  1099,  1104,  1109,  1004,  1033,  1049,
    1025,  1042,  1114,  1054,  1050,  1059,  1066,  1067,  1083,  1090,
    1092,  1095,  1401,  1404,  1408,  1426,  1427,  1428,  1430,  1431,
    1432,  1171,  1509,   872,  1119,  1124,     6,  1129,  1134,  1139,
    1144,  1149,  1154,  1159,  1164,  1510,  1169,  1174,  1179,  1184,
    1189,  1194,  1199,  1204,  1209,  1214,  1219,  1224,  1229,  1234,
    1434,  1435,  1436,  1438,  1439,  1440,  1442,  1443,  1444,  1446,
    1239,  1447,  1448,  1449,  1450,  1451,  1452,  1453,  1244,  1454,
    1455,  1456,  1457,  1458,  1459,  -401,  -401,  -401,  -401,  -401,
     238,   238,  -401,   238,   238,  -401,  -401,   342,  -401,   342,
    -401,   342,  -401,   342,  -401,  -401,  -401,  -401,  -401,  -401,
     238,   238,   321,   321,   321,   321,   321,   321,  -401,  -401,
    -401,   238,   238,   321,  -401,   238,   238,  -401,   238,   238,
    -401,   238,   238,  -401,   238,   238,  -401,   238,   238,  -401,
     238,   238,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,   241,  1461,  1465,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,   342,   342,  -401,
     342,   342,  -401,   342,   342,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  1249,  1254,  1259,  1264,  1269,  1274,  1279,  1284,  1289,
    1294,  1299,  1304,  1309,  1314,  1319,  1324,  1329,  1334,  1339,
    1344,  1349,  1354,  1359,  1364,   916,   935,  1369,  1374,  1379,
    1384,  1389,  1394,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,    79,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,    79,  -401,  -401,  -401,  -401,  -401,  -401
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,   548,
      31,    32,     0,     0,     0,    20,    21,     0,    22,    19,
       0,     0,     0,    45,     0,    28,    27,    30,    29,     0,
      33,    43,    44,    42,    26,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    40,    39,    41,
       0,     0,     2,     3,     0,     0,   582,   581,     0,    15,
     558,    16,    18,    17,     9,   585,   583,    13,    11,    12,
     395,   396,   397,   398,   390,   391,   392,   401,   402,   393,
     383,   384,   385,   386,   387,   388,   389,     0,    51,   415,
     416,   417,   418,   410,   411,   412,   421,   422,   413,   403,
     404,   405,   406,   407,   408,   409,     0,    52,     0,     0,
      53,     0,     0,     0,     0,    54,   477,   478,   479,   480,
     468,   469,   470,   471,   472,   473,   474,     0,    55,   476,
     564,     0,     0,    56,   547,   546,    57,   545,     0,     0,
       0,     0,    58,   519,   552,   549,   550,   551,   553,   554,
     555,   556,    62,    63,   557,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,   524,     0,     0,     0,     0,
       0,     0,     0,     0,    60,   536,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,   347,   348,   349,   350,   338,   339,   340,   341,   342,
     343,   344,     0,    48,   346,   332,   333,   334,   335,   323,
     324,   325,   326,   327,   328,   329,     0,    47,   331,   362,
     363,   364,   365,   353,   354,   355,   356,   357,   358,   359,
       0,    49,   361,   377,   378,   379,   380,   368,   369,   370,
     371,   372,   373,   374,     0,    50,   376,     0,     0,     0,
      61,    78,    79,    80,    81,    82,    83,    84,     0,    77,
     128,   129,   130,   131,   132,   133,   134,     0,    71,   138,
     139,   140,   141,   142,   143,   144,     0,    73,    98,    99,
     100,   101,   102,   103,   104,     0,    75,   108,   109,   110,
     111,   112,   113,   114,     0,    74,    88,    89,    90,    91,
      92,    93,    94,     0,    76,   118,   119,   120,   121,   122,
     123,   124,     0,    72,     0,    68,     0,    70,     0,    69,
     510,   507,   508,   509,   511,   512,    64,   516,   513,   514,
     515,   517,   518,    65,     0,     0,     0,     0,     0,     0,
       0,     0,    66,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,     1,     4,     6,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,   563,   559,   560,   561,   562,
      10,   586,   584,   394,     0,     0,   414,     0,     0,   438,
     439,   440,   441,   432,   433,   434,   435,   423,   424,   425,
     426,   427,   428,   429,     0,   431,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   451,   452,   453,
     454,   442,   443,   444,   445,   446,   447,   448,     0,   450,
     475,     0,     0,     0,     0,   565,     0,   566,     0,   567,
       0,   568,   498,   499,   500,   501,   492,   493,   494,   495,
     483,   484,   485,   486,   487,   488,   489,     0,   491,   523,
     520,   521,   522,   528,   525,   526,   527,   529,   530,   531,
     532,   533,   534,   535,   540,   537,   538,   539,   541,   542,
     543,   544,     0,   280,     0,   282,     0,   278,     0,   286,
       0,   288,     0,   284,   186,   187,   188,   189,   178,   179,
     180,   181,   182,   183,   184,     0,   185,   205,   206,   207,
     208,   196,   197,   198,   199,   200,   201,   202,     0,   203,
     220,   221,   222,   223,   211,   212,   213,   214,   215,   216,
     217,     0,   218,   235,   236,   237,   238,   226,   227,   228,
     229,   230,   231,   232,     0,   233,   250,   251,   252,   253,
     241,   242,   243,   244,   245,   246,   247,     0,   248,   256,
     257,   258,   259,   260,   261,   262,     0,   263,   267,   268,
     269,   270,   271,   272,   273,     0,   274,     0,     0,     0,
       0,     0,     0,   345,     0,     0,   330,     0,     0,   360,
       0,     0,   375,     0,     0,   502,   504,     0,    85,     0,
       0,   135,     0,     0,   145,     0,     0,   105,     0,     0,
     115,     0,     0,    95,     0,     0,   125,     0,     0,   587,
     588,   589,   590,   591,   592,   593,     0,   156,     0,   152,
       0,   148,     0,     0,     0,     0,     0,     0,     0,   168,
       0,     0,     0,     0,     0,     0,     0,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   399,   400,   419,   420,   430,
       0,     0,   449,     0,     0,   481,   482,     0,   573,     0,
     574,     0,   575,     0,   576,   569,   570,   571,   572,   490,
       0,     0,   281,   283,   279,   287,   289,   285,   193,   194,
     192,     0,     0,   195,   204,     0,     0,   219,     0,     0,
     234,     0,     0,   249,     0,     0,   264,     0,     0,   275,
       0,     0,   298,   299,   297,   291,   292,   293,   294,   295,
     296,   290,     0,     0,   317,   318,   316,   321,   322,   319,
     320,   351,   352,   336,   337,   366,   367,   381,   382,   503,
     505,   506,    86,    87,   136,   137,   146,   147,   106,   107,
     116,   117,    96,    97,   126,   127,   157,     0,     0,   153,
       0,     0,   149,     0,     0,   167,   160,   161,   162,   163,
     164,   165,   166,   176,   169,   170,   171,   172,   173,   174,
     175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   436,   437,   455,   456,   577,   578,   579,
     580,   496,   497,   190,   191,   209,   210,   224,   225,   239,
     240,   254,   255,   265,   266,   276,   277,   302,   303,   304,
     305,   306,   307,   308,   300,   309,   310,   311,   312,   313,
     314,   315,   301,   158,   159,   154,   155,   150,   151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -401,  -401,  -401,  1466,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,   -17,  -401,  -401,    -1,
      58,   211,  -401,  -400
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    71,    72,    73,    74,    75,   279,   324,   306,   315,
     333,   288,   297,   339,   337,   335,   362,   371,   210,   237,
     223,   251,   265,   108,   127,   130,   135,   148,   153,   270,
     346,   353,   162,   184,   194,   156,   157,   172,   173,   377,
     400,    80,    87,   757
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   163,    82,   869,   267,    84,   268,   877,    89,   382,
     271,    81,   272,   273,   274,   275,   276,   277,    76,    77,
      85,   174,   185,   195,   954,   955,   956,   957,   958,   959,
      83,   960,   378,   379,   380,   381,   384,   385,   386,   128,
      90,    91,    92,    93,   129,    94,    95,    96,    97,    98,
      99,    88,   100,   334,   101,   102,   103,   104,   105,   106,
     154,   155,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,   336,   149,   338,   131,   132,   133,    76,    77,
     134,   399,    76,    77,   372,   399,   759,   761,   224,   238,
     252,   278,   266,   269,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,   107,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,   340,   341,   342,   343,   344,   345,
      76,    77,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   109,   110,   111,   112,   373,   113,   114,
     115,   116,   117,   118,   375,   119,   376,   120,   121,   122,
     123,   124,   125,   136,   137,   138,   139,   378,   379,   380,
     381,   211,   212,   213,   214,   140,   383,   141,   142,   143,
     144,   145,   146,   215,   390,   216,   217,   218,   219,   220,
     221,   391,   151,   225,   226,   227,   228,   152,    86,   392,
     393,   239,   240,   241,   242,   229,   150,   230,   231,   232,
     233,   234,   235,   243,   394,   244,   245,   246,   247,   248,
     249,   150,   150,   150,   395,   150,   253,   254,   255,   256,
     519,   520,   521,   405,   406,   522,   126,   407,   257,   408,
     258,   259,   260,   261,   262,   263,   409,   448,   443,   444,
     445,   446,   447,    76,    77,   410,   147,   523,   524,   525,
     526,    76,    77,   411,   222,   536,   537,   538,   412,   527,
     539,   528,   529,   530,   531,   532,   533,   347,   348,   349,
     350,   351,   352,    76,    77,   413,   236,   547,   548,   549,
     550,    76,    77,   414,   250,   576,   577,   578,   579,   551,
     415,   552,   553,   554,   555,   556,   557,   580,   416,   581,
     582,   583,   584,   585,   586,   463,    76,    77,   417,   264,
     418,    76,    77,   158,    78,   624,   625,   626,   627,   401,
     402,   403,   404,    76,    77,   422,   399,   628,   150,   629,
     630,   631,   632,   633,   634,   495,   423,    76,    77,   424,
     534,   504,   387,   388,   389,   196,   197,   198,   199,   200,
     201,   510,   202,   425,   203,   204,   205,   206,   207,   208,
     589,   590,   591,   592,   572,   573,   574,    76,    77,   575,
     558,   159,   160,   161,   426,    76,    77,   427,   587,   428,
     593,   594,   595,   596,   597,   598,   599,   600,   154,   155,
     150,   604,   605,   606,   607,   608,   609,   610,   611,   790,
     791,   792,   793,   150,   429,    76,    77,   503,   635,   430,
     637,   638,   639,   640,   431,    76,    77,   150,   399,   535,
     432,   433,   641,   559,   642,   643,   644,   645,   646,   647,
     434,   150,   435,   209,   588,   650,   651,   652,   653,   543,
     544,   436,   437,   545,   546,   150,   438,   654,   439,   655,
     656,   657,   658,   659,   660,   396,   397,   398,   613,   615,
     617,   619,   621,   623,   636,   649,   662,   675,   688,   697,
     706,   419,   420,   421,   440,   441,   663,   664,   665,   666,
     464,   465,   466,   778,   779,   442,   780,   781,   667,   461,
     668,   669,   670,   671,   672,   673,   540,   541,   462,   542,
      76,    77,   485,   648,   486,   807,   808,   809,   810,   811,
     505,   378,   379,   380,   381,   487,   449,   450,   451,   488,
     452,   453,   454,   489,   514,    76,    77,   490,   661,   491,
     788,   789,   492,   493,   676,   677,   678,   679,    76,    77,
     494,   399,    76,    77,   496,   564,   680,   497,   681,   682,
     683,   684,   685,   686,    76,    77,   498,    78,   499,   506,
     507,   508,   509,   513,   512,   500,    76,    77,   501,   674,
     164,   502,   150,   455,   456,   457,   150,   515,    76,    77,
     150,   566,   565,   567,   569,   571,   516,   150,   726,   517,
      76,    77,   794,   399,   795,   560,   796,   518,   797,    76,
      77,   561,   399,    76,    77,   562,   399,    76,    77,   601,
     568,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,    76,    77,   602,   687,   165,   166,
     167,   168,   169,   170,   171,   458,   459,   460,    76,    77,
     801,   570,   802,   603,   803,   707,   804,   708,   805,   710,
     806,   782,   783,   784,   709,   713,    76,    77,   711,   399,
     785,   786,   787,   812,   563,   401,   402,   403,   404,   798,
     799,   800,   714,   813,   814,   815,   467,   468,   469,   834,
     835,   715,   716,   837,   838,   717,   839,   840,   718,   841,
     842,   719,   843,   844,   816,   817,   818,   720,   846,   847,
     721,   848,   849,   722,   850,   851,   723,   852,   853,   724,
     854,   855,   725,   856,   857,   150,   858,   859,    76,    77,
     727,   399,   819,   820,   821,   728,   822,   823,   824,   729,
     730,   825,   826,   827,    76,    77,   731,   399,   732,   150,
     828,   829,   830,    76,    77,   150,   399,   150,   734,   150,
     733,   150,    76,    77,   735,   399,    76,    77,   689,   399,
     690,   691,   692,   693,   694,   695,   736,   698,   150,   699,
     700,   701,   702,   703,   704,   737,   740,    76,    77,   738,
     399,   739,   712,   401,   402,   403,   404,   741,    76,    77,
     870,   612,   742,   150,   743,   150,   746,   150,   878,   150,
     744,   150,   745,   150,   747,    76,    77,   748,   399,    76,
      77,   762,   399,   763,    76,    77,   150,   399,    76,    77,
     764,   614,   765,    76,    77,   766,   399,   767,   768,   150,
     885,   378,   379,   380,   381,   769,    76,    77,   770,   696,
      76,    77,   150,   616,   771,    76,    77,   280,   705,   281,
     282,   283,   284,   285,   286,   150,   470,   471,   472,  1011,
    1012,   951,  1013,  1014,   473,   474,   475,   944,   150,   945,
     946,   947,   948,   949,   950,    76,    77,   150,   618,  1019,
    1020,   886,   378,   379,   380,   381,   150,   476,   477,   478,
    1021,  1022,   772,   773,  1023,  1024,   774,  1025,  1026,   775,
    1027,  1028,   776,  1029,  1030,   777,  1031,  1032,   831,  1033,
    1034,  1067,   832,  1068,  1069,  1070,  1071,  1072,  1073,   887,
     378,   379,   380,   381,   833,  1015,   836,  1016,   287,  1017,
    1075,  1018,  1076,  1077,  1078,  1079,  1080,  1081,   888,   378,
     379,   380,   381,   150,   871,    76,    77,   845,   399,   872,
     289,   150,   290,   291,   292,   293,   294,   295,   298,   889,
     299,   300,   301,   302,   303,   304,   895,   378,   379,   380,
     381,   898,   900,   902,   904,   307,   873,   308,   309,   310,
     311,   312,   313,   896,   378,   379,   380,   381,   874,    76,
      77,   316,    78,   317,   318,   319,   320,   321,   322,   905,
     401,   402,   403,   404,  1074,  1082,   875,   876,    76,    77,
     879,    78,   880,   881,   150,  1037,  1038,   882,  1039,  1040,
     883,  1041,  1042,   325,   884,   326,   327,   328,   329,   330,
     331,   296,   890,   175,    76,    77,   891,   620,   354,   305,
     355,   356,   357,   358,   359,   360,   363,   892,   364,   365,
     366,   367,   368,   369,   186,   749,   314,   750,   751,   752,
     753,   754,   755,   749,   893,   750,   751,   752,   753,   754,
     755,   894,   323,    76,    77,   909,   622,   910,   150,   911,
     150,   918,   150,   749,   150,   750,   751,   752,   753,   754,
     755,   176,   177,   178,   179,   180,   181,   182,   906,   401,
     402,   403,   404,   921,   332,   479,   480,   481,    76,    77,
     919,   183,   187,   188,   189,   190,   191,   192,   193,   361,
     922,   907,   401,   402,   403,   404,   920,   370,   925,    76,
      77,   924,    78,   482,   483,   484,   756,   926,   908,   401,
     402,   403,   404,   927,   758,   928,   912,   401,   402,   403,
     404,   913,   401,   402,   403,   404,   914,   401,   402,   403,
     404,   929,    76,    77,   760,   897,   942,   930,   150,   150,
     931,   150,   150,   932,   150,   150,   915,   401,   402,   403,
     404,   916,   401,   402,   403,   404,   917,   401,   402,   403,
     404,   923,   401,   402,   403,   404,   952,   378,   379,   380,
     381,   953,   378,   379,   380,   381,   961,   378,   379,   380,
     381,   962,   378,   379,   380,   381,   963,   378,   379,   380,
     381,   964,   378,   379,   380,   381,   965,   378,   379,   380,
     381,   966,   378,   379,   380,   381,   967,   378,   379,   380,
     381,   968,   378,   379,   380,   381,   972,   378,   379,   380,
     381,   973,   378,   379,   380,   381,   974,   378,   379,   380,
     381,   975,   378,   379,   380,   381,   976,   378,   379,   380,
     381,   977,   378,   379,   380,   381,   978,   378,   379,   380,
     381,   979,   378,   379,   380,   381,   980,   378,   379,   380,
     381,   981,   378,   379,   380,   381,   982,   378,   379,   380,
     381,   983,   378,   379,   380,   381,   984,   378,   379,   380,
     381,   985,   378,   379,   380,   381,   996,   401,   402,   403,
     404,  1004,   401,   402,   403,   404,  1043,   378,   379,   380,
     381,  1044,   378,   379,   380,   381,  1045,   378,   379,   380,
     381,  1046,   378,   379,   380,   381,  1047,   401,   402,   403,
     404,  1048,   401,   402,   403,   404,  1049,   401,   402,   403,
     404,  1050,   401,   402,   403,   404,  1051,   378,   379,   380,
     381,  1052,   378,   379,   380,   381,  1053,   378,   379,   380,
     381,  1054,   378,   379,   380,   381,  1055,   378,   379,   380,
     381,  1056,   378,   379,   380,   381,  1057,   378,   379,   380,
     381,  1058,   378,   379,   380,   381,  1059,   378,   379,   380,
     381,  1060,   378,   379,   380,   381,  1061,   378,   379,   380,
     381,  1062,   378,   379,   380,   381,  1063,   378,   379,   380,
     381,  1064,   378,   379,   380,   381,  1065,   378,   379,   380,
     381,  1066,   378,   379,   380,   381,  1083,   401,   402,   403,
     404,  1084,   401,   402,   403,   404,  1085,   401,   402,   403,
     404,  1086,   401,   402,   403,   404,  1087,   401,   402,   403,
     404,  1088,   401,   402,   403,   404,    76,    77,   933,   899,
      76,    77,   934,   901,    76,    77,   935,   903,    76,    77,
     511,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     969,   970,   971,   936,   943,   937,   938,   939,   374,   940,
     941,   986,     0,   987,   988,   989,  1035,   990,   991,   992,
    1036,   993,   994,   995,   997,   998,   999,  1000,  1001,  1002,
    1003,  1005,  1006,  1007,  1008,  1009,  1010
};

static const yytype_int16 yycheck[] =
{
       1,    18,     3,    28,    17,     6,    19,    28,     9,    85,
      25,   104,    27,    28,    29,    30,    31,    32,   103,   104,
     105,    22,    23,    24,    18,    19,    20,    21,    22,    23,
     105,    25,   108,   109,   110,   111,    20,    21,    22,    20,
      13,    14,    15,    16,    25,    18,    19,    20,    21,    22,
      23,   105,    25,   104,    27,    28,    29,    30,    31,    32,
     103,   104,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   104,    15,   104,    20,    21,    22,   103,   104,
      25,   106,   103,   104,     3,   106,   486,   487,    30,    31,
      32,   106,    34,   106,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,   106,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    17,    18,    19,    20,    21,    22,
     103,   104,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    13,    14,    15,    16,     0,    18,    19,
      20,    21,    22,    23,    12,    25,    12,    27,    28,    29,
      30,    31,    32,    13,    14,    15,    16,   108,   109,   110,
     111,    13,    14,    15,    16,    25,    85,    27,    28,    29,
      30,    31,    32,    25,    85,    27,    28,    29,    30,    31,
      32,    85,    20,    13,    14,    15,    16,    25,     7,    85,
      85,    13,    14,    15,    16,    25,    15,    27,    28,    29,
      30,    31,    32,    25,    85,    27,    28,    29,    30,    31,
      32,    30,    31,    32,    85,    34,    13,    14,    15,    16,
      18,    19,    20,    85,    85,    23,   106,    85,    25,    85,
      27,    28,    29,    30,    31,    32,    85,   209,    18,    19,
      20,    21,    22,   103,   104,    85,   106,    13,    14,    15,
      16,   103,   104,    85,   106,    18,    19,    20,    85,    25,
      23,    27,    28,    29,    30,    31,    32,    17,    18,    19,
      20,    21,    22,   103,   104,    85,   106,    13,    14,    15,
      16,   103,   104,    85,   106,    13,    14,    15,    16,    25,
      85,    27,    28,    29,    30,    31,    32,    25,    85,    27,
      28,    29,    30,    31,    32,    23,   103,   104,    85,   106,
      85,   103,   104,    28,   106,    13,    14,    15,    16,   108,
     109,   110,   111,   103,   104,    85,   106,    25,   147,    27,
      28,    29,    30,    31,    32,    28,    85,   103,   104,    85,
     106,   372,    20,    21,    22,    18,    19,    20,    21,    22,
      23,   382,    25,    85,    27,    28,    29,    30,    31,    32,
     407,   408,   409,   410,    18,    19,    20,   103,   104,    23,
     106,    86,    87,    88,    85,   103,   104,    85,   106,    85,
     411,   412,   413,   414,   415,   416,   417,   418,   103,   104,
     209,   422,   423,   424,   425,   426,   427,   428,   429,   108,
     109,   110,   111,   222,    85,   103,   104,    28,   106,    85,
      13,    14,    15,    16,    85,   103,   104,   236,   106,   391,
      85,    85,    25,   395,    27,    28,    29,    30,    31,    32,
      85,   250,    85,   106,   406,    13,    14,    15,    16,    18,
      19,    85,    85,    22,    23,   264,    85,    25,    85,    27,
      28,    29,    30,    31,    32,    20,    21,    22,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,    20,    21,    22,    85,    85,    13,    14,    15,    16,
      20,    21,    22,   514,   515,    85,   517,   518,    25,    85,
      27,    28,    29,    30,    31,    32,    18,    19,    85,    21,
     103,   104,    85,   106,    85,    18,    19,    20,    21,    22,
     107,   108,   109,   110,   111,    85,    20,    21,    22,    85,
      20,    21,    22,    85,   108,   103,   104,    85,   106,    85,
     561,   562,    85,    85,    13,    14,    15,    16,   103,   104,
      85,   106,   103,   104,    85,   106,    25,    85,    27,    28,
      29,    30,    31,    32,   103,   104,    85,   106,    85,   378,
     379,   380,   381,   107,   383,    85,   103,   104,    85,   106,
      28,    85,   391,    20,    21,    22,   395,   108,   103,   104,
     399,   106,   401,   402,   403,   404,   107,   406,    20,   108,
     103,   104,   564,   106,   566,   107,   568,   108,   570,   103,
     104,   108,   106,   103,   104,   108,   106,   103,   104,   107,
     106,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   103,   104,   107,   106,    86,    87,
      88,    89,    90,    91,    92,    20,    21,    22,   103,   104,
     612,   106,   614,   107,   616,   107,   618,   107,   620,   108,
     622,    20,    21,    22,   107,   107,   103,   104,   108,   106,
      20,    21,    22,   635,   107,   108,   109,   110,   111,    20,
      21,    22,   108,    20,    21,    22,    20,    21,    22,   710,
     711,   108,   107,   714,   715,   108,   717,   718,   108,   720,
     721,   107,   723,   724,    20,    21,    22,   108,   729,   730,
     108,   732,   733,   107,   735,   736,   108,   738,   739,   108,
     741,   742,    24,   744,   745,   534,   747,   748,   103,   104,
     107,   106,    20,    21,    22,   107,    20,    21,    22,   108,
     108,    20,    21,    22,   103,   104,   107,   106,   108,   558,
      20,    21,    22,   103,   104,   564,   106,   566,   107,   568,
     108,   570,   103,   104,   108,   106,   103,   104,    25,   106,
      27,    28,    29,    30,    31,    32,   108,    25,   587,    27,
      28,    29,    30,    31,    32,   107,   107,   103,   104,   108,
     106,   108,   107,   108,   109,   110,   111,   108,   103,   104,
     762,   106,   108,   612,   107,   614,   107,   616,   770,   618,
     108,   620,   108,   622,   108,   103,   104,   108,   106,   103,
     104,   106,   106,   106,   103,   104,   635,   106,   103,   104,
     106,   106,   106,   103,   104,   106,   106,   106,   106,   648,
     107,   108,   109,   110,   111,   107,   103,   104,   106,   106,
     103,   104,   661,   106,   106,   103,   104,    25,   106,    27,
      28,    29,    30,    31,    32,   674,    20,    21,    22,   890,
     891,   833,   893,   894,    20,    21,    22,    25,   687,    27,
      28,    29,    30,    31,    32,   103,   104,   696,   106,   910,
     911,   107,   108,   109,   110,   111,   705,    20,    21,    22,
     921,   922,   106,   106,   925,   926,   106,   928,   929,   106,
     931,   932,   106,   934,   935,   107,   937,   938,    85,   940,
     941,    25,    85,    27,    28,    29,    30,    31,    32,   107,
     108,   109,   110,   111,    85,   897,    85,   899,   106,   901,
      25,   903,    27,    28,    29,    30,    31,    32,   107,   108,
     109,   110,   111,   762,    28,   103,   104,    85,   106,    28,
      25,   770,    27,    28,    29,    30,    31,    32,    25,   107,
      27,    28,    29,    30,    31,    32,   107,   108,   109,   110,
     111,   790,   791,   792,   793,    25,    28,    27,    28,    29,
      30,    31,    32,   107,   108,   109,   110,   111,    28,   103,
     104,    25,   106,    27,    28,    29,    30,    31,    32,   107,
     108,   109,   110,   111,  1035,  1036,    28,    28,   103,   104,
      28,   106,    28,    28,   833,   987,   988,    28,   990,   991,
      28,   993,   994,    25,    28,    27,    28,    29,    30,    31,
      32,   106,   108,    28,   103,   104,   108,   106,    25,   106,
      27,    28,    29,    30,    31,    32,    25,   107,    27,    28,
      29,    30,    31,    32,    28,    25,   106,    27,    28,    29,
      30,    31,    32,    25,   108,    27,    28,    29,    30,    31,
      32,   108,   106,   103,   104,   107,   106,   108,   897,   108,
     899,   107,   901,    25,   903,    27,    28,    29,    30,    31,
      32,    86,    87,    88,    89,    90,    91,    92,   107,   108,
     109,   110,   111,   108,   106,    20,    21,    22,   103,   104,
     107,   106,    86,    87,    88,    89,    90,    91,    92,   106,
     108,   107,   108,   109,   110,   111,   107,   106,   108,   103,
     104,   107,   106,    20,    21,    22,   106,   108,   107,   108,
     109,   110,   111,   107,   106,   108,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   108,   103,   104,   106,   106,    25,   107,   987,   988,
     108,   990,   991,   108,   993,   994,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   107,   108,   109,   110,
     111,   107,   108,   109,   110,   111,   103,   104,   107,   106,
     103,   104,   108,   106,   103,   104,   108,   106,   103,   104,
     105,    20,    21,    22,    20,    21,    22,    20,    21,    22,
      20,    21,    22,   107,    25,   108,   108,   107,    72,   108,
     108,   107,    -1,   108,   108,   107,    85,   108,   108,   107,
      85,   108,   108,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   113,   114,   115,   116,   117,   103,   104,   106,   151,
     153,   104,   151,   105,   151,   105,   153,   154,   105,   151,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      25,    27,    28,    29,    30,    31,    32,   106,   135,    13,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    25,
      27,    28,    29,    30,    31,    32,   106,   136,    20,    25,
     137,    20,    21,    22,    25,   138,    13,    14,    15,    16,
      25,    27,    28,    29,    30,    31,    32,   106,   139,   152,
     153,    20,    25,   140,   103,   104,   147,   148,    28,    86,
      87,    88,   144,   148,    28,    86,    87,    88,    89,    90,
      91,    92,   149,   150,   151,    28,    86,    87,    88,    89,
      90,    91,    92,   106,   145,   151,    28,    86,    87,    88,
      89,    90,    91,    92,   146,   151,    18,    19,    20,    21,
      22,    23,    25,    27,    28,    29,    30,    31,    32,   106,
     130,    13,    14,    15,    16,    25,    27,    28,    29,    30,
      31,    32,   106,   132,   152,    13,    14,    15,    16,    25,
      27,    28,    29,    30,    31,    32,   106,   131,   152,    13,
      14,    15,    16,    25,    27,    28,    29,    30,    31,    32,
     106,   133,   152,    13,    14,    15,    16,    25,    27,    28,
      29,    30,    31,    32,   106,   134,   152,    17,    19,   106,
     141,    25,    27,    28,    29,    30,    31,    32,   106,   118,
      25,    27,    28,    29,    30,    31,    32,   106,   123,    25,
      27,    28,    29,    30,    31,    32,   106,   124,    25,    27,
      28,    29,    30,    31,    32,   106,   120,    25,    27,    28,
      29,    30,    31,    32,   106,   121,    25,    27,    28,    29,
      30,    31,    32,   106,   119,    25,    27,    28,    29,    30,
      31,    32,   106,   122,   104,   127,   104,   126,   104,   125,
      17,    18,    19,    20,    21,    22,   142,    17,    18,    19,
      20,    21,    22,   143,    25,    27,    28,    29,    30,    31,
      32,   106,   128,    25,    27,    28,    29,    30,    31,    32,
     106,   129,     3,     0,   115,    12,    12,   151,   108,   109,
     110,   111,    85,    85,    20,    21,    22,    20,    21,    22,
      85,    85,    85,    85,    85,    85,    20,    21,    22,   106,
     152,   108,   109,   110,   111,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    20,
      21,    22,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    18,    19,    20,    21,    22,   152,    20,
      21,    22,    20,    21,    22,    20,    21,    22,    20,    21,
      22,    85,    85,    23,    20,    21,    22,    20,    21,    22,
      20,    21,    22,    20,    21,    22,    20,    21,    22,    20,
      21,    22,    20,    21,    22,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    28,    85,    85,    85,    85,
      85,    85,    85,    28,   151,   107,   153,   153,   153,   153,
     151,   105,   153,   107,   108,   108,   107,   108,   108,    18,
      19,    20,    23,    13,    14,    15,    16,    25,    27,    28,
      29,    30,    31,    32,   106,   152,    18,    19,    20,    23,
      18,    19,    21,    18,    19,    22,    23,    13,    14,    15,
      16,    25,    27,    28,    29,    30,    31,    32,   106,   152,
     107,   108,   108,   107,   106,   153,   106,   153,   106,   153,
     106,   153,    18,    19,    20,    23,    13,    14,    15,    16,
      25,    27,    28,    29,    30,    31,    32,   106,   152,   148,
     148,   148,   148,   151,   151,   151,   151,   151,   151,   151,
     151,   107,   107,   107,   151,   151,   151,   151,   151,   151,
     151,   151,   106,   152,   106,   152,   106,   152,   106,   152,
     106,   152,   106,   152,    13,    14,    15,    16,    25,    27,
      28,    29,    30,    31,    32,   106,   152,    13,    14,    15,
      16,    25,    27,    28,    29,    30,    31,    32,   106,   152,
      13,    14,    15,    16,    25,    27,    28,    29,    30,    31,
      32,   106,   152,    13,    14,    15,    16,    25,    27,    28,
      29,    30,    31,    32,   106,   152,    13,    14,    15,    16,
      25,    27,    28,    29,    30,    31,    32,   106,   152,    25,
      27,    28,    29,    30,    31,    32,   106,   152,    25,    27,
      28,    29,    30,    31,    32,   106,   152,   107,   107,   107,
     108,   108,   107,   107,   108,   108,   107,   108,   108,   107,
     108,   108,   107,   108,   108,    24,    20,   107,   107,   108,
     108,   107,   108,   108,   107,   108,   108,   107,   108,   108,
     107,   108,   108,   107,   108,   108,   107,   108,   108,    25,
      27,    28,    29,    30,    31,    32,   106,   155,   106,   155,
     106,   155,   106,   106,   106,   106,   106,   106,   106,   107,
     106,   106,   106,   106,   106,   106,   106,   107,   151,   151,
     151,   151,    20,    21,    22,    20,    21,    22,   151,   151,
     108,   109,   110,   111,   152,   152,   152,   152,    20,    21,
      22,   152,   152,   152,   152,   152,   152,    18,    19,    20,
      21,    22,   152,    20,    21,    22,    20,    21,    22,    20,
      21,    22,    20,    21,    22,    20,    21,    22,    20,    21,
      22,    85,    85,    85,   151,   151,    85,   151,   151,   151,
     151,   151,   151,   151,   151,    85,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
      20,    21,    22,    20,    21,    22,    20,    21,    22,    28,
     152,    28,    28,    28,    28,    28,    28,    28,   152,    28,
      28,    28,    28,    28,    28,   107,   107,   107,   107,   107,
     108,   108,   107,   108,   108,   107,   107,   106,   153,   106,
     153,   106,   153,   106,   153,   107,   107,   107,   107,   107,
     108,   108,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   108,   107,   107,   108,   108,   107,   108,   108,
     107,   108,   108,   107,   108,   108,   107,   108,   108,   107,
     108,   108,    25,    25,    25,    27,    28,    29,    30,    31,
      32,   152,   107,   107,    18,    19,    20,    21,    22,    23,
      25,   107,   107,   107,   107,   107,   107,   107,   107,    20,
      21,    22,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   108,   108,   107,
     108,   108,   107,   108,   108,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   151,   151,   151,   151,   152,   152,   152,   152,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,    85,    85,   152,   152,   152,
     152,   152,   152,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,    25,    27,    28,
      29,    30,    31,    32,   151,    25,    27,    28,    29,    30,
      31,    32,   151,   107,   107,   107,   107,   107,   107
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   114,   114,   115,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     125,   125,   126,   126,   126,   126,   127,   127,   127,   127,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   141,   141,   142,   142,   142,
     142,   142,   142,   143,   143,   143,   143,   143,   143,   144,
     144,   144,   144,   144,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   147,   148,   148,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   150,   151,   151,
     151,   151,   151,   151,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   153,   153,   154,   154,   154,   154,   155,   155,   155,
     155,   155,   155,   155
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     1,     1,     2,
       4,     2,     2,     2,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     3,     5,
       7,     7,     3,     5,     7,     7,     3,     5,     7,     7,
       5,     5,     5,     5,     5,     5,     5,     5,     3,     5,
       5,     5,     5,     5,     5,     5,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       7,     7,     5,     5,     5,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     3,     3,     3,     3,     7,
       7,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     3,     3,     7,     7,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     3,     3,     3,     3,     7,
       7,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     3,     3,     7,     7,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     7,     7,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     7,     7,     3,     5,
       3,     5,     3,     5,     3,     5,     3,     5,     3,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     5,     5,     5,     5,
       5,     5,     5,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     5,     5,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     5,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     5,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     5,
       5,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     3,     3,     3,     3,     7,     7,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     3,     3,     3,     7,     7,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     5,     5,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     3,     3,     3,     3,     7,     7,     3,     3,
       3,     3,     3,     5,     3,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     5,
       5,     5,     5,     5,     5,     5,     5,     7,     7,     7,
       7,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SECONDPASSEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SECONDPASSEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SECONDPASSerror or SECONDPASSUNDEF. */
#define YYERRCODE SECONDPASSUNDEF


/* Enable debugging if requested.  */
#if SECONDPASSDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !SECONDPASSDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !SECONDPASSDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SECONDPASSEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == SECONDPASSEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= SECONDPASSEOF)
    {
      yychar = SECONDPASSEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SECONDPASSerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SECONDPASSUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = SECONDPASSEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: lines  */
#line 93 "grammar-secondpass.y"
                                                        {  	}
#line 2326 "grammar-secondpass.tab.c"
    break;

  case 3: /* lines: line  */
#line 95 "grammar-secondpass.y"
                         {  line_increase(); }
#line 2332 "grammar-secondpass.tab.c"
    break;

  case 4: /* lines: lines line  */
#line 96 "grammar-secondpass.y"
                                     {  line_increase(); }
#line 2338 "grammar-secondpass.tab.c"
    break;

  case 5: /* line: instruction ENTER  */
#line 98 "grammar-secondpass.y"
                                                        { }
#line 2344 "grammar-secondpass.tab.c"
    break;

  case 6: /* line: directive ENTER  */
#line 99 "grammar-secondpass.y"
                                                                { }
#line 2350 "grammar-secondpass.tab.c"
    break;

  case 7: /* line: ENTER  */
#line 100 "grammar-secondpass.y"
                                                                        { }
#line 2356 "grammar-secondpass.tab.c"
    break;

  case 8: /* directive: END  */
#line 103 "grammar-secondpass.y"
                                                                        { return 0;}
#line 2362 "grammar-secondpass.tab.c"
    break;

  case 9: /* directive: DEFS expression  */
#line 104 "grammar-secondpass.y"
                                                                                                { for(int a=0;a<(yyvsp[0].normal);a++) { code_putbyte(0x00); }  }
#line 2368 "grammar-secondpass.tab.c"
    break;

  case 10: /* directive: DEFS expression COMMA expression  */
#line 105 "grammar-secondpass.y"
                                                                                { for(int a=0;a<(yyvsp[-2].normal);a++) { code_putbyte((yyvsp[0].normal)); }  }
#line 2374 "grammar-secondpass.tab.c"
    break;

  case 11: /* directive: DEFM STRING  */
#line 106 "grammar-secondpass.y"
                                                                                                { for(int a=0;a<(int)strlen((yyvsp[0].literal));a++) {code_putbyte((yyvsp[0].literal)[a]); } }
#line 2380 "grammar-secondpass.tab.c"
    break;

  case 12: /* directive: DEFW expression  */
#line 107 "grammar-secondpass.y"
                                                                                                { code_putword((yyvsp[0].normal)); }
#line 2386 "grammar-secondpass.tab.c"
    break;

  case 13: /* directive: DEFB listexpr  */
#line 108 "grammar-secondpass.y"
                                                                                                {  }
#line 2392 "grammar-secondpass.tab.c"
    break;

  case 14: /* directive: LITERAL EQU expression  */
#line 109 "grammar-secondpass.y"
                                                                                        { /* done in first pass */ }
#line 2398 "grammar-secondpass.tab.c"
    break;

  case 15: /* directive: EQU expression  */
#line 110 "grammar-secondpass.y"
                                                                                                { /* done in first pass most likely is LABEL EQU expression */ }
#line 2404 "grammar-secondpass.tab.c"
    break;

  case 16: /* directive: ORG INTEGER  */
#line 111 "grammar-secondpass.y"
                                                                                                        { pc_init((yyvsp[0].normal));	}
#line 2410 "grammar-secondpass.tab.c"
    break;

  case 17: /* directive: INCBIN STRING  */
#line 112 "grammar-secondpass.y"
                                                                                                { 
																uint8_t incbin[65535]; 
																int k = preproc_include_bin((yyvsp[0].literal),incbin);
																for(int a=0;a<k;a++) {
																	code_putbyte(incbin[a]);
																}
														 }
#line 2422 "grammar-secondpass.tab.c"
    break;

  case 18: /* directive: ALIGN expression  */
#line 119 "grammar-secondpass.y"
                                                { 
										int pc = pc_get();
										int k = ((( pc / (yyvsp[0].normal))+1)*(yyvsp[0].normal)); 
										for  (int a = pc; a < k; a++) { 
											pc_inc(1); 
										} 
									}
#line 2434 "grammar-secondpass.tab.c"
    break;

  case 19: /* instruction: NOP  */
#line 127 "grammar-secondpass.y"
                                                                { code_putbyte( 0x00 ); }
#line 2440 "grammar-secondpass.tab.c"
    break;

  case 20: /* instruction: DI  */
#line 128 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xF3 ); }
#line 2446 "grammar-secondpass.tab.c"
    break;

  case 21: /* instruction: EI  */
#line 129 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xFB ); }
#line 2452 "grammar-secondpass.tab.c"
    break;

  case 22: /* instruction: HALT  */
#line 130 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x76 ); }
#line 2458 "grammar-secondpass.tab.c"
    break;

  case 23: /* instruction: RLCA  */
#line 131 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x07 ); }
#line 2464 "grammar-secondpass.tab.c"
    break;

  case 24: /* instruction: RRCA  */
#line 132 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x0F ); }
#line 2470 "grammar-secondpass.tab.c"
    break;

  case 25: /* instruction: RLA  */
#line 133 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x17 ); }
#line 2476 "grammar-secondpass.tab.c"
    break;

  case 26: /* instruction: CCF  */
#line 134 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x3F ); }
#line 2482 "grammar-secondpass.tab.c"
    break;

  case 27: /* instruction: CPIR  */
#line 135 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xB1 ); }
#line 2488 "grammar-secondpass.tab.c"
    break;

  case 28: /* instruction: CPI  */
#line 136 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xA1 ); }
#line 2494 "grammar-secondpass.tab.c"
    break;

  case 29: /* instruction: CPDR  */
#line 137 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xB9 ); }
#line 2500 "grammar-secondpass.tab.c"
    break;

  case 30: /* instruction: CPD  */
#line 138 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xA9 ); }
#line 2506 "grammar-secondpass.tab.c"
    break;

  case 31: /* instruction: RETN  */
#line 139 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0x45 ); }
#line 2512 "grammar-secondpass.tab.c"
    break;

  case 32: /* instruction: RETI  */
#line 140 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0x4D ); }
#line 2518 "grammar-secondpass.tab.c"
    break;

  case 33: /* instruction: EXX  */
#line 141 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xD9 ); }
#line 2524 "grammar-secondpass.tab.c"
    break;

  case 34: /* instruction: INI  */
#line 142 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xA2 ); }
#line 2530 "grammar-secondpass.tab.c"
    break;

  case 35: /* instruction: INIR  */
#line 143 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xB2 ); }
#line 2536 "grammar-secondpass.tab.c"
    break;

  case 36: /* instruction: IND  */
#line 144 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xAA ); }
#line 2542 "grammar-secondpass.tab.c"
    break;

  case 37: /* instruction: INDR  */
#line 145 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xBA ); }
#line 2548 "grammar-secondpass.tab.c"
    break;

  case 38: /* instruction: OUTI  */
#line 146 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xA3 ); }
#line 2554 "grammar-secondpass.tab.c"
    break;

  case 39: /* instruction: OTIR  */
#line 147 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xB3 ); }
#line 2560 "grammar-secondpass.tab.c"
    break;

  case 40: /* instruction: OUTD  */
#line 148 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xAB ); }
#line 2566 "grammar-secondpass.tab.c"
    break;

  case 41: /* instruction: OTDR  */
#line 149 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xBB ); }
#line 2572 "grammar-secondpass.tab.c"
    break;

  case 42: /* instruction: SCF  */
#line 150 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x37 ); }
#line 2578 "grammar-secondpass.tab.c"
    break;

  case 43: /* instruction: LDI  */
#line 151 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xA0 ); }
#line 2584 "grammar-secondpass.tab.c"
    break;

  case 44: /* instruction: LDIR  */
#line 152 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xB0 ); }
#line 2590 "grammar-secondpass.tab.c"
    break;

  case 45: /* instruction: NEG  */
#line 153 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0x44 ); }
#line 2596 "grammar-secondpass.tab.c"
    break;

  case 46: /* instruction: LD ldcommand  */
#line 154 "grammar-secondpass.y"
                                                                { }
#line 2602 "grammar-secondpass.tab.c"
    break;

  case 47: /* instruction: AND andcommand  */
#line 155 "grammar-secondpass.y"
                                                                { }
#line 2608 "grammar-secondpass.tab.c"
    break;

  case 48: /* instruction: XOR xorcommand  */
#line 156 "grammar-secondpass.y"
                                                                { }
#line 2614 "grammar-secondpass.tab.c"
    break;

  case 49: /* instruction: OR orcommand  */
#line 157 "grammar-secondpass.y"
                                                                { }
#line 2620 "grammar-secondpass.tab.c"
    break;

  case 50: /* instruction: CP cpcommand  */
#line 158 "grammar-secondpass.y"
                                                                { }
#line 2626 "grammar-secondpass.tab.c"
    break;

  case 51: /* instruction: INC inccommand  */
#line 159 "grammar-secondpass.y"
                                                                { }
#line 2632 "grammar-secondpass.tab.c"
    break;

  case 52: /* instruction: DEC deccommand  */
#line 160 "grammar-secondpass.y"
                                                                { }
#line 2638 "grammar-secondpass.tab.c"
    break;

  case 53: /* instruction: ADC adccommand  */
#line 161 "grammar-secondpass.y"
                                                                { }
#line 2644 "grammar-secondpass.tab.c"
    break;

  case 54: /* instruction: ADD addcommand  */
#line 162 "grammar-secondpass.y"
                                                                { }
#line 2650 "grammar-secondpass.tab.c"
    break;

  case 55: /* instruction: SUB subcommand  */
#line 163 "grammar-secondpass.y"
                                                                { }
#line 2656 "grammar-secondpass.tab.c"
    break;

  case 56: /* instruction: SBC sbccommand  */
#line 164 "grammar-secondpass.y"
                                                                { }
#line 2662 "grammar-secondpass.tab.c"
    break;

  case 57: /* instruction: DJNZ djnzcommand  */
#line 165 "grammar-secondpass.y"
                                                                { }
#line 2668 "grammar-secondpass.tab.c"
    break;

  case 58: /* instruction: JR jrcommand  */
#line 166 "grammar-secondpass.y"
                                                                { }
#line 2674 "grammar-secondpass.tab.c"
    break;

  case 59: /* instruction: JP jpcommand  */
#line 167 "grammar-secondpass.y"
                                                                { }
#line 2680 "grammar-secondpass.tab.c"
    break;

  case 60: /* instruction: CALL callcommand  */
#line 168 "grammar-secondpass.y"
                                                                { }
#line 2686 "grammar-secondpass.tab.c"
    break;

  case 61: /* instruction: EX excommand  */
#line 169 "grammar-secondpass.y"
                                                                { }
#line 2692 "grammar-secondpass.tab.c"
    break;

  case 62: /* instruction: RET retcommand  */
#line 170 "grammar-secondpass.y"
                                                                { }
#line 2698 "grammar-secondpass.tab.c"
    break;

  case 63: /* instruction: RST rstcommand  */
#line 171 "grammar-secondpass.y"
                                                                { }
#line 2704 "grammar-secondpass.tab.c"
    break;

  case 64: /* instruction: PUSH pushcommand  */
#line 172 "grammar-secondpass.y"
                                                                { }
#line 2710 "grammar-secondpass.tab.c"
    break;

  case 65: /* instruction: POP popcommand  */
#line 173 "grammar-secondpass.y"
                                                                { }
#line 2716 "grammar-secondpass.tab.c"
    break;

  case 66: /* instruction: IN incommand  */
#line 174 "grammar-secondpass.y"
                                                                { }
#line 2722 "grammar-secondpass.tab.c"
    break;

  case 67: /* instruction: OUT outcommand  */
#line 175 "grammar-secondpass.y"
                                                                { }
#line 2728 "grammar-secondpass.tab.c"
    break;

  case 68: /* instruction: BIT bitcommand  */
#line 176 "grammar-secondpass.y"
                                                                { }
#line 2734 "grammar-secondpass.tab.c"
    break;

  case 69: /* instruction: RES rescommand  */
#line 177 "grammar-secondpass.y"
                                                                { }
#line 2740 "grammar-secondpass.tab.c"
    break;

  case 70: /* instruction: SET setcommand  */
#line 178 "grammar-secondpass.y"
                                                                { }
#line 2746 "grammar-secondpass.tab.c"
    break;

  case 71: /* instruction: SLA slacommand  */
#line 179 "grammar-secondpass.y"
                                                                { }
#line 2752 "grammar-secondpass.tab.c"
    break;

  case 72: /* instruction: SRA sracommand  */
#line 180 "grammar-secondpass.y"
                                                                { }
#line 2758 "grammar-secondpass.tab.c"
    break;

  case 73: /* instruction: SRL srlcommand  */
#line 181 "grammar-secondpass.y"
                                                                { }
#line 2764 "grammar-secondpass.tab.c"
    break;

  case 74: /* instruction: RL rlcommand  */
#line 182 "grammar-secondpass.y"
                                                                { }
#line 2770 "grammar-secondpass.tab.c"
    break;

  case 75: /* instruction: RR rrcommand  */
#line 183 "grammar-secondpass.y"
                                                                { }
#line 2776 "grammar-secondpass.tab.c"
    break;

  case 76: /* instruction: RRC rrccommand  */
#line 184 "grammar-secondpass.y"
                                                                { }
#line 2782 "grammar-secondpass.tab.c"
    break;

  case 77: /* instruction: RLC rlccommand  */
#line 185 "grammar-secondpass.y"
                                                                { }
#line 2788 "grammar-secondpass.tab.c"
    break;

  case 78: /* rlccommand: A  */
#line 188 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x07 ); }
#line 2794 "grammar-secondpass.tab.c"
    break;

  case 79: /* rlccommand: B  */
#line 189 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x00 ); }
#line 2800 "grammar-secondpass.tab.c"
    break;

  case 80: /* rlccommand: C  */
#line 190 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x01 ); }
#line 2806 "grammar-secondpass.tab.c"
    break;

  case 81: /* rlccommand: D  */
#line 191 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x02 ); }
#line 2812 "grammar-secondpass.tab.c"
    break;

  case 82: /* rlccommand: E  */
#line 192 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x03 ); }
#line 2818 "grammar-secondpass.tab.c"
    break;

  case 83: /* rlccommand: H  */
#line 193 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x04 ); }
#line 2824 "grammar-secondpass.tab.c"
    break;

  case 84: /* rlccommand: L  */
#line 194 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x05 ); }
#line 2830 "grammar-secondpass.tab.c"
    break;

  case 85: /* rlccommand: PARLEFT HL PARRIGHT  */
#line 195 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x06 ); }
#line 2836 "grammar-secondpass.tab.c"
    break;

  case 86: /* rlccommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 196 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x06 ); }
#line 2842 "grammar-secondpass.tab.c"
    break;

  case 87: /* rlccommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 197 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x06 ); }
#line 2848 "grammar-secondpass.tab.c"
    break;

  case 88: /* rrccommand: A  */
#line 199 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0F ); }
#line 2854 "grammar-secondpass.tab.c"
    break;

  case 89: /* rrccommand: B  */
#line 200 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x08 ); }
#line 2860 "grammar-secondpass.tab.c"
    break;

  case 90: /* rrccommand: C  */
#line 201 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x09 ); }
#line 2866 "grammar-secondpass.tab.c"
    break;

  case 91: /* rrccommand: D  */
#line 202 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0A ); }
#line 2872 "grammar-secondpass.tab.c"
    break;

  case 92: /* rrccommand: E  */
#line 203 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0B ); }
#line 2878 "grammar-secondpass.tab.c"
    break;

  case 93: /* rrccommand: H  */
#line 204 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0C ); }
#line 2884 "grammar-secondpass.tab.c"
    break;

  case 94: /* rrccommand: L  */
#line 205 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0D ); }
#line 2890 "grammar-secondpass.tab.c"
    break;

  case 95: /* rrccommand: PARLEFT HL PARRIGHT  */
#line 206 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0E ); }
#line 2896 "grammar-secondpass.tab.c"
    break;

  case 96: /* rrccommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 207 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x0E ); }
#line 2902 "grammar-secondpass.tab.c"
    break;

  case 97: /* rrccommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 208 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x0E ); }
#line 2908 "grammar-secondpass.tab.c"
    break;

  case 98: /* rrcommand: A  */
#line 210 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xCB ); code_putbyte( 0x1F ); }
#line 2914 "grammar-secondpass.tab.c"
    break;

  case 99: /* rrcommand: B  */
#line 211 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x18 ); }
#line 2920 "grammar-secondpass.tab.c"
    break;

  case 100: /* rrcommand: C  */
#line 212 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x19 ); }
#line 2926 "grammar-secondpass.tab.c"
    break;

  case 101: /* rrcommand: D  */
#line 213 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1A ); }
#line 2932 "grammar-secondpass.tab.c"
    break;

  case 102: /* rrcommand: E  */
#line 214 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1B ); }
#line 2938 "grammar-secondpass.tab.c"
    break;

  case 103: /* rrcommand: H  */
#line 215 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1C ); }
#line 2944 "grammar-secondpass.tab.c"
    break;

  case 104: /* rrcommand: L  */
#line 216 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1D ); }
#line 2950 "grammar-secondpass.tab.c"
    break;

  case 105: /* rrcommand: PARLEFT HL PARRIGHT  */
#line 217 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1E ); }
#line 2956 "grammar-secondpass.tab.c"
    break;

  case 106: /* rrcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 218 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x1E ); }
#line 2962 "grammar-secondpass.tab.c"
    break;

  case 107: /* rrcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 219 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x1E ); }
#line 2968 "grammar-secondpass.tab.c"
    break;

  case 108: /* rlcommand: A  */
#line 221 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xCB ); code_putbyte( 0x17 ); }
#line 2974 "grammar-secondpass.tab.c"
    break;

  case 109: /* rlcommand: B  */
#line 222 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x10 ); }
#line 2980 "grammar-secondpass.tab.c"
    break;

  case 110: /* rlcommand: C  */
#line 223 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x11 ); }
#line 2986 "grammar-secondpass.tab.c"
    break;

  case 111: /* rlcommand: D  */
#line 224 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x12 ); }
#line 2992 "grammar-secondpass.tab.c"
    break;

  case 112: /* rlcommand: E  */
#line 225 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x13 ); }
#line 2998 "grammar-secondpass.tab.c"
    break;

  case 113: /* rlcommand: H  */
#line 226 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x14 ); }
#line 3004 "grammar-secondpass.tab.c"
    break;

  case 114: /* rlcommand: L  */
#line 227 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x15 ); }
#line 3010 "grammar-secondpass.tab.c"
    break;

  case 115: /* rlcommand: PARLEFT HL PARRIGHT  */
#line 228 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x16 ); }
#line 3016 "grammar-secondpass.tab.c"
    break;

  case 116: /* rlcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 229 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x16 ); }
#line 3022 "grammar-secondpass.tab.c"
    break;

  case 117: /* rlcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 230 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x16 ); }
#line 3028 "grammar-secondpass.tab.c"
    break;

  case 118: /* sracommand: A  */
#line 232 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2F ); }
#line 3034 "grammar-secondpass.tab.c"
    break;

  case 119: /* sracommand: B  */
#line 233 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x28 ); }
#line 3040 "grammar-secondpass.tab.c"
    break;

  case 120: /* sracommand: C  */
#line 234 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x29 ); }
#line 3046 "grammar-secondpass.tab.c"
    break;

  case 121: /* sracommand: D  */
#line 235 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2A ); }
#line 3052 "grammar-secondpass.tab.c"
    break;

  case 122: /* sracommand: E  */
#line 236 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2B ); }
#line 3058 "grammar-secondpass.tab.c"
    break;

  case 123: /* sracommand: H  */
#line 237 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2C ); }
#line 3064 "grammar-secondpass.tab.c"
    break;

  case 124: /* sracommand: L  */
#line 238 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2D ); }
#line 3070 "grammar-secondpass.tab.c"
    break;

  case 125: /* sracommand: PARLEFT HL PARRIGHT  */
#line 239 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2E ); }
#line 3076 "grammar-secondpass.tab.c"
    break;

  case 126: /* sracommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 240 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x2E ); }
#line 3082 "grammar-secondpass.tab.c"
    break;

  case 127: /* sracommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 241 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x2E ); }
#line 3088 "grammar-secondpass.tab.c"
    break;

  case 128: /* slacommand: A  */
#line 243 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x27 ); }
#line 3094 "grammar-secondpass.tab.c"
    break;

  case 129: /* slacommand: B  */
#line 244 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x20 ); }
#line 3100 "grammar-secondpass.tab.c"
    break;

  case 130: /* slacommand: C  */
#line 245 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x21 ); }
#line 3106 "grammar-secondpass.tab.c"
    break;

  case 131: /* slacommand: D  */
#line 246 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x22 ); }
#line 3112 "grammar-secondpass.tab.c"
    break;

  case 132: /* slacommand: E  */
#line 247 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x23 ); }
#line 3118 "grammar-secondpass.tab.c"
    break;

  case 133: /* slacommand: H  */
#line 248 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x24 ); }
#line 3124 "grammar-secondpass.tab.c"
    break;

  case 134: /* slacommand: L  */
#line 249 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x25 ); }
#line 3130 "grammar-secondpass.tab.c"
    break;

  case 135: /* slacommand: PARLEFT HL PARRIGHT  */
#line 250 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x26 ); }
#line 3136 "grammar-secondpass.tab.c"
    break;

  case 136: /* slacommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 251 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x26 ); }
#line 3142 "grammar-secondpass.tab.c"
    break;

  case 137: /* slacommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 252 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x26 ); }
#line 3148 "grammar-secondpass.tab.c"
    break;

  case 138: /* srlcommand: A  */
#line 254 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x3F ); }
#line 3154 "grammar-secondpass.tab.c"
    break;

  case 139: /* srlcommand: B  */
#line 255 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x38 ); }
#line 3160 "grammar-secondpass.tab.c"
    break;

  case 140: /* srlcommand: C  */
#line 256 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x39 ); }
#line 3166 "grammar-secondpass.tab.c"
    break;

  case 141: /* srlcommand: D  */
#line 257 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x3A ); }
#line 3172 "grammar-secondpass.tab.c"
    break;

  case 142: /* srlcommand: E  */
#line 258 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x3B ); }
#line 3178 "grammar-secondpass.tab.c"
    break;

  case 143: /* srlcommand: H  */
#line 259 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x3C ); }
#line 3184 "grammar-secondpass.tab.c"
    break;

  case 144: /* srlcommand: L  */
#line 260 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x3D ); }
#line 3190 "grammar-secondpass.tab.c"
    break;

  case 145: /* srlcommand: PARLEFT HL PARRIGHT  */
#line 261 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x3E ); }
#line 3196 "grammar-secondpass.tab.c"
    break;

  case 146: /* srlcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 262 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x3E ); }
#line 3202 "grammar-secondpass.tab.c"
    break;

  case 147: /* srlcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 263 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x3E ); }
#line 3208 "grammar-secondpass.tab.c"
    break;

  case 148: /* rescommand: INTEGER COMMA reg8  */
#line 265 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-2].normal)<<3)|(yyvsp[0].normal)|128  );   }
#line 3214 "grammar-secondpass.tab.c"
    break;

  case 149: /* rescommand: INTEGER COMMA PARLEFT HL PARRIGHT  */
#line 266 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-4].normal)<<3)|128|4|2 ); }
#line 3220 "grammar-secondpass.tab.c"
    break;

  case 150: /* rescommand: INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT  */
#line 267 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|128|4|2 ); }
#line 3226 "grammar-secondpass.tab.c"
    break;

  case 151: /* rescommand: INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT  */
#line 268 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|128|4|2 ); }
#line 3232 "grammar-secondpass.tab.c"
    break;

  case 152: /* setcommand: INTEGER COMMA reg8  */
#line 270 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-2].normal)<<3)|(yyvsp[0].normal)|128|64  );   }
#line 3238 "grammar-secondpass.tab.c"
    break;

  case 153: /* setcommand: INTEGER COMMA PARLEFT HL PARRIGHT  */
#line 271 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-4].normal)<<3)|128|64|4|2 ); }
#line 3244 "grammar-secondpass.tab.c"
    break;

  case 154: /* setcommand: INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT  */
#line 272 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|128|64|4|2 ); }
#line 3250 "grammar-secondpass.tab.c"
    break;

  case 155: /* setcommand: INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT  */
#line 273 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|128|64|4|2 ); }
#line 3256 "grammar-secondpass.tab.c"
    break;

  case 156: /* bitcommand: INTEGER COMMA reg8  */
#line 275 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-2].normal)<<3)|(yyvsp[0].normal)|64 ) ;}
#line 3262 "grammar-secondpass.tab.c"
    break;

  case 157: /* bitcommand: INTEGER COMMA PARLEFT HL PARRIGHT  */
#line 276 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-4].normal)<<3)|64|6  ); }
#line 3268 "grammar-secondpass.tab.c"
    break;

  case 158: /* bitcommand: INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT  */
#line 277 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|64|6 ); }
#line 3274 "grammar-secondpass.tab.c"
    break;

  case 159: /* bitcommand: INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT  */
#line 278 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|64|6 ); }
#line 3280 "grammar-secondpass.tab.c"
    break;

  case 160: /* incommand: A COMMA PARLEFT expression2 PARRIGHT  */
#line 280 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xDB ); code_putbyte( (yyvsp[-1].normal) ); }
#line 3286 "grammar-secondpass.tab.c"
    break;

  case 161: /* incommand: B COMMA PARLEFT C PARRIGHT  */
#line 281 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x40 ); }
#line 3292 "grammar-secondpass.tab.c"
    break;

  case 162: /* incommand: C COMMA PARLEFT C PARRIGHT  */
#line 282 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x48 ); }
#line 3298 "grammar-secondpass.tab.c"
    break;

  case 163: /* incommand: D COMMA PARLEFT C PARRIGHT  */
#line 283 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x50 ); }
#line 3304 "grammar-secondpass.tab.c"
    break;

  case 164: /* incommand: E COMMA PARLEFT C PARRIGHT  */
#line 284 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x58 ); }
#line 3310 "grammar-secondpass.tab.c"
    break;

  case 165: /* incommand: H COMMA PARLEFT C PARRIGHT  */
#line 285 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x60 ); }
#line 3316 "grammar-secondpass.tab.c"
    break;

  case 166: /* incommand: L COMMA PARLEFT C PARRIGHT  */
#line 286 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x68 ); }
#line 3322 "grammar-secondpass.tab.c"
    break;

  case 167: /* incommand: A COMMA PARLEFT C PARRIGHT  */
#line 287 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x78 ); }
#line 3328 "grammar-secondpass.tab.c"
    break;

  case 168: /* incommand: PARLEFT C PARRIGHT  */
#line 288 "grammar-secondpass.y"
                                                                                                        {  code_putbyte( 0xED ); code_putbyte( 0x70 ); }
#line 3334 "grammar-secondpass.tab.c"
    break;

  case 169: /* outcommand: A COMMA PARLEFT expression2 PARRIGHT  */
#line 291 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xDB ); code_putbyte( (yyvsp[-1].normal) ); }
#line 3340 "grammar-secondpass.tab.c"
    break;

  case 170: /* outcommand: B COMMA PARLEFT C PARRIGHT  */
#line 292 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x40 ); }
#line 3346 "grammar-secondpass.tab.c"
    break;

  case 171: /* outcommand: C COMMA PARLEFT C PARRIGHT  */
#line 293 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x48 ); }
#line 3352 "grammar-secondpass.tab.c"
    break;

  case 172: /* outcommand: D COMMA PARLEFT C PARRIGHT  */
#line 294 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x50 ); }
#line 3358 "grammar-secondpass.tab.c"
    break;

  case 173: /* outcommand: E COMMA PARLEFT C PARRIGHT  */
#line 295 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x58 ); }
#line 3364 "grammar-secondpass.tab.c"
    break;

  case 174: /* outcommand: H COMMA PARLEFT C PARRIGHT  */
#line 296 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x60 ); }
#line 3370 "grammar-secondpass.tab.c"
    break;

  case 175: /* outcommand: L COMMA PARLEFT C PARRIGHT  */
#line 297 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x68 ); }
#line 3376 "grammar-secondpass.tab.c"
    break;

  case 176: /* outcommand: A COMMA PARLEFT C PARRIGHT  */
#line 298 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x78 ); }
#line 3382 "grammar-secondpass.tab.c"
    break;

  case 177: /* outcommand: PARLEFT C PARRIGHT  */
#line 299 "grammar-secondpass.y"
                                                                                                        {  code_putbyte( 0xED ); code_putbyte( 0x70 ); }
#line 3388 "grammar-secondpass.tab.c"
    break;

  case 178: /* ldcommand: A COMMA A  */
#line 301 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x7F ); }
#line 3394 "grammar-secondpass.tab.c"
    break;

  case 179: /* ldcommand: A COMMA B  */
#line 302 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x78 ); }
#line 3400 "grammar-secondpass.tab.c"
    break;

  case 180: /* ldcommand: A COMMA C  */
#line 303 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x79 ); }
#line 3406 "grammar-secondpass.tab.c"
    break;

  case 181: /* ldcommand: A COMMA D  */
#line 304 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x7A ); }
#line 3412 "grammar-secondpass.tab.c"
    break;

  case 182: /* ldcommand: A COMMA E  */
#line 305 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x7B ); }
#line 3418 "grammar-secondpass.tab.c"
    break;

  case 183: /* ldcommand: A COMMA H  */
#line 306 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x7C ); }
#line 3424 "grammar-secondpass.tab.c"
    break;

  case 184: /* ldcommand: A COMMA L  */
#line 307 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x7D ); }
#line 3430 "grammar-secondpass.tab.c"
    break;

  case 185: /* ldcommand: A COMMA expression2  */
#line 308 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x3E ); code_putbyte( (yyvsp[0].normal) );}
#line 3436 "grammar-secondpass.tab.c"
    break;

  case 186: /* ldcommand: A COMMA IXH  */
#line 309 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x7C );  }
#line 3442 "grammar-secondpass.tab.c"
    break;

  case 187: /* ldcommand: A COMMA IXL  */
#line 310 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x7D );  }
#line 3448 "grammar-secondpass.tab.c"
    break;

  case 188: /* ldcommand: A COMMA IYH  */
#line 311 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x7C );  }
#line 3454 "grammar-secondpass.tab.c"
    break;

  case 189: /* ldcommand: A COMMA IYL  */
#line 312 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x7D );  }
#line 3460 "grammar-secondpass.tab.c"
    break;

  case 190: /* ldcommand: A COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 313 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x7E ); code_putbyte((yyvsp[-1].normal)); }
#line 3466 "grammar-secondpass.tab.c"
    break;

  case 191: /* ldcommand: A COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 314 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x7E ); code_putbyte((yyvsp[-1].normal)); }
#line 3472 "grammar-secondpass.tab.c"
    break;

  case 192: /* ldcommand: A COMMA PARLEFT HL PARRIGHT  */
#line 315 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x7E ); }
#line 3478 "grammar-secondpass.tab.c"
    break;

  case 193: /* ldcommand: A COMMA PARLEFT BC PARRIGHT  */
#line 316 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x0A ); }
#line 3484 "grammar-secondpass.tab.c"
    break;

  case 194: /* ldcommand: A COMMA PARLEFT DE PARRIGHT  */
#line 317 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x1A ); }
#line 3490 "grammar-secondpass.tab.c"
    break;

  case 195: /* ldcommand: A COMMA PARLEFT expression2 PARRIGHT  */
#line 318 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x3A ); code_putword( (yyvsp[-1].normal) ); }
#line 3496 "grammar-secondpass.tab.c"
    break;

  case 196: /* ldcommand: B COMMA A  */
#line 319 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x47 ); }
#line 3502 "grammar-secondpass.tab.c"
    break;

  case 197: /* ldcommand: B COMMA B  */
#line 320 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x40 ); }
#line 3508 "grammar-secondpass.tab.c"
    break;

  case 198: /* ldcommand: B COMMA C  */
#line 321 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x41 ); }
#line 3514 "grammar-secondpass.tab.c"
    break;

  case 199: /* ldcommand: B COMMA D  */
#line 322 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x42 ); }
#line 3520 "grammar-secondpass.tab.c"
    break;

  case 200: /* ldcommand: B COMMA E  */
#line 323 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x43 ); }
#line 3526 "grammar-secondpass.tab.c"
    break;

  case 201: /* ldcommand: B COMMA H  */
#line 324 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x44 ); }
#line 3532 "grammar-secondpass.tab.c"
    break;

  case 202: /* ldcommand: B COMMA L  */
#line 325 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x45 ); }
#line 3538 "grammar-secondpass.tab.c"
    break;

  case 203: /* ldcommand: B COMMA expression2  */
#line 326 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x06 );  code_putbyte( (yyvsp[0].normal) );}
#line 3544 "grammar-secondpass.tab.c"
    break;

  case 204: /* ldcommand: B COMMA PARLEFT HL PARRIGHT  */
#line 327 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x46 ); }
#line 3550 "grammar-secondpass.tab.c"
    break;

  case 205: /* ldcommand: B COMMA IXH  */
#line 328 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x44 );  }
#line 3556 "grammar-secondpass.tab.c"
    break;

  case 206: /* ldcommand: B COMMA IXL  */
#line 329 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x45 );  }
#line 3562 "grammar-secondpass.tab.c"
    break;

  case 207: /* ldcommand: B COMMA IYH  */
#line 330 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x44 );  }
#line 3568 "grammar-secondpass.tab.c"
    break;

  case 208: /* ldcommand: B COMMA IYL  */
#line 331 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x45 );  }
#line 3574 "grammar-secondpass.tab.c"
    break;

  case 209: /* ldcommand: B COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 332 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x46 ); code_putbyte((yyvsp[-1].normal)); }
#line 3580 "grammar-secondpass.tab.c"
    break;

  case 210: /* ldcommand: B COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 333 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x46 ); code_putbyte((yyvsp[-1].normal)); }
#line 3586 "grammar-secondpass.tab.c"
    break;

  case 211: /* ldcommand: C COMMA A  */
#line 334 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4F ); }
#line 3592 "grammar-secondpass.tab.c"
    break;

  case 212: /* ldcommand: C COMMA B  */
#line 335 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x48 ); }
#line 3598 "grammar-secondpass.tab.c"
    break;

  case 213: /* ldcommand: C COMMA C  */
#line 336 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x49 ); }
#line 3604 "grammar-secondpass.tab.c"
    break;

  case 214: /* ldcommand: C COMMA D  */
#line 337 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4A ); }
#line 3610 "grammar-secondpass.tab.c"
    break;

  case 215: /* ldcommand: C COMMA E  */
#line 338 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4B ); }
#line 3616 "grammar-secondpass.tab.c"
    break;

  case 216: /* ldcommand: C COMMA H  */
#line 339 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4C ); }
#line 3622 "grammar-secondpass.tab.c"
    break;

  case 217: /* ldcommand: C COMMA L  */
#line 340 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4D ); }
#line 3628 "grammar-secondpass.tab.c"
    break;

  case 218: /* ldcommand: C COMMA expression2  */
#line 341 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x0E );  code_putbyte( (yyvsp[0].normal) );}
#line 3634 "grammar-secondpass.tab.c"
    break;

  case 219: /* ldcommand: C COMMA PARLEFT HL PARRIGHT  */
#line 342 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x4E ); }
#line 3640 "grammar-secondpass.tab.c"
    break;

  case 220: /* ldcommand: C COMMA IXH  */
#line 343 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x4C );  }
#line 3646 "grammar-secondpass.tab.c"
    break;

  case 221: /* ldcommand: C COMMA IXL  */
#line 344 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x4D );  }
#line 3652 "grammar-secondpass.tab.c"
    break;

  case 222: /* ldcommand: C COMMA IYH  */
#line 345 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x4C );  }
#line 3658 "grammar-secondpass.tab.c"
    break;

  case 223: /* ldcommand: C COMMA IYL  */
#line 346 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x4D );  }
#line 3664 "grammar-secondpass.tab.c"
    break;

  case 224: /* ldcommand: C COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 347 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x4E ); code_putbyte((yyvsp[-1].normal)); }
#line 3670 "grammar-secondpass.tab.c"
    break;

  case 225: /* ldcommand: C COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 348 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x4E ); code_putbyte((yyvsp[-1].normal)); }
#line 3676 "grammar-secondpass.tab.c"
    break;

  case 226: /* ldcommand: D COMMA A  */
#line 349 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x57 ); }
#line 3682 "grammar-secondpass.tab.c"
    break;

  case 227: /* ldcommand: D COMMA B  */
#line 350 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x50 ); }
#line 3688 "grammar-secondpass.tab.c"
    break;

  case 228: /* ldcommand: D COMMA C  */
#line 351 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x51 ); }
#line 3694 "grammar-secondpass.tab.c"
    break;

  case 229: /* ldcommand: D COMMA D  */
#line 352 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x52 ); }
#line 3700 "grammar-secondpass.tab.c"
    break;

  case 230: /* ldcommand: D COMMA E  */
#line 353 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x53 ); }
#line 3706 "grammar-secondpass.tab.c"
    break;

  case 231: /* ldcommand: D COMMA H  */
#line 354 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x54 ); }
#line 3712 "grammar-secondpass.tab.c"
    break;

  case 232: /* ldcommand: D COMMA L  */
#line 355 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x55 ); }
#line 3718 "grammar-secondpass.tab.c"
    break;

  case 233: /* ldcommand: D COMMA expression2  */
#line 356 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x16 );  code_putbyte( (yyvsp[0].normal) );}
#line 3724 "grammar-secondpass.tab.c"
    break;

  case 234: /* ldcommand: D COMMA PARLEFT HL PARRIGHT  */
#line 357 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x56 ); }
#line 3730 "grammar-secondpass.tab.c"
    break;

  case 235: /* ldcommand: D COMMA IXH  */
#line 358 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x54 );  }
#line 3736 "grammar-secondpass.tab.c"
    break;

  case 236: /* ldcommand: D COMMA IXL  */
#line 359 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x55 );  }
#line 3742 "grammar-secondpass.tab.c"
    break;

  case 237: /* ldcommand: D COMMA IYH  */
#line 360 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x54 );  }
#line 3748 "grammar-secondpass.tab.c"
    break;

  case 238: /* ldcommand: D COMMA IYL  */
#line 361 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x55 );  }
#line 3754 "grammar-secondpass.tab.c"
    break;

  case 239: /* ldcommand: D COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 362 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x56 ); code_putbyte((yyvsp[-1].normal)); }
#line 3760 "grammar-secondpass.tab.c"
    break;

  case 240: /* ldcommand: D COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 363 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x56 ); code_putbyte((yyvsp[-1].normal)); }
#line 3766 "grammar-secondpass.tab.c"
    break;

  case 241: /* ldcommand: E COMMA A  */
#line 364 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5F ); }
#line 3772 "grammar-secondpass.tab.c"
    break;

  case 242: /* ldcommand: E COMMA B  */
#line 365 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x58 ); }
#line 3778 "grammar-secondpass.tab.c"
    break;

  case 243: /* ldcommand: E COMMA C  */
#line 366 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x59 ); }
#line 3784 "grammar-secondpass.tab.c"
    break;

  case 244: /* ldcommand: E COMMA D  */
#line 367 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5A ); }
#line 3790 "grammar-secondpass.tab.c"
    break;

  case 245: /* ldcommand: E COMMA E  */
#line 368 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5B ); }
#line 3796 "grammar-secondpass.tab.c"
    break;

  case 246: /* ldcommand: E COMMA H  */
#line 369 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5C ); }
#line 3802 "grammar-secondpass.tab.c"
    break;

  case 247: /* ldcommand: E COMMA L  */
#line 370 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5D ); }
#line 3808 "grammar-secondpass.tab.c"
    break;

  case 248: /* ldcommand: E COMMA expression2  */
#line 371 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x1E );  code_putbyte( (yyvsp[0].normal) );}
#line 3814 "grammar-secondpass.tab.c"
    break;

  case 249: /* ldcommand: E COMMA PARLEFT HL PARRIGHT  */
#line 372 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x5E ); }
#line 3820 "grammar-secondpass.tab.c"
    break;

  case 250: /* ldcommand: E COMMA IXH  */
#line 373 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x5C );  }
#line 3826 "grammar-secondpass.tab.c"
    break;

  case 251: /* ldcommand: E COMMA IXL  */
#line 374 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x5D );  }
#line 3832 "grammar-secondpass.tab.c"
    break;

  case 252: /* ldcommand: E COMMA IYH  */
#line 375 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x5C );  }
#line 3838 "grammar-secondpass.tab.c"
    break;

  case 253: /* ldcommand: E COMMA IYL  */
#line 376 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x5D );  }
#line 3844 "grammar-secondpass.tab.c"
    break;

  case 254: /* ldcommand: E COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 377 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x5E ); code_putbyte((yyvsp[-1].normal)); }
#line 3850 "grammar-secondpass.tab.c"
    break;

  case 255: /* ldcommand: E COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 378 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x5E ); code_putbyte((yyvsp[-1].normal)); }
#line 3856 "grammar-secondpass.tab.c"
    break;

  case 256: /* ldcommand: H COMMA A  */
#line 379 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x67 ); }
#line 3862 "grammar-secondpass.tab.c"
    break;

  case 257: /* ldcommand: H COMMA B  */
#line 380 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x60 ); }
#line 3868 "grammar-secondpass.tab.c"
    break;

  case 258: /* ldcommand: H COMMA C  */
#line 381 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x61 ); }
#line 3874 "grammar-secondpass.tab.c"
    break;

  case 259: /* ldcommand: H COMMA D  */
#line 382 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x62 ); }
#line 3880 "grammar-secondpass.tab.c"
    break;

  case 260: /* ldcommand: H COMMA E  */
#line 383 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x63 ); }
#line 3886 "grammar-secondpass.tab.c"
    break;

  case 261: /* ldcommand: H COMMA H  */
#line 384 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x64 ); }
#line 3892 "grammar-secondpass.tab.c"
    break;

  case 262: /* ldcommand: H COMMA L  */
#line 385 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x65 ); }
#line 3898 "grammar-secondpass.tab.c"
    break;

  case 263: /* ldcommand: H COMMA expression2  */
#line 386 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x26 );  code_putbyte( (yyvsp[0].normal) );}
#line 3904 "grammar-secondpass.tab.c"
    break;

  case 264: /* ldcommand: H COMMA PARLEFT HL PARRIGHT  */
#line 387 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x66 ); }
#line 3910 "grammar-secondpass.tab.c"
    break;

  case 265: /* ldcommand: H COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 388 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x66 ); code_putbyte((yyvsp[-1].normal)); }
#line 3916 "grammar-secondpass.tab.c"
    break;

  case 266: /* ldcommand: H COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 389 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x66 ); code_putbyte((yyvsp[-1].normal)); }
#line 3922 "grammar-secondpass.tab.c"
    break;

  case 267: /* ldcommand: L COMMA A  */
#line 390 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6F ); }
#line 3928 "grammar-secondpass.tab.c"
    break;

  case 268: /* ldcommand: L COMMA B  */
#line 391 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x68 ); }
#line 3934 "grammar-secondpass.tab.c"
    break;

  case 269: /* ldcommand: L COMMA C  */
#line 392 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x69 ); }
#line 3940 "grammar-secondpass.tab.c"
    break;

  case 270: /* ldcommand: L COMMA D  */
#line 393 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6A ); }
#line 3946 "grammar-secondpass.tab.c"
    break;

  case 271: /* ldcommand: L COMMA E  */
#line 394 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6B ); }
#line 3952 "grammar-secondpass.tab.c"
    break;

  case 272: /* ldcommand: L COMMA H  */
#line 395 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6C ); }
#line 3958 "grammar-secondpass.tab.c"
    break;

  case 273: /* ldcommand: L COMMA L  */
#line 396 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6D ); }
#line 3964 "grammar-secondpass.tab.c"
    break;

  case 274: /* ldcommand: L COMMA expression2  */
#line 397 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x2E );  code_putbyte( (yyvsp[0].normal) );}
#line 3970 "grammar-secondpass.tab.c"
    break;

  case 275: /* ldcommand: L COMMA PARLEFT HL PARRIGHT  */
#line 398 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x6E ); }
#line 3976 "grammar-secondpass.tab.c"
    break;

  case 276: /* ldcommand: L COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 399 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x6E ); code_putbyte((yyvsp[-1].normal)); }
#line 3982 "grammar-secondpass.tab.c"
    break;

  case 277: /* ldcommand: L COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 400 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x6E ); code_putbyte((yyvsp[-1].normal)); }
#line 3988 "grammar-secondpass.tab.c"
    break;

  case 278: /* ldcommand: HL COMMA expression2  */
#line 401 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x21 ); code_putword( (yyvsp[0].normal) ); }
#line 3994 "grammar-secondpass.tab.c"
    break;

  case 279: /* ldcommand: HL COMMA PARLEFT expression2 PARRIGHT  */
#line 402 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x2A ); code_putword( (yyvsp[-1].normal) ); }
#line 4000 "grammar-secondpass.tab.c"
    break;

  case 280: /* ldcommand: BC COMMA expression2  */
#line 403 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x01 ); code_putword( (yyvsp[0].normal) ); }
#line 4006 "grammar-secondpass.tab.c"
    break;

  case 281: /* ldcommand: BC COMMA PARLEFT expression2 PARRIGHT  */
#line 404 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x4B ); code_putword( (yyvsp[-1].normal) ); }
#line 4012 "grammar-secondpass.tab.c"
    break;

  case 282: /* ldcommand: DE COMMA expression2  */
#line 405 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x11 ); code_putword( (yyvsp[0].normal) ); }
#line 4018 "grammar-secondpass.tab.c"
    break;

  case 283: /* ldcommand: DE COMMA PARLEFT expression2 PARRIGHT  */
#line 406 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x5B ); code_putword( (yyvsp[-1].normal) ); }
#line 4024 "grammar-secondpass.tab.c"
    break;

  case 284: /* ldcommand: SP COMMA expression2  */
#line 407 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x31 ); code_putword( (yyvsp[0].normal) ); }
#line 4030 "grammar-secondpass.tab.c"
    break;

  case 285: /* ldcommand: SP COMMA PARLEFT expression2 PARRIGHT  */
#line 408 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x7B ); code_putword( (yyvsp[-1].normal) ); }
#line 4036 "grammar-secondpass.tab.c"
    break;

  case 286: /* ldcommand: IX COMMA expression2  */
#line 409 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x21 ); code_putword( (yyvsp[0].normal) ); }
#line 4042 "grammar-secondpass.tab.c"
    break;

  case 287: /* ldcommand: IX COMMA PARLEFT expression2 PARRIGHT  */
#line 410 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x2A ); code_putword( (yyvsp[-1].normal) ); }
#line 4048 "grammar-secondpass.tab.c"
    break;

  case 288: /* ldcommand: IY COMMA expression2  */
#line 411 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x21 ); code_putword( (yyvsp[0].normal) ); }
#line 4054 "grammar-secondpass.tab.c"
    break;

  case 289: /* ldcommand: IY COMMA PARLEFT expression2 PARRIGHT  */
#line 412 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x2A ); code_putword( (yyvsp[-1].normal) ); }
#line 4060 "grammar-secondpass.tab.c"
    break;

  case 290: /* ldcommand: PARLEFT HL PARRIGHT COMMA expression2  */
#line 413 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x36 ); code_putbyte( (yyvsp[0].normal) ); }
#line 4066 "grammar-secondpass.tab.c"
    break;

  case 291: /* ldcommand: PARLEFT HL PARRIGHT COMMA B  */
#line 414 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x70 ); }
#line 4072 "grammar-secondpass.tab.c"
    break;

  case 292: /* ldcommand: PARLEFT HL PARRIGHT COMMA C  */
#line 415 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x71 ); }
#line 4078 "grammar-secondpass.tab.c"
    break;

  case 293: /* ldcommand: PARLEFT HL PARRIGHT COMMA D  */
#line 416 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x72 ); }
#line 4084 "grammar-secondpass.tab.c"
    break;

  case 294: /* ldcommand: PARLEFT HL PARRIGHT COMMA E  */
#line 417 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x73 ); }
#line 4090 "grammar-secondpass.tab.c"
    break;

  case 295: /* ldcommand: PARLEFT HL PARRIGHT COMMA H  */
#line 418 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x74 ); }
#line 4096 "grammar-secondpass.tab.c"
    break;

  case 296: /* ldcommand: PARLEFT HL PARRIGHT COMMA L  */
#line 419 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x75 ); }
#line 4102 "grammar-secondpass.tab.c"
    break;

  case 297: /* ldcommand: PARLEFT HL PARRIGHT COMMA A  */
#line 420 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x77 ); }
#line 4108 "grammar-secondpass.tab.c"
    break;

  case 298: /* ldcommand: PARLEFT BC PARRIGHT COMMA A  */
#line 421 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x02 ); }
#line 4114 "grammar-secondpass.tab.c"
    break;

  case 299: /* ldcommand: PARLEFT DE PARRIGHT COMMA A  */
#line 422 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x12 ); }
#line 4120 "grammar-secondpass.tab.c"
    break;

  case 300: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA expression  */
#line 423 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x36 ); code_putbyte( (yyvsp[-3].normal) );  code_putbyte( (yyvsp[0].normal) ); }
#line 4126 "grammar-secondpass.tab.c"
    break;

  case 301: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA expression  */
#line 424 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x36 ); code_putbyte( (yyvsp[-3].normal) );  code_putbyte( (yyvsp[0].normal) ); }
#line 4132 "grammar-secondpass.tab.c"
    break;

  case 302: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA A  */
#line 425 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x77 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4138 "grammar-secondpass.tab.c"
    break;

  case 303: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA B  */
#line 426 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x70 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4144 "grammar-secondpass.tab.c"
    break;

  case 304: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA C  */
#line 427 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x71 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4150 "grammar-secondpass.tab.c"
    break;

  case 305: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA D  */
#line 428 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x72 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4156 "grammar-secondpass.tab.c"
    break;

  case 306: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA E  */
#line 429 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x73 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4162 "grammar-secondpass.tab.c"
    break;

  case 307: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA H  */
#line 430 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x74 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4168 "grammar-secondpass.tab.c"
    break;

  case 308: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA L  */
#line 431 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x75 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4174 "grammar-secondpass.tab.c"
    break;

  case 309: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA A  */
#line 432 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x77 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4180 "grammar-secondpass.tab.c"
    break;

  case 310: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA B  */
#line 433 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x70 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4186 "grammar-secondpass.tab.c"
    break;

  case 311: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA C  */
#line 434 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x71 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4192 "grammar-secondpass.tab.c"
    break;

  case 312: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA D  */
#line 435 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x72 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4198 "grammar-secondpass.tab.c"
    break;

  case 313: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA E  */
#line 436 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x73 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4204 "grammar-secondpass.tab.c"
    break;

  case 314: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA H  */
#line 437 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x74 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4210 "grammar-secondpass.tab.c"
    break;

  case 315: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA L  */
#line 438 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x75 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4216 "grammar-secondpass.tab.c"
    break;

  case 316: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA HL  */
#line 439 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x22 ); code_putword( (yyvsp[-3].normal) );  }
#line 4222 "grammar-secondpass.tab.c"
    break;

  case 317: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA BC  */
#line 440 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x43 ); code_putword( (yyvsp[-3].normal) );  }
#line 4228 "grammar-secondpass.tab.c"
    break;

  case 318: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA DE  */
#line 441 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x53 ); code_putword( (yyvsp[-3].normal) );  }
#line 4234 "grammar-secondpass.tab.c"
    break;

  case 319: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA SP  */
#line 442 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x73 ); code_putword( (yyvsp[-3].normal) );  }
#line 4240 "grammar-secondpass.tab.c"
    break;

  case 320: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA A  */
#line 443 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x32 ); code_putword( (yyvsp[-3].normal) );  }
#line 4246 "grammar-secondpass.tab.c"
    break;

  case 321: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA IX  */
#line 444 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x22 ); code_putword( (yyvsp[-3].normal) );  }
#line 4252 "grammar-secondpass.tab.c"
    break;

  case 322: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA IY  */
#line 445 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x22 ); code_putword( (yyvsp[-3].normal) );  }
#line 4258 "grammar-secondpass.tab.c"
    break;

  case 323: /* andcommand: A  */
#line 450 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xA7 ); }
#line 4264 "grammar-secondpass.tab.c"
    break;

  case 324: /* andcommand: B  */
#line 451 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA0 ); }
#line 4270 "grammar-secondpass.tab.c"
    break;

  case 325: /* andcommand: C  */
#line 452 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA1 ); }
#line 4276 "grammar-secondpass.tab.c"
    break;

  case 326: /* andcommand: D  */
#line 453 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA2 ); }
#line 4282 "grammar-secondpass.tab.c"
    break;

  case 327: /* andcommand: E  */
#line 454 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA3 ); }
#line 4288 "grammar-secondpass.tab.c"
    break;

  case 328: /* andcommand: H  */
#line 455 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA4 ); }
#line 4294 "grammar-secondpass.tab.c"
    break;

  case 329: /* andcommand: L  */
#line 456 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA5 ); }
#line 4300 "grammar-secondpass.tab.c"
    break;

  case 330: /* andcommand: PARLEFT HL PARRIGHT  */
#line 457 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xA6 ); }
#line 4306 "grammar-secondpass.tab.c"
    break;

  case 331: /* andcommand: expression2  */
#line 458 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xE6 ); code_putbyte( (yyvsp[0].normal) ); }
#line 4312 "grammar-secondpass.tab.c"
    break;

  case 332: /* andcommand: IXH  */
#line 459 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xA4 ); }
#line 4318 "grammar-secondpass.tab.c"
    break;

  case 333: /* andcommand: IXL  */
#line 460 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xA5 ); }
#line 4324 "grammar-secondpass.tab.c"
    break;

  case 334: /* andcommand: IYH  */
#line 461 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xA4 ); }
#line 4330 "grammar-secondpass.tab.c"
    break;

  case 335: /* andcommand: IYL  */
#line 462 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xA5 ); }
#line 4336 "grammar-secondpass.tab.c"
    break;

  case 336: /* andcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 463 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xA6 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4342 "grammar-secondpass.tab.c"
    break;

  case 337: /* andcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 464 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xA6 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4348 "grammar-secondpass.tab.c"
    break;

  case 338: /* xorcommand: A  */
#line 466 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xAF ); }
#line 4354 "grammar-secondpass.tab.c"
    break;

  case 339: /* xorcommand: B  */
#line 467 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA8 ); }
#line 4360 "grammar-secondpass.tab.c"
    break;

  case 340: /* xorcommand: C  */
#line 468 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA9 ); }
#line 4366 "grammar-secondpass.tab.c"
    break;

  case 341: /* xorcommand: D  */
#line 469 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xAA ); }
#line 4372 "grammar-secondpass.tab.c"
    break;

  case 342: /* xorcommand: E  */
#line 470 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xAB ); }
#line 4378 "grammar-secondpass.tab.c"
    break;

  case 343: /* xorcommand: H  */
#line 471 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xAC ); }
#line 4384 "grammar-secondpass.tab.c"
    break;

  case 344: /* xorcommand: L  */
#line 472 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xAD ); }
#line 4390 "grammar-secondpass.tab.c"
    break;

  case 345: /* xorcommand: PARLEFT HL PARRIGHT  */
#line 473 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xAE ); }
#line 4396 "grammar-secondpass.tab.c"
    break;

  case 346: /* xorcommand: expression2  */
#line 474 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xEE ); code_putbyte( (yyvsp[0].normal) ); }
#line 4402 "grammar-secondpass.tab.c"
    break;

  case 347: /* xorcommand: IXH  */
#line 475 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xAC ); }
#line 4408 "grammar-secondpass.tab.c"
    break;

  case 348: /* xorcommand: IXL  */
#line 476 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xAD ); }
#line 4414 "grammar-secondpass.tab.c"
    break;

  case 349: /* xorcommand: IYH  */
#line 477 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xAC ); }
#line 4420 "grammar-secondpass.tab.c"
    break;

  case 350: /* xorcommand: IYL  */
#line 478 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xAD ); }
#line 4426 "grammar-secondpass.tab.c"
    break;

  case 351: /* xorcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 479 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xAE ); code_putbyte( (yyvsp[-1].normal) );}
#line 4432 "grammar-secondpass.tab.c"
    break;

  case 352: /* xorcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 480 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xAE ); code_putbyte( (yyvsp[-1].normal) );}
#line 4438 "grammar-secondpass.tab.c"
    break;

  case 353: /* orcommand: A  */
#line 482 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xB7 ); }
#line 4444 "grammar-secondpass.tab.c"
    break;

  case 354: /* orcommand: B  */
#line 483 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB0 ); }
#line 4450 "grammar-secondpass.tab.c"
    break;

  case 355: /* orcommand: C  */
#line 484 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB1 ); }
#line 4456 "grammar-secondpass.tab.c"
    break;

  case 356: /* orcommand: D  */
#line 485 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB2 ); }
#line 4462 "grammar-secondpass.tab.c"
    break;

  case 357: /* orcommand: E  */
#line 486 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB3 ); }
#line 4468 "grammar-secondpass.tab.c"
    break;

  case 358: /* orcommand: H  */
#line 487 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB4 ); }
#line 4474 "grammar-secondpass.tab.c"
    break;

  case 359: /* orcommand: L  */
#line 488 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB5 ); }
#line 4480 "grammar-secondpass.tab.c"
    break;

  case 360: /* orcommand: PARLEFT HL PARRIGHT  */
#line 489 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xB6 ); }
#line 4486 "grammar-secondpass.tab.c"
    break;

  case 361: /* orcommand: expression2  */
#line 490 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xF6 ); code_putbyte( (yyvsp[0].normal) ); }
#line 4492 "grammar-secondpass.tab.c"
    break;

  case 362: /* orcommand: IXH  */
#line 491 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xB4 ); }
#line 4498 "grammar-secondpass.tab.c"
    break;

  case 363: /* orcommand: IXL  */
#line 492 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xB5 ); }
#line 4504 "grammar-secondpass.tab.c"
    break;

  case 364: /* orcommand: IYH  */
#line 493 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xB4 ); }
#line 4510 "grammar-secondpass.tab.c"
    break;

  case 365: /* orcommand: IYL  */
#line 494 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xB5 ); }
#line 4516 "grammar-secondpass.tab.c"
    break;

  case 366: /* orcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 495 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xB6 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4522 "grammar-secondpass.tab.c"
    break;

  case 367: /* orcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 496 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xB6 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4528 "grammar-secondpass.tab.c"
    break;

  case 368: /* cpcommand: A  */
#line 498 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xBF ); }
#line 4534 "grammar-secondpass.tab.c"
    break;

  case 369: /* cpcommand: B  */
#line 499 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB8 ); }
#line 4540 "grammar-secondpass.tab.c"
    break;

  case 370: /* cpcommand: C  */
#line 500 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB9 ); }
#line 4546 "grammar-secondpass.tab.c"
    break;

  case 371: /* cpcommand: D  */
#line 501 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xBA ); }
#line 4552 "grammar-secondpass.tab.c"
    break;

  case 372: /* cpcommand: E  */
#line 502 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xBB ); }
#line 4558 "grammar-secondpass.tab.c"
    break;

  case 373: /* cpcommand: H  */
#line 503 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xBC ); }
#line 4564 "grammar-secondpass.tab.c"
    break;

  case 374: /* cpcommand: L  */
#line 504 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xBD ); }
#line 4570 "grammar-secondpass.tab.c"
    break;

  case 375: /* cpcommand: PARLEFT HL PARRIGHT  */
#line 505 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xBE ); }
#line 4576 "grammar-secondpass.tab.c"
    break;

  case 376: /* cpcommand: expression2  */
#line 506 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFE ); code_putbyte( (yyvsp[0].normal) ); }
#line 4582 "grammar-secondpass.tab.c"
    break;

  case 377: /* cpcommand: IXH  */
#line 507 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xBC ); }
#line 4588 "grammar-secondpass.tab.c"
    break;

  case 378: /* cpcommand: IXL  */
#line 508 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xBD ); }
#line 4594 "grammar-secondpass.tab.c"
    break;

  case 379: /* cpcommand: IYH  */
#line 509 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xBC ); }
#line 4600 "grammar-secondpass.tab.c"
    break;

  case 380: /* cpcommand: IYL  */
#line 510 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xBD ); }
#line 4606 "grammar-secondpass.tab.c"
    break;

  case 381: /* cpcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 511 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xBE ); code_putbyte( (yyvsp[-1].normal) );}
#line 4612 "grammar-secondpass.tab.c"
    break;

  case 382: /* cpcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 512 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xBE ); code_putbyte( (yyvsp[-1].normal) );}
#line 4618 "grammar-secondpass.tab.c"
    break;

  case 383: /* inccommand: A  */
#line 514 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x3C ); }
#line 4624 "grammar-secondpass.tab.c"
    break;

  case 384: /* inccommand: B  */
#line 515 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x04 ); }
#line 4630 "grammar-secondpass.tab.c"
    break;

  case 385: /* inccommand: C  */
#line 516 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x0C ); }
#line 4636 "grammar-secondpass.tab.c"
    break;

  case 386: /* inccommand: D  */
#line 517 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x14 ); }
#line 4642 "grammar-secondpass.tab.c"
    break;

  case 387: /* inccommand: E  */
#line 518 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x1C ); }
#line 4648 "grammar-secondpass.tab.c"
    break;

  case 388: /* inccommand: H  */
#line 519 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x24 ); }
#line 4654 "grammar-secondpass.tab.c"
    break;

  case 389: /* inccommand: L  */
#line 520 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x2C ); }
#line 4660 "grammar-secondpass.tab.c"
    break;

  case 390: /* inccommand: BC  */
#line 521 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x03 ); }
#line 4666 "grammar-secondpass.tab.c"
    break;

  case 391: /* inccommand: DE  */
#line 522 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x13 ); }
#line 4672 "grammar-secondpass.tab.c"
    break;

  case 392: /* inccommand: HL  */
#line 523 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x23 ); }
#line 4678 "grammar-secondpass.tab.c"
    break;

  case 393: /* inccommand: SP  */
#line 524 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x33 ); }
#line 4684 "grammar-secondpass.tab.c"
    break;

  case 394: /* inccommand: PARLEFT HL PARRIGHT  */
#line 525 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x34 ); }
#line 4690 "grammar-secondpass.tab.c"
    break;

  case 395: /* inccommand: IXH  */
#line 526 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x24 ); }
#line 4696 "grammar-secondpass.tab.c"
    break;

  case 396: /* inccommand: IXL  */
#line 527 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x2C ); }
#line 4702 "grammar-secondpass.tab.c"
    break;

  case 397: /* inccommand: IYH  */
#line 528 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x24 ); }
#line 4708 "grammar-secondpass.tab.c"
    break;

  case 398: /* inccommand: IYL  */
#line 529 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x2C ); }
#line 4714 "grammar-secondpass.tab.c"
    break;

  case 399: /* inccommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 530 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x34 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4720 "grammar-secondpass.tab.c"
    break;

  case 400: /* inccommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 531 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x34 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4726 "grammar-secondpass.tab.c"
    break;

  case 401: /* inccommand: IX  */
#line 532 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x23 ); }
#line 4732 "grammar-secondpass.tab.c"
    break;

  case 402: /* inccommand: IY  */
#line 533 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x23 ); }
#line 4738 "grammar-secondpass.tab.c"
    break;

  case 403: /* deccommand: A  */
#line 535 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x3D ); }
#line 4744 "grammar-secondpass.tab.c"
    break;

  case 404: /* deccommand: B  */
#line 536 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x05 ); }
#line 4750 "grammar-secondpass.tab.c"
    break;

  case 405: /* deccommand: C  */
#line 537 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x0D ); }
#line 4756 "grammar-secondpass.tab.c"
    break;

  case 406: /* deccommand: D  */
#line 538 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x15 ); }
#line 4762 "grammar-secondpass.tab.c"
    break;

  case 407: /* deccommand: E  */
#line 539 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x1D ); }
#line 4768 "grammar-secondpass.tab.c"
    break;

  case 408: /* deccommand: H  */
#line 540 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x25 ); }
#line 4774 "grammar-secondpass.tab.c"
    break;

  case 409: /* deccommand: L  */
#line 541 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x2D ); }
#line 4780 "grammar-secondpass.tab.c"
    break;

  case 410: /* deccommand: BC  */
#line 542 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x0B ); }
#line 4786 "grammar-secondpass.tab.c"
    break;

  case 411: /* deccommand: DE  */
#line 543 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x1B ); }
#line 4792 "grammar-secondpass.tab.c"
    break;

  case 412: /* deccommand: HL  */
#line 544 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x2B ); }
#line 4798 "grammar-secondpass.tab.c"
    break;

  case 413: /* deccommand: SP  */
#line 545 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x3B ); }
#line 4804 "grammar-secondpass.tab.c"
    break;

  case 414: /* deccommand: PARLEFT HL PARRIGHT  */
#line 546 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x35 ); }
#line 4810 "grammar-secondpass.tab.c"
    break;

  case 415: /* deccommand: IXH  */
#line 547 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x25 ); }
#line 4816 "grammar-secondpass.tab.c"
    break;

  case 416: /* deccommand: IXL  */
#line 548 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x2D ); }
#line 4822 "grammar-secondpass.tab.c"
    break;

  case 417: /* deccommand: IYH  */
#line 549 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x25 ); }
#line 4828 "grammar-secondpass.tab.c"
    break;

  case 418: /* deccommand: IYL  */
#line 550 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x2D ); }
#line 4834 "grammar-secondpass.tab.c"
    break;

  case 419: /* deccommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 551 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x35 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4840 "grammar-secondpass.tab.c"
    break;

  case 420: /* deccommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 552 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x35 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4846 "grammar-secondpass.tab.c"
    break;

  case 421: /* deccommand: IX  */
#line 553 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x2B ); }
#line 4852 "grammar-secondpass.tab.c"
    break;

  case 422: /* deccommand: IY  */
#line 554 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x2B ); }
#line 4858 "grammar-secondpass.tab.c"
    break;

  case 423: /* adccommand: A COMMA A  */
#line 556 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x8F ); }
#line 4864 "grammar-secondpass.tab.c"
    break;

  case 424: /* adccommand: A COMMA B  */
#line 557 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x88 ); }
#line 4870 "grammar-secondpass.tab.c"
    break;

  case 425: /* adccommand: A COMMA C  */
#line 558 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x89 ); }
#line 4876 "grammar-secondpass.tab.c"
    break;

  case 426: /* adccommand: A COMMA D  */
#line 559 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x8A ); }
#line 4882 "grammar-secondpass.tab.c"
    break;

  case 427: /* adccommand: A COMMA E  */
#line 560 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x8B ); }
#line 4888 "grammar-secondpass.tab.c"
    break;

  case 428: /* adccommand: A COMMA H  */
#line 561 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x8C ); }
#line 4894 "grammar-secondpass.tab.c"
    break;

  case 429: /* adccommand: A COMMA L  */
#line 562 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x8D ); }
#line 4900 "grammar-secondpass.tab.c"
    break;

  case 430: /* adccommand: A COMMA PARLEFT HL PARRIGHT  */
#line 563 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x8E ); }
#line 4906 "grammar-secondpass.tab.c"
    break;

  case 431: /* adccommand: A COMMA expression2  */
#line 564 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xCE ); code_putbyte( (yyvsp[0].normal) );}
#line 4912 "grammar-secondpass.tab.c"
    break;

  case 432: /* adccommand: A COMMA IXH  */
#line 565 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x8C ); }
#line 4918 "grammar-secondpass.tab.c"
    break;

  case 433: /* adccommand: A COMMA IXL  */
#line 566 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x8D ); }
#line 4924 "grammar-secondpass.tab.c"
    break;

  case 434: /* adccommand: A COMMA IYH  */
#line 567 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x8C ); }
#line 4930 "grammar-secondpass.tab.c"
    break;

  case 435: /* adccommand: A COMMA IYL  */
#line 568 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x8D );  }
#line 4936 "grammar-secondpass.tab.c"
    break;

  case 436: /* adccommand: A COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 569 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x8E ); code_putbyte( (yyvsp[-1].normal) );}
#line 4942 "grammar-secondpass.tab.c"
    break;

  case 437: /* adccommand: A COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 570 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x8E ); code_putbyte( (yyvsp[-1].normal) );}
#line 4948 "grammar-secondpass.tab.c"
    break;

  case 438: /* adccommand: HL COMMA BC  */
#line 571 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x4A ); }
#line 4954 "grammar-secondpass.tab.c"
    break;

  case 439: /* adccommand: HL COMMA DE  */
#line 572 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x5A ); }
#line 4960 "grammar-secondpass.tab.c"
    break;

  case 440: /* adccommand: HL COMMA HL  */
#line 573 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x6A ); }
#line 4966 "grammar-secondpass.tab.c"
    break;

  case 441: /* adccommand: HL COMMA SP  */
#line 574 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x7A ); }
#line 4972 "grammar-secondpass.tab.c"
    break;

  case 442: /* addcommand: A COMMA A  */
#line 576 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x87 ); }
#line 4978 "grammar-secondpass.tab.c"
    break;

  case 443: /* addcommand: A COMMA B  */
#line 577 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x80 ); }
#line 4984 "grammar-secondpass.tab.c"
    break;

  case 444: /* addcommand: A COMMA C  */
#line 578 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x81 ); }
#line 4990 "grammar-secondpass.tab.c"
    break;

  case 445: /* addcommand: A COMMA D  */
#line 579 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x82 ); }
#line 4996 "grammar-secondpass.tab.c"
    break;

  case 446: /* addcommand: A COMMA E  */
#line 580 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x83 ); }
#line 5002 "grammar-secondpass.tab.c"
    break;

  case 447: /* addcommand: A COMMA H  */
#line 581 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x84 ); }
#line 5008 "grammar-secondpass.tab.c"
    break;

  case 448: /* addcommand: A COMMA L  */
#line 582 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x85 ); }
#line 5014 "grammar-secondpass.tab.c"
    break;

  case 449: /* addcommand: A COMMA PARLEFT HL PARRIGHT  */
#line 583 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x86 ); }
#line 5020 "grammar-secondpass.tab.c"
    break;

  case 450: /* addcommand: A COMMA expression2  */
#line 584 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xC6 ); code_putbyte( (yyvsp[0].normal) );}
#line 5026 "grammar-secondpass.tab.c"
    break;

  case 451: /* addcommand: A COMMA IXH  */
#line 585 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x84 ); }
#line 5032 "grammar-secondpass.tab.c"
    break;

  case 452: /* addcommand: A COMMA IXL  */
#line 586 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x85 ); }
#line 5038 "grammar-secondpass.tab.c"
    break;

  case 453: /* addcommand: A COMMA IYH  */
#line 587 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x84 ); }
#line 5044 "grammar-secondpass.tab.c"
    break;

  case 454: /* addcommand: A COMMA IYL  */
#line 588 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x85 );  }
#line 5050 "grammar-secondpass.tab.c"
    break;

  case 455: /* addcommand: A COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 589 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x86 ); code_putbyte( (yyvsp[-1].normal) );}
#line 5056 "grammar-secondpass.tab.c"
    break;

  case 456: /* addcommand: A COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 590 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x86 ); code_putbyte( (yyvsp[-1].normal) );}
#line 5062 "grammar-secondpass.tab.c"
    break;

  case 457: /* addcommand: HL COMMA BC  */
#line 591 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x09 ); }
#line 5068 "grammar-secondpass.tab.c"
    break;

  case 458: /* addcommand: HL COMMA DE  */
#line 592 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x19 ); }
#line 5074 "grammar-secondpass.tab.c"
    break;

  case 459: /* addcommand: HL COMMA HL  */
#line 593 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x29 ); }
#line 5080 "grammar-secondpass.tab.c"
    break;

  case 460: /* addcommand: HL COMMA SP  */
#line 594 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x39 ); }
#line 5086 "grammar-secondpass.tab.c"
    break;

  case 461: /* addcommand: IX COMMA BC  */
#line 595 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x09 ); }
#line 5092 "grammar-secondpass.tab.c"
    break;

  case 462: /* addcommand: IX COMMA DE  */
#line 596 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x19 ); }
#line 5098 "grammar-secondpass.tab.c"
    break;

  case 463: /* addcommand: IX COMMA IX  */
#line 597 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x29 ); }
#line 5104 "grammar-secondpass.tab.c"
    break;

  case 464: /* addcommand: IY COMMA BC  */
#line 598 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x09 ); }
#line 5110 "grammar-secondpass.tab.c"
    break;

  case 465: /* addcommand: IY COMMA DE  */
#line 599 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x19 ); }
#line 5116 "grammar-secondpass.tab.c"
    break;

  case 466: /* addcommand: IY COMMA IY  */
#line 600 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x29 ); }
#line 5122 "grammar-secondpass.tab.c"
    break;

  case 467: /* addcommand: IY COMMA SP  */
#line 601 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x39 ); }
#line 5128 "grammar-secondpass.tab.c"
    break;

  case 468: /* subcommand: A  */
#line 603 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x97 ); }
#line 5134 "grammar-secondpass.tab.c"
    break;

  case 469: /* subcommand: B  */
#line 604 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x90 ); }
#line 5140 "grammar-secondpass.tab.c"
    break;

  case 470: /* subcommand: C  */
#line 605 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x91 ); }
#line 5146 "grammar-secondpass.tab.c"
    break;

  case 471: /* subcommand: D  */
#line 606 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x92 ); }
#line 5152 "grammar-secondpass.tab.c"
    break;

  case 472: /* subcommand: E  */
#line 607 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x93 ); }
#line 5158 "grammar-secondpass.tab.c"
    break;

  case 473: /* subcommand: H  */
#line 608 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x94 ); }
#line 5164 "grammar-secondpass.tab.c"
    break;

  case 474: /* subcommand: L  */
#line 609 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x95 ); }
#line 5170 "grammar-secondpass.tab.c"
    break;

  case 475: /* subcommand: PARLEFT HL PARRIGHT  */
#line 610 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x96 ); }
#line 5176 "grammar-secondpass.tab.c"
    break;

  case 476: /* subcommand: expression2  */
#line 611 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xD6 ); code_putbyte( (yyvsp[0].normal) );}
#line 5182 "grammar-secondpass.tab.c"
    break;

  case 477: /* subcommand: IXH  */
#line 612 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x94 ); }
#line 5188 "grammar-secondpass.tab.c"
    break;

  case 478: /* subcommand: IXL  */
#line 613 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x95 ); }
#line 5194 "grammar-secondpass.tab.c"
    break;

  case 479: /* subcommand: IYH  */
#line 614 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x94 ); }
#line 5200 "grammar-secondpass.tab.c"
    break;

  case 480: /* subcommand: IYL  */
#line 615 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x95 ); }
#line 5206 "grammar-secondpass.tab.c"
    break;

  case 481: /* subcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 616 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x96 ); code_putbyte( (yyvsp[-1].normal) );}
#line 5212 "grammar-secondpass.tab.c"
    break;

  case 482: /* subcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 617 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x96 ); code_putbyte( (yyvsp[-1].normal) );}
#line 5218 "grammar-secondpass.tab.c"
    break;

  case 483: /* sbccommand: A COMMA A  */
#line 619 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x9F ); }
#line 5224 "grammar-secondpass.tab.c"
    break;

  case 484: /* sbccommand: A COMMA B  */
#line 620 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x98 ); }
#line 5230 "grammar-secondpass.tab.c"
    break;

  case 485: /* sbccommand: A COMMA C  */
#line 621 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x99 ); }
#line 5236 "grammar-secondpass.tab.c"
    break;

  case 486: /* sbccommand: A COMMA D  */
#line 622 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x9A ); }
#line 5242 "grammar-secondpass.tab.c"
    break;

  case 487: /* sbccommand: A COMMA E  */
#line 623 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x9B ); }
#line 5248 "grammar-secondpass.tab.c"
    break;

  case 488: /* sbccommand: A COMMA H  */
#line 624 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x9C ); }
#line 5254 "grammar-secondpass.tab.c"
    break;

  case 489: /* sbccommand: A COMMA L  */
#line 625 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x9D ); }
#line 5260 "grammar-secondpass.tab.c"
    break;

  case 490: /* sbccommand: A COMMA PARLEFT HL PARRIGHT  */
#line 626 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x9E ); }
#line 5266 "grammar-secondpass.tab.c"
    break;

  case 491: /* sbccommand: A COMMA expression2  */
#line 627 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xDE ); code_putbyte( (yyvsp[0].normal) );}
#line 5272 "grammar-secondpass.tab.c"
    break;

  case 492: /* sbccommand: A COMMA IXH  */
#line 628 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x9C ); }
#line 5278 "grammar-secondpass.tab.c"
    break;

  case 493: /* sbccommand: A COMMA IXL  */
#line 629 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x9D ); }
#line 5284 "grammar-secondpass.tab.c"
    break;

  case 494: /* sbccommand: A COMMA IYH  */
#line 630 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x9C ); }
#line 5290 "grammar-secondpass.tab.c"
    break;

  case 495: /* sbccommand: A COMMA IYL  */
#line 631 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x9D );  }
#line 5296 "grammar-secondpass.tab.c"
    break;

  case 496: /* sbccommand: A COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 632 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x9E ); code_putbyte( (yyvsp[-1].normal) );}
#line 5302 "grammar-secondpass.tab.c"
    break;

  case 497: /* sbccommand: A COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 633 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x9E ); code_putbyte( (yyvsp[-1].normal) );}
#line 5308 "grammar-secondpass.tab.c"
    break;

  case 498: /* sbccommand: HL COMMA BC  */
#line 634 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x42 ); }
#line 5314 "grammar-secondpass.tab.c"
    break;

  case 499: /* sbccommand: HL COMMA DE  */
#line 635 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x52 ); }
#line 5320 "grammar-secondpass.tab.c"
    break;

  case 500: /* sbccommand: HL COMMA HL  */
#line 636 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x62 ); }
#line 5326 "grammar-secondpass.tab.c"
    break;

  case 501: /* sbccommand: HL COMMA SP  */
#line 637 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x72 ); }
#line 5332 "grammar-secondpass.tab.c"
    break;

  case 502: /* excommand: AF COMMA AFPLUS  */
#line 639 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x08); }
#line 5338 "grammar-secondpass.tab.c"
    break;

  case 503: /* excommand: PARLEFT SP PARRIGHT COMMA HL  */
#line 640 "grammar-secondpass.y"
                                                                { code_putbyte( 0xE3); }
#line 5344 "grammar-secondpass.tab.c"
    break;

  case 504: /* excommand: DE COMMA HL  */
#line 641 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xEB); }
#line 5350 "grammar-secondpass.tab.c"
    break;

  case 505: /* excommand: PARLEFT SP PARRIGHT COMMA IX  */
#line 642 "grammar-secondpass.y"
                                                                { code_putbyte( 0xDD ); code_putbyte( 0xE3 ); }
#line 5356 "grammar-secondpass.tab.c"
    break;

  case 506: /* excommand: PARLEFT SP PARRIGHT COMMA IY  */
#line 643 "grammar-secondpass.y"
                                                                { code_putbyte( 0xFD ); code_putbyte( 0xE3 ); }
#line 5362 "grammar-secondpass.tab.c"
    break;

  case 507: /* pushcommand: BC  */
#line 645 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xC5); }
#line 5368 "grammar-secondpass.tab.c"
    break;

  case 508: /* pushcommand: DE  */
#line 646 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xD5); }
#line 5374 "grammar-secondpass.tab.c"
    break;

  case 509: /* pushcommand: HL  */
#line 647 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xE5); }
#line 5380 "grammar-secondpass.tab.c"
    break;

  case 510: /* pushcommand: AF  */
#line 648 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xF5); }
#line 5386 "grammar-secondpass.tab.c"
    break;

  case 511: /* pushcommand: IX  */
#line 649 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD); code_putbyte( 0xE5); }
#line 5392 "grammar-secondpass.tab.c"
    break;

  case 512: /* pushcommand: IY  */
#line 650 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD); code_putbyte( 0xE5); }
#line 5398 "grammar-secondpass.tab.c"
    break;

  case 513: /* popcommand: BC  */
#line 652 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xC1); }
#line 5404 "grammar-secondpass.tab.c"
    break;

  case 514: /* popcommand: DE  */
#line 653 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xD1); }
#line 5410 "grammar-secondpass.tab.c"
    break;

  case 515: /* popcommand: HL  */
#line 654 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xE1); }
#line 5416 "grammar-secondpass.tab.c"
    break;

  case 516: /* popcommand: AF  */
#line 655 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xF1); }
#line 5422 "grammar-secondpass.tab.c"
    break;

  case 517: /* popcommand: IX  */
#line 656 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD); code_putbyte( 0xE1); }
#line 5428 "grammar-secondpass.tab.c"
    break;

  case 518: /* popcommand: IY  */
#line 657 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD); code_putbyte( 0xE1); }
#line 5434 "grammar-secondpass.tab.c"
    break;

  case 519: /* jrcommand: relativejump  */
#line 659 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x18 ); code_putbyte( (yyvsp[0].normal) ); }
#line 5440 "grammar-secondpass.tab.c"
    break;

  case 520: /* jrcommand: NZ COMMA relativejump  */
#line 660 "grammar-secondpass.y"
                                                                                { code_putbyte( 0x20 ); code_putbyte( (yyvsp[0].normal) ); }
#line 5446 "grammar-secondpass.tab.c"
    break;

  case 521: /* jrcommand: Z COMMA relativejump  */
#line 661 "grammar-secondpass.y"
                                                                                { code_putbyte( 0x28 ); code_putbyte( (yyvsp[0].normal) ); }
#line 5452 "grammar-secondpass.tab.c"
    break;

  case 522: /* jrcommand: NC COMMA relativejump  */
#line 662 "grammar-secondpass.y"
                                                                                { code_putbyte( 0x30 ); code_putbyte( (yyvsp[0].normal) ); }
#line 5458 "grammar-secondpass.tab.c"
    break;

  case 523: /* jrcommand: C COMMA relativejump  */
#line 663 "grammar-secondpass.y"
                                                                                { code_putbyte( 0x38 ); code_putbyte( (yyvsp[0].normal) ); }
#line 5464 "grammar-secondpass.tab.c"
    break;

  case 524: /* jpcommand: expression  */
#line 666 "grammar-secondpass.y"
                                                                { code_putbyte( 0xC3 ); code_putword( (yyvsp[0].normal) ); }
#line 5470 "grammar-secondpass.tab.c"
    break;

  case 525: /* jpcommand: NZ COMMA expression  */
#line 667 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xC2 ); code_putword( (yyvsp[0].normal) ); }
#line 5476 "grammar-secondpass.tab.c"
    break;

  case 526: /* jpcommand: Z COMMA expression  */
#line 668 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xCA ); code_putword( (yyvsp[0].normal) ); }
#line 5482 "grammar-secondpass.tab.c"
    break;

  case 527: /* jpcommand: NC COMMA expression  */
#line 669 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xD2 ); code_putword( (yyvsp[0].normal) ); }
#line 5488 "grammar-secondpass.tab.c"
    break;

  case 528: /* jpcommand: C COMMA expression  */
#line 670 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xDA ); code_putword( (yyvsp[0].normal) ); }
#line 5494 "grammar-secondpass.tab.c"
    break;

  case 529: /* jpcommand: PO COMMA expression  */
#line 671 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xE2 ); code_putword( (yyvsp[0].normal) ); }
#line 5500 "grammar-secondpass.tab.c"
    break;

  case 530: /* jpcommand: PE COMMA expression  */
#line 672 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xEA ); code_putword( (yyvsp[0].normal) ); }
#line 5506 "grammar-secondpass.tab.c"
    break;

  case 531: /* jpcommand: P COMMA expression  */
#line 673 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xF2 ); code_putword( (yyvsp[0].normal) ); }
#line 5512 "grammar-secondpass.tab.c"
    break;

  case 532: /* jpcommand: M COMMA expression  */
#line 674 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xFA ); code_putword( (yyvsp[0].normal) ); }
#line 5518 "grammar-secondpass.tab.c"
    break;

  case 533: /* jpcommand: PARLEFT HL PARRIGHT  */
#line 675 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xE9 ); }
#line 5524 "grammar-secondpass.tab.c"
    break;

  case 534: /* jpcommand: PARLEFT IX PARRIGHT  */
#line 676 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xDD); code_putbyte( 0xE9 ); }
#line 5530 "grammar-secondpass.tab.c"
    break;

  case 535: /* jpcommand: PARLEFT IY PARRIGHT  */
#line 677 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xFD); code_putbyte( 0xE9 ); }
#line 5536 "grammar-secondpass.tab.c"
    break;

  case 536: /* callcommand: expression  */
#line 679 "grammar-secondpass.y"
                                                                { code_putbyte( 0xCD ); code_putword( (yyvsp[0].normal) ); }
#line 5542 "grammar-secondpass.tab.c"
    break;

  case 537: /* callcommand: NZ COMMA expression  */
#line 680 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xC4 ); code_putword( (yyvsp[0].normal) ); }
#line 5548 "grammar-secondpass.tab.c"
    break;

  case 538: /* callcommand: Z COMMA expression  */
#line 681 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xCC ); code_putword( (yyvsp[0].normal) ); }
#line 5554 "grammar-secondpass.tab.c"
    break;

  case 539: /* callcommand: NC COMMA expression  */
#line 682 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xD4 ); code_putword( (yyvsp[0].normal) ); }
#line 5560 "grammar-secondpass.tab.c"
    break;

  case 540: /* callcommand: C COMMA expression  */
#line 683 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xDC ); code_putword( (yyvsp[0].normal) ); }
#line 5566 "grammar-secondpass.tab.c"
    break;

  case 541: /* callcommand: PO COMMA expression  */
#line 684 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xE4 ); code_putword( (yyvsp[0].normal) ); }
#line 5572 "grammar-secondpass.tab.c"
    break;

  case 542: /* callcommand: PE COMMA expression  */
#line 685 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xEC ); code_putword( (yyvsp[0].normal) ); }
#line 5578 "grammar-secondpass.tab.c"
    break;

  case 543: /* callcommand: P COMMA expression  */
#line 686 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xF4 ); code_putword( (yyvsp[0].normal) ); }
#line 5584 "grammar-secondpass.tab.c"
    break;

  case 544: /* callcommand: M COMMA expression  */
#line 687 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xFC ); code_putword( (yyvsp[0].normal) ); }
#line 5590 "grammar-secondpass.tab.c"
    break;

  case 545: /* djnzcommand: relativejump  */
#line 689 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x10 ); code_putbyte( (yyvsp[0].normal) );  }
#line 5596 "grammar-secondpass.tab.c"
    break;

  case 546: /* relativejump: INTEGER  */
#line 691 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[0].normal) - pc_get()-1;   }
#line 5602 "grammar-secondpass.tab.c"
    break;

  case 547: /* relativejump: LITERAL  */
#line 692 "grammar-secondpass.y"
                                                                                                                                {
																		int k = pc_get();
																		if ( sym_lookuplabel((yyvsp[0].literal)) == TRUE ) {
																			int jump = sym_getvalue((yyvsp[0].literal));
																			int diff = jump - k - 2;
																			if ( diff > 127 || diff < -128 ) { 
																				generalerror("DJNZ Jump is too far away");
																			}
																			else {
																			   (yyval.normal) = diff;  
																			}
																		}
																		else {
																			generalerror("Unknown Literal or Label");
																		}	
																	}
#line 5623 "grammar-secondpass.tab.c"
    break;

  case 548: /* retcommand: %empty  */
#line 712 "grammar-secondpass.y"
                                                                                        {  code_putbyte( 0xC9 );}
#line 5629 "grammar-secondpass.tab.c"
    break;

  case 549: /* retcommand: NZ  */
#line 713 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xC0 ); }
#line 5635 "grammar-secondpass.tab.c"
    break;

  case 550: /* retcommand: Z  */
#line 714 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xC8 ); }
#line 5641 "grammar-secondpass.tab.c"
    break;

  case 551: /* retcommand: NC  */
#line 715 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xD0 ); }
#line 5647 "grammar-secondpass.tab.c"
    break;

  case 552: /* retcommand: C  */
#line 716 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xD8 ); }
#line 5653 "grammar-secondpass.tab.c"
    break;

  case 553: /* retcommand: PO  */
#line 717 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xE0 ); }
#line 5659 "grammar-secondpass.tab.c"
    break;

  case 554: /* retcommand: PE  */
#line 718 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xE8 ); }
#line 5665 "grammar-secondpass.tab.c"
    break;

  case 555: /* retcommand: P  */
#line 719 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xF0 ); }
#line 5671 "grammar-secondpass.tab.c"
    break;

  case 556: /* retcommand: M  */
#line 720 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xF8 ); }
#line 5677 "grammar-secondpass.tab.c"
    break;

  case 557: /* rstcommand: expression  */
#line 722 "grammar-secondpass.y"
                                                                                { 	switch ( (yyvsp[0].normal) ) {
														case 0x00:  code_putbyte( 0xC7 ); break;
														case 0x08:  code_putbyte( 0xCF ); break;
														case 0x10:  code_putbyte( 0xD7 ); break;
														case 0x18:  code_putbyte( 0xDF ); break;
														case 0x20:  code_putbyte( 0xE7 ); break;
														case 0x28:  code_putbyte( 0xEF ); break;
														case 0x30:  code_putbyte( 0xF7 ); break;
														case 0x38:  code_putbyte( 0xFF ); break;
														default: 
															generalerror("RST Value not valid"); break;
															
													}
												}
#line 5696 "grammar-secondpass.tab.c"
    break;

  case 558: /* expression: expritem  */
#line 737 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[0].normal); }
#line 5702 "grammar-secondpass.tab.c"
    break;

  case 559: /* expression: expression OPADD expritem  */
#line 738 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + (yyvsp[0].normal); }
#line 5708 "grammar-secondpass.tab.c"
    break;

  case 560: /* expression: expression OPSUB expritem  */
#line 739 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) - (yyvsp[0].normal); }
#line 5714 "grammar-secondpass.tab.c"
    break;

  case 561: /* expression: expression OPMUL expritem  */
#line 740 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) * (yyvsp[0].normal); }
#line 5720 "grammar-secondpass.tab.c"
    break;

  case 562: /* expression: expression OPDIV expritem  */
#line 741 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) / (yyvsp[0].normal); }
#line 5726 "grammar-secondpass.tab.c"
    break;

  case 563: /* expression: PARLEFT expression PARRIGHT  */
#line 742 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-1].normal); }
#line 5732 "grammar-secondpass.tab.c"
    break;

  case 564: /* expression2: expritem  */
#line 744 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[0].normal); }
#line 5738 "grammar-secondpass.tab.c"
    break;

  case 565: /* expression2: expression2 OPADD expritem  */
#line 745 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + (yyvsp[0].normal); }
#line 5744 "grammar-secondpass.tab.c"
    break;

  case 566: /* expression2: expression2 OPSUB expritem  */
#line 746 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) - (yyvsp[0].normal); }
#line 5750 "grammar-secondpass.tab.c"
    break;

  case 567: /* expression2: expression2 OPMUL expritem  */
#line 747 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) * (yyvsp[0].normal); }
#line 5756 "grammar-secondpass.tab.c"
    break;

  case 568: /* expression2: expression2 OPDIV expritem  */
#line 748 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) / (yyvsp[0].normal); }
#line 5762 "grammar-secondpass.tab.c"
    break;

  case 569: /* expression2: expression2 OPADD PARLEFT expression2 PARRIGHT  */
#line 749 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) + (yyvsp[-1].normal); }
#line 5768 "grammar-secondpass.tab.c"
    break;

  case 570: /* expression2: expression2 OPSUB PARLEFT expression2 PARRIGHT  */
#line 750 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) - (yyvsp[-1].normal); }
#line 5774 "grammar-secondpass.tab.c"
    break;

  case 571: /* expression2: expression2 OPMUL PARLEFT expression2 PARRIGHT  */
#line 751 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) * (yyvsp[-1].normal); }
#line 5780 "grammar-secondpass.tab.c"
    break;

  case 572: /* expression2: expression2 OPDIV PARLEFT expression2 PARRIGHT  */
#line 752 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) / (yyvsp[-1].normal); }
#line 5786 "grammar-secondpass.tab.c"
    break;

  case 573: /* expression2: PARLEFT expression2 PARRIGHT OPADD expritem  */
#line 753 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) + (yyvsp[0].normal); }
#line 5792 "grammar-secondpass.tab.c"
    break;

  case 574: /* expression2: PARLEFT expression2 PARRIGHT OPSUB expritem  */
#line 754 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) - (yyvsp[0].normal); }
#line 5798 "grammar-secondpass.tab.c"
    break;

  case 575: /* expression2: PARLEFT expression2 PARRIGHT OPMUL expritem  */
#line 755 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) * (yyvsp[0].normal); }
#line 5804 "grammar-secondpass.tab.c"
    break;

  case 576: /* expression2: PARLEFT expression2 PARRIGHT OPDIV expritem  */
#line 756 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) / (yyvsp[0].normal); }
#line 5810 "grammar-secondpass.tab.c"
    break;

  case 577: /* expression2: PARLEFT expression2 PARRIGHT OPADD PARLEFT expression2 PARRIGHT  */
#line 757 "grammar-secondpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) + (yyvsp[-1].normal); }
#line 5816 "grammar-secondpass.tab.c"
    break;

  case 578: /* expression2: PARLEFT expression2 PARRIGHT OPSUB PARLEFT expression2 PARRIGHT  */
#line 758 "grammar-secondpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) - (yyvsp[-1].normal); }
#line 5822 "grammar-secondpass.tab.c"
    break;

  case 579: /* expression2: PARLEFT expression2 PARRIGHT OPMUL PARLEFT expression2 PARRIGHT  */
#line 759 "grammar-secondpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) * (yyvsp[-1].normal); }
#line 5828 "grammar-secondpass.tab.c"
    break;

  case 580: /* expression2: PARLEFT expression2 PARRIGHT OPDIV PARLEFT expression2 PARRIGHT  */
#line 760 "grammar-secondpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) / (yyvsp[-1].normal); }
#line 5834 "grammar-secondpass.tab.c"
    break;

  case 581: /* expritem: INTEGER  */
#line 762 "grammar-secondpass.y"
                                                        {	(yyval.normal) = (yyvsp[0].normal); }
#line 5840 "grammar-secondpass.tab.c"
    break;

  case 582: /* expritem: LITERAL  */
#line 763 "grammar-secondpass.y"
                                                                {	
										if ( sym_lookuplabel((yyvsp[0].literal)) == TRUE ) {
											(yyval.normal) = sym_getvalue((yyvsp[0].literal));
										}
										else {
											generalerror("Unknown Literal or Label");
										}	
									}
#line 5853 "grammar-secondpass.tab.c"
    break;

  case 583: /* listexpr: expritem  */
#line 772 "grammar-secondpass.y"
                                                                                { code_putbyte((yyvsp[0].normal)); }
#line 5859 "grammar-secondpass.tab.c"
    break;

  case 584: /* listexpr: listexpr COMMA expritem  */
#line 773 "grammar-secondpass.y"
                                                                        { code_putbyte((yyvsp[0].normal)); }
#line 5865 "grammar-secondpass.tab.c"
    break;

  case 585: /* listexpr: STRING  */
#line 774 "grammar-secondpass.y"
                                                                                        { for(size_t a=0;a<strlen((yyvsp[0].literal));a++) { code_putbyte((yyvsp[0].literal)[a]); } }
#line 5871 "grammar-secondpass.tab.c"
    break;

  case 586: /* listexpr: listexpr COMMA STRING  */
#line 775 "grammar-secondpass.y"
                                                                        { for(size_t a=0;a<strlen((yyvsp[0].literal));a++) { code_putbyte((yyvsp[0].literal)[a]); } }
#line 5877 "grammar-secondpass.tab.c"
    break;

  case 587: /* reg8: A  */
#line 779 "grammar-secondpass.y"
                        { (yyval.normal) = 7; }
#line 5883 "grammar-secondpass.tab.c"
    break;

  case 588: /* reg8: B  */
#line 780 "grammar-secondpass.y"
                    { (yyval.normal) = 0; }
#line 5889 "grammar-secondpass.tab.c"
    break;

  case 589: /* reg8: C  */
#line 781 "grammar-secondpass.y"
                    { (yyval.normal) = 1; }
#line 5895 "grammar-secondpass.tab.c"
    break;

  case 590: /* reg8: D  */
#line 782 "grammar-secondpass.y"
                    { (yyval.normal) = 2; }
#line 5901 "grammar-secondpass.tab.c"
    break;

  case 591: /* reg8: E  */
#line 783 "grammar-secondpass.y"
                    { (yyval.normal) = 3; }
#line 5907 "grammar-secondpass.tab.c"
    break;

  case 592: /* reg8: H  */
#line 784 "grammar-secondpass.y"
                    { (yyval.normal) = 4; }
#line 5913 "grammar-secondpass.tab.c"
    break;

  case 593: /* reg8: L  */
#line 785 "grammar-secondpass.y"
                    { (yyval.normal) = 5; }
#line 5919 "grammar-secondpass.tab.c"
    break;


#line 5923 "grammar-secondpass.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == SECONDPASSEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SECONDPASSEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SECONDPASSEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = SECONDPASSEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != SECONDPASSEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

