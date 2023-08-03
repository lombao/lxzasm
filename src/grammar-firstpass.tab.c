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
#define YYSTYPE         FIRSTPASSSTYPE
/* Substitute the variable and function names.  */
#define yyparse         firstpassparse
#define yylex           firstpasslex
#define yyerror         firstpasserror
#define yydebug         firstpassdebug
#define yynerrs         firstpassnerrs
#define yylval          firstpasslval
#define yychar          firstpasschar


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

#include "grammar-firstpass.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ENTER = 3,                      /* ENTER  */
  YYSYMBOL_EQU = 4,                        /* EQU  */
  YYSYMBOL_ORG = 5,                        /* ORG  */
  YYSYMBOL_ALIGN = 6,                      /* ALIGN  */
  YYSYMBOL_END = 7,                        /* END  */
  YYSYMBOL_INCBIN = 8,                     /* INCBIN  */
  YYSYMBOL_DEFS = 9,                       /* DEFS  */
  YYSYMBOL_DEFB = 10,                      /* DEFB  */
  YYSYMBOL_DEFM = 11,                      /* DEFM  */
  YYSYMBOL_DEFW = 12,                      /* DEFW  */
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
  YYSYMBOL_RLCA = 58,                      /* RLCA  */
  YYSYMBOL_RRCA = 59,                      /* RRCA  */
  YYSYMBOL_RLA = 60,                       /* RLA  */
  YYSYMBOL_RLC = 61,                       /* RLC  */
  YYSYMBOL_SLA = 62,                       /* SLA  */
  YYSYMBOL_SLL = 63,                       /* SLL  */
  YYSYMBOL_SRL = 64,                       /* SRL  */
  YYSYMBOL_RR = 65,                        /* RR  */
  YYSYMBOL_RL = 66,                        /* RL  */
  YYSYMBOL_RRC = 67,                       /* RRC  */
  YYSYMBOL_SRA = 68,                       /* SRA  */
  YYSYMBOL_BIT = 69,                       /* BIT  */
  YYSYMBOL_SET = 70,                       /* SET  */
  YYSYMBOL_RES = 71,                       /* RES  */
  YYSYMBOL_LDI = 72,                       /* LDI  */
  YYSYMBOL_LDIR = 73,                      /* LDIR  */
  YYSYMBOL_PUSH = 74,                      /* PUSH  */
  YYSYMBOL_POP = 75,                       /* POP  */
  YYSYMBOL_CP = 76,                        /* CP  */
  YYSYMBOL_CPI = 77,                       /* CPI  */
  YYSYMBOL_CPIR = 78,                      /* CPIR  */
  YYSYMBOL_CPD = 79,                       /* CPD  */
  YYSYMBOL_CPDR = 80,                      /* CPDR  */
  YYSYMBOL_EX = 81,                        /* EX  */
  YYSYMBOL_EXX = 82,                       /* EXX  */
  YYSYMBOL_SCF = 83,                       /* SCF  */
  YYSYMBOL_CCF = 84,                       /* CCF  */
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
  YYSYMBOL_LABEL = 103,                    /* LABEL  */
  YYSYMBOL_LITERAL = 104,                  /* LITERAL  */
  YYSYMBOL_INTEGER = 105,                  /* INTEGER  */
  YYSYMBOL_STRING = 106,                   /* STRING  */
  YYSYMBOL_PARLEFT = 107,                  /* PARLEFT  */
  YYSYMBOL_PARRIGHT = 108,                 /* PARRIGHT  */
  YYSYMBOL_OPADD = 109,                    /* OPADD  */
  YYSYMBOL_OPSUB = 110,                    /* OPSUB  */
  YYSYMBOL_OPMUL = 111,                    /* OPMUL  */
  YYSYMBOL_OPDIV = 112,                    /* OPDIV  */
  YYSYMBOL_YYACCEPT = 113,                 /* $accept  */
  YYSYMBOL_program = 114,                  /* program  */
  YYSYMBOL_lines = 115,                    /* lines  */
  YYSYMBOL_line = 116,                     /* line  */
  YYSYMBOL_directive = 117,                /* directive  */
  YYSYMBOL_instruction = 118,              /* instruction  */
  YYSYMBOL_slacommand = 119,               /* slacommand  */
  YYSYMBOL_bitcommand = 120,               /* bitcommand  */
  YYSYMBOL_incommand = 121,                /* incommand  */
  YYSYMBOL_outcommand = 122,               /* outcommand  */
  YYSYMBOL_ldcommand = 123,                /* ldcommand  */
  YYSYMBOL_orcommand = 124,                /* orcommand  */
  YYSYMBOL_inccommand = 125,               /* inccommand  */
  YYSYMBOL_deccommand = 126,               /* deccommand  */
  YYSYMBOL_adccommand = 127,               /* adccommand  */
  YYSYMBOL_addcommand = 128,               /* addcommand  */
  YYSYMBOL_subcommand = 129,               /* subcommand  */
  YYSYMBOL_sbccommand = 130,               /* sbccommand  */
  YYSYMBOL_excommand = 131,                /* excommand  */
  YYSYMBOL_djnzcommand = 132,              /* djnzcommand  */
  YYSYMBOL_jrcommand = 133,                /* jrcommand  */
  YYSYMBOL_jpcommand = 134,                /* jpcommand  */
  YYSYMBOL_callcommand = 135,              /* callcommand  */
  YYSYMBOL_pushcommand = 136,              /* pushcommand  */
  YYSYMBOL_popcommand = 137,               /* popcommand  */
  YYSYMBOL_reg8 = 138,                     /* reg8  */
  YYSYMBOL_reg16 = 139,                    /* reg16  */
  YYSYMBOL_expression = 140,               /* expression  */
  YYSYMBOL_expression2 = 141,              /* expression2  */
  YYSYMBOL_listexpr = 142,                 /* listexpr  */
  YYSYMBOL_expritem = 143,                 /* expritem  */
  YYSYMBOL_indexreg = 144,                 /* indexreg  */
  YYSYMBOL_index8reg = 145,                /* index8reg  */
  YYSYMBOL_condflag = 146                  /* condflag  */
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
         || (defined FIRSTPASSSTYPE_IS_TRIVIAL && FIRSTPASSSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  212
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1044

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  458

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   367


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
     105,   106,   107,   108,   109,   110,   111,   112
};

#if FIRSTPASSDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    93,    93,    95,    96,    98,    99,   100,   101,   102,
     103,   104,   105,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   186,   187,   188,   190,   191,   192,   194,
     195,   196,   198,   199,   200,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   233,   234,   235,   236,   237,   239,   240,   241,
     242,   243,   244,   246,   247,   248,   249,   250,   251,   253,
     254,   255,   256,   257,   258,   260,   261,   262,   263,   264,
     265,   266,   268,   269,   270,   271,   272,   274,   275,   276,
     277,   278,   279,   281,   282,   283,   284,   286,   288,   289,
     291,   292,   293,   294,   296,   297,   299,   300,   301,   303,
     304,   305,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   319,   320,   321,   322,   324,   325,   326,   327,
     328,   329,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   349,
     350,   351,   352,   354,   355,   364,   365,   367,   368,   369,
     370,   372,   373,   374,   375,   376,   377,   378,   379
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
  "\"end of file\"", "error", "\"invalid token\"", "ENTER", "EQU", "ORG",
  "ALIGN", "END", "INCBIN", "DEFS", "DEFB", "DEFM", "DEFW", "IXH", "IXL",
  "IYH", "IYL", "AF", "BC", "DE", "HL", "IX", "IY", "SP", "AFPLUS", "A",
  "F", "B", "C", "D", "E", "H", "L", "I", "R", "INC", "DEC", "ADC", "ADD",
  "SUB", "SBC", "DJNZ", "JR", "RET", "RETN", "RETI", "RST", "JP", "CALL",
  "DI", "EI", "LD", "HALT", "NOP", "XOR", "AND", "OR", "NEG", "RLCA",
  "RRCA", "RLA", "RLC", "SLA", "SLL", "SRL", "RR", "RL", "RRC", "SRA",
  "BIT", "SET", "RES", "LDI", "LDIR", "PUSH", "POP", "CP", "CPI", "CPIR",
  "CPD", "CPDR", "EX", "EXX", "SCF", "CCF", "COMMA", "NZ", "Z", "NC", "PO",
  "PE", "P", "M", "IN", "OUT", "INI", "INIR", "IND", "INDR", "OUTI",
  "OUTD", "OTIR", "OTDR", "LABEL", "LITERAL", "INTEGER", "STRING",
  "PARLEFT", "PARRIGHT", "OPADD", "OPSUB", "OPMUL", "OPDIV", "$accept",
  "program", "lines", "line", "directive", "instruction", "slacommand",
  "bitcommand", "incommand", "outcommand", "ldcommand", "orcommand",
  "inccommand", "deccommand", "adccommand", "addcommand", "subcommand",
  "sbccommand", "excommand", "djnzcommand", "jrcommand", "jpcommand",
  "callcommand", "pushcommand", "popcommand", "reg8", "reg16",
  "expression", "expression2", "listexpr", "expritem", "indexreg",
  "index8reg", "condflag", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-98)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     562,   -98,   -97,   169,   -98,   -96,   169,   156,   -90,   169,
      67,   108,   -13,   151,   165,    -2,   169,   472,   371,   -98,
     -98,   -98,   830,   472,   -98,   -98,   518,   -98,   -98,   413,
     413,   413,   -98,   -98,   -98,   -98,   660,   660,   660,   660,
     660,   660,   660,   -74,   -74,   -74,   -98,   -98,   288,   460,
     413,   -98,   -98,   -98,   -98,    13,   -98,   -98,   -98,   808,
     818,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   664,
      74,    29,   562,   -98,    40,    43,   -98,   -98,   -98,   169,
     102,   -98,   -98,   -76,   -98,   -37,   -98,   -98,   102,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   276,
     -98,   -98,   -98,   -98,   -98,   513,   -98,   -98,   -98,   -98,
     -98,   -34,   -25,   -98,    20,    22,   -98,    58,    52,   -98,
     -98,   102,   -98,    62,    70,   -98,   -98,   102,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   102,    73,   -98,
      82,   -98,   102,    83,   -98,   102,    84,    90,    99,   103,
     131,   135,   141,    44,   -98,   145,   124,   -98,   -98,   102,
     -98,   -98,   -98,   632,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   149,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   150,   153,    61,   -98,    63,
     -98,   157,   122,   -98,   158,   -98,   169,   148,   109,   160,
     -98,   169,   -98,   -98,   -98,   -98,     6,   -36,   -36,   -36,
     -36,   169,   578,   101,   143,   132,   176,   187,   477,   187,
     756,   187,   142,   179,   187,   778,   169,   163,   184,   169,
     169,   248,   266,   286,   345,   349,   380,   481,   186,   207,
     -98,   192,   390,   204,   217,   205,   225,   839,   229,   238,
     234,   236,   180,   240,   239,    -1,   -98,   -98,   102,   -98,
     -98,   -98,   -98,   -98,   102,   -98,   -98,   -98,   169,   -98,
     169,   -98,   140,   -98,   102,   -98,   -98,   144,   -98,   102,
     -98,   -98,   -98,   169,   -98,   282,   -98,   102,   -98,   102,
     -98,   -98,   102,   102,   481,   155,   481,   155,   481,   155,
     481,   155,   481,   155,   481,   155,   221,   265,   269,   591,
     913,   917,   921,   169,    44,   -98,   155,   -98,   169,   -98,
     169,   734,   -98,   -98,   -98,   275,   -98,    78,   -98,    97,
     -98,   228,   255,   264,   268,   267,   272,   404,   270,   274,
     420,   445,   539,   569,   641,   665,   212,   788,   922,   481,
     -98,   481,   -98,   481,   -98,   481,   -98,   687,   280,   745,
     283,   766,   779,   287,   292,   758,   289,   789,   302,   799,
     -98,   -98,   -98,   169,   -98,   169,   -98,   -98,   169,   212,
     212,   212,   212,   212,   212,   925,   929,   933,   937,   -98,
     155,   -98,   -98,   -98,   -98,   -98,   -98,   819,   849,   854,
     859,   299,   -98,   212,   169,   -98,   -98,   -98,   481,   -98,
     -98,   -98,   -98,   -98,   -98,   864,   869,   874,   481,   -98,
     481,   -98,   481,   -98,   481,   -98,   -98,   -98,   -98,   -98,
     798,   879,   884,   -98,   -98,   -98,   889,   894,   899,   904,
     -98,   102,   -98,   -98,   -98,   -98,   -98,   -98
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,     0,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
      37,    38,     0,     0,    24,    25,     0,    26,    23,     0,
       0,     0,    52,    27,    28,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,    32,    31,    34,    33,     0,    39,    49,    30,     0,
       0,    40,    41,    42,    43,    44,    46,    45,    47,     0,
       0,     0,     2,     3,     0,     0,    20,   224,   223,     0,
      22,   196,    21,    14,   220,    16,   219,    17,    18,   227,
     228,   229,   230,   193,   194,   192,   225,   226,   195,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,     0,
      58,   127,   128,   131,   132,     0,    59,   133,   134,   137,
     138,     0,     0,    60,     0,     0,    61,     0,     0,    62,
     152,   153,   156,     0,     0,    63,    64,   167,   234,   231,
     232,   233,   235,   236,   237,   238,    65,   168,     0,    48,
       0,    66,   170,     0,    67,   174,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,    55,   122,   123,
     126,    56,    54,     0,    82,    83,    76,    78,    80,    79,
      81,    77,     0,    73,    75,    74,   178,    69,   176,   177,
     181,    70,   179,   180,    57,     0,     0,     0,    68,     0,
      71,     0,     0,    72,     0,    11,     0,     0,     0,     0,
       7,     0,     1,     4,     6,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     8,    19,   201,
     197,   198,   199,   200,    15,   222,   221,   129,     0,   135,
       0,   144,     0,   140,   139,   141,   150,     0,   146,   145,
     147,   151,   154,     0,   162,     0,   158,   157,   159,   169,
     172,   173,   171,   175,     0,   109,     0,   110,     0,   108,
       0,   112,     0,   113,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,   124,     0,    84,
       0,     0,    86,   163,   165,     0,    91,     0,    94,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,     0,   204,     0,   205,     0,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,   136,   142,     0,   148,     0,   155,   160,     0,   104,
     103,   102,   106,   107,   105,     0,     0,     0,     0,   100,
     101,   119,   120,   118,   121,   116,   117,     0,     0,     0,
       0,     0,    97,    98,     0,   125,    85,    87,     0,   164,
     166,    89,    90,    93,    92,     0,     0,     0,     0,   211,
       0,   212,     0,   213,     0,   214,   207,   208,   209,   210,
       0,     0,     0,   143,   149,   161,     0,     0,     0,     0,
     115,   114,    99,    88,   215,   216,   217,   218
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -98,   340,   344,   356,    17,   178,   -98,   -98,
     -98,   -26,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,    11,   -10,    -3,   162,   -98,
      37,     4,    65,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    71,    72,    73,    74,    75,   174,   183,   200,   203,
     164,   167,   110,   116,   123,   126,   129,   135,   198,   136,
     146,   151,   154,   187,   191,   175,   112,   216,   249,    85,
      81,   113,   170,   148
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   118,   340,    83,   171,   172,    88,   121,    76,   221,
      82,   131,   122,   137,   147,   119,    87,   127,   133,   152,
     155,   111,   117,   134,   194,   130,   169,   169,   169,   212,
     195,   182,   196,   217,   218,   219,   220,   165,   188,   192,
     168,   168,   168,   214,    86,   149,   215,   169,   222,   153,
     156,   227,   189,   193,   176,   177,   178,   179,   180,   181,
     228,   168,    93,    94,    95,    96,    97,    98,    77,    78,
     201,   204,   232,    96,    97,   114,   120,   210,   211,   132,
      89,    90,    91,    92,   260,    93,    94,    95,    96,    97,
      98,   261,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   237,    96,    97,   229,   376,   230,   217,   218,
     219,   220,   266,   224,   269,   217,   218,   219,   220,   226,
     197,    89,    90,    91,    92,   378,    93,    94,    95,    96,
      97,    98,   233,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   231,   253,    96,    97,   234,    77,    78,
     263,   247,   211,   248,   238,   235,    77,    78,   236,    79,
     343,    96,    97,   267,   345,    96,    97,   251,   239,   240,
     254,   124,    96,    97,   109,   241,   125,   256,    89,    90,
      91,    92,    77,    78,   242,   247,    77,    78,   243,    79,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     250,    77,    78,   265,   247,    93,    94,    95,   268,   277,
      98,   217,   218,   219,   220,   115,   244,   281,   274,   286,
     245,   291,   184,   185,   294,   284,   246,   289,    77,    78,
     252,    79,   297,   299,   257,   258,   302,   303,   259,   283,
     279,   288,   262,   264,    77,    78,   296,    79,    77,    78,
     292,    79,   278,   333,   270,   271,   272,   273,   334,   276,
      77,    78,    84,   325,   319,   320,   321,   322,   332,    77,
      78,   300,   128,    77,    78,   341,    79,   342,   250,   250,
     250,   250,   250,   250,   250,   280,   344,   337,   293,   250,
     347,   346,   301,   285,   317,   290,   223,    96,    97,   349,
     298,   323,   348,    96,    97,   186,    93,    94,    95,    96,
      97,    98,   327,   329,   368,   318,   319,   320,   321,   322,
     367,   395,   396,   397,   398,   371,   328,   372,   370,   356,
     319,   320,   321,   322,   330,   374,   380,   217,   218,   219,
     220,   250,   335,   250,   336,   250,   339,   250,   338,   250,
     357,   250,    77,    78,   358,   304,   360,   362,   364,   366,
     375,   250,   406,   381,   217,   218,   219,   220,   399,   405,
      77,    78,   382,   306,   250,   384,   250,   383,   387,   420,
     425,   385,   426,   388,   440,   427,    77,    78,   412,    79,
      77,    78,   414,   308,   250,   417,   250,   421,   250,   138,
     250,   418,   250,   305,   307,   309,   311,   313,   315,   316,
     423,   441,   213,   208,   326,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   209,    89,    90,    91,    92,
       0,     0,   429,   431,   433,   435,     0,   451,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,    77,
      78,   450,   310,    77,    78,   250,   312,   139,   140,   141,
     142,   143,   144,   145,     0,   250,   350,   250,   351,   250,
     352,   250,   353,     0,   354,     0,   355,   190,    93,    94,
      95,    96,    97,    98,    77,    78,   369,   314,     0,     0,
      89,    90,    91,    92,    77,    78,     0,   324,     0,   377,
     138,   379,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   386,   217,   218,   219,   220,    77,    78,   400,
     166,   407,     0,   408,     0,   409,     0,   410,   389,   319,
     320,   321,   322,   225,    96,    97,   157,   158,   159,   160,
     161,   162,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   390,   319,   320,   321,   322,   139,   140,
     141,   142,   143,   144,   145,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,     0,    77,    78,     0,    79,
     442,    77,    78,     0,   282,    77,    78,     0,   247,     0,
     446,     0,   447,     0,   448,     0,   449,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   163,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,   391,   319,   320,
     321,   322,   255,    96,    97,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   205,   206,     2,
       3,     4,     5,     6,     7,     8,     9,   392,   319,   320,
     321,   322,    77,    78,   275,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    77,    78,     0,   359,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,   393,
     319,   320,   321,   322,   373,    96,    97,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   173,   207,    89,
      90,    91,    92,   394,   319,   320,   321,   322,   419,    96,
      97,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    89,    90,    91,    92,   411,   217,   218,   219,   220,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   413,   319,   320,   321,   322,   138,     0,
      77,    78,     0,   287,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   415,   217,   218,   219,   220,     0,
       0,     0,    77,    78,     0,   295,     0,   416,   217,   218,
     219,   220,    77,    78,     0,   247,     0,   422,   319,   320,
     321,   322,    77,    78,     0,    79,     0,   424,   319,   320,
     321,   322,     0,     0,     0,   199,   139,   140,   141,   142,
     143,   144,   145,     0,     0,   202,     0,   436,   319,   320,
     321,   322,     0,     0,    77,    78,     0,   150,     0,     0,
     401,   402,   403,    96,    97,   404,   331,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   437,   319,   320,
     321,   322,   438,   319,   320,   321,   322,   439,   319,   320,
     321,   322,   443,   217,   218,   219,   220,   444,   217,   218,
     219,   220,   445,   217,   218,   219,   220,   452,   217,   218,
     219,   220,   453,   319,   320,   321,   322,   454,   319,   320,
     321,   322,   455,   319,   320,   321,   322,   456,   319,   320,
     321,   322,   457,   319,   320,   321,   322,    77,    78,     0,
     361,    77,    78,     0,   363,    77,    78,     0,   365,    77,
      78,     0,   428,    77,    78,     0,   430,    77,    78,     0,
     432,    77,    78,     0,   434
};

static const yytype_int16 yycheck[] =
{
       3,    11,     3,     6,    30,    31,     9,    20,   105,    85,
     106,    14,    25,    16,    17,    11,   106,    13,    20,    22,
      23,    10,    11,    25,    50,    14,    29,    30,    31,     0,
      17,   105,    19,   109,   110,   111,   112,    26,    48,    49,
      29,    30,    31,     3,     7,    18,     3,    50,    85,    22,
      23,    85,    48,    49,    37,    38,    39,    40,    41,    42,
      85,    50,    18,    19,    20,    21,    22,    23,   104,   105,
      59,    60,    20,    21,    22,    10,    11,     3,     4,    14,
      13,    14,    15,    16,    23,    18,    19,    20,    21,    22,
      23,    28,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    20,    21,    22,    85,    28,    85,   109,   110,
     111,   112,     3,   109,   108,   109,   110,   111,   112,   115,
     107,    13,    14,    15,    16,    28,    18,    19,    20,    21,
      22,    23,   128,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    85,    20,    21,    22,    85,   104,   105,
      28,   107,     4,   163,   150,    85,   104,   105,    85,   107,
      20,    21,    22,     3,    20,    21,    22,   163,    85,    85,
     166,    20,    21,    22,   107,    85,    25,   173,    13,    14,
      15,    16,   104,   105,    85,   107,   104,   105,    85,   107,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     163,   104,   105,   206,   107,    18,    19,    20,   211,   108,
      23,   109,   110,   111,   112,   107,    85,   227,   221,   229,
      85,   231,    44,    45,   234,   228,    85,   230,   104,   105,
      85,   107,   235,   236,    85,    85,   239,   240,    85,   228,
     108,   230,    85,    85,   104,   105,   235,   107,   104,   105,
     108,   107,   109,    24,   217,   218,   219,   220,    20,   222,
     104,   105,   106,   252,   109,   110,   111,   112,   257,   104,
     105,   108,   107,   104,   105,   278,   107,   280,   241,   242,
     243,   244,   245,   246,   247,   109,   282,   107,   109,   252,
     293,   287,   108,   228,   108,   230,    20,    21,    22,   295,
     235,   109,    20,    21,    22,    17,    18,    19,    20,    21,
      22,    23,   108,   108,   324,   108,   109,   110,   111,   112,
     323,   109,   110,   111,   112,   328,   109,   330,   324,   108,
     109,   110,   111,   112,   109,   331,   108,   109,   110,   111,
     112,   304,   108,   306,   108,   308,   107,   310,   108,   312,
      85,   314,   104,   105,    85,   107,   319,   320,   321,   322,
      85,   324,   358,   108,   109,   110,   111,   112,   357,   358,
     104,   105,   108,   107,   337,   108,   339,   109,   108,   375,
     383,   109,   385,   109,    85,   388,   104,   105,   108,   107,
     104,   105,   109,   107,   357,   108,   359,   108,   361,    28,
     363,   109,   365,   241,   242,   243,   244,   245,   246,   247,
     108,   414,    72,    69,   252,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    69,    13,    14,    15,    16,
      -1,    -1,   395,   396,   397,   398,    -1,   440,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,   104,
     105,   440,   107,   104,   105,   418,   107,    86,    87,    88,
      89,    90,    91,    92,    -1,   428,   304,   430,   306,   432,
     308,   434,   310,    -1,   312,    -1,   314,    17,    18,    19,
      20,    21,    22,    23,   104,   105,   324,   107,    -1,    -1,
      13,    14,    15,    16,   104,   105,    -1,   107,    -1,   337,
      28,   339,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   108,   109,   110,   111,   112,   104,   105,   357,
     107,   359,    -1,   361,    -1,   363,    -1,   365,   108,   109,
     110,   111,   112,    20,    21,    22,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   108,   109,   110,   111,   112,    86,    87,
      88,    89,    90,    91,    92,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,   104,   105,    -1,   107,
     418,   104,   105,    -1,   107,   104,   105,    -1,   107,    -1,
     428,    -1,   430,    -1,   432,    -1,   434,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,   107,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,   108,   109,   110,
     111,   112,    20,    21,    22,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   108,   109,   110,
     111,   112,   104,   105,   106,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   104,   105,    -1,   107,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   108,
     109,   110,   111,   112,    20,    21,    22,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   107,   104,    13,
      14,    15,    16,   108,   109,   110,   111,   112,    20,    21,
      22,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    13,    14,    15,    16,   108,   109,   110,   111,   112,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   108,   109,   110,   111,   112,    28,    -1,
     104,   105,    -1,   107,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   108,   109,   110,   111,   112,    -1,
      -1,    -1,   104,   105,    -1,   107,    -1,   108,   109,   110,
     111,   112,   104,   105,    -1,   107,    -1,   108,   109,   110,
     111,   112,   104,   105,    -1,   107,    -1,   108,   109,   110,
     111,   112,    -1,    -1,    -1,   107,    86,    87,    88,    89,
      90,    91,    92,    -1,    -1,   107,    -1,   108,   109,   110,
     111,   112,    -1,    -1,   104,   105,    -1,   107,    -1,    -1,
      18,    19,    20,    21,    22,    23,   107,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   108,   109,   110,
     111,   112,   108,   109,   110,   111,   112,   108,   109,   110,
     111,   112,   108,   109,   110,   111,   112,   108,   109,   110,
     111,   112,   108,   109,   110,   111,   112,   108,   109,   110,
     111,   112,   108,   109,   110,   111,   112,   108,   109,   110,
     111,   112,   108,   109,   110,   111,   112,   108,   109,   110,
     111,   112,   108,   109,   110,   111,   112,   104,   105,    -1,
     107,   104,   105,    -1,   107,   104,   105,    -1,   107,   104,
     105,    -1,   107,   104,   105,    -1,   107,   104,   105,    -1,
     107,   104,   105,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   114,   115,   116,   117,   118,   105,   104,   105,   107,
     140,   143,   106,   140,   106,   142,   143,   106,   140,    13,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   107,
     125,   138,   139,   144,   145,   107,   126,   138,   139,   144,
     145,    20,    25,   127,    20,    25,   128,   144,   107,   129,
     138,   140,   145,    20,    25,   130,   132,   140,    28,    86,
      87,    88,    89,    90,    91,    92,   133,   140,   146,   146,
     107,   134,   140,   146,   135,   140,   146,    18,    19,    20,
      21,    22,    23,   107,   123,   138,   107,   124,   138,   140,
     145,   124,   124,   107,   119,   138,   119,   119,   119,   119,
     119,   119,   105,   120,   120,   120,    17,   136,   139,   144,
      17,   137,   139,   144,   124,    17,    19,   107,   131,   107,
     121,   138,   107,   122,   138,     3,     4,   104,   117,   118,
       3,     4,     0,   116,     3,     3,   140,   109,   110,   111,
     112,    85,    85,    20,   144,    20,   144,    85,    85,    85,
      85,    85,    20,   144,    85,    85,    85,    20,   144,    85,
      85,    85,    85,    85,    85,    85,    85,   107,   139,   141,
     143,   144,    85,    20,   144,    20,   144,    85,    85,    85,
      23,    28,    85,    28,    85,   140,     3,     3,   140,   108,
     143,   143,   143,   143,   140,   106,   143,   108,   109,   108,
     109,   139,   107,   138,   140,   145,   139,   107,   138,   140,
     145,   139,   108,   109,   139,   107,   138,   140,   145,   140,
     108,   108,   140,   140,   107,   141,   107,   141,   107,   141,
     107,   141,   107,   141,   107,   141,   141,   108,   108,   109,
     110,   111,   112,   109,   107,   138,   141,   108,   109,   108,
     109,   107,   138,    24,    20,   108,   108,   107,   108,   107,
       3,   140,   140,    20,   144,    20,   144,   140,    20,   144,
     141,   141,   141,   141,   141,   141,   108,    85,    85,   107,
     143,   107,   143,   107,   143,   107,   143,   140,   139,   141,
     144,   140,   140,    20,   144,    85,    28,   141,    28,   141,
     108,   108,   108,   109,   108,   109,   108,   108,   109,   108,
     108,   108,   108,   108,   108,   109,   110,   111,   112,   138,
     141,    18,    19,    20,    23,   138,   144,   141,   141,   141,
     141,   108,   108,   108,   109,   108,   108,   108,   109,    20,
     144,   108,   108,   108,   108,   140,   140,   140,   107,   143,
     107,   143,   107,   143,   107,   143,   108,   108,   108,   108,
      85,   140,   141,   108,   108,   108,   141,   141,   141,   141,
     138,   140,   108,   108,   108,   108,   108,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   113,   114,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   120,   120,   120,   121,
     121,   121,   122,   122,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   125,   125,   125,
     125,   125,   125,   126,   126,   126,   126,   126,   126,   127,
     127,   127,   127,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   129,   129,   129,   130,   130,   130,
     130,   130,   130,   131,   131,   131,   131,   132,   133,   133,
     134,   134,   134,   134,   135,   135,   136,   136,   136,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   139,   139,   139,   139,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   142,   142,   143,   143,   144,   144,   145,   145,   145,
     145,   146,   146,   146,   146,   146,   146,   146,   146
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     3,     3,
       4,     2,     1,     1,     2,     4,     2,     2,     2,     3,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     5,     3,     5,     7,     5,
       5,     3,     5,     5,     3,     3,     3,     5,     5,     7,
       5,     5,     5,     5,     5,     5,     5,     5,     3,     3,
       3,     3,     3,     3,     7,     7,     5,     5,     5,     5,
       5,     5,     1,     1,     3,     5,     1,     1,     1,     3,
       5,     1,     1,     1,     1,     3,     5,     1,     1,     3,
       3,     3,     5,     7,     3,     3,     3,     3,     5,     7,
       3,     3,     1,     1,     3,     5,     1,     3,     3,     3,
       5,     7,     3,     3,     5,     3,     5,     1,     1,     3,
       1,     3,     3,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     5,     5,     5,
       5,     5,     5,     5,     5,     7,     7,     7,     7,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = FIRSTPASSEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == FIRSTPASSEMPTY)                                        \
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
   Use FIRSTPASSerror or FIRSTPASSUNDEF. */
#define YYERRCODE FIRSTPASSUNDEF


/* Enable debugging if requested.  */
#if FIRSTPASSDEBUG

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
#else /* !FIRSTPASSDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !FIRSTPASSDEBUG */


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

  yychar = FIRSTPASSEMPTY; /* Cause a token to be read.  */

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
  if (yychar == FIRSTPASSEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= FIRSTPASSEOF)
    {
      yychar = FIRSTPASSEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == FIRSTPASSerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = FIRSTPASSUNDEF;
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
  yychar = FIRSTPASSEMPTY;
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
#line 93 "grammar-firstpass.y"
                                        {	}
#line 1912 "grammar-firstpass.tab.c"
    break;

  case 3: /* lines: line  */
#line 95 "grammar-firstpass.y"
                                {   line_increase();	}
#line 1918 "grammar-firstpass.tab.c"
    break;

  case 4: /* lines: lines line  */
#line 96 "grammar-firstpass.y"
                                        { 	line_increase(); 	}
#line 1924 "grammar-firstpass.tab.c"
    break;

  case 5: /* line: instruction ENTER  */
#line 98 "grammar-firstpass.y"
                                                                        { }
#line 1930 "grammar-firstpass.tab.c"
    break;

  case 6: /* line: directive ENTER  */
#line 99 "grammar-firstpass.y"
                                                                                { }
#line 1936 "grammar-firstpass.tab.c"
    break;

  case 7: /* line: LITERAL ENTER  */
#line 100 "grammar-firstpass.y"
                                                                                { firstpasserror("Syntax Error: Unknown instruction"); }
#line 1942 "grammar-firstpass.tab.c"
    break;

  case 8: /* line: LABEL instruction ENTER  */
#line 101 "grammar-firstpass.y"
                                                                        { sym_addlabel((yyvsp[-2].literal),pc_get_last()); }
#line 1948 "grammar-firstpass.tab.c"
    break;

  case 9: /* line: LABEL directive ENTER  */
#line 102 "grammar-firstpass.y"
                                                                        { sym_addlabel((yyvsp[-2].literal),pc_get_last()); }
#line 1954 "grammar-firstpass.tab.c"
    break;

  case 10: /* line: LABEL EQU expression ENTER  */
#line 103 "grammar-firstpass.y"
                                                                        { sym_addlabel((yyvsp[-3].literal),(yyvsp[-1].normal)); }
#line 1960 "grammar-firstpass.tab.c"
    break;

  case 11: /* line: LABEL ENTER  */
#line 104 "grammar-firstpass.y"
                                                                                { sym_addlabel((yyvsp[-1].literal),pc_get()); }
#line 1966 "grammar-firstpass.tab.c"
    break;

  case 12: /* line: ENTER  */
#line 105 "grammar-firstpass.y"
                                                                                        { }
#line 1972 "grammar-firstpass.tab.c"
    break;

  case 13: /* directive: END  */
#line 107 "grammar-firstpass.y"
                                                                                                        { return 0;}
#line 1978 "grammar-firstpass.tab.c"
    break;

  case 14: /* directive: DEFS expression  */
#line 108 "grammar-firstpass.y"
                                                                                                { pc_inc((yyvsp[0].normal)); }
#line 1984 "grammar-firstpass.tab.c"
    break;

  case 15: /* directive: DEFS expression COMMA expression  */
#line 109 "grammar-firstpass.y"
                                                                                { pc_inc((yyvsp[-2].normal)); }
#line 1990 "grammar-firstpass.tab.c"
    break;

  case 16: /* directive: DEFB listexpr  */
#line 110 "grammar-firstpass.y"
                                                                                                { pc_inc((yyvsp[0].normal)); }
#line 1996 "grammar-firstpass.tab.c"
    break;

  case 17: /* directive: DEFM STRING  */
#line 111 "grammar-firstpass.y"
                                                                                                { pc_inc( strlen((yyvsp[0].literal))); }
#line 2002 "grammar-firstpass.tab.c"
    break;

  case 18: /* directive: DEFW expression  */
#line 112 "grammar-firstpass.y"
                                                                                                { pc_inc(2); }
#line 2008 "grammar-firstpass.tab.c"
    break;

  case 19: /* directive: LITERAL EQU expression  */
#line 113 "grammar-firstpass.y"
                                                                                        { sym_addlabel((yyvsp[-2].literal),(yyvsp[0].normal)); }
#line 2014 "grammar-firstpass.tab.c"
    break;

  case 20: /* directive: ORG INTEGER  */
#line 114 "grammar-firstpass.y"
                                                                                                        { pc_init((yyvsp[0].normal)); }
#line 2020 "grammar-firstpass.tab.c"
    break;

  case 21: /* directive: INCBIN STRING  */
#line 115 "grammar-firstpass.y"
                                                                                                { pc_inc( preproc_include_bin((yyvsp[0].literal),NULL)); }
#line 2026 "grammar-firstpass.tab.c"
    break;

  case 22: /* directive: ALIGN expression  */
#line 116 "grammar-firstpass.y"
                                                { 
										int pc = pc_get();
										int k = ((( pc / (yyvsp[0].normal))+1)*(yyvsp[0].normal)); 
										for  (int a = pc; a < k; a++) { 
											pc_inc(1); 
										} 
									}
#line 2038 "grammar-firstpass.tab.c"
    break;

  case 23: /* instruction: NOP  */
#line 124 "grammar-firstpass.y"
                                                                { pc_inc(1); }
#line 2044 "grammar-firstpass.tab.c"
    break;

  case 24: /* instruction: DI  */
#line 125 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2050 "grammar-firstpass.tab.c"
    break;

  case 25: /* instruction: EI  */
#line 126 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2056 "grammar-firstpass.tab.c"
    break;

  case 26: /* instruction: HALT  */
#line 127 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2062 "grammar-firstpass.tab.c"
    break;

  case 27: /* instruction: RLCA  */
#line 128 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2068 "grammar-firstpass.tab.c"
    break;

  case 28: /* instruction: RRCA  */
#line 129 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2074 "grammar-firstpass.tab.c"
    break;

  case 29: /* instruction: RLA  */
#line 130 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2080 "grammar-firstpass.tab.c"
    break;

  case 30: /* instruction: CCF  */
#line 131 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2086 "grammar-firstpass.tab.c"
    break;

  case 31: /* instruction: CPIR  */
#line 132 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2092 "grammar-firstpass.tab.c"
    break;

  case 32: /* instruction: CPI  */
#line 133 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2098 "grammar-firstpass.tab.c"
    break;

  case 33: /* instruction: CPDR  */
#line 134 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2104 "grammar-firstpass.tab.c"
    break;

  case 34: /* instruction: CPD  */
#line 135 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2110 "grammar-firstpass.tab.c"
    break;

  case 35: /* instruction: RET  */
#line 136 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2116 "grammar-firstpass.tab.c"
    break;

  case 36: /* instruction: RETN  */
#line 137 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2122 "grammar-firstpass.tab.c"
    break;

  case 37: /* instruction: RETI  */
#line 138 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2128 "grammar-firstpass.tab.c"
    break;

  case 38: /* instruction: RST  */
#line 139 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2134 "grammar-firstpass.tab.c"
    break;

  case 39: /* instruction: EXX  */
#line 140 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2140 "grammar-firstpass.tab.c"
    break;

  case 40: /* instruction: INI  */
#line 141 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2146 "grammar-firstpass.tab.c"
    break;

  case 41: /* instruction: INIR  */
#line 142 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2152 "grammar-firstpass.tab.c"
    break;

  case 42: /* instruction: IND  */
#line 143 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2158 "grammar-firstpass.tab.c"
    break;

  case 43: /* instruction: INDR  */
#line 144 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2164 "grammar-firstpass.tab.c"
    break;

  case 44: /* instruction: OUTI  */
#line 145 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2170 "grammar-firstpass.tab.c"
    break;

  case 45: /* instruction: OTIR  */
#line 146 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2176 "grammar-firstpass.tab.c"
    break;

  case 46: /* instruction: OUTD  */
#line 147 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2182 "grammar-firstpass.tab.c"
    break;

  case 47: /* instruction: OTDR  */
#line 148 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2188 "grammar-firstpass.tab.c"
    break;

  case 48: /* instruction: RET condflag  */
#line 149 "grammar-firstpass.y"
                                                                { pc_inc(1); }
#line 2194 "grammar-firstpass.tab.c"
    break;

  case 49: /* instruction: SCF  */
#line 150 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2200 "grammar-firstpass.tab.c"
    break;

  case 50: /* instruction: LDI  */
#line 151 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2206 "grammar-firstpass.tab.c"
    break;

  case 51: /* instruction: LDIR  */
#line 152 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2212 "grammar-firstpass.tab.c"
    break;

  case 52: /* instruction: NEG  */
#line 153 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2218 "grammar-firstpass.tab.c"
    break;

  case 53: /* instruction: LD ldcommand  */
#line 154 "grammar-firstpass.y"
                                                                { }
#line 2224 "grammar-firstpass.tab.c"
    break;

  case 54: /* instruction: OR orcommand  */
#line 155 "grammar-firstpass.y"
                                                                { }
#line 2230 "grammar-firstpass.tab.c"
    break;

  case 55: /* instruction: XOR orcommand  */
#line 156 "grammar-firstpass.y"
                                                                { }
#line 2236 "grammar-firstpass.tab.c"
    break;

  case 56: /* instruction: AND orcommand  */
#line 157 "grammar-firstpass.y"
                                                                { }
#line 2242 "grammar-firstpass.tab.c"
    break;

  case 57: /* instruction: CP orcommand  */
#line 158 "grammar-firstpass.y"
                                                                { }
#line 2248 "grammar-firstpass.tab.c"
    break;

  case 58: /* instruction: INC inccommand  */
#line 159 "grammar-firstpass.y"
                                                                { }
#line 2254 "grammar-firstpass.tab.c"
    break;

  case 59: /* instruction: DEC deccommand  */
#line 160 "grammar-firstpass.y"
                                                                { }
#line 2260 "grammar-firstpass.tab.c"
    break;

  case 60: /* instruction: ADC adccommand  */
#line 161 "grammar-firstpass.y"
                                                                { }
#line 2266 "grammar-firstpass.tab.c"
    break;

  case 61: /* instruction: ADD addcommand  */
#line 162 "grammar-firstpass.y"
                                                                { }
#line 2272 "grammar-firstpass.tab.c"
    break;

  case 62: /* instruction: SUB subcommand  */
#line 163 "grammar-firstpass.y"
                                                                { }
#line 2278 "grammar-firstpass.tab.c"
    break;

  case 63: /* instruction: SBC sbccommand  */
#line 164 "grammar-firstpass.y"
                                                                { }
#line 2284 "grammar-firstpass.tab.c"
    break;

  case 64: /* instruction: DJNZ djnzcommand  */
#line 165 "grammar-firstpass.y"
                                                                { }
#line 2290 "grammar-firstpass.tab.c"
    break;

  case 65: /* instruction: JR jrcommand  */
#line 166 "grammar-firstpass.y"
                                                                { }
#line 2296 "grammar-firstpass.tab.c"
    break;

  case 66: /* instruction: JP jpcommand  */
#line 167 "grammar-firstpass.y"
                                                                { }
#line 2302 "grammar-firstpass.tab.c"
    break;

  case 67: /* instruction: CALL callcommand  */
#line 168 "grammar-firstpass.y"
                                                                { }
#line 2308 "grammar-firstpass.tab.c"
    break;

  case 68: /* instruction: EX excommand  */
#line 169 "grammar-firstpass.y"
                                                                { }
#line 2314 "grammar-firstpass.tab.c"
    break;

  case 69: /* instruction: PUSH pushcommand  */
#line 170 "grammar-firstpass.y"
                                                                { }
#line 2320 "grammar-firstpass.tab.c"
    break;

  case 70: /* instruction: POP popcommand  */
#line 171 "grammar-firstpass.y"
                                                                { }
#line 2326 "grammar-firstpass.tab.c"
    break;

  case 71: /* instruction: IN incommand  */
#line 172 "grammar-firstpass.y"
                                                                { }
#line 2332 "grammar-firstpass.tab.c"
    break;

  case 72: /* instruction: OUT outcommand  */
#line 173 "grammar-firstpass.y"
                                                                { }
#line 2338 "grammar-firstpass.tab.c"
    break;

  case 73: /* instruction: BIT bitcommand  */
#line 174 "grammar-firstpass.y"
                                                                { }
#line 2344 "grammar-firstpass.tab.c"
    break;

  case 74: /* instruction: RES bitcommand  */
#line 175 "grammar-firstpass.y"
                                                                { }
#line 2350 "grammar-firstpass.tab.c"
    break;

  case 75: /* instruction: SET bitcommand  */
#line 176 "grammar-firstpass.y"
                                                                { }
#line 2356 "grammar-firstpass.tab.c"
    break;

  case 76: /* instruction: SLA slacommand  */
#line 177 "grammar-firstpass.y"
                                                                { }
#line 2362 "grammar-firstpass.tab.c"
    break;

  case 77: /* instruction: SRA slacommand  */
#line 178 "grammar-firstpass.y"
                                                                { }
#line 2368 "grammar-firstpass.tab.c"
    break;

  case 78: /* instruction: SRL slacommand  */
#line 179 "grammar-firstpass.y"
                                                                { }
#line 2374 "grammar-firstpass.tab.c"
    break;

  case 79: /* instruction: RL slacommand  */
#line 180 "grammar-firstpass.y"
                                                                { }
#line 2380 "grammar-firstpass.tab.c"
    break;

  case 80: /* instruction: RR slacommand  */
#line 181 "grammar-firstpass.y"
                                                                { }
#line 2386 "grammar-firstpass.tab.c"
    break;

  case 81: /* instruction: RRC slacommand  */
#line 182 "grammar-firstpass.y"
                                                                { }
#line 2392 "grammar-firstpass.tab.c"
    break;

  case 82: /* instruction: RLC slacommand  */
#line 183 "grammar-firstpass.y"
                                                                { }
#line 2398 "grammar-firstpass.tab.c"
    break;

  case 83: /* slacommand: reg8  */
#line 186 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2404 "grammar-firstpass.tab.c"
    break;

  case 84: /* slacommand: PARLEFT HL PARRIGHT  */
#line 187 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2410 "grammar-firstpass.tab.c"
    break;

  case 85: /* slacommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 188 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2416 "grammar-firstpass.tab.c"
    break;

  case 86: /* bitcommand: INTEGER COMMA reg8  */
#line 190 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2422 "grammar-firstpass.tab.c"
    break;

  case 87: /* bitcommand: INTEGER COMMA PARLEFT HL PARRIGHT  */
#line 191 "grammar-firstpass.y"
                                                                                                        { pc_inc(2); }
#line 2428 "grammar-firstpass.tab.c"
    break;

  case 88: /* bitcommand: INTEGER COMMA PARLEFT indexreg OPADD expression2 PARRIGHT  */
#line 192 "grammar-firstpass.y"
                                                                                          { pc_inc(4); }
#line 2434 "grammar-firstpass.tab.c"
    break;

  case 89: /* incommand: reg8 COMMA PARLEFT C PARRIGHT  */
#line 194 "grammar-firstpass.y"
                                                                                {  pc_inc(2); }
#line 2440 "grammar-firstpass.tab.c"
    break;

  case 90: /* incommand: reg8 COMMA PARLEFT expression2 PARRIGHT  */
#line 195 "grammar-firstpass.y"
                                                                                        {  pc_inc(2); }
#line 2446 "grammar-firstpass.tab.c"
    break;

  case 91: /* incommand: PARLEFT C PARRIGHT  */
#line 196 "grammar-firstpass.y"
                                                                                                                {  pc_inc(2); }
#line 2452 "grammar-firstpass.tab.c"
    break;

  case 92: /* outcommand: reg8 COMMA PARLEFT expression2 PARRIGHT  */
#line 198 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2458 "grammar-firstpass.tab.c"
    break;

  case 93: /* outcommand: reg8 COMMA PARLEFT C PARRIGHT  */
#line 199 "grammar-firstpass.y"
                                                                                        { pc_inc(2); }
#line 2464 "grammar-firstpass.tab.c"
    break;

  case 94: /* outcommand: PARLEFT C PARRIGHT  */
#line 200 "grammar-firstpass.y"
                                                                                                        { pc_inc(2); }
#line 2470 "grammar-firstpass.tab.c"
    break;

  case 95: /* ldcommand: reg8 COMMA reg8  */
#line 202 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2476 "grammar-firstpass.tab.c"
    break;

  case 96: /* ldcommand: reg8 COMMA expression2  */
#line 203 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2482 "grammar-firstpass.tab.c"
    break;

  case 97: /* ldcommand: reg8 COMMA PARLEFT reg16 PARRIGHT  */
#line 204 "grammar-firstpass.y"
                                                                                                { pc_inc(1); }
#line 2488 "grammar-firstpass.tab.c"
    break;

  case 98: /* ldcommand: reg8 COMMA PARLEFT expression2 PARRIGHT  */
#line 205 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2494 "grammar-firstpass.tab.c"
    break;

  case 99: /* ldcommand: reg8 COMMA PARLEFT indexreg OPADD expression PARRIGHT  */
#line 206 "grammar-firstpass.y"
                                                                                        { pc_inc(3); }
#line 2500 "grammar-firstpass.tab.c"
    break;

  case 100: /* ldcommand: PARLEFT reg16 PARRIGHT COMMA reg8  */
#line 207 "grammar-firstpass.y"
                                                                                                        { pc_inc(1); }
#line 2506 "grammar-firstpass.tab.c"
    break;

  case 101: /* ldcommand: PARLEFT reg16 PARRIGHT COMMA expression2  */
#line 208 "grammar-firstpass.y"
                                                                                                { pc_inc(2); }
#line 2512 "grammar-firstpass.tab.c"
    break;

  case 102: /* ldcommand: HL COMMA PARLEFT expression2 PARRIGHT  */
#line 209 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2518 "grammar-firstpass.tab.c"
    break;

  case 103: /* ldcommand: DE COMMA PARLEFT expression2 PARRIGHT  */
#line 210 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2524 "grammar-firstpass.tab.c"
    break;

  case 104: /* ldcommand: BC COMMA PARLEFT expression2 PARRIGHT  */
#line 211 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2530 "grammar-firstpass.tab.c"
    break;

  case 105: /* ldcommand: SP COMMA PARLEFT expression2 PARRIGHT  */
#line 212 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2536 "grammar-firstpass.tab.c"
    break;

  case 106: /* ldcommand: IX COMMA PARLEFT expression2 PARRIGHT  */
#line 213 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2542 "grammar-firstpass.tab.c"
    break;

  case 107: /* ldcommand: IY COMMA PARLEFT expression2 PARRIGHT  */
#line 214 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2548 "grammar-firstpass.tab.c"
    break;

  case 108: /* ldcommand: HL COMMA expression2  */
#line 215 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2554 "grammar-firstpass.tab.c"
    break;

  case 109: /* ldcommand: BC COMMA expression2  */
#line 216 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2560 "grammar-firstpass.tab.c"
    break;

  case 110: /* ldcommand: DE COMMA expression2  */
#line 217 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2566 "grammar-firstpass.tab.c"
    break;

  case 111: /* ldcommand: SP COMMA expression2  */
#line 218 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2572 "grammar-firstpass.tab.c"
    break;

  case 112: /* ldcommand: IX COMMA expression2  */
#line 219 "grammar-firstpass.y"
                                                                                                                { pc_inc(4); }
#line 2578 "grammar-firstpass.tab.c"
    break;

  case 113: /* ldcommand: IY COMMA expression2  */
#line 220 "grammar-firstpass.y"
                                                                                                                { pc_inc(4); }
#line 2584 "grammar-firstpass.tab.c"
    break;

  case 114: /* ldcommand: PARLEFT indexreg OPADD expression PARRIGHT COMMA expression  */
#line 221 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2590 "grammar-firstpass.tab.c"
    break;

  case 115: /* ldcommand: PARLEFT indexreg OPADD expression PARRIGHT COMMA reg8  */
#line 222 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2596 "grammar-firstpass.tab.c"
    break;

  case 116: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA reg8  */
#line 223 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2602 "grammar-firstpass.tab.c"
    break;

  case 117: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA indexreg  */
#line 224 "grammar-firstpass.y"
                                                                                                                { pc_inc(4); }
#line 2608 "grammar-firstpass.tab.c"
    break;

  case 118: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA HL  */
#line 225 "grammar-firstpass.y"
                                                                                                        { pc_inc(3); }
#line 2614 "grammar-firstpass.tab.c"
    break;

  case 119: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA BC  */
#line 226 "grammar-firstpass.y"
                                                                                                        { pc_inc(4); }
#line 2620 "grammar-firstpass.tab.c"
    break;

  case 120: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA DE  */
#line 227 "grammar-firstpass.y"
                                                                                                        { pc_inc(4); }
#line 2626 "grammar-firstpass.tab.c"
    break;

  case 121: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA SP  */
#line 228 "grammar-firstpass.y"
                                                                                                        { pc_inc(4); }
#line 2632 "grammar-firstpass.tab.c"
    break;

  case 122: /* orcommand: reg8  */
#line 233 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2638 "grammar-firstpass.tab.c"
    break;

  case 123: /* orcommand: expression  */
#line 234 "grammar-firstpass.y"
                                                                                                                                { pc_inc(2); }
#line 2644 "grammar-firstpass.tab.c"
    break;

  case 124: /* orcommand: PARLEFT HL PARRIGHT  */
#line 235 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2650 "grammar-firstpass.tab.c"
    break;

  case 125: /* orcommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 236 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2656 "grammar-firstpass.tab.c"
    break;

  case 126: /* orcommand: index8reg  */
#line 237 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2662 "grammar-firstpass.tab.c"
    break;

  case 127: /* inccommand: reg8  */
#line 239 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2668 "grammar-firstpass.tab.c"
    break;

  case 128: /* inccommand: reg16  */
#line 240 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2674 "grammar-firstpass.tab.c"
    break;

  case 129: /* inccommand: PARLEFT HL PARRIGHT  */
#line 241 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2680 "grammar-firstpass.tab.c"
    break;

  case 130: /* inccommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 242 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2686 "grammar-firstpass.tab.c"
    break;

  case 131: /* inccommand: indexreg  */
#line 243 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2692 "grammar-firstpass.tab.c"
    break;

  case 132: /* inccommand: index8reg  */
#line 244 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2698 "grammar-firstpass.tab.c"
    break;

  case 133: /* deccommand: reg8  */
#line 246 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2704 "grammar-firstpass.tab.c"
    break;

  case 134: /* deccommand: reg16  */
#line 247 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2710 "grammar-firstpass.tab.c"
    break;

  case 135: /* deccommand: PARLEFT HL PARRIGHT  */
#line 248 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2716 "grammar-firstpass.tab.c"
    break;

  case 136: /* deccommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 249 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2722 "grammar-firstpass.tab.c"
    break;

  case 137: /* deccommand: indexreg  */
#line 250 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2728 "grammar-firstpass.tab.c"
    break;

  case 138: /* deccommand: index8reg  */
#line 251 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2734 "grammar-firstpass.tab.c"
    break;

  case 139: /* adccommand: A COMMA expression  */
#line 253 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2740 "grammar-firstpass.tab.c"
    break;

  case 140: /* adccommand: A COMMA reg8  */
#line 254 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2746 "grammar-firstpass.tab.c"
    break;

  case 141: /* adccommand: A COMMA index8reg  */
#line 255 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2752 "grammar-firstpass.tab.c"
    break;

  case 142: /* adccommand: A COMMA PARLEFT HL PARRIGHT  */
#line 256 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2758 "grammar-firstpass.tab.c"
    break;

  case 143: /* adccommand: A COMMA PARLEFT indexreg OPADD expression PARRIGHT  */
#line 257 "grammar-firstpass.y"
                                                                                        { pc_inc(3); }
#line 2764 "grammar-firstpass.tab.c"
    break;

  case 144: /* adccommand: HL COMMA reg16  */
#line 258 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2770 "grammar-firstpass.tab.c"
    break;

  case 145: /* addcommand: A COMMA expression  */
#line 260 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2776 "grammar-firstpass.tab.c"
    break;

  case 146: /* addcommand: A COMMA reg8  */
#line 261 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2782 "grammar-firstpass.tab.c"
    break;

  case 147: /* addcommand: A COMMA index8reg  */
#line 262 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2788 "grammar-firstpass.tab.c"
    break;

  case 148: /* addcommand: A COMMA PARLEFT HL PARRIGHT  */
#line 263 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2794 "grammar-firstpass.tab.c"
    break;

  case 149: /* addcommand: A COMMA PARLEFT indexreg OPADD expression PARRIGHT  */
#line 264 "grammar-firstpass.y"
                                                                                        { pc_inc(3); }
#line 2800 "grammar-firstpass.tab.c"
    break;

  case 150: /* addcommand: HL COMMA reg16  */
#line 265 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2806 "grammar-firstpass.tab.c"
    break;

  case 151: /* addcommand: indexreg COMMA reg16  */
#line 266 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2812 "grammar-firstpass.tab.c"
    break;

  case 152: /* subcommand: reg8  */
#line 268 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2818 "grammar-firstpass.tab.c"
    break;

  case 153: /* subcommand: expression  */
#line 269 "grammar-firstpass.y"
                                                                                                                                { pc_inc(2); }
#line 2824 "grammar-firstpass.tab.c"
    break;

  case 154: /* subcommand: PARLEFT HL PARRIGHT  */
#line 270 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2830 "grammar-firstpass.tab.c"
    break;

  case 155: /* subcommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 271 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2836 "grammar-firstpass.tab.c"
    break;

  case 156: /* subcommand: index8reg  */
#line 272 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2842 "grammar-firstpass.tab.c"
    break;

  case 157: /* sbccommand: A COMMA expression  */
#line 274 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2848 "grammar-firstpass.tab.c"
    break;

  case 158: /* sbccommand: A COMMA reg8  */
#line 275 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2854 "grammar-firstpass.tab.c"
    break;

  case 159: /* sbccommand: A COMMA index8reg  */
#line 276 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2860 "grammar-firstpass.tab.c"
    break;

  case 160: /* sbccommand: A COMMA PARLEFT HL PARRIGHT  */
#line 277 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2866 "grammar-firstpass.tab.c"
    break;

  case 161: /* sbccommand: A COMMA PARLEFT indexreg OPADD expression PARRIGHT  */
#line 278 "grammar-firstpass.y"
                                                                                        { pc_inc(3); }
#line 2872 "grammar-firstpass.tab.c"
    break;

  case 162: /* sbccommand: HL COMMA reg16  */
#line 279 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2878 "grammar-firstpass.tab.c"
    break;

  case 163: /* excommand: AF COMMA AFPLUS  */
#line 281 "grammar-firstpass.y"
                                                                        {  pc_inc(1);  }
#line 2884 "grammar-firstpass.tab.c"
    break;

  case 164: /* excommand: PARLEFT SP PARRIGHT COMMA HL  */
#line 282 "grammar-firstpass.y"
                                                                {  pc_inc(1);  }
#line 2890 "grammar-firstpass.tab.c"
    break;

  case 165: /* excommand: DE COMMA HL  */
#line 283 "grammar-firstpass.y"
                                                                                        {  pc_inc(1);  }
#line 2896 "grammar-firstpass.tab.c"
    break;

  case 166: /* excommand: PARLEFT SP PARRIGHT COMMA indexreg  */
#line 284 "grammar-firstpass.y"
                                                                        {  pc_inc(2);  }
#line 2902 "grammar-firstpass.tab.c"
    break;

  case 167: /* djnzcommand: expression  */
#line 286 "grammar-firstpass.y"
                                                                                                { pc_inc(2); }
#line 2908 "grammar-firstpass.tab.c"
    break;

  case 168: /* jrcommand: expression  */
#line 288 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2914 "grammar-firstpass.tab.c"
    break;

  case 169: /* jrcommand: condflag COMMA expression  */
#line 289 "grammar-firstpass.y"
                                                                                                        { pc_inc(2); }
#line 2920 "grammar-firstpass.tab.c"
    break;

  case 170: /* jpcommand: expression  */
#line 291 "grammar-firstpass.y"
                                                                                                                        { pc_inc(3); }
#line 2926 "grammar-firstpass.tab.c"
    break;

  case 171: /* jpcommand: condflag COMMA expression  */
#line 292 "grammar-firstpass.y"
                                                                                                        { pc_inc(3); }
#line 2932 "grammar-firstpass.tab.c"
    break;

  case 172: /* jpcommand: PARLEFT HL PARRIGHT  */
#line 293 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2938 "grammar-firstpass.tab.c"
    break;

  case 173: /* jpcommand: PARLEFT indexreg PARRIGHT  */
#line 294 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2944 "grammar-firstpass.tab.c"
    break;

  case 174: /* callcommand: expression  */
#line 296 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2950 "grammar-firstpass.tab.c"
    break;

  case 175: /* callcommand: condflag COMMA expression  */
#line 297 "grammar-firstpass.y"
                                                                                                        { pc_inc(3); }
#line 2956 "grammar-firstpass.tab.c"
    break;

  case 176: /* pushcommand: reg16  */
#line 299 "grammar-firstpass.y"
                                        {  pc_inc(1);  }
#line 2962 "grammar-firstpass.tab.c"
    break;

  case 177: /* pushcommand: indexreg  */
#line 300 "grammar-firstpass.y"
                                                        {  pc_inc(2);  }
#line 2968 "grammar-firstpass.tab.c"
    break;

  case 178: /* pushcommand: AF  */
#line 301 "grammar-firstpass.y"
                                                        { pc_inc(1); }
#line 2974 "grammar-firstpass.tab.c"
    break;

  case 179: /* popcommand: reg16  */
#line 303 "grammar-firstpass.y"
                                        {  pc_inc(1);  }
#line 2980 "grammar-firstpass.tab.c"
    break;

  case 180: /* popcommand: indexreg  */
#line 304 "grammar-firstpass.y"
                                                {  pc_inc(2);  }
#line 2986 "grammar-firstpass.tab.c"
    break;

  case 181: /* popcommand: AF  */
#line 305 "grammar-firstpass.y"
                                                {  pc_inc(1); }
#line 2992 "grammar-firstpass.tab.c"
    break;

  case 196: /* expression: expritem  */
#line 324 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[0].normal); }
#line 2998 "grammar-firstpass.tab.c"
    break;

  case 197: /* expression: expression OPADD expritem  */
#line 325 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + (yyvsp[0].normal); }
#line 3004 "grammar-firstpass.tab.c"
    break;

  case 198: /* expression: expression OPSUB expritem  */
#line 326 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) - (yyvsp[0].normal); }
#line 3010 "grammar-firstpass.tab.c"
    break;

  case 199: /* expression: expression OPMUL expritem  */
#line 327 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) * (yyvsp[0].normal); }
#line 3016 "grammar-firstpass.tab.c"
    break;

  case 200: /* expression: expression OPDIV expritem  */
#line 328 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) / (yyvsp[0].normal); }
#line 3022 "grammar-firstpass.tab.c"
    break;

  case 201: /* expression: PARLEFT expression PARRIGHT  */
#line 329 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-1].normal); }
#line 3028 "grammar-firstpass.tab.c"
    break;

  case 202: /* expression2: expritem  */
#line 331 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[0].normal); }
#line 3034 "grammar-firstpass.tab.c"
    break;

  case 203: /* expression2: expression2 OPADD expritem  */
#line 332 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + (yyvsp[0].normal); }
#line 3040 "grammar-firstpass.tab.c"
    break;

  case 204: /* expression2: expression2 OPSUB expritem  */
#line 333 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) - (yyvsp[0].normal); }
#line 3046 "grammar-firstpass.tab.c"
    break;

  case 205: /* expression2: expression2 OPMUL expritem  */
#line 334 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) * (yyvsp[0].normal); }
#line 3052 "grammar-firstpass.tab.c"
    break;

  case 206: /* expression2: expression2 OPDIV expritem  */
#line 335 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) / (yyvsp[0].normal); }
#line 3058 "grammar-firstpass.tab.c"
    break;

  case 207: /* expression2: expression2 OPADD PARLEFT expression2 PARRIGHT  */
#line 336 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) + (yyvsp[-1].normal); }
#line 3064 "grammar-firstpass.tab.c"
    break;

  case 208: /* expression2: expression2 OPSUB PARLEFT expression2 PARRIGHT  */
#line 337 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) - (yyvsp[-1].normal); }
#line 3070 "grammar-firstpass.tab.c"
    break;

  case 209: /* expression2: expression2 OPMUL PARLEFT expression2 PARRIGHT  */
#line 338 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) * (yyvsp[-1].normal); }
#line 3076 "grammar-firstpass.tab.c"
    break;

  case 210: /* expression2: expression2 OPDIV PARLEFT expression2 PARRIGHT  */
#line 339 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) / (yyvsp[-1].normal); }
#line 3082 "grammar-firstpass.tab.c"
    break;

  case 211: /* expression2: PARLEFT expression2 PARRIGHT OPADD expritem  */
#line 340 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) + (yyvsp[0].normal); }
#line 3088 "grammar-firstpass.tab.c"
    break;

  case 212: /* expression2: PARLEFT expression2 PARRIGHT OPSUB expritem  */
#line 341 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) - (yyvsp[0].normal); }
#line 3094 "grammar-firstpass.tab.c"
    break;

  case 213: /* expression2: PARLEFT expression2 PARRIGHT OPMUL expritem  */
#line 342 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) * (yyvsp[0].normal); }
#line 3100 "grammar-firstpass.tab.c"
    break;

  case 214: /* expression2: PARLEFT expression2 PARRIGHT OPDIV expritem  */
#line 343 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) / (yyvsp[0].normal); }
#line 3106 "grammar-firstpass.tab.c"
    break;

  case 215: /* expression2: PARLEFT expression2 PARRIGHT OPADD PARLEFT expression2 PARRIGHT  */
#line 344 "grammar-firstpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) + (yyvsp[-1].normal); }
#line 3112 "grammar-firstpass.tab.c"
    break;

  case 216: /* expression2: PARLEFT expression2 PARRIGHT OPSUB PARLEFT expression2 PARRIGHT  */
#line 345 "grammar-firstpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) - (yyvsp[-1].normal); }
#line 3118 "grammar-firstpass.tab.c"
    break;

  case 217: /* expression2: PARLEFT expression2 PARRIGHT OPMUL PARLEFT expression2 PARRIGHT  */
#line 346 "grammar-firstpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) * (yyvsp[-1].normal); }
#line 3124 "grammar-firstpass.tab.c"
    break;

  case 218: /* expression2: PARLEFT expression2 PARRIGHT OPDIV PARLEFT expression2 PARRIGHT  */
#line 347 "grammar-firstpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) / (yyvsp[-1].normal); }
#line 3130 "grammar-firstpass.tab.c"
    break;

  case 219: /* listexpr: expritem  */
#line 349 "grammar-firstpass.y"
                                                                                { (yyval.normal) = ((yyvsp[0].normal) > 0xFF)?2:1; }
#line 3136 "grammar-firstpass.tab.c"
    break;

  case 220: /* listexpr: STRING  */
#line 350 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = strlen((yyvsp[0].literal)); }
#line 3142 "grammar-firstpass.tab.c"
    break;

  case 221: /* listexpr: listexpr COMMA expritem  */
#line 351 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + (((yyvsp[0].normal) > 0xFF)?2:1); }
#line 3148 "grammar-firstpass.tab.c"
    break;

  case 222: /* listexpr: listexpr COMMA STRING  */
#line 352 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + strlen((yyvsp[0].literal)); }
#line 3154 "grammar-firstpass.tab.c"
    break;

  case 223: /* expritem: INTEGER  */
#line 354 "grammar-firstpass.y"
                                                        {	(yyval.normal) = (yyvsp[0].normal); }
#line 3160 "grammar-firstpass.tab.c"
    break;

  case 224: /* expritem: LITERAL  */
#line 355 "grammar-firstpass.y"
                                                                {	
										if ( sym_lookuplabel((yyvsp[0].literal)) == TRUE ) {
											(yyval.normal) = sym_getvalue((yyvsp[0].literal));
										}
										else {
											(yyval.normal) = 0;
										}	
									}
#line 3173 "grammar-firstpass.tab.c"
    break;


#line 3177 "grammar-firstpass.tab.c"

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
  yytoken = yychar == FIRSTPASSEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
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

      if (yychar <= FIRSTPASSEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == FIRSTPASSEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = FIRSTPASSEMPTY;
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
  if (yychar != FIRSTPASSEMPTY)
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

