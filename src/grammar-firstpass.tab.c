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
  YYSYMBOL_RLCA = 57,                      /* RLCA  */
  YYSYMBOL_RRCA = 58,                      /* RRCA  */
  YYSYMBOL_RLA = 59,                       /* RLA  */
  YYSYMBOL_RLC = 60,                       /* RLC  */
  YYSYMBOL_SLA = 61,                       /* SLA  */
  YYSYMBOL_SLL = 62,                       /* SLL  */
  YYSYMBOL_SRL = 63,                       /* SRL  */
  YYSYMBOL_RR = 64,                        /* RR  */
  YYSYMBOL_RL = 65,                        /* RL  */
  YYSYMBOL_RRC = 66,                       /* RRC  */
  YYSYMBOL_SRA = 67,                       /* SRA  */
  YYSYMBOL_BIT = 68,                       /* BIT  */
  YYSYMBOL_SET = 69,                       /* SET  */
  YYSYMBOL_RES = 70,                       /* RES  */
  YYSYMBOL_PUSH = 71,                      /* PUSH  */
  YYSYMBOL_POP = 72,                       /* POP  */
  YYSYMBOL_CP = 73,                        /* CP  */
  YYSYMBOL_CPI = 74,                       /* CPI  */
  YYSYMBOL_CPIR = 75,                      /* CPIR  */
  YYSYMBOL_CPD = 76,                       /* CPD  */
  YYSYMBOL_CPDR = 77,                      /* CPDR  */
  YYSYMBOL_EX = 78,                        /* EX  */
  YYSYMBOL_EXX = 79,                       /* EXX  */
  YYSYMBOL_CCF = 80,                       /* CCF  */
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
  YYSYMBOL_LABEL = 99,                     /* LABEL  */
  YYSYMBOL_LITERAL = 100,                  /* LITERAL  */
  YYSYMBOL_INTEGER = 101,                  /* INTEGER  */
  YYSYMBOL_STRING = 102,                   /* STRING  */
  YYSYMBOL_PARLEFT = 103,                  /* PARLEFT  */
  YYSYMBOL_PARRIGHT = 104,                 /* PARRIGHT  */
  YYSYMBOL_OPADD = 105,                    /* OPADD  */
  YYSYMBOL_OPSUB = 106,                    /* OPSUB  */
  YYSYMBOL_OPMUL = 107,                    /* OPMUL  */
  YYSYMBOL_OPDIV = 108,                    /* OPDIV  */
  YYSYMBOL_YYACCEPT = 109,                 /* $accept  */
  YYSYMBOL_program = 110,                  /* program  */
  YYSYMBOL_lines = 111,                    /* lines  */
  YYSYMBOL_line = 112,                     /* line  */
  YYSYMBOL_directive = 113,                /* directive  */
  YYSYMBOL_instruction = 114,              /* instruction  */
  YYSYMBOL_slacommand = 115,               /* slacommand  */
  YYSYMBOL_bitcommand = 116,               /* bitcommand  */
  YYSYMBOL_incommand = 117,                /* incommand  */
  YYSYMBOL_outcommand = 118,               /* outcommand  */
  YYSYMBOL_ldcommand = 119,                /* ldcommand  */
  YYSYMBOL_orcommand = 120,                /* orcommand  */
  YYSYMBOL_inccommand = 121,               /* inccommand  */
  YYSYMBOL_deccommand = 122,               /* deccommand  */
  YYSYMBOL_adccommand = 123,               /* adccommand  */
  YYSYMBOL_addcommand = 124,               /* addcommand  */
  YYSYMBOL_subcommand = 125,               /* subcommand  */
  YYSYMBOL_sbccommand = 126,               /* sbccommand  */
  YYSYMBOL_excommand = 127,                /* excommand  */
  YYSYMBOL_djnzcommand = 128,              /* djnzcommand  */
  YYSYMBOL_jrcommand = 129,                /* jrcommand  */
  YYSYMBOL_jpcommand = 130,                /* jpcommand  */
  YYSYMBOL_callcommand = 131,              /* callcommand  */
  YYSYMBOL_pushcommand = 132,              /* pushcommand  */
  YYSYMBOL_popcommand = 133,               /* popcommand  */
  YYSYMBOL_reg8 = 134,                     /* reg8  */
  YYSYMBOL_reg16 = 135,                    /* reg16  */
  YYSYMBOL_expression = 136,               /* expression  */
  YYSYMBOL_expression2 = 137,              /* expression2  */
  YYSYMBOL_listexpr = 138,                 /* listexpr  */
  YYSYMBOL_expritem = 139,                 /* expritem  */
  YYSYMBOL_indexreg = 140,                 /* indexreg  */
  YYSYMBOL_index8reg = 141,                /* index8reg  */
  YYSYMBOL_condflag = 142                  /* condflag  */
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
#define YYFINAL  197
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1020

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  437

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   363


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
     105,   106,   107,   108
};

#if FIRSTPASSDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    89,    90,    92,    93,    94,    95,    96,
      99,   100,   101,   102,   103,   104,   105,   106,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   172,   173,   174,   176,   177,   178,   180,
     181,   182,   184,   185,   186,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   219,   220,   221,   222,   223,   225,   226,   227,
     228,   229,   230,   232,   233,   234,   235,   236,   237,   239,
     240,   241,   242,   243,   244,   246,   247,   248,   249,   250,
     251,   252,   254,   255,   256,   257,   258,   260,   261,   262,
     263,   264,   265,   267,   268,   269,   270,   272,   274,   275,
     277,   278,   279,   280,   282,   283,   285,   286,   287,   289,
     290,   291,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   305,   306,   307,   308,   310,   311,   312,   313,
     314,   315,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   335,
     336,   338,   339,   348,   349,   351,   352,   353,   354,   356,
     357,   358,   359,   360,   361,   362,   363
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
  "EI", "LD", "HALT", "NOP", "XOR", "AND", "OR", "RLCA", "RRCA", "RLA",
  "RLC", "SLA", "SLL", "SRL", "RR", "RL", "RRC", "SRA", "BIT", "SET",
  "RES", "PUSH", "POP", "CP", "CPI", "CPIR", "CPD", "CPDR", "EX", "EXX",
  "CCF", "COMMA", "NZ", "Z", "NC", "PO", "PE", "P", "M", "IN", "OUT",
  "INI", "INIR", "IND", "INDR", "OUTI", "OUTD", "OTIR", "OTDR", "LABEL",
  "LITERAL", "INTEGER", "STRING", "PARLEFT", "PARRIGHT", "OPADD", "OPSUB",
  "OPMUL", "OPDIV", "$accept", "program", "lines", "line", "directive",
  "instruction", "slacommand", "bitcommand", "incommand", "outcommand",
  "ldcommand", "orcommand", "inccommand", "deccommand", "adccommand",
  "addcommand", "subcommand", "sbccommand", "excommand", "djnzcommand",
  "jrcommand", "jpcommand", "callcommand", "pushcommand", "popcommand",
  "reg8", "reg16", "expression", "expression2", "listexpr", "expritem",
  "indexreg", "index8reg", "condflag", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     615,   -98,    77,   -99,    77,   -55,   -89,    66,   124,    -4,
      89,   393,    11,    77,   354,   424,   -99,   -99,   -99,   814,
     354,   -99,   -99,   497,   -99,   -99,   454,   454,   454,   -99,
     -99,   -99,   782,   782,   782,   782,   782,   782,   -73,   -73,
     -73,    39,   349,   454,   -99,   -99,   -99,   -99,    10,   -99,
     -99,   804,   846,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   538,    27,    71,   615,   -99,   -99,   -99,   -99,   -99,
     -99,    77,    13,   -99,   -38,   -44,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   214,   -99,
     -99,   -99,   -99,   -99,   223,   -99,   -99,   -99,   -99,   -99,
      -9,    -6,   -99,     2,     9,   -99,    23,    81,   -99,   -99,
      13,   -99,    26,    31,   -99,   -99,    13,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,    13,    45,   -99,    95,
     -99,    13,    46,   -99,    13,    50,   102,   104,   106,   109,
     111,   112,    29,   -99,   116,   103,   -99,   -99,    13,   -99,
     -99,   -99,   248,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     126,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   137,   138,   125,   -99,   134,   -99,   143,
     142,   -99,   145,    77,   -99,   -99,    77,   -99,   -99,    67,
     -55,   -55,   -55,   -55,    77,   -55,   101,   117,   147,   123,
     141,   703,   141,   725,   141,   155,   136,   141,   747,    77,
     156,   174,    77,    77,   154,   184,   197,   202,   250,   292,
     329,   177,   169,   -99,   144,   371,   190,   178,   200,   191,
     861,   205,   287,   206,   209,   219,   220,   227,    13,    13,
     -99,   -99,   -99,   -99,   -99,    13,   -99,   -99,    77,   -99,
      77,   -99,   179,   -99,    13,   -99,   -99,   192,   -99,    13,
     -99,   -99,   -99,    77,   -99,   211,   -99,    13,   -99,    13,
     -99,   -99,    13,    13,   329,    28,   329,    28,   329,    28,
     329,    28,   329,    28,   329,    28,   212,   228,   234,   389,
     437,   450,   464,    77,    29,   -99,    28,   -99,    77,   -99,
      77,   268,   -99,   -99,   -99,   245,   -99,   -27,   -99,     5,
     238,   428,   243,   247,   251,   252,   455,   254,   258,   535,
     540,   592,   616,   638,   660,    60,   757,   900,   329,   -99,
     329,   -99,   329,   -99,   329,   -99,   713,   255,   748,   259,
     758,   805,   270,   271,   312,   276,   831,   286,   836,   -99,
     -99,   -99,    77,   -99,    77,   -99,   -99,    77,    60,    60,
      60,    60,    60,    60,   740,   781,   803,   845,   -99,    28,
     -99,   -99,   -99,   -99,   -99,   -99,   847,   852,   862,   867,
     334,   -99,    60,    77,   -99,   -99,   -99,   329,   -99,   -99,
     -99,   -99,   -99,   -99,   872,   877,   882,   329,   -99,   329,
     -99,   329,   -99,   329,   -99,   -99,   -99,   -99,   -99,   767,
     887,   892,   -99,   -99,   -99,   897,   902,   907,   912,   -99,
      13,   -99,   -99,   -99,   -99,   -99,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,     0,
       0,    19,    20,     0,    21,    18,     0,     0,     0,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    26,    29,    28,     0,    34,
      25,     0,     0,    35,    36,    37,    38,    39,    41,    40,
      42,     0,     0,     0,     2,     3,     6,     5,    16,   212,
     211,     0,    17,   186,    11,    13,   209,    14,   215,   216,
     217,   218,   183,   184,   182,   213,   214,   185,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,     0,    49,
     117,   118,   121,   122,     0,    50,   123,   124,   127,   128,
       0,     0,    51,     0,     0,    52,     0,     0,    53,   142,
     143,   146,     0,     0,    54,    55,   157,   222,   219,   220,
     221,   223,   224,   225,   226,    56,   158,     0,    43,     0,
      57,   160,     0,    58,   164,     0,     0,     0,     0,     0,
       0,     0,     0,    44,     0,     0,    46,   112,   113,   116,
      47,    45,     0,    72,    73,    67,    70,    69,    71,    68,
       0,    64,    66,    65,   168,    60,   166,   167,   171,    61,
     169,   170,    48,     0,     0,     0,    59,     0,    62,     0,
       0,    63,     0,     0,     8,     7,     0,     1,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    15,
     191,   187,   188,   189,   190,    12,   210,   119,     0,   125,
       0,   134,     0,   130,   129,   131,   140,     0,   136,   135,
     137,   141,   144,     0,   152,     0,   148,   147,   149,   159,
     162,   163,   161,   165,     0,    99,     0,   100,     0,    98,
       0,   102,     0,   103,     0,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,   114,     0,    74,
       0,     0,    76,   153,   155,     0,    81,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
       0,   194,     0,   195,     0,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
     126,   132,     0,   138,     0,   145,   150,     0,    94,    93,
      92,    96,    97,    95,     0,     0,     0,     0,    90,    91,
     109,   110,   108,   111,   106,   107,     0,     0,     0,     0,
       0,    87,    88,     0,   115,    75,    77,     0,   154,   156,
      79,    80,    83,    82,     0,     0,     0,     0,   201,     0,
     202,     0,   203,     0,   204,   197,   198,   199,   200,     0,
       0,     0,   133,   139,   151,     0,     0,     0,     0,   105,
     104,    89,    78,   205,   206,   207,   208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   346,   355,   367,   425,    14,   -99,   -99,
     -99,   -21,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,    12,    36,    -2,   159,   -99,
      37,    24,    -3,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    63,    64,    65,    66,    67,   163,   171,   188,   191,
     153,   156,    99,   105,   112,   115,   118,   124,   186,   125,
     135,   140,   143,   175,   179,   164,   101,   199,   232,    75,
      73,   102,   159,   137
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,   355,    74,    68,   103,   109,   160,   161,   121,   120,
     138,   126,   136,    77,   142,   145,   110,   141,   144,   100,
     106,   111,   182,   119,   158,   158,   158,   183,   170,   184,
     196,   122,   108,   357,   116,   154,   123,   205,   157,   157,
     157,   158,    76,   204,   107,    69,    70,    82,    83,    84,
      85,    86,    87,   172,   173,   157,   174,    82,    83,    84,
      85,    86,    87,   189,   192,   177,   181,   200,   201,   202,
     203,   197,   210,    69,    70,   211,   230,   176,   180,    78,
      79,    80,    81,   212,    82,    83,    84,    85,    86,    87,
     213,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   215,    85,    86,   214,    69,    70,   217,   230,   113,
      85,    86,   218,   185,   114,   220,    85,    86,   200,   201,
     202,   203,   207,   236,    85,    86,   219,   222,   209,    69,
      70,   223,   230,   299,   300,   301,   302,    78,    79,    80,
      81,   216,    82,    83,    84,    85,    86,    87,   243,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    82,
      83,    84,   244,   221,    87,   374,   375,   376,   377,    98,
     246,   250,   200,   201,   202,   203,   234,    69,    70,   237,
      71,    69,    70,   224,    71,   225,   239,   226,   231,   233,
     227,   248,   228,   229,   249,    69,    70,   235,    71,   322,
      85,    86,   255,    69,    70,   257,    71,   240,   265,   264,
     270,   269,   324,    85,    86,   278,   277,   279,   241,   242,
     282,   283,   258,   263,   245,   268,   247,   104,   260,   313,
     276,   327,    85,    86,   206,    85,    86,   251,   252,   253,
     254,   273,   256,   208,    85,    86,   261,   305,   266,   303,
     271,   259,   312,   274,    69,    70,   320,   284,   321,   272,
     280,   233,   233,   233,   233,   233,   233,   233,   238,    85,
      86,   326,   233,   298,   299,   300,   301,   302,   281,    69,
      70,   297,    71,   308,    69,    70,   323,   286,   352,    85,
      86,   325,    69,    70,   307,    71,   310,    69,    70,   328,
     288,   346,    69,    70,   309,   290,   350,   314,   351,   336,
     315,    69,    70,   316,    71,   337,   335,   299,   300,   301,
     302,   233,   317,   233,   318,   233,   354,   233,   349,   233,
     319,   233,   398,    85,    86,   353,   339,   341,   343,   345,
     347,   233,   359,   200,   201,   202,   203,   361,   378,   384,
      69,    70,   362,   292,   233,   363,   233,   364,   366,   391,
     404,   385,   405,   367,   393,   406,   178,    82,    83,    84,
      85,    86,    87,   233,   396,   233,   397,   233,   399,   233,
     400,   233,   127,   285,   287,   289,   291,   293,   295,   296,
     402,   420,    69,    70,   306,   294,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    78,    79,    80,    81,
     198,   408,   410,   412,   414,   419,   194,   430,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   195,    69,
      70,   429,   230,     0,   233,     0,   128,   129,   130,   131,
     132,   133,   134,   329,   233,   330,   233,   331,   233,   332,
     233,   333,   127,   334,    69,    70,     0,    71,   165,   166,
     167,   168,   169,   348,     0,     0,     0,    78,    79,    80,
      81,    69,    70,     0,   304,     0,   356,     0,   358,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    69,
      70,     0,   338,    69,    70,   379,   117,   386,     0,   387,
       0,   388,     0,   389,     0,     0,   128,   129,   130,   131,
     132,   133,   134,     0,     0,   146,   147,   148,   149,   150,
     151,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   360,   200,   201,   202,   203,    69,    70,     0,
     340,   193,     1,     2,     3,     4,     0,     5,     0,     6,
      69,    70,     0,   342,    69,    70,   421,   155,     0,   365,
     200,   201,   202,   203,    69,    70,   425,   344,   426,     0,
     427,     0,   428,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
     152,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     1,
       2,     3,     4,     0,     5,     0,     6,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     0,    62,   368,
     299,   300,   301,   302,   369,   299,   300,   301,   302,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,     0,     0,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   370,   299,   300,   301,
     302,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    78,    79,    80,    81,
     371,   299,   300,   301,   302,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    78,    79,
      80,    81,   372,   299,   300,   301,   302,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      78,    79,    80,    81,   373,   299,   300,   301,   302,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     0,    69,    70,     0,   262,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   390,   200,   201,
     202,   203,     0,     0,     0,    69,    70,     0,   267,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     0,
      69,    70,   127,   407,     0,     0,     0,    69,    70,     0,
     275,     0,   392,   299,   300,   301,   302,    69,    70,     0,
     230,     0,   394,   200,   201,   202,   203,    69,    70,     0,
      71,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    69,    70,     0,   409,   162,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   128,   129,   130,   131,
     132,   133,   134,    69,    70,     0,   411,   187,     0,   395,
     200,   201,   202,   203,    69,    70,     0,   139,   380,   381,
     382,    85,    86,   383,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   401,   299,   300,   301,   302,
     403,   299,   300,   301,   302,    69,    70,     0,   413,   190,
       0,   415,   299,   300,   301,   302,   416,   299,   300,   301,
     302,     0,     0,     0,   311,     0,   417,   299,   300,   301,
     302,   418,   299,   300,   301,   302,   422,   200,   201,   202,
     203,   423,   200,   201,   202,   203,   424,   200,   201,   202,
     203,   431,   200,   201,   202,   203,   432,   299,   300,   301,
     302,   433,   299,   300,   301,   302,   434,   299,   300,   301,
     302,   435,   299,   300,   301,   302,   436,   299,   300,   301,
     302
};

static const yytype_int16 yycheck[] =
{
       2,    28,     4,   101,     7,     8,    27,    28,    11,    11,
      15,    13,    14,   102,    19,    20,    20,    19,    20,     7,
       8,    25,    43,    11,    26,    27,    28,    17,   101,    19,
       3,    20,     8,    28,    10,    23,    25,    81,    26,    27,
      28,    43,     5,    81,     8,   100,   101,    18,    19,    20,
      21,    22,    23,    39,    40,    43,    17,    18,    19,    20,
      21,    22,    23,    51,    52,    41,    42,   105,   106,   107,
     108,     0,    81,   100,   101,    81,   103,    41,    42,    13,
      14,    15,    16,    81,    18,    19,    20,    21,    22,    23,
      81,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    20,    21,    22,    81,   100,   101,    81,   103,    20,
      21,    22,    81,   103,    25,    20,    21,    22,   105,   106,
     107,   108,    98,    20,    21,    22,    81,    81,   104,   100,
     101,    81,   103,   105,   106,   107,   108,    13,    14,    15,
      16,   117,    18,    19,    20,    21,    22,    23,    23,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    18,
      19,    20,    28,   139,    23,   105,   106,   107,   108,   103,
      28,   104,   105,   106,   107,   108,   152,   100,   101,   155,
     103,   100,   101,    81,   103,    81,   162,    81,   152,   152,
      81,   193,    81,    81,   196,   100,   101,    81,   103,    20,
      21,    22,   204,   100,   101,   104,   103,    81,   211,   211,
     213,   213,    20,    21,    22,   218,   218,   219,    81,    81,
     222,   223,   105,   211,    81,   213,    81,   103,   105,    24,
     218,    20,    21,    22,    20,    21,    22,   200,   201,   202,
     203,   105,   205,    20,    21,    22,   210,   235,   212,   105,
     214,   104,   240,   217,   100,   101,   258,   103,   260,   104,
     104,   224,   225,   226,   227,   228,   229,   230,    20,    21,
      22,   273,   235,   104,   105,   106,   107,   108,   104,   100,
     101,   104,   103,   105,   100,   101,   262,   103,    20,    21,
      22,   267,   100,   101,   104,   103,   105,   100,   101,   275,
     103,   303,   100,   101,   104,   103,   308,    20,   310,    81,
     104,   100,   101,   104,   103,    81,   104,   105,   106,   107,
     108,   284,   103,   286,   104,   288,    81,   290,   304,   292,
     103,   294,    20,    21,    22,   311,   299,   300,   301,   302,
     304,   304,   104,   105,   106,   107,   108,   104,   336,   337,
     100,   101,   105,   103,   317,   104,   319,   105,   104,   104,
     362,   337,   364,   105,   105,   367,    17,    18,    19,    20,
      21,    22,    23,   336,   104,   338,   105,   340,   354,   342,
     104,   344,    28,   224,   225,   226,   227,   228,   229,   230,
     104,   393,   100,   101,   235,   103,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    13,    14,    15,    16,
      64,   374,   375,   376,   377,    81,    61,   419,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    61,   100,
     101,   419,   103,    -1,   397,    -1,    82,    83,    84,    85,
      86,    87,    88,   284,   407,   286,   409,   288,   411,   290,
     413,   292,    28,   294,   100,   101,    -1,   103,    33,    34,
      35,    36,    37,   304,    -1,    -1,    -1,    13,    14,    15,
      16,   100,   101,    -1,   103,    -1,   317,    -1,   319,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   100,
     101,    -1,   103,   100,   101,   336,   103,   338,    -1,   340,
      -1,   342,    -1,   344,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   104,   105,   106,   107,   108,   100,   101,    -1,
     103,     3,     4,     5,     6,     7,    -1,     9,    -1,    11,
     100,   101,    -1,   103,   100,   101,   397,   103,    -1,   104,
     105,   106,   107,   108,   100,   101,   407,   103,   409,    -1,
     411,    -1,   413,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     103,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     4,
       5,     6,     7,    -1,     9,    -1,    11,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,   100,   104,
     105,   106,   107,   108,   104,   105,   106,   107,   108,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   104,   105,   106,   107,
     108,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    13,    14,    15,    16,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    13,    14,
      15,    16,   104,   105,   106,   107,   108,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      13,    14,    15,    16,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,   100,   101,    -1,   103,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   104,   105,   106,
     107,   108,    -1,    -1,    -1,   100,   101,    -1,   103,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
     100,   101,    28,   103,    -1,    -1,    -1,   100,   101,    -1,
     103,    -1,   104,   105,   106,   107,   108,   100,   101,    -1,
     103,    -1,   104,   105,   106,   107,   108,   100,   101,    -1,
     103,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   100,   101,    -1,   103,   103,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    82,    83,    84,    85,
      86,    87,    88,   100,   101,    -1,   103,   103,    -1,   104,
     105,   106,   107,   108,   100,   101,    -1,   103,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   104,   105,   106,   107,   108,
     104,   105,   106,   107,   108,   100,   101,    -1,   103,   103,
      -1,   104,   105,   106,   107,   108,   104,   105,   106,   107,
     108,    -1,    -1,    -1,   103,    -1,   104,   105,   106,   107,
     108,   104,   105,   106,   107,   108,   104,   105,   106,   107,
     108,   104,   105,   106,   107,   108,   104,   105,   106,   107,
     108,   104,   105,   106,   107,   108,   104,   105,   106,   107,
     108,   104,   105,   106,   107,   108,   104,   105,   106,   107,
     108,   104,   105,   106,   107,   108,   104,   105,   106,   107,
     108
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     9,    11,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   110,   111,   112,   113,   114,   101,   100,
     101,   103,   136,   139,   136,   138,   139,   102,    13,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   103,   121,
     134,   135,   140,   141,   103,   122,   134,   135,   140,   141,
      20,    25,   123,    20,    25,   124,   140,   103,   125,   134,
     136,   141,    20,    25,   126,   128,   136,    28,    82,    83,
      84,    85,    86,    87,    88,   129,   136,   142,   142,   103,
     130,   136,   142,   131,   136,   142,    18,    19,    20,    21,
      22,    23,   103,   119,   134,   103,   120,   134,   136,   141,
     120,   120,   103,   115,   134,   115,   115,   115,   115,   115,
     101,   116,   116,   116,    17,   132,   135,   140,    17,   133,
     135,   140,   120,    17,    19,   103,   127,   103,   117,   134,
     103,   118,   134,     3,   113,   114,     3,     0,   112,   136,
     105,   106,   107,   108,    81,    81,    20,   140,    20,   140,
      81,    81,    81,    81,    81,    20,   140,    81,    81,    81,
      20,   140,    81,    81,    81,    81,    81,    81,    81,    81,
     103,   135,   137,   139,   140,    81,    20,   140,    20,   140,
      81,    81,    81,    23,    28,    81,    28,    81,   136,   136,
     104,   139,   139,   139,   139,   136,   139,   104,   105,   104,
     105,   135,   103,   134,   136,   141,   135,   103,   134,   136,
     141,   135,   104,   105,   135,   103,   134,   136,   141,   136,
     104,   104,   136,   136,   103,   137,   103,   137,   103,   137,
     103,   137,   103,   137,   103,   137,   137,   104,   104,   105,
     106,   107,   108,   105,   103,   134,   137,   104,   105,   104,
     105,   103,   134,    24,    20,   104,   104,   103,   104,   103,
     136,   136,    20,   140,    20,   140,   136,    20,   140,   137,
     137,   137,   137,   137,   137,   104,    81,    81,   103,   139,
     103,   139,   103,   139,   103,   139,   136,   135,   137,   140,
     136,   136,    20,   140,    81,    28,   137,    28,   137,   104,
     104,   104,   105,   104,   105,   104,   104,   105,   104,   104,
     104,   104,   104,   104,   105,   106,   107,   108,   134,   137,
      18,    19,    20,    23,   134,   140,   137,   137,   137,   137,
     104,   104,   104,   105,   104,   104,   104,   105,    20,   140,
     104,   104,   104,   104,   136,   136,   136,   103,   139,   103,
     139,   103,   139,   103,   139,   104,   104,   104,   104,    81,
     136,   137,   104,   104,   104,   137,   137,   137,   137,   134,
     136,   104,   104,   104,   104,   104,   104
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   111,   111,   112,   112,   112,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   115,   115,   115,   116,   116,   116,   117,
     117,   117,   118,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   122,   122,   123,
     123,   123,   123,   123,   123,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   125,   125,   125,   126,   126,   126,
     126,   126,   126,   127,   127,   127,   127,   128,   129,   129,
     130,   130,   130,   130,   131,   131,   132,   132,   132,   133,
     133,   133,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   135,   135,   135,   135,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   141,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     2,     3,
       1,     2,     4,     2,     2,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 87 "grammar-firstpass.y"
                                        {	}
#line 1894 "grammar-firstpass.tab.c"
    break;

  case 3: /* lines: line  */
#line 89 "grammar-firstpass.y"
                                {   	}
#line 1900 "grammar-firstpass.tab.c"
    break;

  case 4: /* lines: lines line  */
#line 90 "grammar-firstpass.y"
                                        { 	 	}
#line 1906 "grammar-firstpass.tab.c"
    break;

  case 5: /* line: instruction  */
#line 92 "grammar-firstpass.y"
                                                                { }
#line 1912 "grammar-firstpass.tab.c"
    break;

  case 6: /* line: directive  */
#line 93 "grammar-firstpass.y"
                                                                                { }
#line 1918 "grammar-firstpass.tab.c"
    break;

  case 7: /* line: LABEL instruction  */
#line 94 "grammar-firstpass.y"
                                                                        { sym_addlabel((yyvsp[-1].literal),pc_get()); }
#line 1924 "grammar-firstpass.tab.c"
    break;

  case 8: /* line: LABEL directive  */
#line 95 "grammar-firstpass.y"
                                                                        { sym_addlabel((yyvsp[-1].literal),pc_get()); }
#line 1930 "grammar-firstpass.tab.c"
    break;

  case 9: /* line: LABEL EQU expression  */
#line 96 "grammar-firstpass.y"
                                                                        { sym_addlabel((yyvsp[-2].literal),(yyvsp[0].normal)); }
#line 1936 "grammar-firstpass.tab.c"
    break;

  case 10: /* directive: END  */
#line 99 "grammar-firstpass.y"
                                                                                                        { return 0;}
#line 1942 "grammar-firstpass.tab.c"
    break;

  case 11: /* directive: DEFS expression  */
#line 100 "grammar-firstpass.y"
                                                                                                { pc_inc((yyvsp[0].normal)); }
#line 1948 "grammar-firstpass.tab.c"
    break;

  case 12: /* directive: DEFS expression COMMA expression  */
#line 101 "grammar-firstpass.y"
                                                                                { pc_inc((yyvsp[-2].normal)); }
#line 1954 "grammar-firstpass.tab.c"
    break;

  case 14: /* directive: DEFM STRING  */
#line 103 "grammar-firstpass.y"
                                                                                                { pc_inc( strlen((yyvsp[0].literal))); }
#line 1960 "grammar-firstpass.tab.c"
    break;

  case 15: /* directive: LITERAL EQU expression  */
#line 104 "grammar-firstpass.y"
                                                                                        { sym_addlabel((yyvsp[-2].literal),(yyvsp[0].normal)); }
#line 1966 "grammar-firstpass.tab.c"
    break;

  case 16: /* directive: ORG INTEGER  */
#line 105 "grammar-firstpass.y"
                                                                                                        { pc_init((yyvsp[0].normal)); }
#line 1972 "grammar-firstpass.tab.c"
    break;

  case 17: /* directive: ALIGN expression  */
#line 106 "grammar-firstpass.y"
                                                { 
										int pc = pc_get();
										int k = ((( pc / (yyvsp[0].normal))+1)*(yyvsp[0].normal)); 
										for  (int a = pc; a < k; a++) { 
											pc_inc(1); 
										} 
									}
#line 1984 "grammar-firstpass.tab.c"
    break;

  case 18: /* instruction: NOP  */
#line 115 "grammar-firstpass.y"
                                                                { pc_inc(1); }
#line 1990 "grammar-firstpass.tab.c"
    break;

  case 19: /* instruction: DI  */
#line 116 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 1996 "grammar-firstpass.tab.c"
    break;

  case 20: /* instruction: EI  */
#line 117 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2002 "grammar-firstpass.tab.c"
    break;

  case 21: /* instruction: HALT  */
#line 118 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2008 "grammar-firstpass.tab.c"
    break;

  case 22: /* instruction: RLCA  */
#line 119 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2014 "grammar-firstpass.tab.c"
    break;

  case 23: /* instruction: RRCA  */
#line 120 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2020 "grammar-firstpass.tab.c"
    break;

  case 24: /* instruction: RLA  */
#line 121 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2026 "grammar-firstpass.tab.c"
    break;

  case 25: /* instruction: CCF  */
#line 122 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2032 "grammar-firstpass.tab.c"
    break;

  case 26: /* instruction: CPIR  */
#line 123 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2038 "grammar-firstpass.tab.c"
    break;

  case 27: /* instruction: CPI  */
#line 124 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2044 "grammar-firstpass.tab.c"
    break;

  case 28: /* instruction: CPDR  */
#line 125 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2050 "grammar-firstpass.tab.c"
    break;

  case 29: /* instruction: CPD  */
#line 126 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2056 "grammar-firstpass.tab.c"
    break;

  case 30: /* instruction: RET  */
#line 127 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2062 "grammar-firstpass.tab.c"
    break;

  case 31: /* instruction: RETN  */
#line 128 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2068 "grammar-firstpass.tab.c"
    break;

  case 32: /* instruction: RETI  */
#line 129 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2074 "grammar-firstpass.tab.c"
    break;

  case 33: /* instruction: RST  */
#line 130 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2080 "grammar-firstpass.tab.c"
    break;

  case 34: /* instruction: EXX  */
#line 131 "grammar-firstpass.y"
                                                                        { pc_inc(1); }
#line 2086 "grammar-firstpass.tab.c"
    break;

  case 35: /* instruction: INI  */
#line 132 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2092 "grammar-firstpass.tab.c"
    break;

  case 36: /* instruction: INIR  */
#line 133 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2098 "grammar-firstpass.tab.c"
    break;

  case 37: /* instruction: IND  */
#line 134 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2104 "grammar-firstpass.tab.c"
    break;

  case 38: /* instruction: INDR  */
#line 135 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2110 "grammar-firstpass.tab.c"
    break;

  case 39: /* instruction: OUTI  */
#line 136 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2116 "grammar-firstpass.tab.c"
    break;

  case 40: /* instruction: OTIR  */
#line 137 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2122 "grammar-firstpass.tab.c"
    break;

  case 41: /* instruction: OUTD  */
#line 138 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2128 "grammar-firstpass.tab.c"
    break;

  case 42: /* instruction: OTDR  */
#line 139 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2134 "grammar-firstpass.tab.c"
    break;

  case 43: /* instruction: RET condflag  */
#line 140 "grammar-firstpass.y"
                                                                { pc_inc(1); }
#line 2140 "grammar-firstpass.tab.c"
    break;

  case 44: /* instruction: LD ldcommand  */
#line 141 "grammar-firstpass.y"
                                                                { }
#line 2146 "grammar-firstpass.tab.c"
    break;

  case 45: /* instruction: OR orcommand  */
#line 142 "grammar-firstpass.y"
                                                                { }
#line 2152 "grammar-firstpass.tab.c"
    break;

  case 46: /* instruction: XOR orcommand  */
#line 143 "grammar-firstpass.y"
                                                                { }
#line 2158 "grammar-firstpass.tab.c"
    break;

  case 47: /* instruction: AND orcommand  */
#line 144 "grammar-firstpass.y"
                                                                { }
#line 2164 "grammar-firstpass.tab.c"
    break;

  case 48: /* instruction: CP orcommand  */
#line 145 "grammar-firstpass.y"
                                                                { }
#line 2170 "grammar-firstpass.tab.c"
    break;

  case 49: /* instruction: INC inccommand  */
#line 146 "grammar-firstpass.y"
                                                                { }
#line 2176 "grammar-firstpass.tab.c"
    break;

  case 50: /* instruction: DEC deccommand  */
#line 147 "grammar-firstpass.y"
                                                                { }
#line 2182 "grammar-firstpass.tab.c"
    break;

  case 51: /* instruction: ADC adccommand  */
#line 148 "grammar-firstpass.y"
                                                                { }
#line 2188 "grammar-firstpass.tab.c"
    break;

  case 52: /* instruction: ADD addcommand  */
#line 149 "grammar-firstpass.y"
                                                                { }
#line 2194 "grammar-firstpass.tab.c"
    break;

  case 53: /* instruction: SUB subcommand  */
#line 150 "grammar-firstpass.y"
                                                                { }
#line 2200 "grammar-firstpass.tab.c"
    break;

  case 54: /* instruction: SBC sbccommand  */
#line 151 "grammar-firstpass.y"
                                                                { }
#line 2206 "grammar-firstpass.tab.c"
    break;

  case 55: /* instruction: DJNZ djnzcommand  */
#line 152 "grammar-firstpass.y"
                                                                { }
#line 2212 "grammar-firstpass.tab.c"
    break;

  case 56: /* instruction: JR jrcommand  */
#line 153 "grammar-firstpass.y"
                                                                { }
#line 2218 "grammar-firstpass.tab.c"
    break;

  case 57: /* instruction: JP jpcommand  */
#line 154 "grammar-firstpass.y"
                                                                { }
#line 2224 "grammar-firstpass.tab.c"
    break;

  case 58: /* instruction: CALL callcommand  */
#line 155 "grammar-firstpass.y"
                                                                { }
#line 2230 "grammar-firstpass.tab.c"
    break;

  case 59: /* instruction: EX excommand  */
#line 156 "grammar-firstpass.y"
                                                                { }
#line 2236 "grammar-firstpass.tab.c"
    break;

  case 60: /* instruction: PUSH pushcommand  */
#line 157 "grammar-firstpass.y"
                                                                { }
#line 2242 "grammar-firstpass.tab.c"
    break;

  case 61: /* instruction: POP popcommand  */
#line 158 "grammar-firstpass.y"
                                                                { }
#line 2248 "grammar-firstpass.tab.c"
    break;

  case 62: /* instruction: IN incommand  */
#line 159 "grammar-firstpass.y"
                                                                { }
#line 2254 "grammar-firstpass.tab.c"
    break;

  case 63: /* instruction: OUT outcommand  */
#line 160 "grammar-firstpass.y"
                                                                { }
#line 2260 "grammar-firstpass.tab.c"
    break;

  case 64: /* instruction: BIT bitcommand  */
#line 161 "grammar-firstpass.y"
                                                                { }
#line 2266 "grammar-firstpass.tab.c"
    break;

  case 65: /* instruction: RES bitcommand  */
#line 162 "grammar-firstpass.y"
                                                                { }
#line 2272 "grammar-firstpass.tab.c"
    break;

  case 66: /* instruction: SET bitcommand  */
#line 163 "grammar-firstpass.y"
                                                                { }
#line 2278 "grammar-firstpass.tab.c"
    break;

  case 67: /* instruction: SLA slacommand  */
#line 164 "grammar-firstpass.y"
                                                                { }
#line 2284 "grammar-firstpass.tab.c"
    break;

  case 68: /* instruction: SRA slacommand  */
#line 165 "grammar-firstpass.y"
                                                                { }
#line 2290 "grammar-firstpass.tab.c"
    break;

  case 69: /* instruction: RL slacommand  */
#line 166 "grammar-firstpass.y"
                                                                { }
#line 2296 "grammar-firstpass.tab.c"
    break;

  case 70: /* instruction: RR slacommand  */
#line 167 "grammar-firstpass.y"
                                                                { }
#line 2302 "grammar-firstpass.tab.c"
    break;

  case 71: /* instruction: RRC slacommand  */
#line 168 "grammar-firstpass.y"
                                                                { }
#line 2308 "grammar-firstpass.tab.c"
    break;

  case 72: /* instruction: RLC slacommand  */
#line 169 "grammar-firstpass.y"
                                                                { }
#line 2314 "grammar-firstpass.tab.c"
    break;

  case 73: /* slacommand: reg8  */
#line 172 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2320 "grammar-firstpass.tab.c"
    break;

  case 74: /* slacommand: PARLEFT HL PARRIGHT  */
#line 173 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2326 "grammar-firstpass.tab.c"
    break;

  case 75: /* slacommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 174 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2332 "grammar-firstpass.tab.c"
    break;

  case 76: /* bitcommand: INTEGER COMMA reg8  */
#line 176 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2338 "grammar-firstpass.tab.c"
    break;

  case 77: /* bitcommand: INTEGER COMMA PARLEFT HL PARRIGHT  */
#line 177 "grammar-firstpass.y"
                                                                                                        { pc_inc(2); }
#line 2344 "grammar-firstpass.tab.c"
    break;

  case 78: /* bitcommand: INTEGER COMMA PARLEFT indexreg OPADD expression2 PARRIGHT  */
#line 178 "grammar-firstpass.y"
                                                                                          { pc_inc(4); }
#line 2350 "grammar-firstpass.tab.c"
    break;

  case 79: /* incommand: reg8 COMMA PARLEFT C PARRIGHT  */
#line 180 "grammar-firstpass.y"
                                                                                {  pc_inc(2); }
#line 2356 "grammar-firstpass.tab.c"
    break;

  case 80: /* incommand: reg8 COMMA PARLEFT expression2 PARRIGHT  */
#line 181 "grammar-firstpass.y"
                                                                                        {  pc_inc(2); }
#line 2362 "grammar-firstpass.tab.c"
    break;

  case 81: /* incommand: PARLEFT C PARRIGHT  */
#line 182 "grammar-firstpass.y"
                                                                                                                {  pc_inc(2); }
#line 2368 "grammar-firstpass.tab.c"
    break;

  case 82: /* outcommand: reg8 COMMA PARLEFT expression2 PARRIGHT  */
#line 184 "grammar-firstpass.y"
                                                                        { pc_inc(2); }
#line 2374 "grammar-firstpass.tab.c"
    break;

  case 83: /* outcommand: reg8 COMMA PARLEFT C PARRIGHT  */
#line 185 "grammar-firstpass.y"
                                                                                        { pc_inc(2); }
#line 2380 "grammar-firstpass.tab.c"
    break;

  case 84: /* outcommand: PARLEFT C PARRIGHT  */
#line 186 "grammar-firstpass.y"
                                                                                                        { pc_inc(2); }
#line 2386 "grammar-firstpass.tab.c"
    break;

  case 85: /* ldcommand: reg8 COMMA reg8  */
#line 188 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2392 "grammar-firstpass.tab.c"
    break;

  case 86: /* ldcommand: reg8 COMMA expression2  */
#line 189 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2398 "grammar-firstpass.tab.c"
    break;

  case 87: /* ldcommand: reg8 COMMA PARLEFT reg16 PARRIGHT  */
#line 190 "grammar-firstpass.y"
                                                                                                { pc_inc(1); }
#line 2404 "grammar-firstpass.tab.c"
    break;

  case 88: /* ldcommand: reg8 COMMA PARLEFT expression2 PARRIGHT  */
#line 191 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2410 "grammar-firstpass.tab.c"
    break;

  case 89: /* ldcommand: reg8 COMMA PARLEFT indexreg OPADD expression PARRIGHT  */
#line 192 "grammar-firstpass.y"
                                                                                        { pc_inc(3); }
#line 2416 "grammar-firstpass.tab.c"
    break;

  case 90: /* ldcommand: PARLEFT reg16 PARRIGHT COMMA reg8  */
#line 193 "grammar-firstpass.y"
                                                                                                        { pc_inc(1); }
#line 2422 "grammar-firstpass.tab.c"
    break;

  case 91: /* ldcommand: PARLEFT reg16 PARRIGHT COMMA expression2  */
#line 194 "grammar-firstpass.y"
                                                                                                { pc_inc(2); }
#line 2428 "grammar-firstpass.tab.c"
    break;

  case 92: /* ldcommand: HL COMMA PARLEFT expression2 PARRIGHT  */
#line 195 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2434 "grammar-firstpass.tab.c"
    break;

  case 93: /* ldcommand: DE COMMA PARLEFT expression2 PARRIGHT  */
#line 196 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2440 "grammar-firstpass.tab.c"
    break;

  case 94: /* ldcommand: BC COMMA PARLEFT expression2 PARRIGHT  */
#line 197 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2446 "grammar-firstpass.tab.c"
    break;

  case 95: /* ldcommand: SP COMMA PARLEFT expression2 PARRIGHT  */
#line 198 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2452 "grammar-firstpass.tab.c"
    break;

  case 96: /* ldcommand: IX COMMA PARLEFT expression2 PARRIGHT  */
#line 199 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2458 "grammar-firstpass.tab.c"
    break;

  case 97: /* ldcommand: IY COMMA PARLEFT expression2 PARRIGHT  */
#line 200 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2464 "grammar-firstpass.tab.c"
    break;

  case 98: /* ldcommand: HL COMMA expression2  */
#line 201 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2470 "grammar-firstpass.tab.c"
    break;

  case 99: /* ldcommand: BC COMMA expression2  */
#line 202 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2476 "grammar-firstpass.tab.c"
    break;

  case 100: /* ldcommand: DE COMMA expression2  */
#line 203 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2482 "grammar-firstpass.tab.c"
    break;

  case 101: /* ldcommand: SP COMMA expression2  */
#line 204 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2488 "grammar-firstpass.tab.c"
    break;

  case 102: /* ldcommand: IX COMMA expression2  */
#line 205 "grammar-firstpass.y"
                                                                                                                { pc_inc(4); }
#line 2494 "grammar-firstpass.tab.c"
    break;

  case 103: /* ldcommand: IY COMMA expression2  */
#line 206 "grammar-firstpass.y"
                                                                                                                { pc_inc(4); }
#line 2500 "grammar-firstpass.tab.c"
    break;

  case 104: /* ldcommand: PARLEFT indexreg OPADD expression PARRIGHT COMMA expression  */
#line 207 "grammar-firstpass.y"
                                                                                                { pc_inc(4); }
#line 2506 "grammar-firstpass.tab.c"
    break;

  case 105: /* ldcommand: PARLEFT indexreg OPADD expression PARRIGHT COMMA reg8  */
#line 208 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2512 "grammar-firstpass.tab.c"
    break;

  case 106: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA reg8  */
#line 209 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2518 "grammar-firstpass.tab.c"
    break;

  case 107: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA indexreg  */
#line 210 "grammar-firstpass.y"
                                                                                                                { pc_inc(4); }
#line 2524 "grammar-firstpass.tab.c"
    break;

  case 108: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA HL  */
#line 211 "grammar-firstpass.y"
                                                                                                        { pc_inc(3); }
#line 2530 "grammar-firstpass.tab.c"
    break;

  case 109: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA BC  */
#line 212 "grammar-firstpass.y"
                                                                                                        { pc_inc(4); }
#line 2536 "grammar-firstpass.tab.c"
    break;

  case 110: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA DE  */
#line 213 "grammar-firstpass.y"
                                                                                                        { pc_inc(4); }
#line 2542 "grammar-firstpass.tab.c"
    break;

  case 111: /* ldcommand: PARLEFT expression2 PARRIGHT COMMA SP  */
#line 214 "grammar-firstpass.y"
                                                                                                        { pc_inc(4); }
#line 2548 "grammar-firstpass.tab.c"
    break;

  case 112: /* orcommand: reg8  */
#line 219 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2554 "grammar-firstpass.tab.c"
    break;

  case 113: /* orcommand: expression  */
#line 220 "grammar-firstpass.y"
                                                                                                                                { pc_inc(2); }
#line 2560 "grammar-firstpass.tab.c"
    break;

  case 114: /* orcommand: PARLEFT HL PARRIGHT  */
#line 221 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2566 "grammar-firstpass.tab.c"
    break;

  case 115: /* orcommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 222 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2572 "grammar-firstpass.tab.c"
    break;

  case 116: /* orcommand: index8reg  */
#line 223 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2578 "grammar-firstpass.tab.c"
    break;

  case 117: /* inccommand: reg8  */
#line 225 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2584 "grammar-firstpass.tab.c"
    break;

  case 118: /* inccommand: reg16  */
#line 226 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2590 "grammar-firstpass.tab.c"
    break;

  case 119: /* inccommand: PARLEFT HL PARRIGHT  */
#line 227 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2596 "grammar-firstpass.tab.c"
    break;

  case 120: /* inccommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 228 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2602 "grammar-firstpass.tab.c"
    break;

  case 121: /* inccommand: indexreg  */
#line 229 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2608 "grammar-firstpass.tab.c"
    break;

  case 122: /* inccommand: index8reg  */
#line 230 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2614 "grammar-firstpass.tab.c"
    break;

  case 123: /* deccommand: reg8  */
#line 232 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2620 "grammar-firstpass.tab.c"
    break;

  case 124: /* deccommand: reg16  */
#line 233 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2626 "grammar-firstpass.tab.c"
    break;

  case 125: /* deccommand: PARLEFT HL PARRIGHT  */
#line 234 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2632 "grammar-firstpass.tab.c"
    break;

  case 126: /* deccommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 235 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2638 "grammar-firstpass.tab.c"
    break;

  case 127: /* deccommand: indexreg  */
#line 236 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2644 "grammar-firstpass.tab.c"
    break;

  case 128: /* deccommand: index8reg  */
#line 237 "grammar-firstpass.y"
                                                                                                                                { pc_inc(1); }
#line 2650 "grammar-firstpass.tab.c"
    break;

  case 129: /* adccommand: A COMMA expression  */
#line 239 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2656 "grammar-firstpass.tab.c"
    break;

  case 130: /* adccommand: A COMMA reg8  */
#line 240 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2662 "grammar-firstpass.tab.c"
    break;

  case 131: /* adccommand: A COMMA index8reg  */
#line 241 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2668 "grammar-firstpass.tab.c"
    break;

  case 132: /* adccommand: A COMMA PARLEFT HL PARRIGHT  */
#line 242 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2674 "grammar-firstpass.tab.c"
    break;

  case 133: /* adccommand: A COMMA PARLEFT indexreg OPADD expression PARRIGHT  */
#line 243 "grammar-firstpass.y"
                                                                                        { pc_inc(3); }
#line 2680 "grammar-firstpass.tab.c"
    break;

  case 134: /* adccommand: HL COMMA reg16  */
#line 244 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2686 "grammar-firstpass.tab.c"
    break;

  case 135: /* addcommand: A COMMA expression  */
#line 246 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2692 "grammar-firstpass.tab.c"
    break;

  case 136: /* addcommand: A COMMA reg8  */
#line 247 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2698 "grammar-firstpass.tab.c"
    break;

  case 137: /* addcommand: A COMMA index8reg  */
#line 248 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2704 "grammar-firstpass.tab.c"
    break;

  case 138: /* addcommand: A COMMA PARLEFT HL PARRIGHT  */
#line 249 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2710 "grammar-firstpass.tab.c"
    break;

  case 139: /* addcommand: A COMMA PARLEFT indexreg OPADD expression PARRIGHT  */
#line 250 "grammar-firstpass.y"
                                                                                        { pc_inc(3); }
#line 2716 "grammar-firstpass.tab.c"
    break;

  case 140: /* addcommand: HL COMMA reg16  */
#line 251 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2722 "grammar-firstpass.tab.c"
    break;

  case 141: /* addcommand: indexreg COMMA reg16  */
#line 252 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2728 "grammar-firstpass.tab.c"
    break;

  case 142: /* subcommand: reg8  */
#line 254 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2734 "grammar-firstpass.tab.c"
    break;

  case 143: /* subcommand: expression  */
#line 255 "grammar-firstpass.y"
                                                                                                                                { pc_inc(2); }
#line 2740 "grammar-firstpass.tab.c"
    break;

  case 144: /* subcommand: PARLEFT HL PARRIGHT  */
#line 256 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2746 "grammar-firstpass.tab.c"
    break;

  case 145: /* subcommand: PARLEFT indexreg OPADD expression PARRIGHT  */
#line 257 "grammar-firstpass.y"
                                                                                                { pc_inc(3); }
#line 2752 "grammar-firstpass.tab.c"
    break;

  case 146: /* subcommand: index8reg  */
#line 258 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2758 "grammar-firstpass.tab.c"
    break;

  case 147: /* sbccommand: A COMMA expression  */
#line 260 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2764 "grammar-firstpass.tab.c"
    break;

  case 148: /* sbccommand: A COMMA reg8  */
#line 261 "grammar-firstpass.y"
                                                                                                                        { pc_inc(1); }
#line 2770 "grammar-firstpass.tab.c"
    break;

  case 149: /* sbccommand: A COMMA index8reg  */
#line 262 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2776 "grammar-firstpass.tab.c"
    break;

  case 150: /* sbccommand: A COMMA PARLEFT HL PARRIGHT  */
#line 263 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2782 "grammar-firstpass.tab.c"
    break;

  case 151: /* sbccommand: A COMMA PARLEFT indexreg OPADD expression PARRIGHT  */
#line 264 "grammar-firstpass.y"
                                                                                        { pc_inc(3); }
#line 2788 "grammar-firstpass.tab.c"
    break;

  case 152: /* sbccommand: HL COMMA reg16  */
#line 265 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2794 "grammar-firstpass.tab.c"
    break;

  case 153: /* excommand: AF COMMA AFPLUS  */
#line 267 "grammar-firstpass.y"
                                                                        {  pc_inc(1);  }
#line 2800 "grammar-firstpass.tab.c"
    break;

  case 154: /* excommand: PARLEFT SP PARRIGHT COMMA HL  */
#line 268 "grammar-firstpass.y"
                                                                {  pc_inc(1);  }
#line 2806 "grammar-firstpass.tab.c"
    break;

  case 155: /* excommand: DE COMMA HL  */
#line 269 "grammar-firstpass.y"
                                                                                        {  pc_inc(1);  }
#line 2812 "grammar-firstpass.tab.c"
    break;

  case 156: /* excommand: PARLEFT SP PARRIGHT COMMA indexreg  */
#line 270 "grammar-firstpass.y"
                                                                        {  pc_inc(2);  }
#line 2818 "grammar-firstpass.tab.c"
    break;

  case 157: /* djnzcommand: expression  */
#line 272 "grammar-firstpass.y"
                                                                                                { pc_inc(2); }
#line 2824 "grammar-firstpass.tab.c"
    break;

  case 158: /* jrcommand: expression  */
#line 274 "grammar-firstpass.y"
                                                                                                                        { pc_inc(2); }
#line 2830 "grammar-firstpass.tab.c"
    break;

  case 159: /* jrcommand: condflag COMMA expression  */
#line 275 "grammar-firstpass.y"
                                                                                                        { pc_inc(2); }
#line 2836 "grammar-firstpass.tab.c"
    break;

  case 160: /* jpcommand: expression  */
#line 277 "grammar-firstpass.y"
                                                                                                                        { pc_inc(3); }
#line 2842 "grammar-firstpass.tab.c"
    break;

  case 161: /* jpcommand: condflag COMMA expression  */
#line 278 "grammar-firstpass.y"
                                                                                                        { pc_inc(3); }
#line 2848 "grammar-firstpass.tab.c"
    break;

  case 162: /* jpcommand: PARLEFT HL PARRIGHT  */
#line 279 "grammar-firstpass.y"
                                                                                                                { pc_inc(1); }
#line 2854 "grammar-firstpass.tab.c"
    break;

  case 163: /* jpcommand: PARLEFT indexreg PARRIGHT  */
#line 280 "grammar-firstpass.y"
                                                                                                                { pc_inc(2); }
#line 2860 "grammar-firstpass.tab.c"
    break;

  case 164: /* callcommand: expression  */
#line 282 "grammar-firstpass.y"
                                                                                                                { pc_inc(3); }
#line 2866 "grammar-firstpass.tab.c"
    break;

  case 165: /* callcommand: condflag COMMA expression  */
#line 283 "grammar-firstpass.y"
                                                                                                        { pc_inc(3); }
#line 2872 "grammar-firstpass.tab.c"
    break;

  case 166: /* pushcommand: reg16  */
#line 285 "grammar-firstpass.y"
                                        {  pc_inc(1);  }
#line 2878 "grammar-firstpass.tab.c"
    break;

  case 167: /* pushcommand: indexreg  */
#line 286 "grammar-firstpass.y"
                                                        {  pc_inc(2);  }
#line 2884 "grammar-firstpass.tab.c"
    break;

  case 168: /* pushcommand: AF  */
#line 287 "grammar-firstpass.y"
                                                        { pc_inc(1); }
#line 2890 "grammar-firstpass.tab.c"
    break;

  case 169: /* popcommand: reg16  */
#line 289 "grammar-firstpass.y"
                                        {  pc_inc(1);  }
#line 2896 "grammar-firstpass.tab.c"
    break;

  case 170: /* popcommand: indexreg  */
#line 290 "grammar-firstpass.y"
                                                {  pc_inc(2);  }
#line 2902 "grammar-firstpass.tab.c"
    break;

  case 171: /* popcommand: AF  */
#line 291 "grammar-firstpass.y"
                                                {  pc_inc(1); }
#line 2908 "grammar-firstpass.tab.c"
    break;

  case 186: /* expression: expritem  */
#line 310 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[0].normal); }
#line 2914 "grammar-firstpass.tab.c"
    break;

  case 187: /* expression: expression OPADD expritem  */
#line 311 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + (yyvsp[0].normal); }
#line 2920 "grammar-firstpass.tab.c"
    break;

  case 188: /* expression: expression OPSUB expritem  */
#line 312 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) - (yyvsp[0].normal); }
#line 2926 "grammar-firstpass.tab.c"
    break;

  case 189: /* expression: expression OPMUL expritem  */
#line 313 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) * (yyvsp[0].normal); }
#line 2932 "grammar-firstpass.tab.c"
    break;

  case 190: /* expression: expression OPDIV expritem  */
#line 314 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) / (yyvsp[0].normal); }
#line 2938 "grammar-firstpass.tab.c"
    break;

  case 191: /* expression: PARLEFT expression PARRIGHT  */
#line 315 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-1].normal); }
#line 2944 "grammar-firstpass.tab.c"
    break;

  case 192: /* expression2: expritem  */
#line 317 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[0].normal); }
#line 2950 "grammar-firstpass.tab.c"
    break;

  case 193: /* expression2: expression2 OPADD expritem  */
#line 318 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) + (yyvsp[0].normal); }
#line 2956 "grammar-firstpass.tab.c"
    break;

  case 194: /* expression2: expression2 OPSUB expritem  */
#line 319 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) - (yyvsp[0].normal); }
#line 2962 "grammar-firstpass.tab.c"
    break;

  case 195: /* expression2: expression2 OPMUL expritem  */
#line 320 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) * (yyvsp[0].normal); }
#line 2968 "grammar-firstpass.tab.c"
    break;

  case 196: /* expression2: expression2 OPDIV expritem  */
#line 321 "grammar-firstpass.y"
                                                                        { (yyval.normal) = (yyvsp[-2].normal) / (yyvsp[0].normal); }
#line 2974 "grammar-firstpass.tab.c"
    break;

  case 197: /* expression2: expression2 OPADD PARLEFT expression2 PARRIGHT  */
#line 322 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) + (yyvsp[-1].normal); }
#line 2980 "grammar-firstpass.tab.c"
    break;

  case 198: /* expression2: expression2 OPSUB PARLEFT expression2 PARRIGHT  */
#line 323 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) - (yyvsp[-1].normal); }
#line 2986 "grammar-firstpass.tab.c"
    break;

  case 199: /* expression2: expression2 OPMUL PARLEFT expression2 PARRIGHT  */
#line 324 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) * (yyvsp[-1].normal); }
#line 2992 "grammar-firstpass.tab.c"
    break;

  case 200: /* expression2: expression2 OPDIV PARLEFT expression2 PARRIGHT  */
#line 325 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-4].normal) / (yyvsp[-1].normal); }
#line 2998 "grammar-firstpass.tab.c"
    break;

  case 201: /* expression2: PARLEFT expression2 PARRIGHT OPADD expritem  */
#line 326 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) + (yyvsp[0].normal); }
#line 3004 "grammar-firstpass.tab.c"
    break;

  case 202: /* expression2: PARLEFT expression2 PARRIGHT OPSUB expritem  */
#line 327 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) - (yyvsp[0].normal); }
#line 3010 "grammar-firstpass.tab.c"
    break;

  case 203: /* expression2: PARLEFT expression2 PARRIGHT OPMUL expritem  */
#line 328 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) * (yyvsp[0].normal); }
#line 3016 "grammar-firstpass.tab.c"
    break;

  case 204: /* expression2: PARLEFT expression2 PARRIGHT OPDIV expritem  */
#line 329 "grammar-firstpass.y"
                                                                                        { (yyval.normal) = (yyvsp[-3].normal) / (yyvsp[0].normal); }
#line 3022 "grammar-firstpass.tab.c"
    break;

  case 205: /* expression2: PARLEFT expression2 PARRIGHT OPADD PARLEFT expression2 PARRIGHT  */
#line 330 "grammar-firstpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) + (yyvsp[-1].normal); }
#line 3028 "grammar-firstpass.tab.c"
    break;

  case 206: /* expression2: PARLEFT expression2 PARRIGHT OPSUB PARLEFT expression2 PARRIGHT  */
#line 331 "grammar-firstpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) - (yyvsp[-1].normal); }
#line 3034 "grammar-firstpass.tab.c"
    break;

  case 207: /* expression2: PARLEFT expression2 PARRIGHT OPMUL PARLEFT expression2 PARRIGHT  */
#line 332 "grammar-firstpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) * (yyvsp[-1].normal); }
#line 3040 "grammar-firstpass.tab.c"
    break;

  case 208: /* expression2: PARLEFT expression2 PARRIGHT OPDIV PARLEFT expression2 PARRIGHT  */
#line 333 "grammar-firstpass.y"
                                                                                                        { (yyval.normal) = (yyvsp[-5].normal) / (yyvsp[-1].normal); }
#line 3046 "grammar-firstpass.tab.c"
    break;

  case 211: /* expritem: INTEGER  */
#line 338 "grammar-firstpass.y"
                                                        {	(yyval.normal) = (yyvsp[0].normal); }
#line 3052 "grammar-firstpass.tab.c"
    break;

  case 212: /* expritem: LITERAL  */
#line 339 "grammar-firstpass.y"
                                                                {	
										if ( sym_lookuplabel((yyvsp[0].literal)) == TRUE ) {
											(yyval.normal) = sym_getvalue((yyvsp[0].literal));
										}
										else {
											(yyval.normal) = 0;
										}	
									}
#line 3065 "grammar-firstpass.tab.c"
    break;


#line 3069 "grammar-firstpass.tab.c"

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

