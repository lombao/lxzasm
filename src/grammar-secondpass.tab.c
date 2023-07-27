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
  YYSYMBOL_DEFS = 7,                       /* DEFS  */
  YYSYMBOL_DS = 8,                         /* DS  */
  YYSYMBOL_DEFB = 9,                       /* DEFB  */
  YYSYMBOL_DB = 10,                        /* DB  */
  YYSYMBOL_DEFM = 11,                      /* DEFM  */
  YYSYMBOL_DM = 12,                        /* DM  */
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
  YYSYMBOL_CP = 57,                        /* CP  */
  YYSYMBOL_CPI = 58,                       /* CPI  */
  YYSYMBOL_CPIR = 59,                      /* CPIR  */
  YYSYMBOL_CPD = 60,                       /* CPD  */
  YYSYMBOL_CPDR = 61,                      /* CPDR  */
  YYSYMBOL_EX = 62,                        /* EX  */
  YYSYMBOL_EXX = 63,                       /* EXX  */
  YYSYMBOL_CCF = 64,                       /* CCF  */
  YYSYMBOL_RLCA = 65,                      /* RLCA  */
  YYSYMBOL_RRCA = 66,                      /* RRCA  */
  YYSYMBOL_RLA = 67,                       /* RLA  */
  YYSYMBOL_RLC = 68,                       /* RLC  */
  YYSYMBOL_SLA = 69,                       /* SLA  */
  YYSYMBOL_SLL = 70,                       /* SLL  */
  YYSYMBOL_SRL = 71,                       /* SRL  */
  YYSYMBOL_RR = 72,                        /* RR  */
  YYSYMBOL_RL = 73,                        /* RL  */
  YYSYMBOL_RRC = 74,                       /* RRC  */
  YYSYMBOL_SRA = 75,                       /* SRA  */
  YYSYMBOL_BIT = 76,                       /* BIT  */
  YYSYMBOL_SET = 77,                       /* SET  */
  YYSYMBOL_RES = 78,                       /* RES  */
  YYSYMBOL_PUSH = 79,                      /* PUSH  */
  YYSYMBOL_POP = 80,                       /* POP  */
  YYSYMBOL_COMMA = 81,                     /* COMMA  */
  YYSYMBOL_NZ = 82,                        /* NZ  */
  YYSYMBOL_Z = 83,                         /* Z  */
  YYSYMBOL_NC = 84,                        /* NC  */
  YYSYMBOL_PO = 85,                        /* PO  */
  YYSYMBOL_PE = 86,                        /* PE  */
  YYSYMBOL_P = 87,                         /* P  */
  YYSYMBOL_M = 88,                         /* M  */
  YYSYMBOL_IN = 89,                        /* IN  */
  YYSYMBOL_OUT = 90,                       /* OUT  */
  YYSYMBOL_INI = 91,                       /* INI  */
  YYSYMBOL_INIR = 92,                      /* INIR  */
  YYSYMBOL_IND = 93,                       /* IND  */
  YYSYMBOL_INDR = 94,                      /* INDR  */
  YYSYMBOL_OUTI = 95,                      /* OUTI  */
  YYSYMBOL_OUTD = 96,                      /* OUTD  */
  YYSYMBOL_OTIR = 97,                      /* OTIR  */
  YYSYMBOL_OTDR = 98,                      /* OTDR  */
  YYSYMBOL_LITERAL = 99,                   /* LITERAL  */
  YYSYMBOL_INTEGER = 100,                  /* INTEGER  */
  YYSYMBOL_STRING = 101,                   /* STRING  */
  YYSYMBOL_PARLEFT = 102,                  /* PARLEFT  */
  YYSYMBOL_PARRIGHT = 103,                 /* PARRIGHT  */
  YYSYMBOL_OPADD = 104,                    /* OPADD  */
  YYSYMBOL_OPSUB = 105,                    /* OPSUB  */
  YYSYMBOL_OPMUL = 106,                    /* OPMUL  */
  YYSYMBOL_OPDIV = 107,                    /* OPDIV  */
  YYSYMBOL_YYACCEPT = 108,                 /* $accept  */
  YYSYMBOL_program = 109,                  /* program  */
  YYSYMBOL_lines = 110,                    /* lines  */
  YYSYMBOL_line = 111,                     /* line  */
  YYSYMBOL_directive = 112,                /* directive  */
  YYSYMBOL_instruction = 113,              /* instruction  */
  YYSYMBOL_rlccommand = 114,               /* rlccommand  */
  YYSYMBOL_rrccommand = 115,               /* rrccommand  */
  YYSYMBOL_rrcommand = 116,                /* rrcommand  */
  YYSYMBOL_rlcommand = 117,                /* rlcommand  */
  YYSYMBOL_sracommand = 118,               /* sracommand  */
  YYSYMBOL_slacommand = 119,               /* slacommand  */
  YYSYMBOL_rescommand = 120,               /* rescommand  */
  YYSYMBOL_setcommand = 121,               /* setcommand  */
  YYSYMBOL_bitcommand = 122,               /* bitcommand  */
  YYSYMBOL_incommand = 123,                /* incommand  */
  YYSYMBOL_outcommand = 124,               /* outcommand  */
  YYSYMBOL_ldcommand = 125,                /* ldcommand  */
  YYSYMBOL_andcommand = 126,               /* andcommand  */
  YYSYMBOL_xorcommand = 127,               /* xorcommand  */
  YYSYMBOL_orcommand = 128,                /* orcommand  */
  YYSYMBOL_cpcommand = 129,                /* cpcommand  */
  YYSYMBOL_inccommand = 130,               /* inccommand  */
  YYSYMBOL_deccommand = 131,               /* deccommand  */
  YYSYMBOL_adccommand = 132,               /* adccommand  */
  YYSYMBOL_addcommand = 133,               /* addcommand  */
  YYSYMBOL_subcommand = 134,               /* subcommand  */
  YYSYMBOL_sbccommand = 135,               /* sbccommand  */
  YYSYMBOL_excommand = 136,                /* excommand  */
  YYSYMBOL_pushcommand = 137,              /* pushcommand  */
  YYSYMBOL_popcommand = 138,               /* popcommand  */
  YYSYMBOL_jrcommand = 139,                /* jrcommand  */
  YYSYMBOL_jpcommand = 140,                /* jpcommand  */
  YYSYMBOL_callcommand = 141,              /* callcommand  */
  YYSYMBOL_djnzcommand = 142,              /* djnzcommand  */
  YYSYMBOL_retcommand = 143,               /* retcommand  */
  YYSYMBOL_rstcommand = 144,               /* rstcommand  */
  YYSYMBOL_expression = 145,               /* expression  */
  YYSYMBOL_expression2 = 146,              /* expression2  */
  YYSYMBOL_expritem = 147,                 /* expritem  */
  YYSYMBOL_reg8 = 148                      /* reg8  */
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
#define YYFINAL  349
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1520

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  569
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1050

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   362


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
     105,   106,   107
};

#if SECONDPASSDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    88,    89,    91,    92,    95,    96,    97,
      98,    99,   100,   101,   102,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   232,
     233,   234,   235,   237,   238,   239,   240,   242,   243,   244,
     245,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   586,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   606,   607,   608,   609,   610,   612,   613,
     614,   615,   616,   617,   619,   620,   621,   622,   623,   624,
     626,   627,   628,   629,   630,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   655,   656,   674,   675,
     676,   677,   678,   679,   680,   681,   682,   684,   699,   700,
     701,   702,   703,   704,   706,   707,   708,   709,   710,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   724,   725,   734,   735,   736,   737,   738,   739,   740
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
  "END", "DEFS", "DS", "DEFB", "DB", "DEFM", "DM", "IXH", "IXL", "IYH",
  "IYL", "AF", "BC", "DE", "HL", "IX", "IY", "SP", "AFPLUS", "A", "F", "B",
  "C", "D", "E", "H", "L", "I", "R", "INC", "DEC", "ADC", "ADD", "SUB",
  "SBC", "DJNZ", "JR", "RET", "RETN", "RETI", "RST", "JP", "CALL", "DI",
  "EI", "LD", "HALT", "NOP", "XOR", "AND", "OR", "CP", "CPI", "CPIR",
  "CPD", "CPDR", "EX", "EXX", "CCF", "RLCA", "RRCA", "RLA", "RLC", "SLA",
  "SLL", "SRL", "RR", "RL", "RRC", "SRA", "BIT", "SET", "RES", "PUSH",
  "POP", "COMMA", "NZ", "Z", "NC", "PO", "PE", "P", "M", "IN", "OUT",
  "INI", "INIR", "IND", "INDR", "OUTI", "OUTD", "OTIR", "OTDR", "LITERAL",
  "INTEGER", "STRING", "PARLEFT", "PARRIGHT", "OPADD", "OPSUB", "OPMUL",
  "OPDIV", "$accept", "program", "lines", "line", "directive",
  "instruction", "rlccommand", "rrccommand", "rrcommand", "rlcommand",
  "sracommand", "slacommand", "rescommand", "setcommand", "bitcommand",
  "incommand", "outcommand", "ldcommand", "andcommand", "xorcommand",
  "orcommand", "cpcommand", "inccommand", "deccommand", "adccommand",
  "addcommand", "subcommand", "sbccommand", "excommand", "pushcommand",
  "popcommand", "jrcommand", "jpcommand", "callcommand", "djnzcommand",
  "retcommand", "rstcommand", "expression", "expression2", "expritem",
  "reg8", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-335)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,   366,   -86,   366,  -335,   366,   -73,    89,   112,    64,
     -10,   132,   104,   -79,   433,   228,  -335,  -335,   366,   930,
     970,  -335,  -335,     4,  -335,  -335,   140,   169,   190,   222,
    -335,  -335,  -335,  -335,   -16,  -335,  -335,  -335,  -335,  -335,
     481,   537,   706,   752,   895,   903,   -70,   -17,   -15,   600,
     723,   925,   938,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,   110,   136,     2,  -335,  -335,  -335,  -335,  -335,   366,
     229,  -335,  -335,   229,    69,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,   187,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,   382,  -335,    57,    68,  -335,    70,    71,    77,
      85,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,   280,  -335,   257,  -335,   107,   109,  -335,
    -335,  -335,  -335,   111,   121,   135,   160,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,   229,
     186,   189,   196,   197,   206,   218,   225,   227,   328,  -335,
     229,   250,   264,   270,   271,   286,   289,   296,   311,  -335,
     229,   329,   332,   345,   348,   351,   353,   364,   367,   381,
     402,   409,   410,   413,   205,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,   455,  -335,   257,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,   510,  -335,   257,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,   525,  -335,   257,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,   529,
    -335,   257,   426,   453,   170,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,   395,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,   458,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,   498,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
     505,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,   612,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,   654,  -335,
     454,  -335,   459,  -335,   462,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
     472,   489,   490,   493,   519,   521,   526,   258,  -335,   527,
     530,   542,   545,   549,   557,   572,   275,  -335,   366,  -335,
    -335,    74,   -27,   -27,   -27,   -27,   366,   235,   242,   277,
     290,   419,   475,   210,   230,   265,   478,   441,   266,   411,
     550,   553,   504,   738,   663,   712,   716,   747,   300,   312,
     209,   561,   565,   570,   366,   366,   366,   366,   366,   366,
     366,   366,   576,   577,   580,   366,   366,   366,   366,   366,
     366,   366,   366,   860,   926,   934,   939,   943,   960,   344,
     393,   422,   442,   473,   729,   761,   586,   591,   595,   597,
     603,   762,   601,   609,   617,   616,   622,   626,   629,   644,
     648,   652,   672,   674,   743,   765,   701,   717,   718,   720,
     735,   746,   754,   748,   755,   758,   767,   760,   771,   768,
     778,   781,   783,   785,   788,   949,   961,   979,   708,   793,
     796,   799,   804,   806,   807,   815,   819,   827,   834,   835,
     836,   859,   869,   870,   229,  -335,  -335,  -335,  -335,  -335,
     229,  -335,   366,   366,  -335,   366,   366,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,   556,   257,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,   560,   257,  -335,   366,
     366,   335,   504,  -335,   504,  -335,   504,  -335,   504,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,   564,   257,  -335,  -335,  -335,
    -335,   229,   229,   229,   229,   229,   229,   229,   229,  -335,
    -335,  -335,   229,   229,   229,   229,   229,   229,   229,   229,
     504,   257,   504,   257,   504,   257,   504,   257,   504,   257,
     504,   257,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,   254,   257,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,   593,   257,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,   615,
     257,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,   647,   257,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,   651,   257,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,   703,   257,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,   707,   257,   894,   902,   913,   366,   366,
     950,  -335,   366,   366,  -335,   366,   366,  -335,   366,   366,
    -335,   366,   366,  -335,  -335,   956,  -335,   366,   366,  -335,
     366,   366,  -335,   366,   366,  -335,   366,   366,  -335,   366,
     366,  -335,   366,   366,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  1109,  -335,  1436,  -335,  1439,  -335,   -12,   996,  1019,
    1033,  1038,  1040,  1043,  -335,    87,  1045,  1051,  1054,  1070,
    1074,  1106,  -335,   840,   896,   916,   971,   946,   976,   991,
     997,  1083,  1086,   980,   985,   965,   994,  1349,  1353,  1001,
    1006,  1011,  1016,  1034,  1346,  1350,  1021,  1037,  1042,  1047,
    1052,  1057,  1362,  1363,  1364,  1365,  1366,  1062,  1368,  1369,
    1370,  1372,  1373,  1374,  1376,  1377,  1378,  1380,  1381,  1382,
    1384,  1385,  1386,  1388,  1389,  1390,  1443,  1447,   805,  1067,
    1072,   776,  1077,  1090,  1095,  1100,  1105,  1110,  1115,  1120,
    1442,  1125,  1130,  1135,  1140,  1145,  1150,  1155,  1160,  1165,
    1170,  1175,  1180,  1392,  1393,  1394,  1396,  1397,  1398,  1400,
    1401,  1402,  1404,  1185,  1405,  1406,  1407,  1408,  1409,  1410,
    1411,  1190,  1412,  1413,  1414,  1415,  1416,  1417,  -335,  -335,
    -335,  -335,  -335,   366,   366,  -335,   366,   366,  -335,  -335,
     504,  -335,   504,  -335,   504,  -335,   504,  -335,  -335,  -335,
    -335,  -335,  -335,   366,   366,   335,   335,   335,   335,   335,
     335,  -335,  -335,  -335,   366,   366,   335,  -335,   366,   366,
    -335,   366,   366,  -335,   366,   366,  -335,   366,   366,  -335,
     366,   366,  -335,   366,   366,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,   257,  1395,  1399,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,   504,   504,
    -335,   504,   504,  -335,   504,   504,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  1195,  1200,  1205,  1210,  1215,  1220,  1225,  1230,
    1235,  1240,  1245,  1250,  1255,  1260,  1265,  1270,  1275,  1280,
    1285,  1290,  1295,  1300,  1305,  1310,   849,   885,  1315,  1320,
    1325,  1330,  1335,  1340,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,   229,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,   229,  -335,  -335,  -335,  -335,  -335,  -335
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   528,    27,    28,     0,     0,
       0,    16,    17,     0,    18,    15,     0,     0,     0,     0,
      24,    23,    26,    25,     0,    29,    22,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,    34,    36,    35,
      37,     0,     0,     2,     3,     6,     5,   562,   561,     0,
      12,   538,    13,    14,     8,    10,   376,   377,   378,   379,
     371,   372,   373,   382,   383,   374,   364,   365,   366,   367,
     368,   369,   370,     0,    43,   396,   397,   398,   399,   391,
     392,   393,   402,   403,   394,   384,   385,   386,   387,   388,
     389,   390,     0,    44,     0,     0,    45,     0,     0,     0,
       0,    46,   458,   459,   460,   461,   449,   450,   451,   452,
     453,   454,   455,     0,    47,   457,   544,     0,     0,    48,
     527,   526,    49,     0,     0,     0,     0,   500,    50,   532,
     529,   530,   531,   533,   534,   535,   536,    54,    55,   537,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
     505,     0,     0,     0,     0,     0,     0,     0,     0,    52,
     517,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,   328,   329,   330,   331,
     319,   320,   321,   322,   323,   324,   325,     0,    40,   327,
     313,   314,   315,   316,   304,   305,   306,   307,   308,   309,
     310,     0,    39,   312,   343,   344,   345,   346,   334,   335,
     336,   337,   338,   339,   340,     0,    41,   342,   358,   359,
     360,   361,   349,   350,   351,   352,   353,   354,   355,     0,
      42,   357,     0,     0,     0,    53,    69,    70,    71,    72,
      73,    74,    75,     0,    68,   119,   120,   121,   122,   123,
     124,   125,     0,    63,    89,    90,    91,    92,    93,    94,
      95,     0,    66,    99,   100,   101,   102,   103,   104,   105,
       0,    65,    79,    80,    81,    82,    83,    84,    85,     0,
      67,   109,   110,   111,   112,   113,   114,   115,     0,    64,
       0,    60,     0,    62,     0,    61,   491,   488,   489,   490,
     492,   493,    56,   497,   494,   495,   496,   498,   499,    57,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     1,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    11,   543,   539,   540,   541,   542,
       9,   375,     0,     0,   395,     0,     0,   419,   420,   421,
     422,   413,   414,   415,   416,   404,   405,   406,   407,   408,
     409,   410,     0,   412,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   432,   433,   434,   435,   423,
     424,   425,   426,   427,   428,   429,     0,   431,   456,     0,
       0,     0,     0,   545,     0,   546,     0,   547,     0,   548,
     479,   480,   481,   482,   473,   474,   475,   476,   464,   465,
     466,   467,   468,   469,   470,     0,   472,   504,   501,   502,
     503,   509,   506,   507,   508,   510,   511,   512,   513,   514,
     515,   516,   521,   518,   519,   520,   522,   523,   524,   525,
       0,   261,     0,   263,     0,   259,     0,   267,     0,   269,
       0,   265,   167,   168,   169,   170,   159,   160,   161,   162,
     163,   164,   165,     0,   166,   186,   187,   188,   189,   177,
     178,   179,   180,   181,   182,   183,     0,   184,   201,   202,
     203,   204,   192,   193,   194,   195,   196,   197,   198,     0,
     199,   216,   217,   218,   219,   207,   208,   209,   210,   211,
     212,   213,     0,   214,   231,   232,   233,   234,   222,   223,
     224,   225,   226,   227,   228,     0,   229,   237,   238,   239,
     240,   241,   242,   243,     0,   244,   248,   249,   250,   251,
     252,   253,   254,     0,   255,     0,     0,     0,     0,     0,
       0,   326,     0,     0,   311,     0,     0,   341,     0,     0,
     356,     0,     0,   483,   485,     0,    76,     0,     0,   126,
       0,     0,    96,     0,     0,   106,     0,     0,    86,     0,
       0,   116,     0,     0,   563,   564,   565,   566,   567,   568,
     569,     0,   137,     0,   133,     0,   129,     0,     0,     0,
       0,     0,     0,     0,   149,     0,     0,     0,     0,     0,
       0,     0,   158,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   380,   381,
     400,   401,   411,     0,     0,   430,     0,     0,   462,   463,
       0,   553,     0,   554,     0,   555,     0,   556,   549,   550,
     551,   552,   471,     0,     0,   262,   264,   260,   268,   270,
     266,   174,   175,   173,     0,     0,   176,   185,     0,     0,
     200,     0,     0,   215,     0,     0,   230,     0,     0,   245,
       0,     0,   256,     0,     0,   279,   280,   278,   272,   273,
     274,   275,   276,   277,   271,     0,     0,   298,   299,   297,
     302,   303,   300,   301,   332,   333,   317,   318,   347,   348,
     362,   363,   484,   486,   487,    77,    78,   127,   128,    97,
      98,   107,   108,    87,    88,   117,   118,   138,     0,     0,
     134,     0,     0,   130,     0,     0,   148,   141,   142,   143,
     144,   145,   146,   147,   157,   150,   151,   152,   153,   154,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   417,   418,   436,   437,   557,   558,
     559,   560,   477,   478,   171,   172,   190,   191,   205,   206,
     220,   221,   235,   236,   246,   247,   257,   258,   283,   284,
     285,   286,   287,   288,   289,   281,   290,   291,   292,   293,
     294,   295,   296,   282,   139,   140,   135,   136,   131,   132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -335,  -335,  -335,  1421,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,    -1,   237,   184,
    -334
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    62,    63,    64,    65,    66,   264,   300,   282,   291,
     309,   273,   315,   313,   311,   338,   347,   195,   222,   208,
     236,   250,    94,   113,   116,   121,   134,   139,   255,   322,
     329,   148,   169,   179,   142,   157,   158,   351,   373,    71,
     722
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,   252,    73,   253,    74,     1,     2,     3,     4,     5,
     117,   118,   119,     6,    72,   120,   832,   159,   170,   180,
     140,   141,   181,   182,   183,   184,   185,   186,    75,   187,
     310,   188,   189,   190,   191,   192,   193,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    67,    68,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   312,   114,   314,   254,    67,    68,   115,
     372,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    76,    77,    78,    79,   194,    80,    81,    82,
      83,    84,    85,   348,    86,   840,    87,    88,    89,    90,
      91,    92,   724,   726,   137,    95,    96,    97,    98,   138,
      99,   100,   101,   102,   103,   104,   349,   105,   363,   106,
     107,   108,   109,   110,   111,   122,   123,   124,   125,   364,
     356,   365,   366,   196,   197,   198,   199,   126,   367,   127,
     128,   129,   130,   131,   132,   200,   368,   201,   202,   203,
     204,   205,   206,   352,   353,   354,   355,   475,   352,   353,
     354,   355,   210,   211,   212,   213,    67,    68,   378,   372,
     379,    93,   380,   436,   214,   136,   215,   216,   217,   218,
     219,   220,   381,   224,   225,   226,   227,   357,   358,   359,
     136,   136,   136,   136,   112,   228,   382,   229,   230,   231,
     232,   233,   234,   416,   417,   418,   419,   420,   487,   488,
     489,    67,    68,   490,   133,   238,   239,   240,   241,    67,
      68,   383,   207,   491,   492,   493,   494,   242,   135,   243,
     244,   245,   246,   247,   248,   495,   149,   496,   497,   498,
     499,   500,   501,   209,   223,   237,   251,   384,    67,    68,
     385,   221,   772,   773,   774,   775,   776,   386,   387,   515,
     516,   517,   518,   504,   505,   506,   465,   388,   507,    67,
      68,   519,   235,   520,   521,   522,   523,   524,   525,   389,
     369,   370,   371,   473,    67,    68,   390,   372,   391,   557,
     150,   151,   152,   153,   154,   155,   156,   136,   540,   541,
     542,    67,    68,   543,   249,   544,   545,   546,   547,    67,
      68,   395,   502,   352,   353,   354,   355,   548,   481,   549,
     550,   551,   552,   553,   554,   396,   482,   474,   392,   393,
     394,   397,   398,    67,    68,   480,   372,   592,   593,   594,
     595,   374,   375,   376,   377,    67,    68,   399,   526,   596,
     400,   597,   598,   599,   600,   601,   602,   401,   136,    67,
      68,   483,   372,   561,   562,   563,   564,   565,   566,   567,
     568,   136,   402,   484,   572,   573,   574,   575,   576,   577,
     578,   579,   360,   361,   362,   136,   605,   606,   607,   608,
     403,    67,    68,   404,   555,   437,   438,   439,   609,   136,
     610,   611,   612,   613,   614,   615,   405,    67,    68,   406,
      69,   421,   407,   136,   408,   618,   619,   620,   621,   755,
     756,   757,   758,    67,    68,   409,   603,   622,   410,   623,
     624,   625,   626,   627,   628,   631,   632,   633,   634,   511,
     512,   143,   411,   513,   514,    67,    68,   635,    69,   636,
     637,   638,   639,   640,   641,   422,   423,   424,   440,   441,
     442,   743,   744,   412,   745,   746,   644,   645,   646,   647,
     413,   414,    67,    68,   415,   616,   508,   509,   648,   510,
     649,   650,   651,   652,   653,   654,   256,   434,   257,   258,
     259,   260,   261,   262,   528,   144,   145,   146,   443,   444,
     445,    67,    68,   485,   629,   446,   447,   448,   753,   754,
     425,   426,   427,   147,   435,   455,   476,   477,   478,   479,
     456,    67,    68,   457,   642,   428,   429,   430,   136,   431,
     432,   433,   136,   458,    67,    68,   136,   372,   533,   535,
     537,   539,   265,   136,   266,   267,   268,   269,   270,   271,
     459,   460,    67,    68,   461,   655,   747,   748,   749,   486,
     750,   751,   752,   263,   763,   764,   765,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     462,   503,   463,    67,    68,   527,   372,   464,   466,    67,
      68,   467,   372,   778,   779,   780,   556,   316,   317,   318,
     319,   320,   321,   468,    67,    68,   469,   372,    67,    68,
     470,   372,   449,   450,   451,   781,   782,   783,   471,   272,
     581,   583,   585,   587,   589,   591,   604,   617,   630,   643,
     656,   665,   674,   472,   529,    67,    68,   530,   372,    67,
      68,   558,   372,    67,    68,   559,   372,   784,   785,   786,
     560,   787,   788,   789,   452,   453,   454,   799,   800,   569,
     570,   802,   803,   571,   804,   805,   136,   806,   807,   675,
     808,   809,    67,    68,   676,   372,   811,   812,   677,   813,
     814,   678,   815,   816,   681,   817,   818,   679,   819,   820,
     136,   821,   822,   682,    67,    68,   136,   372,   136,   684,
     136,   683,   136,   790,   791,   792,   685,   793,   794,   795,
     686,   274,   687,   275,   276,   277,   278,   279,   280,   136,
     323,   324,   325,   326,   327,   328,    67,    68,   688,   372,
      67,    68,   689,   372,   657,   690,   658,   659,   660,   661,
     662,   663,    67,    68,   136,   532,   136,   693,   136,   759,
     136,   760,   136,   761,   136,   762,   691,   283,   692,   284,
     285,   286,   287,   288,   289,   694,   666,   136,   667,   668,
     669,   670,   671,   672,   917,   918,   919,   920,   921,   922,
     136,   923,    67,    68,   695,   372,    67,    68,   281,   372,
     727,    67,    68,   136,   534,    67,    68,   766,   536,   767,
     696,   768,   697,   769,   698,   770,   136,   771,    67,    68,
     907,   664,   908,   909,   910,   911,   912,   913,   699,   136,
     777,   531,   374,   375,   376,   377,    67,    68,   136,   538,
     700,   702,   972,   973,   290,   974,   975,   136,   701,   703,
      67,    68,   704,   673,   706,   680,   374,   375,   376,   377,
     705,   708,   980,   981,  1028,   707,  1029,  1030,  1031,  1032,
    1033,  1034,   709,   982,   983,   710,   711,   984,   985,   712,
     986,   987,   713,   988,   989,   728,   990,   991,   729,   992,
     993,   730,   994,   995,    67,    68,   731,   372,   732,   733,
    1036,   136,  1037,  1038,  1039,  1040,  1041,  1042,   734,   136,
     292,   735,   293,   294,   295,   296,   297,   298,   301,   736,
     302,   303,   304,   305,   306,   307,   737,   738,   739,   861,
     863,   865,   867,   848,   352,   353,   354,   355,    67,    68,
     330,    69,   331,   332,   333,   334,   335,   336,   160,    67,
      68,   740,   580,   339,   833,   340,   341,   342,   343,   344,
     345,   741,   841,   742,   714,   796,   715,   716,   717,   718,
     719,   720,   136,   797,    67,    68,   714,    69,   715,   716,
     717,   718,   719,   720,   798,  1035,  1043,   299,   171,   849,
     352,   353,   354,   355,   714,   308,   715,   716,   717,   718,
     719,   720,   161,   162,   163,   164,   165,   166,   167,   850,
     352,   353,   354,   355,   834,    67,    68,   337,   582,    67,
      68,   801,   168,    67,    68,   914,   584,   810,    67,    68,
     346,   586,    67,    68,   136,   588,   136,   835,   136,   852,
     136,   721,   172,   173,   174,   175,   176,   177,   178,    67,
      68,   836,   590,   723,    67,    68,   837,   860,   838,    67,
      68,   839,    69,   842,   851,   352,   353,   354,   355,   843,
     853,   725,   844,   858,   352,   353,   354,   355,   859,   352,
     353,   354,   355,    67,    68,   854,   862,   976,   845,   977,
     855,   978,   846,   979,   868,   374,   375,   376,   377,   869,
     374,   375,   376,   377,   870,   374,   375,   376,   377,   871,
     374,   375,   376,   377,   875,   374,   375,   376,   377,   823,
     824,   825,   136,   136,   847,   136,   136,   872,   136,   136,
     876,   374,   375,   376,   377,   877,   374,   375,   376,   377,
     878,   374,   375,   376,   377,   879,   374,   375,   376,   377,
     880,   374,   375,   376,   377,   886,   374,   375,   376,   377,
     915,   352,   353,   354,   355,   916,   352,   353,   354,   355,
     924,   352,   353,   354,   355,   998,   999,   856,  1000,  1001,
     857,  1002,  1003,   925,   352,   353,   354,   355,   926,   352,
     353,   354,   355,   927,   352,   353,   354,   355,   928,   352,
     353,   354,   355,   929,   352,   353,   354,   355,   930,   352,
     353,   354,   355,   931,   352,   353,   354,   355,   935,   352,
     353,   354,   355,   936,   352,   353,   354,   355,   937,   352,
     353,   354,   355,   938,   352,   353,   354,   355,   939,   352,
     353,   354,   355,   940,   352,   353,   354,   355,   941,   352,
     353,   354,   355,   942,   352,   353,   354,   355,   943,   352,
     353,   354,   355,   944,   352,   353,   354,   355,   945,   352,
     353,   354,   355,   946,   352,   353,   354,   355,   957,   374,
     375,   376,   377,   965,   374,   375,   376,   377,  1004,   352,
     353,   354,   355,  1005,   352,   353,   354,   355,  1006,   352,
     353,   354,   355,  1007,   352,   353,   354,   355,  1008,   374,
     375,   376,   377,  1009,   374,   375,   376,   377,  1010,   374,
     375,   376,   377,  1011,   374,   375,   376,   377,  1012,   352,
     353,   354,   355,  1013,   352,   353,   354,   355,  1014,   352,
     353,   354,   355,  1015,   352,   353,   354,   355,  1016,   352,
     353,   354,   355,  1017,   352,   353,   354,   355,  1018,   352,
     353,   354,   355,  1019,   352,   353,   354,   355,  1020,   352,
     353,   354,   355,  1021,   352,   353,   354,   355,  1022,   352,
     353,   354,   355,  1023,   352,   353,   354,   355,  1024,   352,
     353,   354,   355,  1025,   352,   353,   354,   355,  1026,   352,
     353,   354,   355,  1027,   352,   353,   354,   355,  1044,   374,
     375,   376,   377,  1045,   374,   375,   376,   377,  1046,   374,
     375,   376,   377,  1047,   374,   375,   376,   377,  1048,   374,
     375,   376,   377,  1049,   374,   375,   376,   377,    67,    68,
     873,   864,    67,    68,   874,   866,   826,   827,   828,   829,
     830,   831,   932,   933,   934,   881,   882,   883,   905,   884,
     885,   887,   906,   888,   889,   890,   996,   891,   892,   893,
     997,   894,   895,   896,   350,   897,   898,   899,     0,   900,
     901,   902,     0,   903,   904,   947,     0,   948,   949,   950,
       0,   951,   952,   953,     0,   954,   955,   956,   958,   959,
     960,   961,   962,   963,   964,   966,   967,   968,   969,   970,
     971
};

static const yytype_int16 yycheck[] =
{
       1,    17,     3,    19,     5,     3,     4,     5,     6,     7,
      20,    21,    22,    11,   100,    25,    28,    18,    19,    20,
      99,   100,    18,    19,    20,    21,    22,    23,   101,    25,
     100,    27,    28,    29,    30,    31,    32,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    99,   100,    72,    73,    74,    75,    76,    77,
      78,    79,    80,   100,    20,   100,   102,    99,   100,    25,
     102,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    13,    14,    15,    16,   102,    18,    19,    20,
      21,    22,    23,     3,    25,    28,    27,    28,    29,    30,
      31,    32,   456,   457,    20,    13,    14,    15,    16,    25,
      18,    19,    20,    21,    22,    23,     0,    25,    81,    27,
      28,    29,    30,    31,    32,    13,    14,    15,    16,    81,
      81,    81,    81,    13,    14,    15,    16,    25,    81,    27,
      28,    29,    30,    31,    32,    25,    81,    27,    28,    29,
      30,    31,    32,   104,   105,   106,   107,   103,   104,   105,
     106,   107,    13,    14,    15,    16,    99,   100,    81,   102,
      81,   102,    81,    23,    25,    11,    27,    28,    29,    30,
      31,    32,    81,    13,    14,    15,    16,    20,    21,    22,
      26,    27,    28,    29,   102,    25,    81,    27,    28,    29,
      30,    31,    32,    18,    19,    20,    21,    22,    18,    19,
      20,    99,   100,    23,   102,    13,    14,    15,    16,    99,
     100,    81,   102,    13,    14,    15,    16,    25,    11,    27,
      28,    29,    30,    31,    32,    25,    28,    27,    28,    29,
      30,    31,    32,    26,    27,    28,    29,    81,    99,   100,
      81,   102,    18,    19,    20,    21,    22,    81,    81,    13,
      14,    15,    16,    18,    19,    20,    28,    81,    23,    99,
     100,    25,   102,    27,    28,    29,    30,    31,    32,    81,
      20,    21,    22,    28,    99,   100,    81,   102,    81,   100,
      82,    83,    84,    85,    86,    87,    88,   133,    18,    19,
      20,    99,   100,    23,   102,    13,    14,    15,    16,    99,
     100,    81,   102,   104,   105,   106,   107,    25,   103,    27,
      28,    29,    30,    31,    32,    81,   104,   348,    20,    21,
      22,    81,    81,    99,   100,   356,   102,    13,    14,    15,
      16,   104,   105,   106,   107,    99,   100,    81,   102,    25,
      81,    27,    28,    29,    30,    31,    32,    81,   194,    99,
     100,   104,   102,   384,   385,   386,   387,   388,   389,   390,
     391,   207,    81,   103,   395,   396,   397,   398,   399,   400,
     401,   402,    20,    21,    22,   221,    13,    14,    15,    16,
      81,    99,   100,    81,   102,    20,    21,    22,    25,   235,
      27,    28,    29,    30,    31,    32,    81,    99,   100,    81,
     102,   194,    81,   249,    81,    13,    14,    15,    16,   104,
     105,   106,   107,    99,   100,    81,   102,    25,    81,    27,
      28,    29,    30,    31,    32,    13,    14,    15,    16,    18,
      19,    28,    81,    22,    23,    99,   100,    25,   102,    27,
      28,    29,    30,    31,    32,    20,    21,    22,    20,    21,
      22,   482,   483,    81,   485,   486,    13,    14,    15,    16,
      81,    81,    99,   100,    81,   102,    18,    19,    25,    21,
      27,    28,    29,    30,    31,    32,    25,    81,    27,    28,
      29,    30,    31,    32,   103,    82,    83,    84,    20,    21,
      22,    99,   100,   104,   102,    20,    21,    22,   529,   530,
      20,    21,    22,   100,    81,    81,   352,   353,   354,   355,
      81,    99,   100,    81,   102,    20,    21,    22,   364,    20,
      21,    22,   368,    81,    99,   100,   372,   102,   374,   375,
     376,   377,    25,   379,    27,    28,    29,    30,    31,    32,
      81,    81,    99,   100,    81,   102,    20,    21,    22,   104,
      20,    21,    22,   102,    20,    21,    22,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
      81,   364,    81,    99,   100,   368,   102,    81,    81,    99,
     100,    81,   102,    20,    21,    22,   379,    17,    18,    19,
      20,    21,    22,    81,    99,   100,    81,   102,    99,   100,
      81,   102,    20,    21,    22,    20,    21,    22,    81,   102,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,    81,   104,    99,   100,   104,   102,    99,
     100,   100,   102,    99,   100,   100,   102,    20,    21,    22,
     100,    20,    21,    22,    20,    21,    22,   678,   679,   103,
     103,   682,   683,   103,   685,   686,   502,   688,   689,   103,
     691,   692,    99,   100,   103,   102,   697,   698,   103,   700,
     701,   104,   703,   704,   103,   706,   707,   104,   709,   710,
     526,   712,   713,   104,    99,   100,   532,   102,   534,   103,
     536,   104,   538,    20,    21,    22,   104,    20,    21,    22,
     104,    25,   103,    27,    28,    29,    30,    31,    32,   555,
      17,    18,    19,    20,    21,    22,    99,   100,   104,   102,
      99,   100,   104,   102,    25,   103,    27,    28,    29,    30,
      31,    32,    99,   100,   580,   102,   582,    24,   584,   532,
     586,   534,   588,   536,   590,   538,   104,    25,   104,    27,
      28,    29,    30,    31,    32,    20,    25,   603,    27,    28,
      29,    30,    31,    32,    18,    19,    20,    21,    22,    23,
     616,    25,    99,   100,   103,   102,    99,   100,   102,   102,
     102,    99,   100,   629,   102,    99,   100,   580,   102,   582,
     103,   584,   104,   586,   104,   588,   642,   590,    99,   100,
      25,   102,    27,    28,    29,    30,    31,    32,   103,   655,
     603,   103,   104,   105,   106,   107,    99,   100,   664,   102,
     104,   103,   853,   854,   102,   856,   857,   673,   104,   104,
      99,   100,   104,   102,   104,   103,   104,   105,   106,   107,
     103,   103,   873,   874,    25,   104,    27,    28,    29,    30,
      31,    32,   104,   884,   885,   104,   103,   888,   889,   104,
     891,   892,   104,   894,   895,   102,   897,   898,   102,   900,
     901,   102,   903,   904,    99,   100,   102,   102,   102,   102,
      25,   727,    27,    28,    29,    30,    31,    32,   103,   735,
      25,   102,    27,    28,    29,    30,    31,    32,    25,   102,
      27,    28,    29,    30,    31,    32,   102,   102,   102,   755,
     756,   757,   758,   103,   104,   105,   106,   107,    99,   100,
      25,   102,    27,    28,    29,    30,    31,    32,    28,    99,
     100,   102,   102,    25,   727,    27,    28,    29,    30,    31,
      32,   102,   735,   103,    25,    81,    27,    28,    29,    30,
      31,    32,   798,    81,    99,   100,    25,   102,    27,    28,
      29,    30,    31,    32,    81,   996,   997,   102,    28,   103,
     104,   105,   106,   107,    25,   102,    27,    28,    29,    30,
      31,    32,    82,    83,    84,    85,    86,    87,    88,   103,
     104,   105,   106,   107,    28,    99,   100,   102,   102,    99,
     100,    81,   102,    99,   100,   798,   102,    81,    99,   100,
     102,   102,    99,   100,   860,   102,   862,    28,   864,   103,
     866,   102,    82,    83,    84,    85,    86,    87,    88,    99,
     100,    28,   102,   102,    99,   100,    28,   102,    28,    99,
     100,    28,   102,    28,   103,   104,   105,   106,   107,    28,
     104,   102,    28,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,    99,   100,   104,   102,   860,    28,   862,
     103,   864,    28,   866,   103,   104,   105,   106,   107,   103,
     104,   105,   106,   107,   103,   104,   105,   106,   107,   103,
     104,   105,   106,   107,   103,   104,   105,   106,   107,    20,
      21,    22,   948,   949,    28,   951,   952,   103,   954,   955,
     103,   104,   105,   106,   107,   103,   104,   105,   106,   107,
     103,   104,   105,   106,   107,   103,   104,   105,   106,   107,
     103,   104,   105,   106,   107,   103,   104,   105,   106,   107,
     103,   104,   105,   106,   107,   103,   104,   105,   106,   107,
     103,   104,   105,   106,   107,   948,   949,   104,   951,   952,
     104,   954,   955,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,   103,   104,
     105,   106,   107,   103,   104,   105,   106,   107,    99,   100,
     104,   102,    99,   100,   104,   102,    20,    21,    22,    20,
      21,    22,    20,    21,    22,   103,   103,   103,    25,   104,
     104,   103,    25,   104,   104,   103,    81,   104,   104,   103,
      81,   104,   104,   103,    63,   104,   104,   103,    -1,   104,
     104,   103,    -1,   104,   104,   103,    -1,   104,   104,   103,
      -1,   104,   104,   103,    -1,   104,   104,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    11,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   109,   110,   111,   112,   113,    99,   100,   102,
     145,   147,   100,   145,   145,   101,    13,    14,    15,    16,
      18,    19,    20,    21,    22,    23,    25,    27,    28,    29,
      30,    31,    32,   102,   130,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    25,    27,    28,    29,    30,
      31,    32,   102,   131,    20,    25,   132,    20,    21,    22,
      25,   133,    13,    14,    15,    16,    25,    27,    28,    29,
      30,    31,    32,   102,   134,   146,   147,    20,    25,   135,
      99,   100,   142,    28,    82,    83,    84,   100,   139,    28,
      82,    83,    84,    85,    86,    87,    88,   143,   144,   145,
      28,    82,    83,    84,    85,    86,    87,    88,   102,   140,
     145,    28,    82,    83,    84,    85,    86,    87,    88,   141,
     145,    18,    19,    20,    21,    22,    23,    25,    27,    28,
      29,    30,    31,    32,   102,   125,    13,    14,    15,    16,
      25,    27,    28,    29,    30,    31,    32,   102,   127,   146,
      13,    14,    15,    16,    25,    27,    28,    29,    30,    31,
      32,   102,   126,   146,    13,    14,    15,    16,    25,    27,
      28,    29,    30,    31,    32,   102,   128,   146,    13,    14,
      15,    16,    25,    27,    28,    29,    30,    31,    32,   102,
     129,   146,    17,    19,   102,   136,    25,    27,    28,    29,
      30,    31,    32,   102,   114,    25,    27,    28,    29,    30,
      31,    32,   102,   119,    25,    27,    28,    29,    30,    31,
      32,   102,   116,    25,    27,    28,    29,    30,    31,    32,
     102,   117,    25,    27,    28,    29,    30,    31,    32,   102,
     115,    25,    27,    28,    29,    30,    31,    32,   102,   118,
     100,   122,   100,   121,   100,   120,    17,    18,    19,    20,
      21,    22,   137,    17,    18,    19,    20,    21,    22,   138,
      25,    27,    28,    29,    30,    31,    32,   102,   123,    25,
      27,    28,    29,    30,    31,    32,   102,   124,     3,     0,
     111,   145,   104,   105,   106,   107,    81,    20,    21,    22,
      20,    21,    22,    81,    81,    81,    81,    81,    81,    20,
      21,    22,   102,   146,   104,   105,   106,   107,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    20,    21,    22,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    18,    19,    20,    21,
      22,   146,    20,    21,    22,    20,    21,    22,    20,    21,
      22,    20,    21,    22,    81,    81,    23,    20,    21,    22,
      20,    21,    22,    20,    21,    22,    20,    21,    22,    20,
      21,    22,    20,    21,    22,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    28,    81,    81,    81,    81,
      81,    81,    81,    28,   145,   103,   147,   147,   147,   147,
     145,   103,   104,   104,   103,   104,   104,    18,    19,    20,
      23,    13,    14,    15,    16,    25,    27,    28,    29,    30,
      31,    32,   102,   146,    18,    19,    20,    23,    18,    19,
      21,    18,    19,    22,    23,    13,    14,    15,    16,    25,
      27,    28,    29,    30,    31,    32,   102,   146,   103,   104,
     104,   103,   102,   147,   102,   147,   102,   147,   102,   147,
      18,    19,    20,    23,    13,    14,    15,    16,    25,    27,
      28,    29,    30,    31,    32,   102,   146,   100,   100,   100,
     100,   145,   145,   145,   145,   145,   145,   145,   145,   103,
     103,   103,   145,   145,   145,   145,   145,   145,   145,   145,
     102,   146,   102,   146,   102,   146,   102,   146,   102,   146,
     102,   146,    13,    14,    15,    16,    25,    27,    28,    29,
      30,    31,    32,   102,   146,    13,    14,    15,    16,    25,
      27,    28,    29,    30,    31,    32,   102,   146,    13,    14,
      15,    16,    25,    27,    28,    29,    30,    31,    32,   102,
     146,    13,    14,    15,    16,    25,    27,    28,    29,    30,
      31,    32,   102,   146,    13,    14,    15,    16,    25,    27,
      28,    29,    30,    31,    32,   102,   146,    25,    27,    28,
      29,    30,    31,    32,   102,   146,    25,    27,    28,    29,
      30,    31,    32,   102,   146,   103,   103,   103,   104,   104,
     103,   103,   104,   104,   103,   104,   104,   103,   104,   104,
     103,   104,   104,    24,    20,   103,   103,   104,   104,   103,
     104,   104,   103,   104,   104,   103,   104,   104,   103,   104,
     104,   103,   104,   104,    25,    27,    28,    29,    30,    31,
      32,   102,   148,   102,   148,   102,   148,   102,   102,   102,
     102,   102,   102,   102,   103,   102,   102,   102,   102,   102,
     102,   102,   103,   145,   145,   145,   145,    20,    21,    22,
      20,    21,    22,   145,   145,   104,   105,   106,   107,   146,
     146,   146,   146,    20,    21,    22,   146,   146,   146,   146,
     146,   146,    18,    19,    20,    21,    22,   146,    20,    21,
      22,    20,    21,    22,    20,    21,    22,    20,    21,    22,
      20,    21,    22,    20,    21,    22,    81,    81,    81,   145,
     145,    81,   145,   145,   145,   145,   145,   145,   145,   145,
      81,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,    20,    21,    22,    20,    21,    22,    20,
      21,    22,    28,   146,    28,    28,    28,    28,    28,    28,
      28,   146,    28,    28,    28,    28,    28,    28,   103,   103,
     103,   103,   103,   104,   104,   103,   104,   104,   103,   103,
     102,   147,   102,   147,   102,   147,   102,   147,   103,   103,
     103,   103,   103,   104,   104,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   104,   103,   103,   104,   104,
     103,   104,   104,   103,   104,   104,   103,   104,   104,   103,
     104,   104,   103,   104,   104,    25,    25,    25,    27,    28,
      29,    30,    31,    32,   146,   103,   103,    18,    19,    20,
      21,    22,    23,    25,   103,   103,   103,   103,   103,   103,
     103,   103,    20,    21,    22,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     103,   104,   104,   103,   104,   104,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   145,   145,   145,   145,   146,   146,   146,   146,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,    81,    81,   146,   146,
     146,   146,   146,   146,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,    25,    27,
      28,    29,    30,    31,    32,   145,    25,    27,    28,    29,
      30,    31,    32,   145,   103,   103,   103,   103,   103,   103
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   110,   110,   111,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   120,   120,   121,   121,   121,   121,   122,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   137,   137,
     137,   137,   137,   137,   138,   138,   138,   138,   138,   138,
     139,   139,   139,   139,   139,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   142,   142,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   144,   145,   145,
     145,   145,   145,   145,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   147,   147,   148,   148,   148,   148,   148,   148,   148
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     2,     4,
       2,     3,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     3,
       5,     7,     7,     3,     5,     7,     7,     3,     5,     7,
       7,     5,     5,     5,     5,     5,     5,     5,     5,     3,
       5,     5,     5,     5,     5,     5,     5,     5,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     7,     7,     5,     5,     5,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     3,     3,     3,     3,
       7,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     3,     3,     3,     7,     7,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     3,     3,     3,     3,
       7,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     3,     3,     3,     7,     7,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     7,     7,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     7,     7,     3,
       5,     3,     5,     3,     5,     3,     5,     3,     5,     3,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     5,     5,     5,
       5,     5,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       5,     5,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     3,     3,     3,     3,     7,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     3,     3,     3,     3,     7,     7,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     5,     5,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     3,     3,     3,     3,     7,     7,     3,
       3,     3,     3,     3,     5,     3,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     5,
       5,     5,     5,     5,     5,     5,     5,     7,     7,     7,
       7,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 86 "grammar-secondpass.y"
                                                        {  	}
#line 2289 "grammar-secondpass.tab.c"
    break;

  case 3: /* lines: line  */
#line 88 "grammar-secondpass.y"
                         {   }
#line 2295 "grammar-secondpass.tab.c"
    break;

  case 4: /* lines: lines line  */
#line 89 "grammar-secondpass.y"
                                     {   }
#line 2301 "grammar-secondpass.tab.c"
    break;

  case 5: /* line: instruction  */
#line 91 "grammar-secondpass.y"
                                                                { }
#line 2307 "grammar-secondpass.tab.c"
    break;

  case 6: /* line: directive  */
#line 92 "grammar-secondpass.y"
                                                                                { }
#line 2313 "grammar-secondpass.tab.c"
    break;

  case 7: /* directive: END  */
#line 95 "grammar-secondpass.y"
                                                                        { return 0;}
#line 2319 "grammar-secondpass.tab.c"
    break;

  case 8: /* directive: DEFS expression  */
#line 96 "grammar-secondpass.y"
                                                                                                { for(int a=0;a<(yyvsp[0].normal);a++) { code_putbyte(0x00); }  }
#line 2325 "grammar-secondpass.tab.c"
    break;

  case 9: /* directive: DEFS expression COMMA expression  */
#line 97 "grammar-secondpass.y"
                                                                                { for(int a=0;a<(yyvsp[-2].normal);a++) { code_putbyte((yyvsp[0].normal)); }  }
#line 2331 "grammar-secondpass.tab.c"
    break;

  case 10: /* directive: DEFM STRING  */
#line 98 "grammar-secondpass.y"
                                                                                                { for(int a=0;a<(int)strlen((yyvsp[0].literal));a++) {code_putbyte((yyvsp[0].literal)[a]); } }
#line 2337 "grammar-secondpass.tab.c"
    break;

  case 11: /* directive: LITERAL EQU expression  */
#line 99 "grammar-secondpass.y"
                                                                                        { /* done in first pass */ }
#line 2343 "grammar-secondpass.tab.c"
    break;

  case 12: /* directive: EQU expression  */
#line 100 "grammar-secondpass.y"
                                                                                                { /* done in first pass most likely is LABEL EQU expression */ }
#line 2349 "grammar-secondpass.tab.c"
    break;

  case 13: /* directive: ORG INTEGER  */
#line 101 "grammar-secondpass.y"
                                                                                                        { pc_init((yyvsp[0].normal));	}
#line 2355 "grammar-secondpass.tab.c"
    break;

  case 14: /* directive: ALIGN expression  */
#line 102 "grammar-secondpass.y"
                                                { 
										int pc = pc_get();
										int k = ((( pc / (yyvsp[0].normal))+1)*(yyvsp[0].normal)); 
										for  (int a = pc; a < k; a++) { 
											pc_inc(1); 
										} 
									}
#line 2367 "grammar-secondpass.tab.c"
    break;

  case 15: /* instruction: NOP  */
#line 110 "grammar-secondpass.y"
                                                                { code_putbyte( 0x00 ); }
#line 2373 "grammar-secondpass.tab.c"
    break;

  case 16: /* instruction: DI  */
#line 111 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xF3 ); }
#line 2379 "grammar-secondpass.tab.c"
    break;

  case 17: /* instruction: EI  */
#line 112 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xFB ); }
#line 2385 "grammar-secondpass.tab.c"
    break;

  case 18: /* instruction: HALT  */
#line 113 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x76 ); }
#line 2391 "grammar-secondpass.tab.c"
    break;

  case 19: /* instruction: RLCA  */
#line 114 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x07 ); }
#line 2397 "grammar-secondpass.tab.c"
    break;

  case 20: /* instruction: RRCA  */
#line 115 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x0F ); }
#line 2403 "grammar-secondpass.tab.c"
    break;

  case 21: /* instruction: RLA  */
#line 116 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x17 ); }
#line 2409 "grammar-secondpass.tab.c"
    break;

  case 22: /* instruction: CCF  */
#line 117 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x3F ); }
#line 2415 "grammar-secondpass.tab.c"
    break;

  case 23: /* instruction: CPIR  */
#line 118 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xB1 ); }
#line 2421 "grammar-secondpass.tab.c"
    break;

  case 24: /* instruction: CPI  */
#line 119 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xA1 ); }
#line 2427 "grammar-secondpass.tab.c"
    break;

  case 25: /* instruction: CPDR  */
#line 120 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xB9 ); }
#line 2433 "grammar-secondpass.tab.c"
    break;

  case 26: /* instruction: CPD  */
#line 121 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xA9 ); }
#line 2439 "grammar-secondpass.tab.c"
    break;

  case 27: /* instruction: RETN  */
#line 122 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0x45 ); }
#line 2445 "grammar-secondpass.tab.c"
    break;

  case 28: /* instruction: RETI  */
#line 123 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0x4D ); }
#line 2451 "grammar-secondpass.tab.c"
    break;

  case 29: /* instruction: EXX  */
#line 124 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xD9 ); }
#line 2457 "grammar-secondpass.tab.c"
    break;

  case 30: /* instruction: INI  */
#line 125 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xA2 ); }
#line 2463 "grammar-secondpass.tab.c"
    break;

  case 31: /* instruction: INIR  */
#line 126 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xB2 ); }
#line 2469 "grammar-secondpass.tab.c"
    break;

  case 32: /* instruction: IND  */
#line 127 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xAA ); }
#line 2475 "grammar-secondpass.tab.c"
    break;

  case 33: /* instruction: INDR  */
#line 128 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xBA ); }
#line 2481 "grammar-secondpass.tab.c"
    break;

  case 34: /* instruction: OUTI  */
#line 129 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xA3 ); }
#line 2487 "grammar-secondpass.tab.c"
    break;

  case 35: /* instruction: OTIR  */
#line 130 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xB3 ); }
#line 2493 "grammar-secondpass.tab.c"
    break;

  case 36: /* instruction: OUTD  */
#line 131 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xAB ); }
#line 2499 "grammar-secondpass.tab.c"
    break;

  case 37: /* instruction: OTDR  */
#line 132 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xED );  code_putbyte( 0xBB ); }
#line 2505 "grammar-secondpass.tab.c"
    break;

  case 38: /* instruction: LD ldcommand  */
#line 133 "grammar-secondpass.y"
                                                                { }
#line 2511 "grammar-secondpass.tab.c"
    break;

  case 39: /* instruction: AND andcommand  */
#line 134 "grammar-secondpass.y"
                                                                { }
#line 2517 "grammar-secondpass.tab.c"
    break;

  case 40: /* instruction: XOR xorcommand  */
#line 135 "grammar-secondpass.y"
                                                                { }
#line 2523 "grammar-secondpass.tab.c"
    break;

  case 41: /* instruction: OR orcommand  */
#line 136 "grammar-secondpass.y"
                                                                { }
#line 2529 "grammar-secondpass.tab.c"
    break;

  case 42: /* instruction: CP cpcommand  */
#line 137 "grammar-secondpass.y"
                                                                { }
#line 2535 "grammar-secondpass.tab.c"
    break;

  case 43: /* instruction: INC inccommand  */
#line 138 "grammar-secondpass.y"
                                                                { }
#line 2541 "grammar-secondpass.tab.c"
    break;

  case 44: /* instruction: DEC deccommand  */
#line 139 "grammar-secondpass.y"
                                                                { }
#line 2547 "grammar-secondpass.tab.c"
    break;

  case 45: /* instruction: ADC adccommand  */
#line 140 "grammar-secondpass.y"
                                                                { }
#line 2553 "grammar-secondpass.tab.c"
    break;

  case 46: /* instruction: ADD addcommand  */
#line 141 "grammar-secondpass.y"
                                                                { }
#line 2559 "grammar-secondpass.tab.c"
    break;

  case 47: /* instruction: SUB subcommand  */
#line 142 "grammar-secondpass.y"
                                                                { }
#line 2565 "grammar-secondpass.tab.c"
    break;

  case 48: /* instruction: SBC sbccommand  */
#line 143 "grammar-secondpass.y"
                                                                { }
#line 2571 "grammar-secondpass.tab.c"
    break;

  case 49: /* instruction: DJNZ djnzcommand  */
#line 144 "grammar-secondpass.y"
                                                                { }
#line 2577 "grammar-secondpass.tab.c"
    break;

  case 50: /* instruction: JR jrcommand  */
#line 145 "grammar-secondpass.y"
                                                                { }
#line 2583 "grammar-secondpass.tab.c"
    break;

  case 51: /* instruction: JP jpcommand  */
#line 146 "grammar-secondpass.y"
                                                                { }
#line 2589 "grammar-secondpass.tab.c"
    break;

  case 52: /* instruction: CALL callcommand  */
#line 147 "grammar-secondpass.y"
                                                                { }
#line 2595 "grammar-secondpass.tab.c"
    break;

  case 53: /* instruction: EX excommand  */
#line 148 "grammar-secondpass.y"
                                                                { }
#line 2601 "grammar-secondpass.tab.c"
    break;

  case 54: /* instruction: RET retcommand  */
#line 149 "grammar-secondpass.y"
                                                                { }
#line 2607 "grammar-secondpass.tab.c"
    break;

  case 55: /* instruction: RST rstcommand  */
#line 150 "grammar-secondpass.y"
                                                                { }
#line 2613 "grammar-secondpass.tab.c"
    break;

  case 56: /* instruction: PUSH pushcommand  */
#line 151 "grammar-secondpass.y"
                                                                { }
#line 2619 "grammar-secondpass.tab.c"
    break;

  case 57: /* instruction: POP popcommand  */
#line 152 "grammar-secondpass.y"
                                                                { }
#line 2625 "grammar-secondpass.tab.c"
    break;

  case 58: /* instruction: IN incommand  */
#line 153 "grammar-secondpass.y"
                                                                { }
#line 2631 "grammar-secondpass.tab.c"
    break;

  case 59: /* instruction: OUT outcommand  */
#line 154 "grammar-secondpass.y"
                                                                { }
#line 2637 "grammar-secondpass.tab.c"
    break;

  case 60: /* instruction: BIT bitcommand  */
#line 155 "grammar-secondpass.y"
                                                                { }
#line 2643 "grammar-secondpass.tab.c"
    break;

  case 61: /* instruction: RES rescommand  */
#line 156 "grammar-secondpass.y"
                                                                { }
#line 2649 "grammar-secondpass.tab.c"
    break;

  case 62: /* instruction: SET setcommand  */
#line 157 "grammar-secondpass.y"
                                                                { }
#line 2655 "grammar-secondpass.tab.c"
    break;

  case 63: /* instruction: SLA slacommand  */
#line 158 "grammar-secondpass.y"
                                                                { }
#line 2661 "grammar-secondpass.tab.c"
    break;

  case 64: /* instruction: SRA sracommand  */
#line 159 "grammar-secondpass.y"
                                                                { }
#line 2667 "grammar-secondpass.tab.c"
    break;

  case 65: /* instruction: RL rlcommand  */
#line 160 "grammar-secondpass.y"
                                                                { }
#line 2673 "grammar-secondpass.tab.c"
    break;

  case 66: /* instruction: RR rrcommand  */
#line 161 "grammar-secondpass.y"
                                                                { }
#line 2679 "grammar-secondpass.tab.c"
    break;

  case 67: /* instruction: RRC rrccommand  */
#line 162 "grammar-secondpass.y"
                                                                { }
#line 2685 "grammar-secondpass.tab.c"
    break;

  case 68: /* instruction: RLC rlccommand  */
#line 163 "grammar-secondpass.y"
                                                                { }
#line 2691 "grammar-secondpass.tab.c"
    break;

  case 69: /* rlccommand: A  */
#line 166 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x07 ); }
#line 2697 "grammar-secondpass.tab.c"
    break;

  case 70: /* rlccommand: B  */
#line 167 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x00 ); }
#line 2703 "grammar-secondpass.tab.c"
    break;

  case 71: /* rlccommand: C  */
#line 168 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x01 ); }
#line 2709 "grammar-secondpass.tab.c"
    break;

  case 72: /* rlccommand: D  */
#line 169 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x02 ); }
#line 2715 "grammar-secondpass.tab.c"
    break;

  case 73: /* rlccommand: E  */
#line 170 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x03 ); }
#line 2721 "grammar-secondpass.tab.c"
    break;

  case 74: /* rlccommand: H  */
#line 171 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x04 ); }
#line 2727 "grammar-secondpass.tab.c"
    break;

  case 75: /* rlccommand: L  */
#line 172 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x05 ); }
#line 2733 "grammar-secondpass.tab.c"
    break;

  case 76: /* rlccommand: PARLEFT HL PARRIGHT  */
#line 173 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x06 ); }
#line 2739 "grammar-secondpass.tab.c"
    break;

  case 77: /* rlccommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 174 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x06 ); }
#line 2745 "grammar-secondpass.tab.c"
    break;

  case 78: /* rlccommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 175 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x06 ); }
#line 2751 "grammar-secondpass.tab.c"
    break;

  case 79: /* rrccommand: A  */
#line 177 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0F ); }
#line 2757 "grammar-secondpass.tab.c"
    break;

  case 80: /* rrccommand: B  */
#line 178 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x08 ); }
#line 2763 "grammar-secondpass.tab.c"
    break;

  case 81: /* rrccommand: C  */
#line 179 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x09 ); }
#line 2769 "grammar-secondpass.tab.c"
    break;

  case 82: /* rrccommand: D  */
#line 180 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0A ); }
#line 2775 "grammar-secondpass.tab.c"
    break;

  case 83: /* rrccommand: E  */
#line 181 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0B ); }
#line 2781 "grammar-secondpass.tab.c"
    break;

  case 84: /* rrccommand: H  */
#line 182 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0C ); }
#line 2787 "grammar-secondpass.tab.c"
    break;

  case 85: /* rrccommand: L  */
#line 183 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0D ); }
#line 2793 "grammar-secondpass.tab.c"
    break;

  case 86: /* rrccommand: PARLEFT HL PARRIGHT  */
#line 184 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x0E ); }
#line 2799 "grammar-secondpass.tab.c"
    break;

  case 87: /* rrccommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 185 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x0E ); }
#line 2805 "grammar-secondpass.tab.c"
    break;

  case 88: /* rrccommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 186 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x0E ); }
#line 2811 "grammar-secondpass.tab.c"
    break;

  case 89: /* rrcommand: A  */
#line 188 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xCB ); code_putbyte( 0x1F ); }
#line 2817 "grammar-secondpass.tab.c"
    break;

  case 90: /* rrcommand: B  */
#line 189 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x18 ); }
#line 2823 "grammar-secondpass.tab.c"
    break;

  case 91: /* rrcommand: C  */
#line 190 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x19 ); }
#line 2829 "grammar-secondpass.tab.c"
    break;

  case 92: /* rrcommand: D  */
#line 191 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1A ); }
#line 2835 "grammar-secondpass.tab.c"
    break;

  case 93: /* rrcommand: E  */
#line 192 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1B ); }
#line 2841 "grammar-secondpass.tab.c"
    break;

  case 94: /* rrcommand: H  */
#line 193 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1C ); }
#line 2847 "grammar-secondpass.tab.c"
    break;

  case 95: /* rrcommand: L  */
#line 194 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1D ); }
#line 2853 "grammar-secondpass.tab.c"
    break;

  case 96: /* rrcommand: PARLEFT HL PARRIGHT  */
#line 195 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x1E ); }
#line 2859 "grammar-secondpass.tab.c"
    break;

  case 97: /* rrcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 196 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x1E ); }
#line 2865 "grammar-secondpass.tab.c"
    break;

  case 98: /* rrcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 197 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x1E ); }
#line 2871 "grammar-secondpass.tab.c"
    break;

  case 99: /* rlcommand: A  */
#line 199 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xCB ); code_putbyte( 0x17 ); }
#line 2877 "grammar-secondpass.tab.c"
    break;

  case 100: /* rlcommand: B  */
#line 200 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x10 ); }
#line 2883 "grammar-secondpass.tab.c"
    break;

  case 101: /* rlcommand: C  */
#line 201 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x11 ); }
#line 2889 "grammar-secondpass.tab.c"
    break;

  case 102: /* rlcommand: D  */
#line 202 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x12 ); }
#line 2895 "grammar-secondpass.tab.c"
    break;

  case 103: /* rlcommand: E  */
#line 203 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x13 ); }
#line 2901 "grammar-secondpass.tab.c"
    break;

  case 104: /* rlcommand: H  */
#line 204 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x14 ); }
#line 2907 "grammar-secondpass.tab.c"
    break;

  case 105: /* rlcommand: L  */
#line 205 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x15 ); }
#line 2913 "grammar-secondpass.tab.c"
    break;

  case 106: /* rlcommand: PARLEFT HL PARRIGHT  */
#line 206 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x16 ); }
#line 2919 "grammar-secondpass.tab.c"
    break;

  case 107: /* rlcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 207 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x16 ); }
#line 2925 "grammar-secondpass.tab.c"
    break;

  case 108: /* rlcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 208 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x16 ); }
#line 2931 "grammar-secondpass.tab.c"
    break;

  case 109: /* sracommand: A  */
#line 210 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2F ); }
#line 2937 "grammar-secondpass.tab.c"
    break;

  case 110: /* sracommand: B  */
#line 211 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x28 ); }
#line 2943 "grammar-secondpass.tab.c"
    break;

  case 111: /* sracommand: C  */
#line 212 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x29 ); }
#line 2949 "grammar-secondpass.tab.c"
    break;

  case 112: /* sracommand: D  */
#line 213 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2A ); }
#line 2955 "grammar-secondpass.tab.c"
    break;

  case 113: /* sracommand: E  */
#line 214 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2B ); }
#line 2961 "grammar-secondpass.tab.c"
    break;

  case 114: /* sracommand: H  */
#line 215 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2C ); }
#line 2967 "grammar-secondpass.tab.c"
    break;

  case 115: /* sracommand: L  */
#line 216 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2D ); }
#line 2973 "grammar-secondpass.tab.c"
    break;

  case 116: /* sracommand: PARLEFT HL PARRIGHT  */
#line 217 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x2E ); }
#line 2979 "grammar-secondpass.tab.c"
    break;

  case 117: /* sracommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 218 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x2E ); }
#line 2985 "grammar-secondpass.tab.c"
    break;

  case 118: /* sracommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 219 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x2E ); }
#line 2991 "grammar-secondpass.tab.c"
    break;

  case 119: /* slacommand: A  */
#line 221 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x27 ); }
#line 2997 "grammar-secondpass.tab.c"
    break;

  case 120: /* slacommand: B  */
#line 222 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x20 ); }
#line 3003 "grammar-secondpass.tab.c"
    break;

  case 121: /* slacommand: C  */
#line 223 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x21 ); }
#line 3009 "grammar-secondpass.tab.c"
    break;

  case 122: /* slacommand: D  */
#line 224 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x22 ); }
#line 3015 "grammar-secondpass.tab.c"
    break;

  case 123: /* slacommand: E  */
#line 225 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x23 ); }
#line 3021 "grammar-secondpass.tab.c"
    break;

  case 124: /* slacommand: H  */
#line 226 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x24 ); }
#line 3027 "grammar-secondpass.tab.c"
    break;

  case 125: /* slacommand: L  */
#line 227 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x25 ); }
#line 3033 "grammar-secondpass.tab.c"
    break;

  case 126: /* slacommand: PARLEFT HL PARRIGHT  */
#line 228 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xCB ); code_putbyte( 0x26 ); }
#line 3039 "grammar-secondpass.tab.c"
    break;

  case 127: /* slacommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 229 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x26 ); }
#line 3045 "grammar-secondpass.tab.c"
    break;

  case 128: /* slacommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 230 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( 0x26 ); }
#line 3051 "grammar-secondpass.tab.c"
    break;

  case 129: /* rescommand: INTEGER COMMA reg8  */
#line 232 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-2].normal)<<3)|(yyvsp[0].normal)|128  );   }
#line 3057 "grammar-secondpass.tab.c"
    break;

  case 130: /* rescommand: INTEGER COMMA PARLEFT HL PARRIGHT  */
#line 233 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-4].normal)<<3)|128|4|2 ); }
#line 3063 "grammar-secondpass.tab.c"
    break;

  case 131: /* rescommand: INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT  */
#line 234 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|128|4|2 ); }
#line 3069 "grammar-secondpass.tab.c"
    break;

  case 132: /* rescommand: INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT  */
#line 235 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|128|4|2 ); }
#line 3075 "grammar-secondpass.tab.c"
    break;

  case 133: /* setcommand: INTEGER COMMA reg8  */
#line 237 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-2].normal)<<3)|(yyvsp[0].normal)|128|64  );   }
#line 3081 "grammar-secondpass.tab.c"
    break;

  case 134: /* setcommand: INTEGER COMMA PARLEFT HL PARRIGHT  */
#line 238 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-4].normal)<<3)|128|64|4|2 ); }
#line 3087 "grammar-secondpass.tab.c"
    break;

  case 135: /* setcommand: INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT  */
#line 239 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|128|64|4|2 ); }
#line 3093 "grammar-secondpass.tab.c"
    break;

  case 136: /* setcommand: INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT  */
#line 240 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|128|64|4|2 ); }
#line 3099 "grammar-secondpass.tab.c"
    break;

  case 137: /* bitcommand: INTEGER COMMA reg8  */
#line 242 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-2].normal)<<3)|(yyvsp[0].normal)|64 ) ;}
#line 3105 "grammar-secondpass.tab.c"
    break;

  case 138: /* bitcommand: INTEGER COMMA PARLEFT HL PARRIGHT  */
#line 243 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xCB ); code_putbyte( ((yyvsp[-4].normal)<<3)|64|6  ); }
#line 3111 "grammar-secondpass.tab.c"
    break;

  case 139: /* bitcommand: INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT  */
#line 244 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|64|6 ); }
#line 3117 "grammar-secondpass.tab.c"
    break;

  case 140: /* bitcommand: INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT  */
#line 245 "grammar-secondpass.y"
                                                                                    { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( (yyvsp[-1].normal) ); code_putbyte( ((yyvsp[-6].normal)<<3)|64|6 ); }
#line 3123 "grammar-secondpass.tab.c"
    break;

  case 141: /* incommand: A COMMA PARLEFT expression2 PARRIGHT  */
#line 247 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xDB ); code_putbyte( (yyvsp[-1].normal) ); }
#line 3129 "grammar-secondpass.tab.c"
    break;

  case 142: /* incommand: B COMMA PARLEFT C PARRIGHT  */
#line 248 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x40 ); }
#line 3135 "grammar-secondpass.tab.c"
    break;

  case 143: /* incommand: C COMMA PARLEFT C PARRIGHT  */
#line 249 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x48 ); }
#line 3141 "grammar-secondpass.tab.c"
    break;

  case 144: /* incommand: D COMMA PARLEFT C PARRIGHT  */
#line 250 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x50 ); }
#line 3147 "grammar-secondpass.tab.c"
    break;

  case 145: /* incommand: E COMMA PARLEFT C PARRIGHT  */
#line 251 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x58 ); }
#line 3153 "grammar-secondpass.tab.c"
    break;

  case 146: /* incommand: H COMMA PARLEFT C PARRIGHT  */
#line 252 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x60 ); }
#line 3159 "grammar-secondpass.tab.c"
    break;

  case 147: /* incommand: L COMMA PARLEFT C PARRIGHT  */
#line 253 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x68 ); }
#line 3165 "grammar-secondpass.tab.c"
    break;

  case 148: /* incommand: A COMMA PARLEFT C PARRIGHT  */
#line 254 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x78 ); }
#line 3171 "grammar-secondpass.tab.c"
    break;

  case 149: /* incommand: PARLEFT C PARRIGHT  */
#line 255 "grammar-secondpass.y"
                                                                                                        {  code_putbyte( 0xED ); code_putbyte( 0x70 ); }
#line 3177 "grammar-secondpass.tab.c"
    break;

  case 150: /* outcommand: A COMMA PARLEFT expression2 PARRIGHT  */
#line 258 "grammar-secondpass.y"
                                                                        { code_putbyte( 0xDB ); code_putbyte( (yyvsp[-1].normal) ); }
#line 3183 "grammar-secondpass.tab.c"
    break;

  case 151: /* outcommand: B COMMA PARLEFT C PARRIGHT  */
#line 259 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x40 ); }
#line 3189 "grammar-secondpass.tab.c"
    break;

  case 152: /* outcommand: C COMMA PARLEFT C PARRIGHT  */
#line 260 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x48 ); }
#line 3195 "grammar-secondpass.tab.c"
    break;

  case 153: /* outcommand: D COMMA PARLEFT C PARRIGHT  */
#line 261 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x50 ); }
#line 3201 "grammar-secondpass.tab.c"
    break;

  case 154: /* outcommand: E COMMA PARLEFT C PARRIGHT  */
#line 262 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x58 ); }
#line 3207 "grammar-secondpass.tab.c"
    break;

  case 155: /* outcommand: H COMMA PARLEFT C PARRIGHT  */
#line 263 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x60 ); }
#line 3213 "grammar-secondpass.tab.c"
    break;

  case 156: /* outcommand: L COMMA PARLEFT C PARRIGHT  */
#line 264 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x68 ); }
#line 3219 "grammar-secondpass.tab.c"
    break;

  case 157: /* outcommand: A COMMA PARLEFT C PARRIGHT  */
#line 265 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xED ); code_putbyte( 0x78 ); }
#line 3225 "grammar-secondpass.tab.c"
    break;

  case 158: /* outcommand: PARLEFT C PARRIGHT  */
#line 266 "grammar-secondpass.y"
                                                                                                        {  code_putbyte( 0xED ); code_putbyte( 0x70 ); }
#line 3231 "grammar-secondpass.tab.c"
    break;

  case 159: /* ldcommand: A COMMA A  */
#line 268 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x7F ); }
#line 3237 "grammar-secondpass.tab.c"
    break;

  case 160: /* ldcommand: A COMMA B  */
#line 269 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x78 ); }
#line 3243 "grammar-secondpass.tab.c"
    break;

  case 161: /* ldcommand: A COMMA C  */
#line 270 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x79 ); }
#line 3249 "grammar-secondpass.tab.c"
    break;

  case 162: /* ldcommand: A COMMA D  */
#line 271 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x7A ); }
#line 3255 "grammar-secondpass.tab.c"
    break;

  case 163: /* ldcommand: A COMMA E  */
#line 272 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x7B ); }
#line 3261 "grammar-secondpass.tab.c"
    break;

  case 164: /* ldcommand: A COMMA H  */
#line 273 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x7C ); }
#line 3267 "grammar-secondpass.tab.c"
    break;

  case 165: /* ldcommand: A COMMA L  */
#line 274 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x7D ); }
#line 3273 "grammar-secondpass.tab.c"
    break;

  case 166: /* ldcommand: A COMMA expression2  */
#line 275 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x3E ); code_putbyte( (yyvsp[0].normal) );}
#line 3279 "grammar-secondpass.tab.c"
    break;

  case 167: /* ldcommand: A COMMA IXH  */
#line 276 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x7C );  }
#line 3285 "grammar-secondpass.tab.c"
    break;

  case 168: /* ldcommand: A COMMA IXL  */
#line 277 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x7D );  }
#line 3291 "grammar-secondpass.tab.c"
    break;

  case 169: /* ldcommand: A COMMA IYH  */
#line 278 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x7C );  }
#line 3297 "grammar-secondpass.tab.c"
    break;

  case 170: /* ldcommand: A COMMA IYL  */
#line 279 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x7D );  }
#line 3303 "grammar-secondpass.tab.c"
    break;

  case 171: /* ldcommand: A COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 280 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x7E ); code_putbyte((yyvsp[-1].normal)); }
#line 3309 "grammar-secondpass.tab.c"
    break;

  case 172: /* ldcommand: A COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 281 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x7E ); code_putbyte((yyvsp[-1].normal)); }
#line 3315 "grammar-secondpass.tab.c"
    break;

  case 173: /* ldcommand: A COMMA PARLEFT HL PARRIGHT  */
#line 282 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x7E ); }
#line 3321 "grammar-secondpass.tab.c"
    break;

  case 174: /* ldcommand: A COMMA PARLEFT BC PARRIGHT  */
#line 283 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x0A ); }
#line 3327 "grammar-secondpass.tab.c"
    break;

  case 175: /* ldcommand: A COMMA PARLEFT DE PARRIGHT  */
#line 284 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x1A ); }
#line 3333 "grammar-secondpass.tab.c"
    break;

  case 176: /* ldcommand: A COMMA PARLEFT expression2 PARRIGHT  */
#line 285 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x3A ); code_putword( (yyvsp[-1].normal) ); }
#line 3339 "grammar-secondpass.tab.c"
    break;

  case 177: /* ldcommand: B COMMA A  */
#line 286 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x47 ); }
#line 3345 "grammar-secondpass.tab.c"
    break;

  case 178: /* ldcommand: B COMMA B  */
#line 287 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x40 ); }
#line 3351 "grammar-secondpass.tab.c"
    break;

  case 179: /* ldcommand: B COMMA C  */
#line 288 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x41 ); }
#line 3357 "grammar-secondpass.tab.c"
    break;

  case 180: /* ldcommand: B COMMA D  */
#line 289 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x42 ); }
#line 3363 "grammar-secondpass.tab.c"
    break;

  case 181: /* ldcommand: B COMMA E  */
#line 290 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x43 ); }
#line 3369 "grammar-secondpass.tab.c"
    break;

  case 182: /* ldcommand: B COMMA H  */
#line 291 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x44 ); }
#line 3375 "grammar-secondpass.tab.c"
    break;

  case 183: /* ldcommand: B COMMA L  */
#line 292 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x45 ); }
#line 3381 "grammar-secondpass.tab.c"
    break;

  case 184: /* ldcommand: B COMMA expression2  */
#line 293 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x06 );  code_putbyte( (yyvsp[0].normal) );}
#line 3387 "grammar-secondpass.tab.c"
    break;

  case 185: /* ldcommand: B COMMA PARLEFT HL PARRIGHT  */
#line 294 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x46 ); }
#line 3393 "grammar-secondpass.tab.c"
    break;

  case 186: /* ldcommand: B COMMA IXH  */
#line 295 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x44 );  }
#line 3399 "grammar-secondpass.tab.c"
    break;

  case 187: /* ldcommand: B COMMA IXL  */
#line 296 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x45 );  }
#line 3405 "grammar-secondpass.tab.c"
    break;

  case 188: /* ldcommand: B COMMA IYH  */
#line 297 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x44 );  }
#line 3411 "grammar-secondpass.tab.c"
    break;

  case 189: /* ldcommand: B COMMA IYL  */
#line 298 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x45 );  }
#line 3417 "grammar-secondpass.tab.c"
    break;

  case 190: /* ldcommand: B COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 299 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x46 ); code_putbyte((yyvsp[-1].normal)); }
#line 3423 "grammar-secondpass.tab.c"
    break;

  case 191: /* ldcommand: B COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 300 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x46 ); code_putbyte((yyvsp[-1].normal)); }
#line 3429 "grammar-secondpass.tab.c"
    break;

  case 192: /* ldcommand: C COMMA A  */
#line 301 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4F ); }
#line 3435 "grammar-secondpass.tab.c"
    break;

  case 193: /* ldcommand: C COMMA B  */
#line 302 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x48 ); }
#line 3441 "grammar-secondpass.tab.c"
    break;

  case 194: /* ldcommand: C COMMA C  */
#line 303 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x49 ); }
#line 3447 "grammar-secondpass.tab.c"
    break;

  case 195: /* ldcommand: C COMMA D  */
#line 304 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4A ); }
#line 3453 "grammar-secondpass.tab.c"
    break;

  case 196: /* ldcommand: C COMMA E  */
#line 305 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4B ); }
#line 3459 "grammar-secondpass.tab.c"
    break;

  case 197: /* ldcommand: C COMMA H  */
#line 306 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4C ); }
#line 3465 "grammar-secondpass.tab.c"
    break;

  case 198: /* ldcommand: C COMMA L  */
#line 307 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x4D ); }
#line 3471 "grammar-secondpass.tab.c"
    break;

  case 199: /* ldcommand: C COMMA expression2  */
#line 308 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x0E );  code_putbyte( (yyvsp[0].normal) );}
#line 3477 "grammar-secondpass.tab.c"
    break;

  case 200: /* ldcommand: C COMMA PARLEFT HL PARRIGHT  */
#line 309 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x4E ); }
#line 3483 "grammar-secondpass.tab.c"
    break;

  case 201: /* ldcommand: C COMMA IXH  */
#line 310 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x4C );  }
#line 3489 "grammar-secondpass.tab.c"
    break;

  case 202: /* ldcommand: C COMMA IXL  */
#line 311 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x4D );  }
#line 3495 "grammar-secondpass.tab.c"
    break;

  case 203: /* ldcommand: C COMMA IYH  */
#line 312 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x4C );  }
#line 3501 "grammar-secondpass.tab.c"
    break;

  case 204: /* ldcommand: C COMMA IYL  */
#line 313 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x4D );  }
#line 3507 "grammar-secondpass.tab.c"
    break;

  case 205: /* ldcommand: C COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 314 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x4E ); code_putbyte((yyvsp[-1].normal)); }
#line 3513 "grammar-secondpass.tab.c"
    break;

  case 206: /* ldcommand: C COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 315 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x4E ); code_putbyte((yyvsp[-1].normal)); }
#line 3519 "grammar-secondpass.tab.c"
    break;

  case 207: /* ldcommand: D COMMA A  */
#line 316 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x57 ); }
#line 3525 "grammar-secondpass.tab.c"
    break;

  case 208: /* ldcommand: D COMMA B  */
#line 317 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x50 ); }
#line 3531 "grammar-secondpass.tab.c"
    break;

  case 209: /* ldcommand: D COMMA C  */
#line 318 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x51 ); }
#line 3537 "grammar-secondpass.tab.c"
    break;

  case 210: /* ldcommand: D COMMA D  */
#line 319 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x52 ); }
#line 3543 "grammar-secondpass.tab.c"
    break;

  case 211: /* ldcommand: D COMMA E  */
#line 320 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x53 ); }
#line 3549 "grammar-secondpass.tab.c"
    break;

  case 212: /* ldcommand: D COMMA H  */
#line 321 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x54 ); }
#line 3555 "grammar-secondpass.tab.c"
    break;

  case 213: /* ldcommand: D COMMA L  */
#line 322 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x55 ); }
#line 3561 "grammar-secondpass.tab.c"
    break;

  case 214: /* ldcommand: D COMMA expression2  */
#line 323 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x16 );  code_putbyte( (yyvsp[0].normal) );}
#line 3567 "grammar-secondpass.tab.c"
    break;

  case 215: /* ldcommand: D COMMA PARLEFT HL PARRIGHT  */
#line 324 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x56 ); }
#line 3573 "grammar-secondpass.tab.c"
    break;

  case 216: /* ldcommand: D COMMA IXH  */
#line 325 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x54 );  }
#line 3579 "grammar-secondpass.tab.c"
    break;

  case 217: /* ldcommand: D COMMA IXL  */
#line 326 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x55 );  }
#line 3585 "grammar-secondpass.tab.c"
    break;

  case 218: /* ldcommand: D COMMA IYH  */
#line 327 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x54 );  }
#line 3591 "grammar-secondpass.tab.c"
    break;

  case 219: /* ldcommand: D COMMA IYL  */
#line 328 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x55 );  }
#line 3597 "grammar-secondpass.tab.c"
    break;

  case 220: /* ldcommand: D COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 329 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x56 ); code_putbyte((yyvsp[-1].normal)); }
#line 3603 "grammar-secondpass.tab.c"
    break;

  case 221: /* ldcommand: D COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 330 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x56 ); code_putbyte((yyvsp[-1].normal)); }
#line 3609 "grammar-secondpass.tab.c"
    break;

  case 222: /* ldcommand: E COMMA A  */
#line 331 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5F ); }
#line 3615 "grammar-secondpass.tab.c"
    break;

  case 223: /* ldcommand: E COMMA B  */
#line 332 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x58 ); }
#line 3621 "grammar-secondpass.tab.c"
    break;

  case 224: /* ldcommand: E COMMA C  */
#line 333 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x59 ); }
#line 3627 "grammar-secondpass.tab.c"
    break;

  case 225: /* ldcommand: E COMMA D  */
#line 334 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5A ); }
#line 3633 "grammar-secondpass.tab.c"
    break;

  case 226: /* ldcommand: E COMMA E  */
#line 335 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5B ); }
#line 3639 "grammar-secondpass.tab.c"
    break;

  case 227: /* ldcommand: E COMMA H  */
#line 336 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5C ); }
#line 3645 "grammar-secondpass.tab.c"
    break;

  case 228: /* ldcommand: E COMMA L  */
#line 337 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x5D ); }
#line 3651 "grammar-secondpass.tab.c"
    break;

  case 229: /* ldcommand: E COMMA expression2  */
#line 338 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x1E );  code_putbyte( (yyvsp[0].normal) );}
#line 3657 "grammar-secondpass.tab.c"
    break;

  case 230: /* ldcommand: E COMMA PARLEFT HL PARRIGHT  */
#line 339 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x5E ); }
#line 3663 "grammar-secondpass.tab.c"
    break;

  case 231: /* ldcommand: E COMMA IXH  */
#line 340 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x5C );  }
#line 3669 "grammar-secondpass.tab.c"
    break;

  case 232: /* ldcommand: E COMMA IXL  */
#line 341 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD );  code_putbyte( 0x5D );  }
#line 3675 "grammar-secondpass.tab.c"
    break;

  case 233: /* ldcommand: E COMMA IYH  */
#line 342 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x5C );  }
#line 3681 "grammar-secondpass.tab.c"
    break;

  case 234: /* ldcommand: E COMMA IYL  */
#line 343 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD );  code_putbyte( 0x5D );  }
#line 3687 "grammar-secondpass.tab.c"
    break;

  case 235: /* ldcommand: E COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 344 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x5E ); code_putbyte((yyvsp[-1].normal)); }
#line 3693 "grammar-secondpass.tab.c"
    break;

  case 236: /* ldcommand: E COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 345 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x5E ); code_putbyte((yyvsp[-1].normal)); }
#line 3699 "grammar-secondpass.tab.c"
    break;

  case 237: /* ldcommand: H COMMA A  */
#line 346 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x67 ); }
#line 3705 "grammar-secondpass.tab.c"
    break;

  case 238: /* ldcommand: H COMMA B  */
#line 347 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x60 ); }
#line 3711 "grammar-secondpass.tab.c"
    break;

  case 239: /* ldcommand: H COMMA C  */
#line 348 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x61 ); }
#line 3717 "grammar-secondpass.tab.c"
    break;

  case 240: /* ldcommand: H COMMA D  */
#line 349 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x62 ); }
#line 3723 "grammar-secondpass.tab.c"
    break;

  case 241: /* ldcommand: H COMMA E  */
#line 350 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x63 ); }
#line 3729 "grammar-secondpass.tab.c"
    break;

  case 242: /* ldcommand: H COMMA H  */
#line 351 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x64 ); }
#line 3735 "grammar-secondpass.tab.c"
    break;

  case 243: /* ldcommand: H COMMA L  */
#line 352 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x65 ); }
#line 3741 "grammar-secondpass.tab.c"
    break;

  case 244: /* ldcommand: H COMMA expression2  */
#line 353 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x26 );  code_putbyte( (yyvsp[0].normal) );}
#line 3747 "grammar-secondpass.tab.c"
    break;

  case 245: /* ldcommand: H COMMA PARLEFT HL PARRIGHT  */
#line 354 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x66 ); }
#line 3753 "grammar-secondpass.tab.c"
    break;

  case 246: /* ldcommand: H COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 355 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x66 ); code_putbyte((yyvsp[-1].normal)); }
#line 3759 "grammar-secondpass.tab.c"
    break;

  case 247: /* ldcommand: H COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 356 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x66 ); code_putbyte((yyvsp[-1].normal)); }
#line 3765 "grammar-secondpass.tab.c"
    break;

  case 248: /* ldcommand: L COMMA A  */
#line 357 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6F ); }
#line 3771 "grammar-secondpass.tab.c"
    break;

  case 249: /* ldcommand: L COMMA B  */
#line 358 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x68 ); }
#line 3777 "grammar-secondpass.tab.c"
    break;

  case 250: /* ldcommand: L COMMA C  */
#line 359 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x69 ); }
#line 3783 "grammar-secondpass.tab.c"
    break;

  case 251: /* ldcommand: L COMMA D  */
#line 360 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6A ); }
#line 3789 "grammar-secondpass.tab.c"
    break;

  case 252: /* ldcommand: L COMMA E  */
#line 361 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6B ); }
#line 3795 "grammar-secondpass.tab.c"
    break;

  case 253: /* ldcommand: L COMMA H  */
#line 362 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6C ); }
#line 3801 "grammar-secondpass.tab.c"
    break;

  case 254: /* ldcommand: L COMMA L  */
#line 363 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x6D ); }
#line 3807 "grammar-secondpass.tab.c"
    break;

  case 255: /* ldcommand: L COMMA expression2  */
#line 364 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x2E );  code_putbyte( (yyvsp[0].normal) );}
#line 3813 "grammar-secondpass.tab.c"
    break;

  case 256: /* ldcommand: L COMMA PARLEFT HL PARRIGHT  */
#line 365 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x6E ); }
#line 3819 "grammar-secondpass.tab.c"
    break;

  case 257: /* ldcommand: L COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 366 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD );  code_putbyte( 0x6E ); code_putbyte((yyvsp[-1].normal)); }
#line 3825 "grammar-secondpass.tab.c"
    break;

  case 258: /* ldcommand: L COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 367 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD );  code_putbyte( 0x6E ); code_putbyte((yyvsp[-1].normal)); }
#line 3831 "grammar-secondpass.tab.c"
    break;

  case 259: /* ldcommand: HL COMMA expression2  */
#line 368 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x21 ); code_putword( (yyvsp[0].normal) ); }
#line 3837 "grammar-secondpass.tab.c"
    break;

  case 260: /* ldcommand: HL COMMA PARLEFT expression2 PARRIGHT  */
#line 369 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x2A ); code_putword( (yyvsp[-1].normal) ); }
#line 3843 "grammar-secondpass.tab.c"
    break;

  case 261: /* ldcommand: BC COMMA expression2  */
#line 370 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x01 ); code_putword( (yyvsp[0].normal) ); }
#line 3849 "grammar-secondpass.tab.c"
    break;

  case 262: /* ldcommand: BC COMMA PARLEFT expression2 PARRIGHT  */
#line 371 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x4B ); code_putword( (yyvsp[-1].normal) ); }
#line 3855 "grammar-secondpass.tab.c"
    break;

  case 263: /* ldcommand: DE COMMA expression2  */
#line 372 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x11 ); code_putword( (yyvsp[0].normal) ); }
#line 3861 "grammar-secondpass.tab.c"
    break;

  case 264: /* ldcommand: DE COMMA PARLEFT expression2 PARRIGHT  */
#line 373 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x5B ); code_putword( (yyvsp[-1].normal) ); }
#line 3867 "grammar-secondpass.tab.c"
    break;

  case 265: /* ldcommand: SP COMMA expression2  */
#line 374 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x31 ); code_putword( (yyvsp[0].normal) ); }
#line 3873 "grammar-secondpass.tab.c"
    break;

  case 266: /* ldcommand: SP COMMA PARLEFT expression2 PARRIGHT  */
#line 375 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x7B ); code_putword( (yyvsp[-1].normal) ); }
#line 3879 "grammar-secondpass.tab.c"
    break;

  case 267: /* ldcommand: IX COMMA expression2  */
#line 376 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x21 ); code_putword( (yyvsp[0].normal) ); }
#line 3885 "grammar-secondpass.tab.c"
    break;

  case 268: /* ldcommand: IX COMMA PARLEFT expression2 PARRIGHT  */
#line 377 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x2A ); code_putword( (yyvsp[-1].normal) ); }
#line 3891 "grammar-secondpass.tab.c"
    break;

  case 269: /* ldcommand: IY COMMA expression2  */
#line 378 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x21 ); code_putword( (yyvsp[0].normal) ); }
#line 3897 "grammar-secondpass.tab.c"
    break;

  case 270: /* ldcommand: IY COMMA PARLEFT expression2 PARRIGHT  */
#line 379 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x2A ); code_putword( (yyvsp[-1].normal) ); }
#line 3903 "grammar-secondpass.tab.c"
    break;

  case 271: /* ldcommand: PARLEFT HL PARRIGHT COMMA expression2  */
#line 380 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x36 ); code_putbyte( (yyvsp[0].normal) ); }
#line 3909 "grammar-secondpass.tab.c"
    break;

  case 272: /* ldcommand: PARLEFT HL PARRIGHT COMMA B  */
#line 381 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x70 ); }
#line 3915 "grammar-secondpass.tab.c"
    break;

  case 273: /* ldcommand: PARLEFT HL PARRIGHT COMMA C  */
#line 382 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x71 ); }
#line 3921 "grammar-secondpass.tab.c"
    break;

  case 274: /* ldcommand: PARLEFT HL PARRIGHT COMMA D  */
#line 383 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x72 ); }
#line 3927 "grammar-secondpass.tab.c"
    break;

  case 275: /* ldcommand: PARLEFT HL PARRIGHT COMMA E  */
#line 384 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x73 ); }
#line 3933 "grammar-secondpass.tab.c"
    break;

  case 276: /* ldcommand: PARLEFT HL PARRIGHT COMMA H  */
#line 385 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x74 ); }
#line 3939 "grammar-secondpass.tab.c"
    break;

  case 277: /* ldcommand: PARLEFT HL PARRIGHT COMMA L  */
#line 386 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x75 ); }
#line 3945 "grammar-secondpass.tab.c"
    break;

  case 278: /* ldcommand: PARLEFT HL PARRIGHT COMMA A  */
#line 387 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x77 ); }
#line 3951 "grammar-secondpass.tab.c"
    break;

  case 279: /* ldcommand: PARLEFT BC PARRIGHT COMMA A  */
#line 388 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x02 ); }
#line 3957 "grammar-secondpass.tab.c"
    break;

  case 280: /* ldcommand: PARLEFT DE PARRIGHT COMMA A  */
#line 389 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x12 ); }
#line 3963 "grammar-secondpass.tab.c"
    break;

  case 281: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA expression  */
#line 390 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x36 ); code_putbyte( (yyvsp[-3].normal) );  code_putbyte( (yyvsp[0].normal) ); }
#line 3969 "grammar-secondpass.tab.c"
    break;

  case 282: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA expression  */
#line 391 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x36 ); code_putbyte( (yyvsp[-3].normal) );  code_putbyte( (yyvsp[0].normal) ); }
#line 3975 "grammar-secondpass.tab.c"
    break;

  case 283: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA A  */
#line 392 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x77 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 3981 "grammar-secondpass.tab.c"
    break;

  case 284: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA B  */
#line 393 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x70 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 3987 "grammar-secondpass.tab.c"
    break;

  case 285: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA C  */
#line 394 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x71 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 3993 "grammar-secondpass.tab.c"
    break;

  case 286: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA D  */
#line 395 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x72 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 3999 "grammar-secondpass.tab.c"
    break;

  case 287: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA E  */
#line 396 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x73 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4005 "grammar-secondpass.tab.c"
    break;

  case 288: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA H  */
#line 397 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x74 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4011 "grammar-secondpass.tab.c"
    break;

  case 289: /* ldcommand: PARLEFT IX OPADD expression PARRIGHT COMMA L  */
#line 398 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x75 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4017 "grammar-secondpass.tab.c"
    break;

  case 290: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA A  */
#line 399 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x77 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4023 "grammar-secondpass.tab.c"
    break;

  case 291: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA B  */
#line 400 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x70 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4029 "grammar-secondpass.tab.c"
    break;

  case 292: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA C  */
#line 401 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x71 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4035 "grammar-secondpass.tab.c"
    break;

  case 293: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA D  */
#line 402 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x72 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4041 "grammar-secondpass.tab.c"
    break;

  case 294: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA E  */
#line 403 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x73 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4047 "grammar-secondpass.tab.c"
    break;

  case 295: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA H  */
#line 404 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x74 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4053 "grammar-secondpass.tab.c"
    break;

  case 296: /* ldcommand: PARLEFT IY OPADD expression PARRIGHT COMMA L  */
#line 405 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x75 ); code_putbyte( (yyvsp[-3].normal) );  }
#line 4059 "grammar-secondpass.tab.c"
    break;

  case 297: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA HL  */
#line 406 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x22 ); code_putword( (yyvsp[-3].normal) );  }
#line 4065 "grammar-secondpass.tab.c"
    break;

  case 298: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA BC  */
#line 407 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x43 ); code_putword( (yyvsp[-3].normal) );  }
#line 4071 "grammar-secondpass.tab.c"
    break;

  case 299: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA DE  */
#line 408 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x53 ); code_putword( (yyvsp[-3].normal) );  }
#line 4077 "grammar-secondpass.tab.c"
    break;

  case 300: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA SP  */
#line 409 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x73 ); code_putword( (yyvsp[-3].normal) );  }
#line 4083 "grammar-secondpass.tab.c"
    break;

  case 301: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA A  */
#line 410 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0x22 ); code_putword( (yyvsp[-3].normal) );  }
#line 4089 "grammar-secondpass.tab.c"
    break;

  case 302: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA IX  */
#line 411 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x22 ); code_putword( (yyvsp[-3].normal) );  }
#line 4095 "grammar-secondpass.tab.c"
    break;

  case 303: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA IY  */
#line 412 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x22 ); code_putword( (yyvsp[-3].normal) );  }
#line 4101 "grammar-secondpass.tab.c"
    break;

  case 304: /* andcommand: A  */
#line 417 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xA7 ); }
#line 4107 "grammar-secondpass.tab.c"
    break;

  case 305: /* andcommand: B  */
#line 418 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA0 ); }
#line 4113 "grammar-secondpass.tab.c"
    break;

  case 306: /* andcommand: C  */
#line 419 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA1 ); }
#line 4119 "grammar-secondpass.tab.c"
    break;

  case 307: /* andcommand: D  */
#line 420 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA2 ); }
#line 4125 "grammar-secondpass.tab.c"
    break;

  case 308: /* andcommand: E  */
#line 421 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA3 ); }
#line 4131 "grammar-secondpass.tab.c"
    break;

  case 309: /* andcommand: H  */
#line 422 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA4 ); }
#line 4137 "grammar-secondpass.tab.c"
    break;

  case 310: /* andcommand: L  */
#line 423 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA5 ); }
#line 4143 "grammar-secondpass.tab.c"
    break;

  case 311: /* andcommand: PARLEFT HL PARRIGHT  */
#line 424 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xA6 ); }
#line 4149 "grammar-secondpass.tab.c"
    break;

  case 312: /* andcommand: expression2  */
#line 425 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xE6 ); code_putbyte( (yyvsp[0].normal) ); }
#line 4155 "grammar-secondpass.tab.c"
    break;

  case 313: /* andcommand: IXH  */
#line 426 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xA4 ); }
#line 4161 "grammar-secondpass.tab.c"
    break;

  case 314: /* andcommand: IXL  */
#line 427 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xA5 ); }
#line 4167 "grammar-secondpass.tab.c"
    break;

  case 315: /* andcommand: IYH  */
#line 428 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xA4 ); }
#line 4173 "grammar-secondpass.tab.c"
    break;

  case 316: /* andcommand: IYL  */
#line 429 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xA5 ); }
#line 4179 "grammar-secondpass.tab.c"
    break;

  case 317: /* andcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 430 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xA6 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4185 "grammar-secondpass.tab.c"
    break;

  case 318: /* andcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 431 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xA6 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4191 "grammar-secondpass.tab.c"
    break;

  case 319: /* xorcommand: A  */
#line 433 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xAF ); }
#line 4197 "grammar-secondpass.tab.c"
    break;

  case 320: /* xorcommand: B  */
#line 434 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA8 ); }
#line 4203 "grammar-secondpass.tab.c"
    break;

  case 321: /* xorcommand: C  */
#line 435 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xA9 ); }
#line 4209 "grammar-secondpass.tab.c"
    break;

  case 322: /* xorcommand: D  */
#line 436 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xAA ); }
#line 4215 "grammar-secondpass.tab.c"
    break;

  case 323: /* xorcommand: E  */
#line 437 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xAB ); }
#line 4221 "grammar-secondpass.tab.c"
    break;

  case 324: /* xorcommand: H  */
#line 438 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xAC ); }
#line 4227 "grammar-secondpass.tab.c"
    break;

  case 325: /* xorcommand: L  */
#line 439 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xAD ); }
#line 4233 "grammar-secondpass.tab.c"
    break;

  case 326: /* xorcommand: PARLEFT HL PARRIGHT  */
#line 440 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xAE ); }
#line 4239 "grammar-secondpass.tab.c"
    break;

  case 327: /* xorcommand: expression2  */
#line 441 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xEE ); code_putbyte( (yyvsp[0].normal) ); }
#line 4245 "grammar-secondpass.tab.c"
    break;

  case 328: /* xorcommand: IXH  */
#line 442 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xAC ); }
#line 4251 "grammar-secondpass.tab.c"
    break;

  case 329: /* xorcommand: IXL  */
#line 443 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xAD ); }
#line 4257 "grammar-secondpass.tab.c"
    break;

  case 330: /* xorcommand: IYH  */
#line 444 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xAC ); }
#line 4263 "grammar-secondpass.tab.c"
    break;

  case 331: /* xorcommand: IYL  */
#line 445 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xAD ); }
#line 4269 "grammar-secondpass.tab.c"
    break;

  case 332: /* xorcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 446 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xAE ); code_putbyte( (yyvsp[-1].normal) );}
#line 4275 "grammar-secondpass.tab.c"
    break;

  case 333: /* xorcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 447 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xAE ); code_putbyte( (yyvsp[-1].normal) );}
#line 4281 "grammar-secondpass.tab.c"
    break;

  case 334: /* orcommand: A  */
#line 449 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xB7 ); }
#line 4287 "grammar-secondpass.tab.c"
    break;

  case 335: /* orcommand: B  */
#line 450 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB0 ); }
#line 4293 "grammar-secondpass.tab.c"
    break;

  case 336: /* orcommand: C  */
#line 451 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB1 ); }
#line 4299 "grammar-secondpass.tab.c"
    break;

  case 337: /* orcommand: D  */
#line 452 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB2 ); }
#line 4305 "grammar-secondpass.tab.c"
    break;

  case 338: /* orcommand: E  */
#line 453 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB3 ); }
#line 4311 "grammar-secondpass.tab.c"
    break;

  case 339: /* orcommand: H  */
#line 454 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB4 ); }
#line 4317 "grammar-secondpass.tab.c"
    break;

  case 340: /* orcommand: L  */
#line 455 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB5 ); }
#line 4323 "grammar-secondpass.tab.c"
    break;

  case 341: /* orcommand: PARLEFT HL PARRIGHT  */
#line 456 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xB6 ); }
#line 4329 "grammar-secondpass.tab.c"
    break;

  case 342: /* orcommand: expression2  */
#line 457 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xF6 ); code_putbyte( (yyvsp[0].normal) ); }
#line 4335 "grammar-secondpass.tab.c"
    break;

  case 343: /* orcommand: IXH  */
#line 458 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xB4 ); }
#line 4341 "grammar-secondpass.tab.c"
    break;

  case 344: /* orcommand: IXL  */
#line 459 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xB5 ); }
#line 4347 "grammar-secondpass.tab.c"
    break;

  case 345: /* orcommand: IYH  */
#line 460 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xB4 ); }
#line 4353 "grammar-secondpass.tab.c"
    break;

  case 346: /* orcommand: IYL  */
#line 461 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xB5 ); }
#line 4359 "grammar-secondpass.tab.c"
    break;

  case 347: /* orcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 462 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xB6 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4365 "grammar-secondpass.tab.c"
    break;

  case 348: /* orcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 463 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xB6 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4371 "grammar-secondpass.tab.c"
    break;

  case 349: /* cpcommand: A  */
#line 465 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xBF ); }
#line 4377 "grammar-secondpass.tab.c"
    break;

  case 350: /* cpcommand: B  */
#line 466 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB8 ); }
#line 4383 "grammar-secondpass.tab.c"
    break;

  case 351: /* cpcommand: C  */
#line 467 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xB9 ); }
#line 4389 "grammar-secondpass.tab.c"
    break;

  case 352: /* cpcommand: D  */
#line 468 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xBA ); }
#line 4395 "grammar-secondpass.tab.c"
    break;

  case 353: /* cpcommand: E  */
#line 469 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xBB ); }
#line 4401 "grammar-secondpass.tab.c"
    break;

  case 354: /* cpcommand: H  */
#line 470 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xBC ); }
#line 4407 "grammar-secondpass.tab.c"
    break;

  case 355: /* cpcommand: L  */
#line 471 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xBD ); }
#line 4413 "grammar-secondpass.tab.c"
    break;

  case 356: /* cpcommand: PARLEFT HL PARRIGHT  */
#line 472 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xBE ); }
#line 4419 "grammar-secondpass.tab.c"
    break;

  case 357: /* cpcommand: expression2  */
#line 473 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xBE ); code_putbyte( (yyvsp[0].normal) ); }
#line 4425 "grammar-secondpass.tab.c"
    break;

  case 358: /* cpcommand: IXH  */
#line 474 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xBC ); }
#line 4431 "grammar-secondpass.tab.c"
    break;

  case 359: /* cpcommand: IXL  */
#line 475 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0xBD ); }
#line 4437 "grammar-secondpass.tab.c"
    break;

  case 360: /* cpcommand: IYH  */
#line 476 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xBC ); }
#line 4443 "grammar-secondpass.tab.c"
    break;

  case 361: /* cpcommand: IYL  */
#line 477 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0xBD ); }
#line 4449 "grammar-secondpass.tab.c"
    break;

  case 362: /* cpcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 478 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0xBE ); code_putbyte( (yyvsp[-1].normal) );}
#line 4455 "grammar-secondpass.tab.c"
    break;

  case 363: /* cpcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 479 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0xBE ); code_putbyte( (yyvsp[-1].normal) );}
#line 4461 "grammar-secondpass.tab.c"
    break;

  case 364: /* inccommand: A  */
#line 481 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x3C ); }
#line 4467 "grammar-secondpass.tab.c"
    break;

  case 365: /* inccommand: B  */
#line 482 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x04 ); }
#line 4473 "grammar-secondpass.tab.c"
    break;

  case 366: /* inccommand: C  */
#line 483 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x0C ); }
#line 4479 "grammar-secondpass.tab.c"
    break;

  case 367: /* inccommand: D  */
#line 484 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x14 ); }
#line 4485 "grammar-secondpass.tab.c"
    break;

  case 368: /* inccommand: E  */
#line 485 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x1C ); }
#line 4491 "grammar-secondpass.tab.c"
    break;

  case 369: /* inccommand: H  */
#line 486 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x24 ); }
#line 4497 "grammar-secondpass.tab.c"
    break;

  case 370: /* inccommand: L  */
#line 487 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x2C ); }
#line 4503 "grammar-secondpass.tab.c"
    break;

  case 371: /* inccommand: BC  */
#line 488 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x03 ); }
#line 4509 "grammar-secondpass.tab.c"
    break;

  case 372: /* inccommand: DE  */
#line 489 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x13 ); }
#line 4515 "grammar-secondpass.tab.c"
    break;

  case 373: /* inccommand: HL  */
#line 490 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x23 ); }
#line 4521 "grammar-secondpass.tab.c"
    break;

  case 374: /* inccommand: SP  */
#line 491 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x33 ); }
#line 4527 "grammar-secondpass.tab.c"
    break;

  case 375: /* inccommand: PARLEFT HL PARRIGHT  */
#line 492 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x34 ); }
#line 4533 "grammar-secondpass.tab.c"
    break;

  case 376: /* inccommand: IXH  */
#line 493 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x24 ); }
#line 4539 "grammar-secondpass.tab.c"
    break;

  case 377: /* inccommand: IXL  */
#line 494 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x2C ); }
#line 4545 "grammar-secondpass.tab.c"
    break;

  case 378: /* inccommand: IYH  */
#line 495 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x24 ); }
#line 4551 "grammar-secondpass.tab.c"
    break;

  case 379: /* inccommand: IYL  */
#line 496 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x2C ); }
#line 4557 "grammar-secondpass.tab.c"
    break;

  case 380: /* inccommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 497 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x34 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4563 "grammar-secondpass.tab.c"
    break;

  case 381: /* inccommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 498 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x34 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4569 "grammar-secondpass.tab.c"
    break;

  case 382: /* inccommand: IX  */
#line 499 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x23 ); }
#line 4575 "grammar-secondpass.tab.c"
    break;

  case 383: /* inccommand: IY  */
#line 500 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x23 ); }
#line 4581 "grammar-secondpass.tab.c"
    break;

  case 384: /* deccommand: A  */
#line 502 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x3D ); }
#line 4587 "grammar-secondpass.tab.c"
    break;

  case 385: /* deccommand: B  */
#line 503 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x05 ); }
#line 4593 "grammar-secondpass.tab.c"
    break;

  case 386: /* deccommand: C  */
#line 504 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x0D ); }
#line 4599 "grammar-secondpass.tab.c"
    break;

  case 387: /* deccommand: D  */
#line 505 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x15 ); }
#line 4605 "grammar-secondpass.tab.c"
    break;

  case 388: /* deccommand: E  */
#line 506 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x1D ); }
#line 4611 "grammar-secondpass.tab.c"
    break;

  case 389: /* deccommand: H  */
#line 507 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x25 ); }
#line 4617 "grammar-secondpass.tab.c"
    break;

  case 390: /* deccommand: L  */
#line 508 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x2D ); }
#line 4623 "grammar-secondpass.tab.c"
    break;

  case 391: /* deccommand: BC  */
#line 509 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x0B ); }
#line 4629 "grammar-secondpass.tab.c"
    break;

  case 392: /* deccommand: DE  */
#line 510 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x1B ); }
#line 4635 "grammar-secondpass.tab.c"
    break;

  case 393: /* deccommand: HL  */
#line 511 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x2B ); }
#line 4641 "grammar-secondpass.tab.c"
    break;

  case 394: /* deccommand: SP  */
#line 512 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x3B ); }
#line 4647 "grammar-secondpass.tab.c"
    break;

  case 395: /* deccommand: PARLEFT HL PARRIGHT  */
#line 513 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x35 ); }
#line 4653 "grammar-secondpass.tab.c"
    break;

  case 396: /* deccommand: IXH  */
#line 514 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x25 ); }
#line 4659 "grammar-secondpass.tab.c"
    break;

  case 397: /* deccommand: IXL  */
#line 515 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x2D ); }
#line 4665 "grammar-secondpass.tab.c"
    break;

  case 398: /* deccommand: IYH  */
#line 516 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x25 ); }
#line 4671 "grammar-secondpass.tab.c"
    break;

  case 399: /* deccommand: IYL  */
#line 517 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x2D ); }
#line 4677 "grammar-secondpass.tab.c"
    break;

  case 400: /* deccommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 518 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x35 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4683 "grammar-secondpass.tab.c"
    break;

  case 401: /* deccommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 519 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x35 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4689 "grammar-secondpass.tab.c"
    break;

  case 402: /* deccommand: IX  */
#line 520 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x2B ); }
#line 4695 "grammar-secondpass.tab.c"
    break;

  case 403: /* deccommand: IY  */
#line 521 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x2B ); }
#line 4701 "grammar-secondpass.tab.c"
    break;

  case 404: /* adccommand: A COMMA A  */
#line 523 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x8F ); }
#line 4707 "grammar-secondpass.tab.c"
    break;

  case 405: /* adccommand: A COMMA B  */
#line 524 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x88 ); }
#line 4713 "grammar-secondpass.tab.c"
    break;

  case 406: /* adccommand: A COMMA C  */
#line 525 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x89 ); }
#line 4719 "grammar-secondpass.tab.c"
    break;

  case 407: /* adccommand: A COMMA D  */
#line 526 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x8A ); }
#line 4725 "grammar-secondpass.tab.c"
    break;

  case 408: /* adccommand: A COMMA E  */
#line 527 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x8B ); }
#line 4731 "grammar-secondpass.tab.c"
    break;

  case 409: /* adccommand: A COMMA H  */
#line 528 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x8C ); }
#line 4737 "grammar-secondpass.tab.c"
    break;

  case 410: /* adccommand: A COMMA L  */
#line 529 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x8D ); }
#line 4743 "grammar-secondpass.tab.c"
    break;

  case 411: /* adccommand: A COMMA PARLEFT HL PARRIGHT  */
#line 530 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x8E ); }
#line 4749 "grammar-secondpass.tab.c"
    break;

  case 412: /* adccommand: A COMMA expression2  */
#line 531 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xCE ); code_putbyte( (yyvsp[0].normal) );}
#line 4755 "grammar-secondpass.tab.c"
    break;

  case 413: /* adccommand: A COMMA IXH  */
#line 532 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x8C ); }
#line 4761 "grammar-secondpass.tab.c"
    break;

  case 414: /* adccommand: A COMMA IXL  */
#line 533 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x8D ); }
#line 4767 "grammar-secondpass.tab.c"
    break;

  case 415: /* adccommand: A COMMA IYH  */
#line 534 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x8C ); }
#line 4773 "grammar-secondpass.tab.c"
    break;

  case 416: /* adccommand: A COMMA IYL  */
#line 535 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x8D );  }
#line 4779 "grammar-secondpass.tab.c"
    break;

  case 417: /* adccommand: A COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 536 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x8E ); code_putbyte( (yyvsp[-1].normal) );}
#line 4785 "grammar-secondpass.tab.c"
    break;

  case 418: /* adccommand: A COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 537 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x8E ); code_putbyte( (yyvsp[-1].normal) );}
#line 4791 "grammar-secondpass.tab.c"
    break;

  case 419: /* adccommand: HL COMMA BC  */
#line 538 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x4A ); }
#line 4797 "grammar-secondpass.tab.c"
    break;

  case 420: /* adccommand: HL COMMA DE  */
#line 539 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x5A ); }
#line 4803 "grammar-secondpass.tab.c"
    break;

  case 421: /* adccommand: HL COMMA HL  */
#line 540 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x6A ); }
#line 4809 "grammar-secondpass.tab.c"
    break;

  case 422: /* adccommand: HL COMMA SP  */
#line 541 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x7A ); }
#line 4815 "grammar-secondpass.tab.c"
    break;

  case 423: /* addcommand: A COMMA A  */
#line 543 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x87 ); }
#line 4821 "grammar-secondpass.tab.c"
    break;

  case 424: /* addcommand: A COMMA B  */
#line 544 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x80 ); }
#line 4827 "grammar-secondpass.tab.c"
    break;

  case 425: /* addcommand: A COMMA C  */
#line 545 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x81 ); }
#line 4833 "grammar-secondpass.tab.c"
    break;

  case 426: /* addcommand: A COMMA D  */
#line 546 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x82 ); }
#line 4839 "grammar-secondpass.tab.c"
    break;

  case 427: /* addcommand: A COMMA E  */
#line 547 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x83 ); }
#line 4845 "grammar-secondpass.tab.c"
    break;

  case 428: /* addcommand: A COMMA H  */
#line 548 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x84 ); }
#line 4851 "grammar-secondpass.tab.c"
    break;

  case 429: /* addcommand: A COMMA L  */
#line 549 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x85 ); }
#line 4857 "grammar-secondpass.tab.c"
    break;

  case 430: /* addcommand: A COMMA PARLEFT HL PARRIGHT  */
#line 550 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x86 ); }
#line 4863 "grammar-secondpass.tab.c"
    break;

  case 431: /* addcommand: A COMMA expression2  */
#line 551 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xC6 ); code_putbyte( (yyvsp[0].normal) );}
#line 4869 "grammar-secondpass.tab.c"
    break;

  case 432: /* addcommand: A COMMA IXH  */
#line 552 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x84 ); }
#line 4875 "grammar-secondpass.tab.c"
    break;

  case 433: /* addcommand: A COMMA IXL  */
#line 553 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x85 ); }
#line 4881 "grammar-secondpass.tab.c"
    break;

  case 434: /* addcommand: A COMMA IYH  */
#line 554 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x84 ); }
#line 4887 "grammar-secondpass.tab.c"
    break;

  case 435: /* addcommand: A COMMA IYL  */
#line 555 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x85 );  }
#line 4893 "grammar-secondpass.tab.c"
    break;

  case 436: /* addcommand: A COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 556 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x86 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4899 "grammar-secondpass.tab.c"
    break;

  case 437: /* addcommand: A COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 557 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x86 ); code_putbyte( (yyvsp[-1].normal) );}
#line 4905 "grammar-secondpass.tab.c"
    break;

  case 438: /* addcommand: HL COMMA BC  */
#line 558 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x09 ); }
#line 4911 "grammar-secondpass.tab.c"
    break;

  case 439: /* addcommand: HL COMMA DE  */
#line 559 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x19 ); }
#line 4917 "grammar-secondpass.tab.c"
    break;

  case 440: /* addcommand: HL COMMA HL  */
#line 560 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x29 ); }
#line 4923 "grammar-secondpass.tab.c"
    break;

  case 441: /* addcommand: HL COMMA SP  */
#line 561 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x39 ); }
#line 4929 "grammar-secondpass.tab.c"
    break;

  case 442: /* addcommand: IX COMMA BC  */
#line 562 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x09 ); }
#line 4935 "grammar-secondpass.tab.c"
    break;

  case 443: /* addcommand: IX COMMA DE  */
#line 563 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x19 ); }
#line 4941 "grammar-secondpass.tab.c"
    break;

  case 444: /* addcommand: IX COMMA IX  */
#line 564 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x29 ); }
#line 4947 "grammar-secondpass.tab.c"
    break;

  case 445: /* addcommand: IY COMMA BC  */
#line 565 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x09 ); }
#line 4953 "grammar-secondpass.tab.c"
    break;

  case 446: /* addcommand: IY COMMA DE  */
#line 566 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x19 ); }
#line 4959 "grammar-secondpass.tab.c"
    break;

  case 447: /* addcommand: IY COMMA IY  */
#line 567 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x29 ); }
#line 4965 "grammar-secondpass.tab.c"
    break;

  case 448: /* addcommand: IY COMMA SP  */
#line 568 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x39 ); }
#line 4971 "grammar-secondpass.tab.c"
    break;

  case 449: /* subcommand: A  */
#line 570 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x97 ); }
#line 4977 "grammar-secondpass.tab.c"
    break;

  case 450: /* subcommand: B  */
#line 571 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x90 ); }
#line 4983 "grammar-secondpass.tab.c"
    break;

  case 451: /* subcommand: C  */
#line 572 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x91 ); }
#line 4989 "grammar-secondpass.tab.c"
    break;

  case 452: /* subcommand: D  */
#line 573 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x92 ); }
#line 4995 "grammar-secondpass.tab.c"
    break;

  case 453: /* subcommand: E  */
#line 574 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x93 ); }
#line 5001 "grammar-secondpass.tab.c"
    break;

  case 454: /* subcommand: H  */
#line 575 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x94 ); }
#line 5007 "grammar-secondpass.tab.c"
    break;

  case 455: /* subcommand: L  */
#line 576 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0x95 ); }
#line 5013 "grammar-secondpass.tab.c"
    break;

  case 456: /* subcommand: PARLEFT HL PARRIGHT  */
#line 577 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x96 ); }
#line 5019 "grammar-secondpass.tab.c"
    break;

  case 457: /* subcommand: expression2  */
#line 578 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0xD6 ); code_putbyte( (yyvsp[0].normal) );}
#line 5025 "grammar-secondpass.tab.c"
    break;

  case 458: /* subcommand: IXH  */
#line 579 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x94 ); }
#line 5031 "grammar-secondpass.tab.c"
    break;

  case 459: /* subcommand: IXL  */
#line 580 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x95 ); }
#line 5037 "grammar-secondpass.tab.c"
    break;

  case 460: /* subcommand: IYH  */
#line 581 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x94 ); }
#line 5043 "grammar-secondpass.tab.c"
    break;

  case 461: /* subcommand: IYL  */
#line 582 "grammar-secondpass.y"
                                                                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x95 ); }
#line 5049 "grammar-secondpass.tab.c"
    break;

  case 462: /* subcommand: PARLEFT IX OPADD expression PARRIGHT  */
#line 583 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x96 ); code_putbyte( (yyvsp[-1].normal) );}
#line 5055 "grammar-secondpass.tab.c"
    break;

  case 463: /* subcommand: PARLEFT IY OPADD expression PARRIGHT  */
#line 584 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x96 ); code_putbyte( (yyvsp[-1].normal) );}
#line 5061 "grammar-secondpass.tab.c"
    break;

  case 464: /* sbccommand: A COMMA A  */
#line 586 "grammar-secondpass.y"
                                                                                                                        { code_putbyte( 0x9F ); }
#line 5067 "grammar-secondpass.tab.c"
    break;

  case 465: /* sbccommand: A COMMA B  */
#line 587 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x98 ); }
#line 5073 "grammar-secondpass.tab.c"
    break;

  case 466: /* sbccommand: A COMMA C  */
#line 588 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x99 ); }
#line 5079 "grammar-secondpass.tab.c"
    break;

  case 467: /* sbccommand: A COMMA D  */
#line 589 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x9A ); }
#line 5085 "grammar-secondpass.tab.c"
    break;

  case 468: /* sbccommand: A COMMA E  */
#line 590 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x9B ); }
#line 5091 "grammar-secondpass.tab.c"
    break;

  case 469: /* sbccommand: A COMMA H  */
#line 591 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x9C ); }
#line 5097 "grammar-secondpass.tab.c"
    break;

  case 470: /* sbccommand: A COMMA L  */
#line 592 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0x9D ); }
#line 5103 "grammar-secondpass.tab.c"
    break;

  case 471: /* sbccommand: A COMMA PARLEFT HL PARRIGHT  */
#line 593 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0x9E ); }
#line 5109 "grammar-secondpass.tab.c"
    break;

  case 472: /* sbccommand: A COMMA expression2  */
#line 594 "grammar-secondpass.y"
                                                                                                                { code_putbyte( 0xDE ); code_putbyte( (yyvsp[0].normal) );}
#line 5115 "grammar-secondpass.tab.c"
    break;

  case 473: /* sbccommand: A COMMA IXH  */
#line 595 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x9C ); }
#line 5121 "grammar-secondpass.tab.c"
    break;

  case 474: /* sbccommand: A COMMA IXL  */
#line 596 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xDD ); code_putbyte( 0x9D ); }
#line 5127 "grammar-secondpass.tab.c"
    break;

  case 475: /* sbccommand: A COMMA IYH  */
#line 597 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x9C ); }
#line 5133 "grammar-secondpass.tab.c"
    break;

  case 476: /* sbccommand: A COMMA IYL  */
#line 598 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xFD ); code_putbyte( 0x9D );  }
#line 5139 "grammar-secondpass.tab.c"
    break;

  case 477: /* sbccommand: A COMMA PARLEFT IX OPADD expression PARRIGHT  */
#line 599 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xDD ); code_putbyte( 0x9E ); code_putbyte( (yyvsp[-1].normal) );}
#line 5145 "grammar-secondpass.tab.c"
    break;

  case 478: /* sbccommand: A COMMA PARLEFT IY OPADD expression PARRIGHT  */
#line 600 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xFD ); code_putbyte( 0x9E ); code_putbyte( (yyvsp[-1].normal) );}
#line 5151 "grammar-secondpass.tab.c"
    break;

  case 479: /* sbccommand: HL COMMA BC  */
#line 601 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x42 ); }
#line 5157 "grammar-secondpass.tab.c"
    break;

  case 480: /* sbccommand: HL COMMA DE  */
#line 602 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x52 ); }
#line 5163 "grammar-secondpass.tab.c"
    break;

  case 481: /* sbccommand: HL COMMA HL  */
#line 603 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x62 ); }
#line 5169 "grammar-secondpass.tab.c"
    break;

  case 482: /* sbccommand: HL COMMA SP  */
#line 604 "grammar-secondpass.y"
                                                                                                                                { code_putbyte( 0xED ); code_putbyte( 0x72 ); }
#line 5175 "grammar-secondpass.tab.c"
    break;

  case 483: /* excommand: AF COMMA AFPLUS  */
#line 606 "grammar-secondpass.y"
                                                                        { code_putbyte( 0x08); }
#line 5181 "grammar-secondpass.tab.c"
    break;

  case 484: /* excommand: PARLEFT SP PARRIGHT COMMA HL  */
#line 607 "grammar-secondpass.y"
                                                                { code_putbyte( 0xE3); }
#line 5187 "grammar-secondpass.tab.c"
    break;

  case 485: /* excommand: DE COMMA HL  */
#line 608 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0xEB); }
#line 5193 "grammar-secondpass.tab.c"
    break;

  case 486: /* excommand: PARLEFT SP PARRIGHT COMMA IX  */
#line 609 "grammar-secondpass.y"
                                                                { code_putbyte( 0xDD ); code_putbyte( 0xE3 ); }
#line 5199 "grammar-secondpass.tab.c"
    break;

  case 487: /* excommand: PARLEFT SP PARRIGHT COMMA IY  */
#line 610 "grammar-secondpass.y"
                                                                { code_putbyte( 0xFD ); code_putbyte( 0xE3 ); }
#line 5205 "grammar-secondpass.tab.c"
    break;

  case 488: /* pushcommand: BC  */
#line 612 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xC5); }
#line 5211 "grammar-secondpass.tab.c"
    break;

  case 489: /* pushcommand: DE  */
#line 613 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xD5); }
#line 5217 "grammar-secondpass.tab.c"
    break;

  case 490: /* pushcommand: HL  */
#line 614 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xE5); }
#line 5223 "grammar-secondpass.tab.c"
    break;

  case 491: /* pushcommand: AF  */
#line 615 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xF5); }
#line 5229 "grammar-secondpass.tab.c"
    break;

  case 492: /* pushcommand: IX  */
#line 616 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD); code_putbyte( 0xE5); }
#line 5235 "grammar-secondpass.tab.c"
    break;

  case 493: /* pushcommand: IY  */
#line 617 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD); code_putbyte( 0xE5); }
#line 5241 "grammar-secondpass.tab.c"
    break;

  case 494: /* popcommand: BC  */
#line 619 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xC1); }
#line 5247 "grammar-secondpass.tab.c"
    break;

  case 495: /* popcommand: DE  */
#line 620 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xD1); }
#line 5253 "grammar-secondpass.tab.c"
    break;

  case 496: /* popcommand: HL  */
#line 621 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xE1); }
#line 5259 "grammar-secondpass.tab.c"
    break;

  case 497: /* popcommand: AF  */
#line 622 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xF1); }
#line 5265 "grammar-secondpass.tab.c"
    break;

  case 498: /* popcommand: IX  */
#line 623 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xDD); code_putbyte( 0xE1); }
#line 5271 "grammar-secondpass.tab.c"
    break;

  case 499: /* popcommand: IY  */
#line 624 "grammar-secondpass.y"
                                                                                                { code_putbyte( 0xFD); code_putbyte( 0xE1); }
#line 5277 "grammar-secondpass.tab.c"
    break;

  case 500: /* jrcommand: INTEGER  */
#line 626 "grammar-secondpass.y"
                                                                { code_putbyte( 0x18 ); code_putbyte( (yyvsp[0].normal) - pc_get()-1 );  }
#line 5283 "grammar-secondpass.tab.c"
    break;

  case 501: /* jrcommand: NZ COMMA INTEGER  */
#line 627 "grammar-secondpass.y"
                                                                                { code_putbyte( 0x20 ); code_putbyte( (yyvsp[0].normal) - pc_get()-1 );  }
#line 5289 "grammar-secondpass.tab.c"
    break;

  case 502: /* jrcommand: Z COMMA INTEGER  */
#line 628 "grammar-secondpass.y"
                                                                                { code_putbyte( 0x28 ); code_putbyte( (yyvsp[0].normal) - pc_get()-1 );  }
#line 5295 "grammar-secondpass.tab.c"
    break;

  case 503: /* jrcommand: NC COMMA INTEGER  */
#line 629 "grammar-secondpass.y"
                                                                                { code_putbyte( 0x30 ); code_putbyte( (yyvsp[0].normal) - pc_get()-1 );  }
#line 5301 "grammar-secondpass.tab.c"
    break;

  case 504: /* jrcommand: C COMMA INTEGER  */
#line 630 "grammar-secondpass.y"
                                                                                { code_putbyte( 0x38 ); code_putbyte( (yyvsp[0].normal) - pc_get()-1 );  }
#line 5307 "grammar-secondpass.tab.c"
    break;

  case 505: /* jpcommand: expression  */
#line 632 "grammar-secondpass.y"
                                                                { code_putbyte( 0xC3 ); code_putword( (yyvsp[0].normal) ); }
#line 5313 "grammar-secondpass.tab.c"
    break;

  case 506: /* jpcommand: NZ COMMA expression  */
#line 633 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xC2 ); code_putword( (yyvsp[0].normal) ); }
#line 5319 "grammar-secondpass.tab.c"
    break;

  case 507: /* jpcommand: Z COMMA expression  */
#line 634 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xCA ); code_putword( (yyvsp[0].normal) ); }
#line 5325 "grammar-secondpass.tab.c"
    break;

  case 508: /* jpcommand: NC COMMA expression  */
#line 635 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xD2 ); code_putword( (yyvsp[0].normal) ); }
#line 5331 "grammar-secondpass.tab.c"
    break;

  case 509: /* jpcommand: C COMMA expression  */
#line 636 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xDA ); code_putword( (yyvsp[0].normal) ); }
#line 5337 "grammar-secondpass.tab.c"
    break;

  case 510: /* jpcommand: PO COMMA expression  */
#line 637 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xE2 ); code_putword( (yyvsp[0].normal) ); }
#line 5343 "grammar-secondpass.tab.c"
    break;

  case 511: /* jpcommand: PE COMMA expression  */
#line 638 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xEA ); code_putword( (yyvsp[0].normal) ); }
#line 5349 "grammar-secondpass.tab.c"
    break;

  case 512: /* jpcommand: P COMMA expression  */
#line 639 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xF2 ); code_putword( (yyvsp[0].normal) ); }
#line 5355 "grammar-secondpass.tab.c"
    break;

  case 513: /* jpcommand: M COMMA expression  */
#line 640 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xFA ); code_putword( (yyvsp[0].normal) ); }
#line 5361 "grammar-secondpass.tab.c"
    break;

  case 514: /* jpcommand: PARLEFT HL PARRIGHT  */
#line 641 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xE9 ); }
#line 5367 "grammar-secondpass.tab.c"
    break;

  case 515: /* jpcommand: PARLEFT IX PARRIGHT  */
#line 642 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xDD); code_putbyte( 0xE9 ); }
#line 5373 "grammar-secondpass.tab.c"
    break;

  case 516: /* jpcommand: PARLEFT IY PARRIGHT  */
#line 643 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xFD); code_putbyte( 0xE9 ); }
#line 5379 "grammar-secondpass.tab.c"
    break;

  case 517: /* callcommand: expression  */
#line 645 "grammar-secondpass.y"
                                                                { code_putbyte( 0xCD ); code_putword( (yyvsp[0].normal) ); }
#line 5385 "grammar-secondpass.tab.c"
    break;

  case 518: /* callcommand: NZ COMMA expression  */
#line 646 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xC4 ); code_putword( (yyvsp[0].normal) ); }
#line 5391 "grammar-secondpass.tab.c"
    break;

  case 519: /* callcommand: Z COMMA expression  */
#line 647 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xCC ); code_putword( (yyvsp[0].normal) ); }
#line 5397 "grammar-secondpass.tab.c"
    break;

  case 520: /* callcommand: NC COMMA expression  */
#line 648 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xD4 ); code_putword( (yyvsp[0].normal) ); }
#line 5403 "grammar-secondpass.tab.c"
    break;

  case 521: /* callcommand: C COMMA expression  */
#line 649 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xDC ); code_putword( (yyvsp[0].normal) ); }
#line 5409 "grammar-secondpass.tab.c"
    break;

  case 522: /* callcommand: PO COMMA expression  */
#line 650 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xE4 ); code_putword( (yyvsp[0].normal) ); }
#line 5415 "grammar-secondpass.tab.c"
    break;

  case 523: /* callcommand: PE COMMA expression  */
#line 651 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xEC ); code_putword( (yyvsp[0].normal) ); }
#line 5421 "grammar-secondpass.tab.c"
    break;

  case 524: /* callcommand: P COMMA expression  */
#line 652 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xF4 ); code_putword( (yyvsp[0].normal) ); }
#line 5427 "grammar-secondpass.tab.c"
    break;

  case 525: /* callcommand: M COMMA expression  */
#line 653 "grammar-secondpass.y"
                                                                                { code_putbyte( 0xFC ); code_putword( (yyvsp[0].normal) ); }
#line 5433 "grammar-secondpass.tab.c"
    break;

  case 526: /* djnzcommand: INTEGER  */
#line 655 "grammar-secondpass.y"
                                                                                        { code_putbyte( 0x10 ); code_putbyte( (yyvsp[0].normal) - pc_get()-1 );  }
#line 5439 "grammar-secondpass.tab.c"
    break;

  case 527: /* djnzcommand: LITERAL  */
#line 656 "grammar-secondpass.y"
                                                                                                                                {
																		int k = pc_get();
																		if ( sym_lookuplabel((yyvsp[0].literal)) == TRUE ) {
																			int jump = sym_getvalue((yyvsp[0].literal));
																			int diff = jump - k;
																			if ( diff > 127 || diff < -128 ) { 
																				generalerror("DJNZ Jump is too far away");
																			}
																			else {
																			   code_putbyte( 0x10 ); code_putbyte( diff );  
																			}
																		}
																		else {
																			generalerror("Unknown Literal or Label");
																		}	
																	}
#line 5460 "grammar-secondpass.tab.c"
    break;

  case 528: /* retcommand: %empty  */
#line 674 "grammar-secondpass.y"
                                                                                        {  code_putbyte( 0xC9 );}
#line 5466 "grammar-secondpass.tab.c"
    break;

  case 529: /* retcommand: NZ  */
#line 675 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xC0 ); }
#line 5472 "grammar-secondpass.tab.c"
    break;

  case 530: /* retcommand: Z  */
#line 676 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xC8 ); }
#line 5478 "grammar-secondpass.tab.c"
    break;

  case 531: /* retcommand: NC  */
#line 677 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xD0 ); }
#line 5484 "grammar-secondpass.tab.c"
    break;

  case 532: /* retcommand: C  */
#line 678 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xD8 ); }
#line 5490 "grammar-secondpass.tab.c"
    break;

  case 533: /* retcommand: PO  */
#line 679 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xE0 ); }
#line 5496 "grammar-secondpass.tab.c"
    break;

  case 534: /* retcommand: PE  */
#line 680 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xE8 ); }
#line 5502 "grammar-secondpass.tab.c"
    break;

  case 535: /* retcommand: P  */
#line 681 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xF0 ); }
#line 5508 "grammar-secondpass.tab.c"
    break;

  case 536: /* retcommand: M  */
#line 682 "grammar-secondpass.y"
                                                                                                {  code_putbyte( 0xF8 ); }
#line 5514 "grammar-secondpass.tab.c"
    break;

  case 537: /* rstcommand: expression  */
#line 684 "grammar-secondpass.y"
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
#line 5533 "grammar-secondpass.tab.c"
    break;

  case 538: /* expression: expritem  */
#line 699 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[0].normal); }
#line 5539 "grammar-secondpass.tab.c"
    break;

  case 539: /* expression: expression OPADD expritem  */
#line 700 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + (yyvsp[0].normal); }
#line 5545 "grammar-secondpass.tab.c"
    break;

  case 540: /* expression: expression OPSUB expritem  */
#line 701 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) - (yyvsp[0].normal); }
#line 5551 "grammar-secondpass.tab.c"
    break;

  case 541: /* expression: expression OPMUL expritem  */
#line 702 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) * (yyvsp[0].normal); }
#line 5557 "grammar-secondpass.tab.c"
    break;

  case 542: /* expression: expression OPDIV expritem  */
#line 703 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) / (yyvsp[0].normal); }
#line 5563 "grammar-secondpass.tab.c"
    break;

  case 543: /* expression: PARLEFT expression PARRIGHT  */
#line 704 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-1].normal); }
#line 5569 "grammar-secondpass.tab.c"
    break;

  case 544: /* expression2: expritem  */
#line 706 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[0].normal); }
#line 5575 "grammar-secondpass.tab.c"
    break;

  case 545: /* expression2: expression2 OPADD expritem  */
#line 707 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + (yyvsp[0].normal); }
#line 5581 "grammar-secondpass.tab.c"
    break;

  case 546: /* expression2: expression2 OPSUB expritem  */
#line 708 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) - (yyvsp[0].normal); }
#line 5587 "grammar-secondpass.tab.c"
    break;

  case 547: /* expression2: expression2 OPMUL expritem  */
#line 709 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) * (yyvsp[0].normal); }
#line 5593 "grammar-secondpass.tab.c"
    break;

  case 548: /* expression2: expression2 OPDIV expritem  */
#line 710 "grammar-secondpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) / (yyvsp[0].normal); }
#line 5599 "grammar-secondpass.tab.c"
    break;

  case 549: /* expression2: expression2 OPADD PARLEFT expression2 PARRIGHT  */
#line 711 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) + (yyvsp[-1].normal); }
#line 5605 "grammar-secondpass.tab.c"
    break;

  case 550: /* expression2: expression2 OPSUB PARLEFT expression2 PARRIGHT  */
#line 712 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) - (yyvsp[-1].normal); }
#line 5611 "grammar-secondpass.tab.c"
    break;

  case 551: /* expression2: expression2 OPMUL PARLEFT expression2 PARRIGHT  */
#line 713 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) * (yyvsp[-1].normal); }
#line 5617 "grammar-secondpass.tab.c"
    break;

  case 552: /* expression2: expression2 OPDIV PARLEFT expression2 PARRIGHT  */
#line 714 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) / (yyvsp[-1].normal); }
#line 5623 "grammar-secondpass.tab.c"
    break;

  case 553: /* expression2: PARLEFT expression2 PARRIGHT OPADD expritem  */
#line 715 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) + (yyvsp[0].normal); }
#line 5629 "grammar-secondpass.tab.c"
    break;

  case 554: /* expression2: PARLEFT expression2 PARRIGHT OPSUB expritem  */
#line 716 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) - (yyvsp[0].normal); }
#line 5635 "grammar-secondpass.tab.c"
    break;

  case 555: /* expression2: PARLEFT expression2 PARRIGHT OPMUL expritem  */
#line 717 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) * (yyvsp[0].normal); }
#line 5641 "grammar-secondpass.tab.c"
    break;

  case 556: /* expression2: PARLEFT expression2 PARRIGHT OPDIV expritem  */
#line 718 "grammar-secondpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) / (yyvsp[0].normal); }
#line 5647 "grammar-secondpass.tab.c"
    break;

  case 557: /* expression2: PARLEFT expression2 PARRIGHT OPADD PARLEFT expression2 PARRIGHT  */
#line 719 "grammar-secondpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) + (yyvsp[-1].normal); }
#line 5653 "grammar-secondpass.tab.c"
    break;

  case 558: /* expression2: PARLEFT expression2 PARRIGHT OPSUB PARLEFT expression2 PARRIGHT  */
#line 720 "grammar-secondpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) - (yyvsp[-1].normal); }
#line 5659 "grammar-secondpass.tab.c"
    break;

  case 559: /* expression2: PARLEFT expression2 PARRIGHT OPMUL PARLEFT expression2 PARRIGHT  */
#line 721 "grammar-secondpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) * (yyvsp[-1].normal); }
#line 5665 "grammar-secondpass.tab.c"
    break;

  case 560: /* expression2: PARLEFT expression2 PARRIGHT OPDIV PARLEFT expression2 PARRIGHT  */
#line 722 "grammar-secondpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) / (yyvsp[-1].normal); }
#line 5671 "grammar-secondpass.tab.c"
    break;

  case 561: /* expritem: INTEGER  */
#line 724 "grammar-secondpass.y"
                                                        {	(yyval.normal) = (yyvsp[0].normal); }
#line 5677 "grammar-secondpass.tab.c"
    break;

  case 562: /* expritem: LITERAL  */
#line 725 "grammar-secondpass.y"
                                                                {	
										if ( sym_lookuplabel((yyvsp[0].literal)) == TRUE ) {
											(yyval.normal) = sym_getvalue((yyvsp[0].literal));
										}
										else {
											generalerror("Unknown Literal or Label");
										}	
									}
#line 5690 "grammar-secondpass.tab.c"
    break;

  case 563: /* reg8: A  */
#line 734 "grammar-secondpass.y"
                        { (yyval.normal) = 7; }
#line 5696 "grammar-secondpass.tab.c"
    break;

  case 564: /* reg8: B  */
#line 735 "grammar-secondpass.y"
                    { (yyval.normal) = 0; }
#line 5702 "grammar-secondpass.tab.c"
    break;

  case 565: /* reg8: C  */
#line 736 "grammar-secondpass.y"
                    { (yyval.normal) = 1; }
#line 5708 "grammar-secondpass.tab.c"
    break;

  case 566: /* reg8: D  */
#line 737 "grammar-secondpass.y"
                    { (yyval.normal) = 2; }
#line 5714 "grammar-secondpass.tab.c"
    break;

  case 567: /* reg8: E  */
#line 738 "grammar-secondpass.y"
                    { (yyval.normal) = 3; }
#line 5720 "grammar-secondpass.tab.c"
    break;

  case 568: /* reg8: H  */
#line 739 "grammar-secondpass.y"
                    { (yyval.normal) = 4; }
#line 5726 "grammar-secondpass.tab.c"
    break;

  case 569: /* reg8: L  */
#line 740 "grammar-secondpass.y"
                    { (yyval.normal) = 5; }
#line 5732 "grammar-secondpass.tab.c"
    break;


#line 5736 "grammar-secondpass.tab.c"

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

