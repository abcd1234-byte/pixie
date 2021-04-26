/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         slparse
#define yylex           sllex
#define yyerror         slerror
#define yydebug         sldebug
#define yynerrs         slnerrs
#define yylval          sllval
#define yychar          slchar

/* First part of user prologue.  */
#line 60 "sl.y"

//////////////////////////////////////////////////////////////////////////
// Misc C definitions
//////////////////////////////////////////////////////////////////////////
#undef alloca
#include	<stdlib.h>
#include	<string.h>

#include	"common/global.h"
#include	"common/os.h"
#include	"opcodes.h"
#include	"sdr.h"

	void				yyerror(const char *);			// Forward definition for stupid yacc
	int					yylex(void );					// Forward definition for stupid yacc
														
//////////////////////////////////////////////////////////////////////////
// Here's the only global CVariable
//////////////////////////////////////////////////////////////////////////
	CScriptContext		*sdr;
	
// This macro can be used to record the last parsed line number for accurate error reporting
#define	checkPoint()	sdr->statementLineNo	=	sdr->lineNo

//////////////////////////////////////////////////////////////////////////



#line 106 "sl.cpp"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SL_SURFACE = 258,
    SL_DISPLACEMENT = 259,
    SL_LIGHT = 260,
    SL_VOLUME = 261,
    SL_TRANSFORMATION = 262,
    SL_IMAGER = 263,
    SL_FOR = 264,
    SL_WHILE = 265,
    SL_IF = 266,
    SL_GATHER = 267,
    SL_ELSE = 268,
    SL_BREAK = 269,
    SL_CONTINUE = 270,
    SL_ILLUMINANCE = 271,
    SL_ILLUMINATE = 272,
    SL_SOLAR = 273,
    SL_RETURN = 274,
    SL_VOID = 275,
    SL_FCN_PI = 276,
    SL_IDENTIFIER_VALUE = 277,
    SL_FLOAT_VALUE = 278,
    SL_COMMA = 279,
    SL_SEMI_COLON = 280,
    SL_OPEN_PARANTHESIS = 281,
    SL_CLOSE_PARANTHESIS = 282,
    SL_OPEN_CRL_PARANTHESIS = 283,
    SL_CLOSE_CRL_PARANTHESIS = 284,
    SL_OPEN_SQR_PARANTHESIS = 285,
    SL_CLOSE_SQR_PARANTHESIS = 286,
    SL_TEXTURE = 287,
    SL_SHADOW = 288,
    SL_ENVIRONMENT = 289,
    SL_BUMP = 290,
    SL_TEXT_VALUE = 291,
    SL_EQUAL = 292,
    SL_INCREMENT = 293,
    SL_DECREMENT = 294,
    SL_INCREMENT_BY = 295,
    SL_DECREMENT_BY = 296,
    SL_MULTIPLY_BY = 297,
    SL_DIVIDE_BY = 298,
    SL_QUESTION = 299,
    SL_COLON = 300,
    SL_FLOAT = 301,
    SL_COLOR = 302,
    SL_POINT = 303,
    SL_VECTOR = 304,
    SL_NORMAL = 305,
    SL_MATRIX = 306,
    SL_STRING = 307,
    SL_OR = 308,
    SL_AND = 309,
    SL_NOT = 310,
    SL_COMP_EQUAL = 311,
    SL_COMP_DIFFERENT = 312,
    SL_COMP_GREATER = 313,
    SL_COMP_GREATER_EQUAL = 314,
    SL_COMP_LESS = 315,
    SL_COMP_LESS_EQUAL = 316,
    SL_PLUS = 317,
    SL_MINUS = 318,
    SL_CROSS = 319,
    SL_MULTIPLY = 320,
    SL_DIVIDE = 321,
    SL_DOT = 322,
    SL_OUTPUT = 323,
    SL_EXTERN = 324,
    SL_UNIFORM = 325,
    SL_VARIABLE = 326
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 88 "sl.y"

  const char			*string;
  CExpression			*code;
  float					real;
  int					integer;
  CList<CExpression *>	*array;

#line 235 "sl.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE sllval;

int slparse (void);





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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1479

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  255
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  438

#define YYUNDEFTOK  2
#define YYMAXUTOK   326


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   252,   252,   252,   260,   265,   270,   277,   282,   288,
     293,   299,   306,   311,   316,   321,   328,   335,   344,   349,
     354,   359,   365,   386,   407,   409,   413,   413,   424,   441,
     453,   476,   484,   495,   494,   517,   526,   525,   535,   545,
     542,   558,   554,   567,   576,   594,   611,   591,   629,   634,
     639,   644,   649,   654,   664,   671,   681,   680,   708,   716,
     722,   733,   731,   744,   743,   759,   754,   773,   769,   784,
     791,   796,   809,   808,   828,   849,   855,   864,   863,   875,
     874,   891,   887,   905,   901,   919,   926,   936,   945,   953,
     966,   965,   974,   984,   989,   994,   999,  1004,  1009,  1014,
    1019,  1024,  1029,  1034,  1039,  1044,  1049,  1054,  1059,  1064,
    1073,  1078,  1083,  1088,  1093,  1098,  1103,  1112,  1139,  1168,
    1195,  1223,  1222,  1284,  1308,  1321,  1331,  1346,  1344,  1369,
    1364,  1420,  1418,  1440,  1438,  1458,  1469,  1482,  1480,  1502,
    1500,  1525,  1520,  1548,  1543,  1566,  1580,  1599,  1594,  1622,
    1617,  1644,  1650,  1667,  1686,  1691,  1699,  1706,  1715,  1720,
    1728,  1733,  1741,  1748,  1753,  1760,  1769,  1784,  1793,  1810,
    1817,  1827,  1825,  1841,  1854,  1861,  1874,  1882,  1896,  1912,
    1923,  1940,  1951,  1970,  1980,  1995,  2005,  2022,  2027,  2034,
    2041,  2074,  2083,  2081,  2094,  2092,  2103,  2109,  2115,  2131,
    2138,  2145,  2152,  2159,  2166,  2173,  2180,  2187,  2195,  2204,
    2212,  2220,  2225,  2230,  2235,  2240,  2245,  2252,  2260,  2273,
    2289,  2329,  2334,  2339,  2352,  2350,  2365,  2364,  2378,  2377,
    2390,  2397,  2407,  2412,  2421,  2481,  2519,  2528,  2543,  2558,
    2575,  2653,  2658,  2669,  2676,  2687,  2711,  2735,  2748,  2761,
    2774,  2791,  2795,  2802,  2800,  2809
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SL_SURFACE", "SL_DISPLACEMENT",
  "SL_LIGHT", "SL_VOLUME", "SL_TRANSFORMATION", "SL_IMAGER", "SL_FOR",
  "SL_WHILE", "SL_IF", "SL_GATHER", "SL_ELSE", "SL_BREAK", "SL_CONTINUE",
  "SL_ILLUMINANCE", "SL_ILLUMINATE", "SL_SOLAR", "SL_RETURN", "SL_VOID",
  "SL_FCN_PI", "SL_IDENTIFIER_VALUE", "SL_FLOAT_VALUE", "SL_COMMA",
  "SL_SEMI_COLON", "SL_OPEN_PARANTHESIS", "SL_CLOSE_PARANTHESIS",
  "SL_OPEN_CRL_PARANTHESIS", "SL_CLOSE_CRL_PARANTHESIS",
  "SL_OPEN_SQR_PARANTHESIS", "SL_CLOSE_SQR_PARANTHESIS", "SL_TEXTURE",
  "SL_SHADOW", "SL_ENVIRONMENT", "SL_BUMP", "SL_TEXT_VALUE", "SL_EQUAL",
  "SL_INCREMENT", "SL_DECREMENT", "SL_INCREMENT_BY", "SL_DECREMENT_BY",
  "SL_MULTIPLY_BY", "SL_DIVIDE_BY", "SL_QUESTION", "SL_COLON", "SL_FLOAT",
  "SL_COLOR", "SL_POINT", "SL_VECTOR", "SL_NORMAL", "SL_MATRIX",
  "SL_STRING", "SL_OR", "SL_AND", "SL_NOT", "SL_COMP_EQUAL",
  "SL_COMP_DIFFERENT", "SL_COMP_GREATER", "SL_COMP_GREATER_EQUAL",
  "SL_COMP_LESS", "SL_COMP_LESS_EQUAL", "SL_PLUS", "SL_MINUS", "SL_CROSS",
  "SL_MULTIPLY", "SL_DIVIDE", "SL_DOT", "SL_OUTPUT", "SL_EXTERN",
  "SL_UNIFORM", "SL_VARIABLE", "$accept", "slStart", "$@1",
  "slContainerClass", "slInheritanceClass", "slOutputClass",
  "slFloatSpecifier", "slVectorSpecifier", "slMatrixSpecifier",
  "slStringSpecifier", "slTypeSpecifier", "slFloatValue", "slTypeDecl",
  "slShader", "slMainOrFunction", "slFunctionHeader", "slFunction",
  "slFunctionParameters", "slFunctionParameter", "$@2",
  "slFunctionParameterIdentifierList", "$@3", "$@4", "$@5", "slMain",
  "$@6", "$@7", "slShaderType", "slShaderParameters", "slShaderParameter",
  "$@8", "slShaderParameterInitializer",
  "slShaderParameterIdentifierToken", "$@9", "$@10", "$@11", "$@12",
  "slShaderParameterIdentifierList", "slBlock", "$@13",
  "slVariableDeclarations", "slVariableInitializer",
  "slVariableIdentifierList", "$@14", "$@15", "$@16", "$@17",
  "slVariableIdentifierTail", "slStatement", "slStatements", "$@18",
  "slMatchedStatement", "slUnmatchedStatement", "slBreakStatement",
  "slContinueStatement", "slReturnStatement", "$@19",
  "slWhileStartStatement", "slWhileStatement", "slUnmatchedWhileStatement",
  "slAssignmentStatement", "$@20", "$@21", "slUpdateStatement", "$@22",
  "$@23", "$@24", "$@25", "$@26", "$@27", "$@28", "$@29",
  "slForStartStatement", "slForStatement", "slUnmatchedForStatement",
  "slForInitStatement", "slForInitStatements", "slForCheckStatement",
  "slForIncrementStatement", "slForIncrementStatements",
  "slMatchedIfStatement", "slUnmatchedIfStatement",
  "slGatherParameterList", "slGatherHeader", "$@30",
  "slMatchedGatherStatement", "slUnmatchedGatherStatement",
  "slIlluminanceStartStatement", "slIlluminanceStatement",
  "slUnmatchedIlluminanceStatement", "slIlluminateStatement",
  "slUnmatchedIlluminateStatement", "slSolarStatement",
  "slUnmatchedSolarStatement", "slAritmeticExpression", "$@31", "$@32",
  "slArrayList", "slArrayItems", "slAritmeticTerminalValue",
  "slAritmeticTypeCast", "$@33", "$@34", "$@35",
  "slVectorMatrixExpression", "slVMExpression", "slFunctionCall",
  "slFunCallHeader", "slFunCall", "slTextureNameSpecifier",
  "slTextureChannelSpecifier", "slTextureCall", "slTextureName",
  "slFunctionCallParameterList", "slFunctionCallParameters", "$@36", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

#define YYPACT_NINF (-318)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-253)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -318,    27,     3,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
      23,  -318,   -14,    51,    13,  -318,    14,  -318,  -318,    55,
      90,  -318,   -21,   113,  -318,  -318,    68,   127,   138,  -318,
    -318,  -318,   515,  -318,   114,   144,    14,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
      61,  -318,  -318,  -318,  -318,    15,    25,   150,  -318,  -318,
     148,   152,   153,   155,  -318,   168,  -318,   610,   154,  -318,
    -318,  -318,  -318,  -318,   610,   610,   610,   151,    67,  -318,
    -318,  1388,  -318,  -318,  -318,  -318,   331,  -318,  -318,   157,
     114,   156,   162,  -318,    15,  -318,  -318,  -318,   610,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,   624,   160,   165,   438,
      96,    96,   166,   167,   110,   170,   174,  -318,   610,   610,
     610,   610,   610,   610,   610,   610,   610,   610,   610,  -318,
     610,   610,  -318,   692,   164,  -318,     8,  -318,  -318,   441,
     111,   176,  -318,   144,  -318,  1268,   610,   610,   610,   610,
     610,   610,  -318,  -318,   114,   177,   167,   170,  -318,   610,
    -318,  -318,  1364,  1402,   438,  1412,  1412,   543,   543,   543,
     543,    96,    96,   610,   135,   135,   610,  -318,  -318,  -318,
    -318,   182,  -318,  -318,   191,   195,   196,    39,   132,  -318,
     197,   198,   207,   188,  -318,   212,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,   504,  -318,  -318,   210,   211,
     213,  -318,  -318,  -318,  -318,   441,  -318,  -318,   215,  -318,
    -318,  -318,  -318,  -318,  -318,   219,  -318,   610,   214,   162,
    -318,  1252,  1388,  1388,  1388,  1388,  1388,   716,  -318,   114,
    -318,   740,   610,   -30,  -318,   610,   610,    28,   610,   610,
    -318,   225,  -318,   227,  -318,   610,   524,  -318,   610,   610,
     103,  -318,  -318,  -318,  -318,  -318,   231,  -318,   241,   610,
    -318,   162,   226,   549,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,   610,  -318,   640,  -318,  1292,   331,  -318,
    1172,  1196,   610,  -318,  -318,   668,   504,   764,  1148,  1316,
     610,   142,   223,    75,   238,   239,  -318,   504,   788,   243,
    -318,   242,   610,  1388,  -318,   610,   610,   610,   610,   610,
     812,  -318,   244,  -318,   441,    69,  1388,   610,   504,  -318,
    -318,   610,  -318,  1252,   234,   246,  -318,  -318,   549,   142,
     610,   231,   594,  -318,  -318,   610,   504,  -318,   214,   247,
    1388,  1388,  1388,  1388,  1388,   610,  -318,  -318,   262,   610,
    -318,   836,  -318,  -318,  1220,   245,    78,  -318,  1388,  -318,
    -318,  1340,  -318,   253,  1388,  -318,  -318,  -318,   162,  -318,
    -318,   860,   504,  1388,   610,   504,   142,   223,   248,   257,
    -318,   610,  -318,  -318,  1244,  -318,  -318,  -318,   142,   440,
     256,   260,   259,  -318,   884,   504,  -318,   257,   257,   504,
     610,  -318,  -318,  -318,  -318,  -318,  -318,   908,   610,   932,
     610,   956,   610,   980,   610,  1004,   610,  1028,   610,  1052,
     610,  1076,   610,  1100,   610,  1124,   610,  1388
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     8,     1,    48,    49,    50,    51,    52,    53,
       0,     7,    10,     0,     8,    24,     8,    27,    26,     0,
       0,     9,     6,     0,    25,    33,     0,    32,     0,    29,
       4,     5,     0,    28,     0,     0,     8,    45,    11,    12,
      15,    13,    14,    16,    17,    18,    19,    20,    21,    23,
      38,    34,    72,    30,    31,     8,     8,     0,    92,    56,
       0,    55,     0,     0,   211,   218,   221,     8,    43,   247,
     248,   249,   250,   222,     8,     8,     8,     0,   226,   212,
     213,    22,   187,   214,   230,   215,     8,   236,   235,     0,
       0,    90,    69,    46,     8,   238,   239,   237,     8,   127,
     135,   136,   131,   133,   137,   139,     0,     0,     0,   207,
     196,   197,    44,   219,   224,     0,     0,   216,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,   194,
       8,     8,   192,   255,     0,   251,     0,    37,    73,     0,
      63,    70,    57,     0,    54,     0,     8,     8,     8,     8,
       8,     8,   223,   231,     0,     0,     0,     0,   217,     8,
     227,   229,     0,   200,   199,   205,   206,   201,   203,   202,
     204,   188,   189,     8,   190,   191,     8,   253,   240,   242,
     241,   244,    89,   151,     0,     0,     0,     0,     0,   176,
       0,     0,   121,     0,   109,     0,   107,   105,   106,    91,
      88,    87,    99,   100,   101,     8,    94,   112,     0,     0,
       0,    93,   113,    95,   110,     0,    96,   111,     0,   102,
     114,   103,   115,   104,   116,     0,    61,     8,     0,    69,
      47,   220,   128,   132,   134,   138,   140,     0,    40,     0,
     225,   232,     8,   195,   193,     8,     8,     0,     8,     8,
     171,     0,   118,     0,   120,     8,     8,   123,     8,     8,
      77,    74,   125,   126,    97,    98,   155,   174,    88,     8,
     108,    69,     0,     8,    64,    71,   129,   145,   146,   141,
     143,   147,   149,     8,    42,   198,   254,     0,     8,   246,
       0,     0,     8,   117,   119,     0,     8,     0,     0,     0,
       8,     0,     0,     0,   157,     0,   154,     8,   210,     0,
      62,    67,     8,    59,    60,     8,     8,     8,     8,     8,
     233,   243,     0,   124,     0,     0,   170,     8,     8,   183,
     185,     8,   122,     0,     0,     0,    86,    78,     8,     0,
       8,     0,     8,   173,   175,     8,     8,    65,     0,     0,
     130,   142,   144,   148,   150,     8,   245,   167,    88,     8,
     172,     0,   179,   181,     0,    81,    77,    85,    75,    76,
      80,     0,   156,     0,   158,   209,   177,   178,    69,    68,
     208,     0,     8,   169,     8,     8,     0,     0,     0,   161,
      66,     8,   166,   168,     0,   184,   186,    82,     0,     0,
     163,   165,     0,   160,     0,     8,    84,     0,     0,     8,
       8,   180,   182,   162,   164,   152,   153,     0,     8,     0,
       8,     0,     8,     0,     8,     0,     8,     0,     8,     0,
       8,     0,     8,     0,     8,     0,     8,   234
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -222,    -2,  -318,   273,  -318,    24,   254,  -318,  -318,
     -86,  -318,  -318,  -318,  -318,  -318,  -318,  -318,   201,  -318,
    -318,   -57,  -269,  -318,  -318,  -318,  -318,    73,   -32,  -318,
    -318,   -89,   -39,  -318,  -318,  -318,  -318,  -317,  -214,  -318,
    -318,  -190,  -142,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -108,  -318,  -318,    32,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,   -38,  -318,  -318,  -239,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,     0,  -318,  -318,   -34,  -280,  -318,
    -318,  -318,  -318,  -318,   -91,  -318,   -35,  -318,  -318,  -318,
    -318,  -318,  -318,    18,    62,  -318
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    32,    12,    22,    45,    46,    47,    48,
      49,    77,    78,    14,    15,    16,   196,    26,    27,    34,
      51,    57,   108,   155,    18,    55,   143,    19,    60,    61,
      92,   274,   141,   271,   228,   378,   348,   142,   197,    58,
     198,   339,   261,   301,   302,   386,   387,   337,   199,    91,
     139,   200,   201,   202,   203,   204,   258,   205,   206,   207,
      79,   146,   315,    80,   147,   148,   149,   150,   316,   317,
     318,   319,   210,   211,   212,   305,   306,   373,   402,   403,
     213,   214,   325,   215,   292,   216,   217,   218,   219,   220,
     221,   222,   223,   224,    81,   176,   173,   314,   309,    82,
      83,   157,   115,   116,    84,   107,    85,    86,    87,   181,
     247,    88,    89,   134,   135,   245
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,   267,   310,    53,   137,   272,     4,     5,     6,     7,
       8,     9,    13,    -3,    25,   262,     4,     5,     6,     7,
       8,     9,   370,    10,   160,   268,    17,     3,    62,    63,
     179,   208,   349,    10,    25,   130,   131,   132,    17,   -35,
     -58,   -35,   -58,   117,   180,    20,    64,    65,    66,    30,
      31,    67,   288,    59,    21,   289,    68,    69,    70,    71,
      72,    73,   251,   263,   252,   375,   240,   106,   238,   397,
      62,    63,    11,    23,   109,   110,   111,    28,   334,   158,
      74,   406,    11,    11,    11,   -36,   133,    75,    76,   113,
    -228,    56,    59,   359,    11,    35,   360,   208,   145,    69,
      70,    71,    72,   114,   225,   340,   329,   208,   300,   390,
     357,   230,    99,    62,    63,   -79,    29,   343,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,    33,
     174,   175,   156,   300,   358,   226,    50,   195,   362,    33,
     -79,   227,    69,    70,    71,    72,   232,   233,   234,   235,
     236,   237,    36,   284,   330,   253,   376,   254,   304,   241,
     129,   130,   131,   132,    37,   344,   335,   336,   413,   414,
     225,   209,    52,   243,    90,    93,   244,    94,   -39,    95,
     225,    96,   112,   136,   140,   138,   363,   153,   208,   154,
     -41,   178,   392,    97,    97,   395,   159,   161,    98,   208,
     229,   239,   132,   195,   377,    99,   100,   101,   102,   103,
     104,   105,   246,   195,    97,   411,   208,   248,   259,   415,
     208,   249,   250,   255,   256,    99,   100,   101,   102,   103,
     104,   105,   257,   304,   260,   264,   265,   209,   208,   266,
     393,   269,   285,   396,   270,   133,   287,   209,   290,   291,
     293,   273,   294,   303,   307,   295,   297,   311,   298,   299,
     338,   225,   341,   412,   342,   365,   347,   416,   366,   308,
     346,   356,   225,   313,   208,   382,   380,   208,   389,   399,
     407,   400,   -83,   320,   408,   276,   409,    24,   133,   225,
      54,   379,   326,   225,   195,   144,   367,   208,   398,   400,
     400,   208,   275,   372,   369,   195,   322,   286,     0,     0,
       0,   225,   308,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   195,     0,     0,     0,   195,   361,   209,     0,
       0,   364,     0,     0,    62,    63,     0,     0,   368,   209,
     371,     0,   374,     0,   195,   308,     0,   225,     0,     0,
     225,     0,    64,    65,    66,   381,   209,    67,  -252,   383,
     209,     0,     0,    69,    70,    71,    72,    73,     0,     0,
     225,     0,     0,     0,   225,     0,     0,     0,   209,     0,
     195,     0,     0,   195,   394,     0,    74,     0,     0,     0,
       0,   404,     0,    75,    76,     0,     0,     0,     0,     0,
      11,     0,     0,   195,     0,     0,     0,   195,     0,     0,
     417,     0,     0,     0,   209,     0,     0,   209,   419,     0,
     421,   401,   423,     0,   425,     0,   427,     0,   429,     0,
     431,     0,   433,     0,   435,     0,   437,   209,     0,   401,
     401,   209,   182,     0,    62,    63,     0,     0,     0,     0,
     183,   184,   185,   186,     0,   187,   188,   189,   190,   191,
     192,    10,     0,   193,     0,     0,   194,     0,     0,    52,
     259,     0,     0,    69,    70,    71,    72,    99,   100,   101,
     102,   103,   104,   105,     0,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,     0,    62,    63,    -8,
      11,    -8,    -8,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,    10,     0,   193,    62,    63,   194,
       0,     0,    52,     0,     0,     0,    69,    70,    71,    72,
       0,     0,     0,     0,     0,    64,    65,    66,     0,     0,
      67,   296,    62,    63,     0,     0,    69,    70,    71,    72,
      73,    38,    39,    40,    41,    42,    43,    44,     0,     0,
      64,    65,    66,    11,     0,    67,     0,   312,     0,    74,
       0,    69,    70,    71,    72,    73,    75,    76,     0,     0,
       0,     0,     0,    11,     0,     0,     0,    62,    63,     0,
       0,     0,     0,     0,    74,   127,   128,   129,   130,   131,
     132,    75,    76,    62,    63,    64,    65,    66,    11,  -159,
      67,     0,     0,     0,     0,     0,    69,    70,    71,    72,
      73,    64,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,    69,    70,    71,    72,    73,     0,   151,    74,
       0,   152,     0,     0,     0,     0,    75,    76,     0,     0,
       0,     0,     0,    11,     0,    74,     0,     0,   118,     0,
       0,     0,    75,    76,     0,     0,     0,   119,   120,    11,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   327,   119,   120,   328,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,     0,     0,
       0,     0,   118,     0,     0,     0,   177,     0,     0,     0,
       0,   119,   120,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   118,     0,     0,     0,
     283,     0,     0,     0,     0,   119,   120,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     118,     0,     0,     0,   151,     0,     0,     0,     0,   119,
     120,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   118,     0,     0,     0,   331,     0,
       0,     0,     0,   119,   120,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   118,     0,
       0,     0,   345,     0,     0,     0,     0,   119,   120,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   118,     0,     0,     0,   355,     0,     0,     0,
       0,   119,   120,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   118,     0,     0,     0,
     384,     0,     0,     0,     0,   119,   120,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     118,     0,     0,     0,   391,     0,     0,     0,     0,   119,
     120,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   118,     0,     0,     0,   410,     0,
       0,     0,     0,   119,   120,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   118,     0,
       0,     0,   418,     0,     0,     0,     0,   119,   120,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   118,     0,     0,     0,   420,     0,     0,     0,
       0,   119,   120,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   118,     0,     0,     0,
     422,     0,     0,     0,     0,   119,   120,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     118,     0,     0,     0,   424,     0,     0,     0,     0,   119,
     120,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   118,     0,     0,     0,   426,     0,
       0,     0,     0,   119,   120,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   118,     0,
       0,     0,   428,     0,     0,     0,     0,   119,   120,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   118,     0,     0,     0,   430,     0,     0,     0,
       0,   119,   120,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   118,     0,     0,     0,
     432,     0,     0,     0,     0,   119,   120,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     118,     0,     0,     0,   434,     0,     0,     0,     0,   119,
     120,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   118,     0,     0,     0,   436,     0,
       0,     0,     0,   119,   120,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   118,     0,
       0,     0,     0,   332,     0,     0,     0,   119,   120,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   118,     0,     0,     0,     0,     0,     0,   323,
       0,   119,   120,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   118,     0,     0,     0,
       0,     0,     0,   324,     0,   119,   120,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     118,     0,     0,     0,     0,     0,     0,   385,     0,   119,
     120,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   118,     0,     0,     0,     0,     0,
       0,   405,     0,   119,   120,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   118,   276,
     277,   278,   279,   280,   281,   282,     0,   119,   120,   231,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   118,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   321,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   118,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   333,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     118,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   388,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   118,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   118,   242,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   118,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   120,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132
};

static const yytype_int16 yycheck[] =
{
       2,   215,   271,    35,    90,   227,     3,     4,     5,     6,
       7,     8,    14,     0,    16,   205,     3,     4,     5,     6,
       7,     8,   339,    20,   115,   215,     2,     0,     3,     4,
      22,   139,   312,    20,    36,    65,    66,    67,    14,    25,
      25,    27,    27,    78,    36,    22,    21,    22,    23,    70,
      71,    26,    24,    55,    68,    27,    31,    32,    33,    34,
      35,    36,    23,   205,    25,   345,   157,    67,   154,   386,
       3,     4,    69,    22,    74,    75,    76,    22,   300,   114,
      55,   398,    69,    69,    69,    24,    86,    62,    63,    22,
      23,    30,    94,    24,    69,    27,    27,   205,    98,    32,
      33,    34,    35,    36,   139,    30,   296,   215,    30,   378,
     324,   143,    37,     3,     4,    37,    26,   307,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    26,
     130,   131,    22,    30,   324,    24,    22,   139,   328,    26,
      37,    30,    32,    33,    34,    35,   146,   147,   148,   149,
     150,   151,    25,   239,   296,    23,   346,    25,   266,   159,
      64,    65,    66,    67,    26,   307,    24,    25,   407,   408,
     205,   139,    28,   173,    24,    27,   176,    25,    24,    26,
     215,    26,    31,    26,    22,    29,   328,    27,   296,    24,
      24,    27,   382,    26,    26,   385,    26,    23,    30,   307,
      24,    24,    67,   205,   346,    37,    38,    39,    40,    41,
      42,    43,    30,   215,    26,   405,   324,    26,    30,   409,
     328,    26,    26,    26,    26,    37,    38,    39,    40,    41,
      42,    43,    25,   341,    22,    25,    25,   205,   346,    26,
     382,    26,   242,   385,    25,   245,   246,   215,   248,   249,
      25,    37,    25,    22,    13,   255,   256,    31,   258,   259,
      37,   296,    24,   405,    25,    31,    24,   409,    22,   269,
      27,    27,   307,   273,   382,    13,    29,   385,    25,    22,
      24,   389,    37,   283,    24,    37,    27,    14,   288,   324,
      36,   348,   292,   328,   296,    94,   335,   405,   387,   407,
     408,   409,   229,   341,   338,   307,   288,   245,    -1,    -1,
      -1,   346,   312,    -1,    -1,   315,   316,   317,   318,   319,
      -1,    -1,   324,    -1,    -1,    -1,   328,   327,   296,    -1,
      -1,   331,    -1,    -1,     3,     4,    -1,    -1,   338,   307,
     340,    -1,   342,    -1,   346,   345,    -1,   382,    -1,    -1,
     385,    -1,    21,    22,    23,   355,   324,    26,    27,   359,
     328,    -1,    -1,    32,    33,    34,    35,    36,    -1,    -1,
     405,    -1,    -1,    -1,   409,    -1,    -1,    -1,   346,    -1,
     382,    -1,    -1,   385,   384,    -1,    55,    -1,    -1,    -1,
      -1,   391,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,   405,    -1,    -1,    -1,   409,    -1,    -1,
     410,    -1,    -1,    -1,   382,    -1,    -1,   385,   418,    -1,
     420,   389,   422,    -1,   424,    -1,   426,    -1,   428,    -1,
     430,    -1,   432,    -1,   434,    -1,   436,   405,    -1,   407,
     408,   409,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,
      30,    -1,    -1,    32,    33,    34,    35,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,     3,     4,    68,
      69,    70,    71,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,     3,     4,    25,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,
      26,    27,     3,     4,    -1,    -1,    32,    33,    34,    35,
      36,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      21,    22,    23,    69,    -1,    26,    -1,    28,    -1,    55,
      -1,    32,    33,    34,    35,    36,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    55,    62,    63,    64,    65,    66,
      67,    62,    63,     3,     4,    21,    22,    23,    69,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    24,    55,
      -1,    27,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    55,    -1,    -1,    44,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    53,    54,    69,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    24,    53,    54,    27,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    44,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      44,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    44,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    44,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    44,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    44,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      44,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    44,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    44,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    44,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    44,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      44,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    44,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    44,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    44,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    44,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      44,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    44,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    44,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    44,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    44,    37,
      38,    39,    40,    41,    42,    43,    -1,    53,    54,    31,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    31,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    31,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    31,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    73,    74,     0,     3,     4,     5,     6,     7,     8,
      20,    69,    76,    84,    85,    86,    87,    88,    96,    99,
      22,    68,    77,    22,    86,    84,    89,    90,    22,    26,
      70,    71,    75,    26,    91,    27,    25,    26,    46,    47,
      48,    49,    50,    51,    52,    78,    79,    80,    81,    82,
      22,    92,    28,   110,    89,    97,    30,    93,   111,    84,
     100,   101,     3,     4,    21,    22,    23,    26,    31,    32,
      33,    34,    35,    36,    55,    62,    63,    83,    84,   132,
     135,   166,   171,   172,   176,   178,   179,   180,   183,   184,
      24,   121,   102,    27,    25,    26,    26,    26,    30,    37,
      38,    39,    40,    41,    42,    43,   166,   177,    94,   166,
     166,   166,    31,    22,    36,   174,   175,   178,    44,    53,
      54,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,   166,   185,   186,    26,    92,    29,   122,
      22,   104,   109,    98,   100,   166,   133,   136,   137,   138,
     139,    24,    27,    27,    24,    95,    22,   173,   178,    26,
     176,    23,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   168,   166,   166,   167,    24,    27,    22,
      36,   181,     1,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    22,    25,    84,    88,   110,   112,   120,
     123,   124,   125,   126,   127,   129,   130,   131,   132,   135,
     144,   145,   146,   152,   153,   155,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   178,    24,    30,   106,    24,
     110,    31,   166,   166,   166,   166,   166,   166,    92,    24,
     176,   166,    45,   166,   166,   187,    30,   182,    26,    26,
      26,    23,    25,    23,    25,    26,    26,    25,   128,    30,
      22,   114,   123,   124,    25,    25,    26,   120,   123,    26,
      25,   105,    83,    37,   103,   109,    37,    38,    39,    40,
      41,    42,    43,    24,    92,   166,   186,   166,    24,    27,
     166,   166,   156,    25,    25,   166,    27,   166,   166,   166,
      30,   115,   116,    22,   132,   147,   148,    13,   166,   170,
     104,    31,    28,   166,   169,   134,   140,   141,   142,   143,
     166,    31,   185,    27,    27,   154,   166,    24,    27,   123,
     124,    24,    25,    31,    83,    24,    25,   119,    37,   113,
      30,    24,    25,   123,   124,    24,    27,    24,   108,   170,
     166,   166,   166,   166,   166,    24,    27,   120,   123,    24,
      27,   166,   123,   124,   166,    31,    22,   114,   166,   169,
     119,   166,   148,   149,   166,   170,   123,   124,   107,   103,
      29,   166,    13,   166,    24,    27,   117,   118,    31,    25,
     104,    24,   123,   124,   166,   123,   124,   119,   113,    22,
     132,   135,   150,   151,   166,    27,   119,    24,    24,    27,
      24,   123,   124,   151,   151,   123,   124,   166,    24,   166,
      24,   166,    24,   166,    24,   166,    24,   166,    24,   166,
      24,   166,    24,   166,    24,   166,    24,   166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    74,    73,    75,    75,    75,    76,    76,    77,
      77,    78,    79,    79,    79,    79,    80,    81,    82,    82,
      82,    82,    83,    84,    85,    85,    86,    86,    87,    87,
      88,    89,    89,    91,    90,    90,    93,    92,    92,    94,
      92,    95,    92,    92,    92,    97,    98,    96,    99,    99,
      99,    99,    99,    99,   100,   100,   102,   101,   101,   103,
     103,   105,   104,   106,   104,   107,   104,   108,   104,   104,
     109,   109,   111,   110,   112,   113,   113,   115,   114,   116,
     114,   117,   114,   118,   114,   119,   119,   120,   120,   120,
     122,   121,   121,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   126,
     126,   128,   127,   127,   129,   130,   131,   133,   132,   134,
     132,   136,   135,   137,   135,   135,   135,   138,   135,   139,
     135,   140,   135,   141,   135,   135,   135,   142,   135,   143,
     135,   144,   145,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   151,   151,   152,   153,   153,   154,
     154,   156,   155,   157,   158,   158,   159,   160,   161,   162,
     162,   163,   163,   164,   164,   165,   165,   166,   166,   166,
     166,   166,   167,   166,   168,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   169,   170,
     170,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   173,   172,   174,   172,   175,   172,
     172,   176,   177,   177,   177,   178,   178,   179,   179,   179,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   184,
     184,   185,   185,   187,   186,   186
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     0,     1,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     2,     1,     1,     3,     3,
       4,     3,     1,     0,     3,     0,     0,     4,     1,     0,
       6,     0,     7,     3,     4,     0,     0,     8,     1,     1,
       1,     1,     1,     1,     3,     1,     0,     3,     0,     2,
       2,     0,     4,     0,     3,     0,     7,     0,     6,     0,
       1,     3,     0,     4,     2,     2,     2,     0,     3,     0,
       4,     0,     6,     0,     7,     2,     1,     1,     1,     1,
       0,     3,     0,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       2,     0,     4,     2,     4,     2,     2,     0,     4,     0,
       7,     0,     4,     0,     4,     2,     2,     0,     4,     0,
       4,     0,     7,     0,     7,     5,     5,     0,     7,     0,
       7,     1,     9,     9,     1,     0,     3,     1,     1,     0,
       1,     0,     3,     1,     3,     1,     7,     5,     7,     3,
       1,     0,     5,     4,     2,     4,     1,     5,     5,     5,
       9,     5,     9,     4,     7,     4,     7,     1,     3,     3,
       3,     3,     0,     4,     0,     4,     2,     2,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     2,
       4,     1,     1,     3,     0,     4,     0,     3,     0,     3,
       1,     3,     1,     5,    31,     1,     1,     2,     2,     2,
       3,     1,     1,     3,     0,     7,     5,     1,     1,     1,
       1,     1,     0,     0,     4,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  yychar = YYEMPTY;
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
  case 2:
#line 252 "sl.y"
                        {
			}
#line 1981 "sl.cpp"
    break;

  case 3:
#line 255 "sl.y"
                        {
			}
#line 1988 "sl.cpp"
    break;

  case 4:
#line 261 "sl.y"
                        {
				(yyval.integer)	=	SLC_UNIFORM;
			}
#line 1996 "sl.cpp"
    break;

  case 5:
#line 266 "sl.y"
                        {
				(yyval.integer)	=	SLC_VARYING;
			}
#line 2004 "sl.cpp"
    break;

  case 6:
#line 270 "sl.y"
                        {
				(yyval.integer)	=	0;
			}
#line 2012 "sl.cpp"
    break;

  case 7:
#line 278 "sl.y"
                        {
				(yyval.integer)	=	SLC_EXTERN;
			}
#line 2020 "sl.cpp"
    break;

  case 8:
#line 282 "sl.y"
                        {
				(yyval.integer)	=	0;
			}
#line 2028 "sl.cpp"
    break;

  case 9:
#line 289 "sl.y"
                        {
				(yyval.integer)	=	SLC_OUTPUT;
			}
#line 2036 "sl.cpp"
    break;

  case 10:
#line 293 "sl.y"
                        {
				(yyval.integer)	=	0;
			}
#line 2044 "sl.cpp"
    break;

  case 11:
#line 300 "sl.y"
                        {
				(yyval.integer)	=	SLC_FLOAT;
			}
#line 2052 "sl.cpp"
    break;

  case 12:
#line 307 "sl.y"
                        {
				(yyval.integer)	=	SLC_VECTOR | SLC_VCOLOR;
			}
#line 2060 "sl.cpp"
    break;

  case 13:
#line 312 "sl.y"
                        {
				(yyval.integer)	=	SLC_VECTOR | SLC_VVECTOR;
			}
#line 2068 "sl.cpp"
    break;

  case 14:
#line 317 "sl.y"
                        {
				(yyval.integer)	=	SLC_VECTOR | SLC_VNORMAL;
			}
#line 2076 "sl.cpp"
    break;

  case 15:
#line 322 "sl.y"
                        {
				(yyval.integer)	=	SLC_VECTOR | SLC_VPOINT;
			}
#line 2084 "sl.cpp"
    break;

  case 16:
#line 329 "sl.y"
                        {
				(yyval.integer)	=	SLC_MATRIX;
			}
#line 2092 "sl.cpp"
    break;

  case 17:
#line 336 "sl.y"
                        {
				(yyval.integer)	=	SLC_STRING | SLC_UNIFORM;
			}
#line 2100 "sl.cpp"
    break;

  case 18:
#line 345 "sl.y"
                        {
				(yyval.integer)	=	(yyvsp[0].integer);
			}
#line 2108 "sl.cpp"
    break;

  case 19:
#line 350 "sl.y"
                        {
				(yyval.integer)	=	(yyvsp[0].integer);
			}
#line 2116 "sl.cpp"
    break;

  case 20:
#line 355 "sl.y"
                        {
				(yyval.integer)	=	(yyvsp[0].integer);
			}
#line 2124 "sl.cpp"
    break;

  case 21:
#line 360 "sl.y"
                        {
				(yyval.integer)	=	(yyvsp[0].integer);
			}
#line 2132 "sl.cpp"
    break;

  case 22:
#line 366 "sl.y"
                        {
				(yyval.real)	=	0;
				
				// Is this a float type?
				if ((yyvsp[0].code)->type & SLC_FLOAT) {
					char	tmp[256];
					
					// Is this a simple expression?
					if ((yyvsp[0].code)->value(tmp)) {
					
						// Yes, convert it to float
						(yyval.real)	=	(float) atof(tmp);
					} else
						sdr->error("Expecting a simple float argument\n");
				} else
					sdr->error("Expecting a float argument\n");
			}
#line 2154 "sl.cpp"
    break;

  case 23:
#line 390 "sl.y"
                        {
				(yyval.integer)	=	(yyvsp[-3].integer) | (yyvsp[-2].integer) | (yyvsp[-1].integer) | (yyvsp[0].integer);
				sdr->desire((yyval.integer));
				checkPoint();
			}
#line 2164 "sl.cpp"
    break;

  case 28:
#line 427 "sl.y"
                {
			CFunction	*thisFunction	=	sdr->newFunction((yyvsp[-1].string));
			
			if ((yyvsp[-2].integer) & (SLC_OUTPUT | SLC_EXTERN | SLC_RDONLY)) {
				sdr->error("Invalid return type for function %s\n",(yyvsp[-1].string));
				(yyvsp[-2].integer)	&=	~(SLC_OUTPUT | SLC_EXTERN | SLC_RDONLY);
			}

			thisFunction->returnValue	=	new CParameter((yyvsp[-1].string),(yyvsp[-2].integer),1);

			sdr->undesire();
			checkPoint();
		}
#line 2182 "sl.cpp"
    break;

  case 29:
#line 444 "sl.y"
                {
			CFunction	*thisFunction	=	sdr->newFunction((yyvsp[-1].string));
			
			thisFunction->returnValue	=	NULL;
			checkPoint();
		}
#line 2193 "sl.cpp"
    break;

  case 30:
#line 457 "sl.y"
                {
			CFunction	*cFun		=	sdr->popFunction();

			cFun->initExpression	=	(yyvsp[-2].code);
			cFun->code				=	(yyvsp[0].code);

			if (cFun->returnValue != NULL)
				if (cFun->returnValueGiven == FALSE) 
					sdr->error("Return value not given for %s\n",cFun->symbolName);

			checkPoint();
		}
#line 2210 "sl.cpp"
    break;

  case 31:
#line 479 "sl.y"
                {
			(yyval.code)	=	new CTwoExpressions((yyvsp[-2].code),(yyvsp[0].code));
			checkPoint();
		}
#line 2219 "sl.cpp"
    break;

  case 32:
#line 485 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
			checkPoint();
		}
#line 2228 "sl.cpp"
    break;

  case 33:
#line 495 "sl.y"
                {
			int	type	=	sdr->desired();

			if (type & (SLC_EXTERN)) {
				sdr->error("Invalid parameter type\n");
				type	&=	~(SLC_EXTERN);
			}

			if (type & SLC_OUTPUT) {
				sdr->undesire();
				sdr->desire(type);					// Make sure we mark the desired type as READ-ONLY
			} else {
				sdr->undesire();
				sdr->desire(type | SLC_RDONLY);		// Make sure we mark the desired type as READ-ONLY
			}
		}
#line 2249 "sl.cpp"
    break;

  case 34:
#line 512 "sl.y"
                {
			(yyval.code)					=	(yyvsp[0].code);
			sdr->undesire();						// We're done with the type
		}
#line 2258 "sl.cpp"
    break;

  case 35:
#line 517 "sl.y"
                {
			(yyval.code)	=	new CNullExpression;
		}
#line 2266 "sl.cpp"
    break;

  case 36:
#line 526 "sl.y"
                {
			sdr->newParameter((yyvsp[0].string),sdr->desired(),1);	// Add the Parameter to the current CFunction
		}
#line 2274 "sl.cpp"
    break;

  case 37:
#line 531 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2282 "sl.cpp"
    break;

  case 38:
#line 536 "sl.y"
                {
			sdr->newParameter((yyvsp[0].string),sdr->desired(),1);
	
			(yyval.code)			=	new CNullExpression;
		}
#line 2292 "sl.cpp"
    break;

  case 39:
#line 545 "sl.y"
                {
			sdr->newParameter((yyvsp[-2].string),sdr->desired() | SLC_ARRAY,-1);
		}
#line 2300 "sl.cpp"
    break;

  case 40:
#line 550 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2308 "sl.cpp"
    break;

  case 41:
#line 558 "sl.y"
                {
			CParameter	*cParameter	=	sdr->newParameter((yyvsp[-3].string),sdr->desired() | SLC_ARRAY, (int) (yyvsp[-1].real));			
		}
#line 2316 "sl.cpp"
    break;

  case 42:
#line 563 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2324 "sl.cpp"
    break;

  case 43:
#line 570 "sl.y"
                {
			sdr->newParameter((yyvsp[-2].string),sdr->desired() | SLC_ARRAY, 1);
			
			(yyval.code)	=	new CNullExpression;
		}
#line 2334 "sl.cpp"
    break;

  case 44:
#line 580 "sl.y"
                {
			CParameter	*cParameter	=	sdr->newParameter((yyvsp[-3].string),sdr->desired() | SLC_ARRAY, (int) (yyvsp[-1].real));
			
			(yyval.code)	=	new CNullExpression;
		}
#line 2344 "sl.cpp"
    break;

  case 45:
#line 594 "sl.y"
                {
			if (sdr->shaderType) {
				sdr->error("Shader file contains multiple shaders\n");
				sdr->lastFunction			=	sdr->shaderFunction;
			} else {
				CFunction		*mainFunction	=	sdr->newFunction(constantShaderMain);

				mainFunction->returnValue		=	NULL;

				sdr->shaderName				=	strdup((yyvsp[-1].string));
				sdr->shaderType				=	(yyvsp[-2].integer);
				sdr->shaderFunction			=	mainFunction;
				sdr->lastFunction			=	mainFunction;
			}
		}
#line 2364 "sl.cpp"
    break;

  case 46:
#line 611 "sl.y"
                {
			sdr->restoreParameters();
		}
#line 2372 "sl.cpp"
    break;

  case 47:
#line 615 "sl.y"
                {
			CFunction	*cFun			=	sdr->popFunction();

			for (CParameter	*cParameter=cFun->parameters->first();cParameter!=NULL;cParameter=cFun->parameters->next()) {
				sdr->variables->push(cParameter);
			}

			cFun->initExpression	=	(yyvsp[-3].code);
			cFun->code				=	(yyvsp[0].code);
		}
#line 2387 "sl.cpp"
    break;

  case 48:
#line 630 "sl.y"
                {
			(yyval.integer)	=	SLC_SURFACE;
		}
#line 2395 "sl.cpp"
    break;

  case 49:
#line 635 "sl.y"
                {
			(yyval.integer)	=	SLC_DISPLACEMENT;
		}
#line 2403 "sl.cpp"
    break;

  case 50:
#line 640 "sl.y"
                {
			(yyval.integer)	=	SLC_LIGHT;
		}
#line 2411 "sl.cpp"
    break;

  case 51:
#line 645 "sl.y"
                {
			(yyval.integer)	=	SLC_VOLUME;
		}
#line 2419 "sl.cpp"
    break;

  case 52:
#line 650 "sl.y"
                {
			(yyval.integer)	=	SLC_TRANSFORMATION;
		}
#line 2427 "sl.cpp"
    break;

  case 53:
#line 655 "sl.y"
                {
			(yyval.integer)	=	SLC_IMAGER;
		}
#line 2435 "sl.cpp"
    break;

  case 54:
#line 667 "sl.y"
                {
			(yyval.code)	=	new CTwoExpressions((yyvsp[-2].code),(yyvsp[0].code));
		}
#line 2443 "sl.cpp"
    break;

  case 55:
#line 672 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2451 "sl.cpp"
    break;

  case 56:
#line 681 "sl.y"
                {
			int	type	=	(yyvsp[0].integer);

			// Inside the shader param declarations, params
			// are uniform by default
			if (type & SLC_VARYING) {
				// clear this marker, only used to invert the
				// default from varying to uniform
				type &= ~SLC_VARYING;
			} else {	 
				type |= SLC_UNIFORM;	 
			}
			
			sdr->undesire();
			sdr->desire(type);
		}
#line 2472 "sl.cpp"
    break;

  case 57:
#line 698 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		
			if ((yyvsp[-2].integer) & (SLC_EXTERN)) {
				sdr->error("Invalid parameter type for the shader\n");
			}

			sdr->undesire();
		}
#line 2486 "sl.cpp"
    break;

  case 58:
#line 708 "sl.y"
                {
			(yyval.code)	=	new CNullExpression;
		}
#line 2494 "sl.cpp"
    break;

  case 59:
#line 718 "sl.y"
                {
			(yyval.code)	=	getAssignment(sdr->variableList,(yyvsp[0].code));
		}
#line 2502 "sl.cpp"
    break;

  case 60:
#line 724 "sl.y"
                {
			(yyval.code)	=	getAssignment(sdr->variableList,(yyvsp[0].array));
		}
#line 2510 "sl.cpp"
    break;

  case 61:
#line 733 "sl.y"
                {
			CParameter	*cParameter	=	sdr->newParameter((yyvsp[-1].string),sdr->desired() | SLC_PARAMETER,1);

			sdr->variableList->push(cParameter);	// Save the parameter so that we can generate init code later
		}
#line 2520 "sl.cpp"
    break;

  case 62:
#line 739 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2528 "sl.cpp"
    break;

  case 63:
#line 744 "sl.y"
                {
			CParameter	*cParameter	=	sdr->newParameter((yyvsp[0].string),sdr->desired() | SLC_PARAMETER,1);

			sdr->variableList->push(cParameter);
		}
#line 2538 "sl.cpp"
    break;

  case 64:
#line 750 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2546 "sl.cpp"
    break;

  case 65:
#line 759 "sl.y"
                {
			CParameter	*cParameter	=	sdr->newParameter((yyvsp[-4].string),sdr->desired() | SLC_PARAMETER | SLC_ARRAY,(int) (yyvsp[-2].real));

			sdr->variableList->push(cParameter);
		}
#line 2556 "sl.cpp"
    break;

  case 66:
#line 765 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2564 "sl.cpp"
    break;

  case 67:
#line 773 "sl.y"
                {
			CParameter	*cParameter	=	sdr->newParameter((yyvsp[-3].string),sdr->desired() | SLC_PARAMETER | SLC_ARRAY,(int) (yyvsp[-1].real));

			sdr->variableList->push(cParameter);
		}
#line 2574 "sl.cpp"
    break;

  case 68:
#line 779 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2582 "sl.cpp"
    break;

  case 69:
#line 784 "sl.y"
                {
			(yyval.code)	=	new CNullExpression;
		}
#line 2590 "sl.cpp"
    break;

  case 70:
#line 792 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2598 "sl.cpp"
    break;

  case 71:
#line 799 "sl.y"
                {
			(yyval.code)	=	new CTwoExpressions((yyvsp[-2].code),(yyvsp[0].code));
		}
#line 2606 "sl.cpp"
    break;

  case 72:
#line 809 "sl.y"
                {
			CFunction	*cFun	=	sdr->newFunction(constantBlockName);
		}
#line 2614 "sl.cpp"
    break;

  case 73:
#line 814 "sl.y"
                {
			CFunction	*cFun	=	sdr->popFunction();

			cFun->code			=	(yyvsp[-1].code);

			(yyval.code)					=	new	CFuncallExpression(cFun,NULL);
		}
#line 2626 "sl.cpp"
    break;

  case 74:
#line 830 "sl.y"
                {
			CVariable	*cVar;

			if ((yyvsp[-1].integer) & (SLC_OUTPUT | SLC_RDONLY)) {
				sdr->error("Invalid container class for local variables\n");
			}

			// Remove the uninitialized variables from the list
			while((cVar = (CVariable *) sdr->variableList->pop()) != NULL);

			sdr->undesire();

			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2645 "sl.cpp"
    break;

  case 75:
#line 851 "sl.y"
                {
			(yyval.code)	=	getAssignment(sdr->variableList,(yyvsp[0].code));
		}
#line 2653 "sl.cpp"
    break;

  case 76:
#line 857 "sl.y"
                {
			(yyval.code)	=	getAssignment(sdr->variableList,(yyvsp[0].array));
		}
#line 2661 "sl.cpp"
    break;

  case 77:
#line 864 "sl.y"
                {
			CVariable	*cVar	=	sdr->newVariable((yyvsp[0].string),sdr->desired(),1);

			sdr->variableList->push(cVar);
		}
#line 2671 "sl.cpp"
    break;

  case 78:
#line 870 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2679 "sl.cpp"
    break;

  case 79:
#line 875 "sl.y"
                {
			CVariable	*cVar	=	sdr->newVariable((yyvsp[0].string),sdr->desired(),1);

			sdr->variableList->push(cVar);
		}
#line 2689 "sl.cpp"
    break;

  case 80:
#line 882 "sl.y"
                {
			(yyval.code)	=	new CTwoExpressions((yyvsp[-1].code),(yyvsp[0].code));
		}
#line 2697 "sl.cpp"
    break;

  case 81:
#line 891 "sl.y"
                {
			CVariable	*cVar	=	sdr->newVariable((yyvsp[-3].string),sdr->desired() | SLC_ARRAY,(int) (yyvsp[-1].real));

			sdr->variableList->push(cVar);
		}
#line 2707 "sl.cpp"
    break;

  case 82:
#line 897 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2715 "sl.cpp"
    break;

  case 83:
#line 905 "sl.y"
                {
			CVariable	*cVar	=	sdr->newVariable((yyvsp[-3].string),sdr->desired() | SLC_ARRAY,(int) (yyvsp[-1].real));

			sdr->variableList->push(cVar);
		}
#line 2725 "sl.cpp"
    break;

  case 84:
#line 913 "sl.y"
                {
			(yyval.code)	=	new CTwoExpressions((yyvsp[-1].code),(yyvsp[0].code));
		}
#line 2733 "sl.cpp"
    break;

  case 85:
#line 921 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
			checkPoint();
		}
#line 2742 "sl.cpp"
    break;

  case 86:
#line 927 "sl.y"
                {
			(yyval.code)	=	new CNullExpression;
		}
#line 2750 "sl.cpp"
    break;

  case 87:
#line 937 "sl.y"
                {

			(yyval.code)	=	(yyvsp[0].code);
			if (!(sdr->desired() & SLC_NONE))
				sdr->fatalbailout();
			checkPoint();
		}
#line 2762 "sl.cpp"
    break;

  case 88:
#line 946 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
			if (!(sdr->desired() & SLC_NONE))
				sdr->fatalbailout();
			checkPoint();
		}
#line 2773 "sl.cpp"
    break;

  case 89:
#line 954 "sl.y"
                {
			// Recoverable error happened
			(yyval.code)	=	new CNullExpression;
			if (!(sdr->desired() & SLC_NONE))
				sdr->fatalbailout();
			checkPoint();
		}
#line 2785 "sl.cpp"
    break;

  case 90:
#line 966 "sl.y"
                {
			sdr->statementLineNo	=	sdr->lineNo;
		}
#line 2793 "sl.cpp"
    break;

  case 91:
#line 970 "sl.y"
                {
			(yyval.code)	=	new CTwoExpressions((yyvsp[-2].code),(yyvsp[0].code));
		}
#line 2801 "sl.cpp"
    break;

  case 92:
#line 974 "sl.y"
                {
			sdr->statementLineNo	=	sdr->lineNo;
			(yyval.code)	=	new CNullExpression;
		}
#line 2810 "sl.cpp"
    break;

  case 93:
#line 985 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2818 "sl.cpp"
    break;

  case 94:
#line 990 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2826 "sl.cpp"
    break;

  case 95:
#line 995 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2834 "sl.cpp"
    break;

  case 96:
#line 1000 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2842 "sl.cpp"
    break;

  case 97:
#line 1005 "sl.y"
                {
			(yyval.code)	=	(yyvsp[-1].code);
		}
#line 2850 "sl.cpp"
    break;

  case 98:
#line 1010 "sl.y"
                {
			(yyval.code)	=	(yyvsp[-1].code);
		}
#line 2858 "sl.cpp"
    break;

  case 99:
#line 1015 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2866 "sl.cpp"
    break;

  case 100:
#line 1020 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2874 "sl.cpp"
    break;

  case 101:
#line 1025 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2882 "sl.cpp"
    break;

  case 102:
#line 1030 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2890 "sl.cpp"
    break;

  case 103:
#line 1035 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2898 "sl.cpp"
    break;

  case 104:
#line 1040 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2906 "sl.cpp"
    break;

  case 105:
#line 1045 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2914 "sl.cpp"
    break;

  case 106:
#line 1050 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2922 "sl.cpp"
    break;

  case 107:
#line 1055 "sl.y"
                {
			(yyval.code)	=	new CNullExpression;
		}
#line 2930 "sl.cpp"
    break;

  case 108:
#line 1060 "sl.y"
                {
			(yyval.code)	=	(yyvsp[-1].code);
		}
#line 2938 "sl.cpp"
    break;

  case 109:
#line 1065 "sl.y"
                {
			(yyval.code)					=	new CNullExpression;
		}
#line 2946 "sl.cpp"
    break;

  case 110:
#line 1074 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2954 "sl.cpp"
    break;

  case 111:
#line 1079 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2962 "sl.cpp"
    break;

  case 112:
#line 1084 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2970 "sl.cpp"
    break;

  case 113:
#line 1089 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2978 "sl.cpp"
    break;

  case 114:
#line 1094 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2986 "sl.cpp"
    break;

  case 115:
#line 1099 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 2994 "sl.cpp"
    break;

  case 116:
#line 1104 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 3002 "sl.cpp"
    break;

  case 117:
#line 1113 "sl.y"
                {
			CFunction	*cFunction;
			int			bc;
			char		tmp[256];

			if (sscanf((yyvsp[-1].string),"%d",&bc) != 1) sdr->error("Invalid break count: %s\n",(yyvsp[-1].string));

			if (bc <= 0) sdr->error("Bad break count: %s\n",(yyvsp[-1].string));

			for(cFunction = sdr->functionStack->last(); cFunction != NULL; cFunction = sdr->functionStack->prev()) {
				if (strcmp(cFunction->symbolName,constantLoopName) == 0) bc--;
				else if (strcmp(cFunction->symbolName,constantBlockName) == 0) continue;

				if (bc == 0) break;

				sdr->error("Break target not found\n");
				break;
			}

			if (cFunction == NULL) sdr->error("Break target not found\n");

			sprintf(tmp,"%s\t%s\n",opcodeBreak,(yyvsp[-1].string));

			(yyval.code)	=	new CFixedExpression(tmp);
		}
#line 3032 "sl.cpp"
    break;

  case 118:
#line 1140 "sl.y"
                {
			CFunction	*cFunction;
			char		tmp[256];
			int			bc	=	(int) 1;

			sdr->functionStack->push(sdr->lastFunction);
			for(cFunction = sdr->functionStack->last(); cFunction != NULL; cFunction = sdr->functionStack->prev()) {
				if (strcmp(cFunction->symbolName,constantLoopName) == 0) bc--;
				else if (strcmp(cFunction->symbolName,constantBlockName) == 0) continue;

				if (bc == 0) break;

				sdr->error("Break target not found\n");
				break;
			}
			sdr->lastFunction	=	sdr->functionStack->pop();

			if (cFunction == NULL) sdr->error("Break target not found\n");

			sprintf(tmp,"%s\t1\n",opcodeBreak);

			(yyval.code)	=	new CFixedExpression(tmp);
		}
#line 3060 "sl.cpp"
    break;

  case 119:
#line 1169 "sl.y"
                {
			CFunction	*cFunction;
			char		tmp[256];
			int			bc;

			if (sscanf((yyvsp[-1].string),"%d",&bc) != 1) sdr->error("Bad continue count: %s\n",(yyvsp[-1].string));

			if (bc <= 0) sdr->error("Bad continue count: %s\n",(yyvsp[-1].string));

			for(cFunction = sdr->functionStack->last(); cFunction != NULL; cFunction = sdr->functionStack->prev()) {
				if (strcmp(cFunction->symbolName,constantLoopName) == 0) bc--;
				else if (strcmp(cFunction->symbolName,constantBlockName) == 0) continue;

				if (bc == 0) break;

				sdr->error("Continue target not found\n");
				break;
			}

			if (cFunction == NULL) sdr->error("Continue target not found\n");

			sprintf(tmp,"%s\t%s\n",opcodeContinue,(yyvsp[-1].string));

			(yyval.code)	=	new CFixedExpression(tmp);
		}
#line 3090 "sl.cpp"
    break;

  case 120:
#line 1196 "sl.y"
                {
			CFunction	*cFunction;
			char		tmp[256];
			int			bc	=	(int) 1;

			for(cFunction = sdr->functionStack->last(); cFunction != NULL; cFunction = sdr->functionStack->prev()) {
				if (strcmp(cFunction->symbolName,constantLoopName) == 0) bc--;
				else if (strcmp(cFunction->symbolName,constantBlockName) == 0) continue;

				if (bc == 0) break;
				
				sdr->error("Continue target not found\n");
				break;
			}

			if (cFunction == NULL) sdr->error("Continue target not found\n");

			sprintf(tmp,"%s\t1\n",opcodeContinue);

			(yyval.code)	=	new CFixedExpression(tmp);
		}
#line 3116 "sl.cpp"
    break;

  case 121:
#line 1223 "sl.y"
                {
			CFunction	*cFun = sdr->lastFunction;
			
			// Work out what we're returning from
			for (cFun = sdr->functionStack->last(); cFun != NULL; cFun = sdr->functionStack->prev()) {
				if (strcmp(cFun->symbolName,constantBlockName) == 0) continue;
				if (strcmp(cFun->symbolName,constantLoopName) == 0) continue;
				break;
			}

			// Figure out what the return type is and desire it
			CParameter	*retParam = cFun->returnValue;
			if (retParam) {
				int returnType = retParam->type;
				sdr->desire(returnType);
			} else {
				sdr->desire(SLC_NONE);
			}
		}
#line 3140 "sl.cpp"
    break;

  case 122:
#line 1243 "sl.y"
                {
			CFunction	*cFun	=	sdr->lastFunction;
			CExpression	*c;

			sdr->undesire();
			
			// Skip over loops
			for (cFun = sdr->functionStack->last(); cFun != NULL; cFun = sdr->functionStack->prev()) {
				if (strcmp(cFun->symbolName,constantBlockName) == 0) continue;
				if (strcmp(cFun->symbolName,constantLoopName) == 0) continue;
				break;
			}

			if (cFun ==	NULL) {
				sdr->error("Return target not found\n");
				(yyval.code)	=	new CNullExpression;
			} else {
				if (cFun->returnValue == NULL) {
					if (cFun == sdr->shaderFunction)
						sdr->warning("Shader was not expecting a return statement\n");
					else
						sdr->error("Function \"%s\" was not expecting a return value\n",cFun->symbolName);
					c	=	new CNullExpression;
				} else {
					// Warn if the actual return type is different from the declared return type. Some type conversions
					// (like upconvert float to vector) can be done, but may not be intended.
					if (((yyvsp[-1].code)->type & (SLC_FLOAT|SLC_VECTOR|SLC_STRING|SLC_MATRIX)) 
						!= (cFun->returnValue->type & (SLC_FLOAT|SLC_VECTOR|SLC_STRING|SLC_MATRIX)))
						sdr->warning("Return value of function \"%s\" does not match function declaration\n",cFun->symbolName);
						
					// if the return type is uniform, set the return value to uniform
					if ((yyvsp[-1].code)->type & SLC_UNIFORM) cFun->returnValue->type |= SLC_UNIFORM;
					c	=	new CAssignmentExpression(cFun->returnValue,(yyvsp[-1].code));
				}

				(yyval.code)	=	c;

				cFun->returnValueGiven	=	TRUE;
			}
		}
#line 3185 "sl.cpp"
    break;

  case 123:
#line 1285 "sl.y"
                {
			CFunction	*cFun	=	sdr->lastFunction;

			// Skip over loops
			for (cFun = sdr->functionStack->last(); cFun != NULL; cFun = sdr->functionStack->prev()) {
				if (strcmp(cFun->symbolName,constantBlockName) == 0) continue;
				if (strcmp(cFun->symbolName,constantLoopName) == 0) continue;
				break;
			}

			if (cFun ==	NULL)	sdr->error("Return target not found\n");
			else {
				if (cFun->returnValue != NULL) {
					sdr->error("Function \"%s\" was expecting a return value\n",cFun->symbolName);
				}
			}
		}
#line 3207 "sl.cpp"
    break;

  case 124:
#line 1312 "sl.y"
                {
			CFunction	*cFun	=	sdr->newFunction(constantLoopName);
			
			(yyval.code)	=	(yyvsp[-1].code);	
		}
#line 3217 "sl.cpp"
    break;

  case 125:
#line 1323 "sl.y"
                {
			CFunction	*cFun	=	sdr->popFunction();

			(yyval.code)	=	new CForLoop(NULL,(yyvsp[-1].code),NULL,(yyvsp[0].code));
		}
#line 3227 "sl.cpp"
    break;

  case 126:
#line 1333 "sl.y"
                {

			CFunction	*cFun	=	sdr->popFunction();

			(yyval.code)	=	new CForLoop(NULL,(yyvsp[-1].code),NULL,(yyvsp[0].code));
		}
#line 3238 "sl.cpp"
    break;

  case 127:
#line 1346 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-1].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-1].string));
			else				sdr->desire(cVar->type);
		}
#line 3249 "sl.cpp"
    break;

  case 128:
#line 1353 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-3].string));

			if (cVar == NULL) {	
				(yyval.code)	=	new CNullExpression;
			} else {
				(yyval.code)	=	new CAssignmentExpression(cVar,(yyvsp[0].code));
				sdr->undesire();
			}
		}
#line 3264 "sl.cpp"
    break;

  case 129:
#line 1369 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-4].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-4].string));
			else				sdr->desire(cVar->type);
		}
#line 3275 "sl.cpp"
    break;

  case 130:
#line 1376 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-6].string));

			if (cVar == NULL) {
				(yyval.code)	=	new CNullExpression;
			} else if (cVar->type & SLC_ARRAY) {
				(yyval.code)	=	new CArrayAssignmentExpression(cVar,(yyvsp[-4].code),(yyvsp[0].code));
				sdr->undesire();
			} else {
				CList<CExpression *>	*dummyParams = new CList<CExpression *>;
				CFunctionPrototype		*cFun;

				dummyParams->push(new CTerminalExpression(cVar));
				dummyParams->push((yyvsp[-4].code));
				dummyParams->push((yyvsp[0].code));

				// Check the builtin functions
				for (cFun = sdr->builtinFunctions->first(); cFun != NULL; cFun = sdr->builtinFunctions->next()) {
					if (cFun->match("setcomp",dummyParams,sdr->desired())) break;
				}
				
				if (cFun == NULL) {
					// Cleanup
					CExpression	*cCode;
					while((cCode = dummyParams->pop()) != NULL) {
						delete cCode;
					}
					delete dummyParams;
					// Report error
					sdr->error("Can't assign to non array\n");
					(yyval.code)	=	new CNullExpression;
				} else {
					(yyval.code)	=	new CBuiltinExpression(cFun,dummyParams);
				}
				sdr->undesire();
			}
		}
#line 3317 "sl.cpp"
    break;

  case 131:
#line 1420 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-1].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-1].string));
			else				sdr->desire(cVar->type);
		}
#line 3328 "sl.cpp"
    break;

  case 132:
#line 1427 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-3].string));

			if (cVar == NULL) {
				(yyval.code)	=	new CNullExpression;
			} else {
				(yyval.code)	=	new CUpdateExpression(cVar,opcodeAddFloatFloat,opcodeAddVectorVector,FALSE,(yyvsp[0].code));
				sdr->undesire();
			}
		}
#line 3343 "sl.cpp"
    break;

  case 133:
#line 1440 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-1].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-1].string));
			else				sdr->desire(cVar->type);
		}
#line 3354 "sl.cpp"
    break;

  case 134:
#line 1447 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-3].string));

			if (cVar == NULL) {
				(yyval.code)	=	new CNullExpression;
			} else {
				(yyval.code)	=	new CUpdateExpression(cVar,opcodeSubFloatFloat,opcodeSubVectorVector,FALSE,(yyvsp[0].code));
				sdr->undesire();
			}
		}
#line 3369 "sl.cpp"
    break;

  case 135:
#line 1460 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-1].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-1].string));
			else {
				(yyval.code)	=	new CUpdateExpression(cVar,opcodeAddFloatFloat,opcodeAddVectorVector,FALSE,new CConstantTerminalExpression(SLC_FLOAT,strdup("1")));
			}
		}
#line 3382 "sl.cpp"
    break;

  case 136:
#line 1471 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-1].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-1].string));
			else {
				(yyval.code)	=	new CUpdateExpression(cVar,opcodeAddFloatFloat,opcodeAddVectorVector,FALSE,new CConstantTerminalExpression(SLC_FLOAT,strdup("-1")));
			}
		}
#line 3395 "sl.cpp"
    break;

  case 137:
#line 1482 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-1].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-1].string));
			else				sdr->desire(cVar->type);
		}
#line 3406 "sl.cpp"
    break;

  case 138:
#line 1489 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-3].string));

			if (cVar == NULL) {
				(yyval.code)	=	new CNullExpression;
			} else {
				(yyval.code)	=	new CUpdateExpression(cVar,opcodeMulFloatFloat,opcodeMulVectorVector,FALSE,(yyvsp[0].code));
				sdr->undesire();
			}
		}
#line 3421 "sl.cpp"
    break;

  case 139:
#line 1502 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-1].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-1].string));
			else				sdr->desire(cVar->type);
		}
#line 3432 "sl.cpp"
    break;

  case 140:
#line 1509 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-3].string));

			if (cVar == NULL) {
				(yyval.code)	=	new CNullExpression;
			} else {
				(yyval.code)	=	new CUpdateExpression(cVar,opcodeDivFloatFloat,opcodeDivVectorVector,FALSE,(yyvsp[0].code));
				sdr->undesire();
			}
		}
#line 3447 "sl.cpp"
    break;

  case 141:
#line 1525 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-4].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-4].string));
			else				sdr->desire(cVar->type);
		}
#line 3458 "sl.cpp"
    break;

  case 142:
#line 1532 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-6].string));
			
			if (cVar == NULL) {
				(yyval.code)	=	new CNullExpression;
			} else {
				(yyval.code)	=	new CArrayUpdateExpression(cVar,(yyvsp[-4].code),(yyvsp[0].code),opcodeAddFloatFloat,opcodeAddVectorVector,opcodeAddMatrixMatrix);
				sdr->undesire();
			}
		}
#line 3473 "sl.cpp"
    break;

  case 143:
#line 1548 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-4].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-4].string));
			else				sdr->desire(cVar->type);
		}
#line 3484 "sl.cpp"
    break;

  case 144:
#line 1555 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-6].string));

			if (cVar == NULL) {
				(yyval.code)	=	new CNullExpression;
			} else {
				(yyval.code)	=	new CArrayUpdateExpression(cVar,(yyvsp[-4].code),(yyvsp[0].code),opcodeSubFloatFloat,opcodeSubVectorVector,opcodeSubMatrixMatrix);
				sdr->undesire();
			}
		}
#line 3499 "sl.cpp"
    break;

  case 145:
#line 1571 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-4].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-4].string));
			else {
				(yyval.code)	=	new CArrayUpdateExpression(cVar,(yyvsp[-2].code),new CConstantTerminalExpression(SLC_FLOAT,strdup("1")),opcodeAddFloatFloat,opcodeAddVectorVector,opcodeAddMatrixMatrix);
			}
		}
#line 3512 "sl.cpp"
    break;

  case 146:
#line 1585 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-4].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-4].string));
			else {
				(yyval.code)	=	new CArrayUpdateExpression(cVar,(yyvsp[-2].code),new CConstantTerminalExpression(SLC_FLOAT,strdup("-1")),opcodeAddFloatFloat,opcodeAddVectorVector,opcodeAddMatrixMatrix);
			}
		}
#line 3525 "sl.cpp"
    break;

  case 147:
#line 1599 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-4].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-4].string));
			else				sdr->desire(cVar->type);
		}
#line 3536 "sl.cpp"
    break;

  case 148:
#line 1606 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-6].string));

			if (cVar == NULL) {
				(yyval.code)	=	new CNullExpression;
			} else {
				(yyval.code)	=	new CArrayUpdateExpression(cVar,(yyvsp[-4].code),(yyvsp[0].code),opcodeMulFloatFloat,opcodeMulVectorVector,opcodeMulMatrixMatrix);
				sdr->undesire();
			}
		}
#line 3551 "sl.cpp"
    break;

  case 149:
#line 1622 "sl.y"
                {
			CVariable	*cVar				=	sdr->getVariable((yyvsp[-4].string));

			if (cVar == NULL)	sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-4].string));
			else				sdr->desire(cVar->type);
		}
#line 3562 "sl.cpp"
    break;

  case 150:
#line 1629 "sl.y"
                {
			CVariable			*cVar		=	sdr->getVariable((yyvsp[-6].string));

			if (cVar == NULL) {
				(yyval.code)	=	new CNullExpression;
			} else {
				(yyval.code)	=	new CArrayUpdateExpression(cVar,(yyvsp[-4].code),(yyvsp[0].code),opcodeDivFloatFloat,opcodeDivVectorVector,opcodeDivMatrixMatrix);
				sdr->undesire();
			}
		}
#line 3577 "sl.cpp"
    break;

  case 151:
#line 1645 "sl.y"
                {
			CFunction	*cFun	=	sdr->newFunction(constantLoopName);
		}
#line 3585 "sl.cpp"
    break;

  case 152:
#line 1659 "sl.y"
                {
			CFunction	*cFun	=	sdr->popFunction();

			(yyval.code)	=	new CForLoop((yyvsp[-6].code),(yyvsp[-4].code),(yyvsp[-2].code),(yyvsp[0].code));
		}
#line 3595 "sl.cpp"
    break;

  case 153:
#line 1676 "sl.y"
                {
			CFunction	*cFun	=	sdr->popFunction();

			(yyval.code)	=	new CForLoop((yyvsp[-6].code),(yyvsp[-4].code),(yyvsp[-2].code),(yyvsp[0].code));
		}
#line 3605 "sl.cpp"
    break;

  case 154:
#line 1687 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 3613 "sl.cpp"
    break;

  case 155:
#line 1691 "sl.y"
                {
			(yyval.code)	=	new CNullExpression;
		}
#line 3621 "sl.cpp"
    break;

  case 156:
#line 1702 "sl.y"
                {
			(yyval.code)	=	new CTwoExpressions((yyvsp[-2].code),(yyvsp[0].code));
		}
#line 3629 "sl.cpp"
    break;

  case 157:
#line 1707 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 3637 "sl.cpp"
    break;

  case 158:
#line 1716 "sl.y"
                {
			(yyval.code)	=	getConversion(SLC_FLOAT,(yyvsp[0].code));
		}
#line 3645 "sl.cpp"
    break;

  case 159:
#line 1720 "sl.y"
                {
			(yyval.code)	=	new CConstantTerminalExpression(SLC_FLOAT | SLC_UNIFORM,strdup("1"));
		}
#line 3653 "sl.cpp"
    break;

  case 160:
#line 1729 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 3661 "sl.cpp"
    break;

  case 161:
#line 1733 "sl.y"
                {
			(yyval.code)	=	new CNullExpression;
		}
#line 3669 "sl.cpp"
    break;

  case 162:
#line 1744 "sl.y"
                {
			(yyval.code)	=	new CTwoExpressions((yyvsp[-2].code),(yyvsp[0].code));
		}
#line 3677 "sl.cpp"
    break;

  case 163:
#line 1749 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 3685 "sl.cpp"
    break;

  case 164:
#line 1756 "sl.y"
                {
			(yyval.code)	=	new CTwoExpressions((yyvsp[-2].code),(yyvsp[0].code));
		}
#line 3693 "sl.cpp"
    break;

  case 165:
#line 1761 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 3701 "sl.cpp"
    break;

  case 166:
#line 1776 "sl.y"
                {
			(yyval.code)	=	new CIfThenElse((yyvsp[-4].code),(yyvsp[-2].code),(yyvsp[0].code));
		}
#line 3709 "sl.cpp"
    break;

  case 167:
#line 1789 "sl.y"
                {
			(yyval.code)	=	new CIfThenElse((yyvsp[-2].code),(yyvsp[0].code),NULL);
		}
#line 3717 "sl.cpp"
    break;

  case 168:
#line 1800 "sl.y"
                {
			(yyval.code)	=	new CIfThenElse((yyvsp[-4].code),(yyvsp[-2].code),(yyvsp[0].code));
		}
#line 3725 "sl.cpp"
    break;

  case 169:
#line 1813 "sl.y"
                {
			(yyval.array)->push((yyvsp[0].code));
		}
#line 3733 "sl.cpp"
    break;

  case 170:
#line 1818 "sl.y"
                {
			sdr->actualParameters->push((yyvsp[0].code));
			(yyval.array)	=	sdr->actualParameters;
		}
#line 3742 "sl.cpp"
    break;

  case 171:
#line 1827 "sl.y"
                {
			sdr->actualParameterStack->push(sdr->actualParameters);
			sdr->actualParameters	=	new CList<CExpression *>;
		}
#line 3751 "sl.cpp"
    break;

  case 172:
#line 1833 "sl.y"
                {
			(yyval.array)	=	(yyvsp[-1].array);
		}
#line 3759 "sl.cpp"
    break;

  case 173:
#line 1845 "sl.y"
                {
			(yyval.code)	=	new CGatherThenElse((yyvsp[-3].array),(yyvsp[-2].code),(yyvsp[0].code));
			sdr->actualParameters	=	sdr->actualParameterStack->pop();
		}
#line 3768 "sl.cpp"
    break;

  case 174:
#line 1856 "sl.y"
                {
			(yyval.code)	=	new CGatherThenElse((yyvsp[-1].array),(yyvsp[0].code),NULL);
			sdr->actualParameters	=	sdr->actualParameterStack->pop();
		}
#line 3777 "sl.cpp"
    break;

  case 175:
#line 1865 "sl.y"
                {
			(yyval.code)	=	new CGatherThenElse((yyvsp[-3].array),(yyvsp[-2].code),(yyvsp[0].code));
			sdr->actualParameters	=	sdr->actualParameterStack->pop();
		}
#line 3786 "sl.cpp"
    break;

  case 176:
#line 1875 "sl.y"
                {
			CFunction	*cCFunction	=	sdr->newFunction(constantLoopName);

			sdr->requiredShaderContext	|=	SLC_SURFACE;
		}
#line 3796 "sl.cpp"
    break;

  case 177:
#line 1887 "sl.y"
                {
			CFunction	*cFun	=	sdr->popFunction();

			(yyval.code)	=	new CIlluminationLoop((yyvsp[-2].array),(yyvsp[0].code));
			
		}
#line 3807 "sl.cpp"
    break;

  case 178:
#line 1901 "sl.y"
                {
			CFunction	*cFun	=	sdr->popFunction();

			(yyval.code)	=	new CIlluminationLoop((yyvsp[-2].array),(yyvsp[0].code));
		}
#line 3817 "sl.cpp"
    break;

  case 179:
#line 1917 "sl.y"
                {
			sdr->requiredShaderContext	|=	SLC_LIGHT;

			(yyval.code)	=	new CIlluminateSolar(opcodeIlluminate,opcodeEndIlluminate,(yyvsp[-2].code),NULL,NULL,(yyvsp[0].code));
		}
#line 3827 "sl.cpp"
    break;

  case 180:
#line 1932 "sl.y"
                {
			sdr->requiredShaderContext	|=	SLC_LIGHT;

			(yyval.code)	=	new CIlluminateSolar(opcodeIlluminate,opcodeEndIlluminate,(yyvsp[-6].code),(yyvsp[-4].code),(yyvsp[-2].code),(yyvsp[0].code));
		}
#line 3837 "sl.cpp"
    break;

  case 181:
#line 1945 "sl.y"
                {
			sdr->requiredShaderContext	|=	SLC_LIGHT;

			(yyval.code)	=	new CIlluminateSolar(opcodeIlluminate,opcodeEndIlluminate,(yyvsp[-2].code),NULL,NULL,(yyvsp[0].code));
		}
#line 3847 "sl.cpp"
    break;

  case 182:
#line 1960 "sl.y"
                {
			sdr->requiredShaderContext	|=	SLC_LIGHT;

			(yyval.code)	=	new CIlluminateSolar(opcodeIlluminate,opcodeEndIlluminate,(yyvsp[-6].code),(yyvsp[-4].code),(yyvsp[-2].code),(yyvsp[0].code));
		}
#line 3857 "sl.cpp"
    break;

  case 183:
#line 1974 "sl.y"
                {
			sdr->requiredShaderContext	|=	SLC_LIGHT;

			(yyval.code)	=	new CIlluminateSolar(opcodeSolar,opcodeEndSolar,NULL,NULL,NULL,(yyvsp[0].code));
		}
#line 3867 "sl.cpp"
    break;

  case 184:
#line 1987 "sl.y"
                {
			sdr->requiredShaderContext	|=	SLC_LIGHT;

			(yyval.code)	=	new CIlluminateSolar(opcodeSolar,opcodeEndSolar,(yyvsp[-4].code),(yyvsp[-2].code),NULL,(yyvsp[0].code));
		}
#line 3877 "sl.cpp"
    break;

  case 185:
#line 1999 "sl.y"
                {
			sdr->requiredShaderContext	|=	SLC_LIGHT;

			(yyval.code)	=	new CIlluminateSolar(opcodeSolar,opcodeEndSolar,NULL,NULL,NULL,(yyvsp[0].code));
		}
#line 3887 "sl.cpp"
    break;

  case 186:
#line 2012 "sl.y"
                {
			sdr->requiredShaderContext	|=	SLC_LIGHT;

			(yyval.code)	=	new CIlluminateSolar(opcodeSolar,opcodeEndSolar,(yyvsp[-4].code),(yyvsp[-2].code),NULL,(yyvsp[0].code));
		}
#line 3897 "sl.cpp"
    break;

  case 187:
#line 2023 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 3905 "sl.cpp"
    break;

  case 188:
#line 2030 "sl.y"
                {
			(yyval.code)	=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeAddFloatFloat,opcodeAddVectorVector,opcodeAddMatrixMatrix,NULL,0);
		}
#line 3913 "sl.cpp"
    break;

  case 189:
#line 2037 "sl.y"
                {
			(yyval.code)	=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeSubFloatFloat,opcodeSubVectorVector,opcodeSubMatrixMatrix,NULL,0);
		}
#line 3921 "sl.cpp"
    break;

  case 190:
#line 2044 "sl.y"
                {
			(yyval.code)	=	NULL;

			if ((yyvsp[-2].code)->type & SLC_MATRIX) {
				if ((yyvsp[0].code)->type & SLC_VVECTOR) {
					(yyval.code)	=	new CBinaryExpression(SLC_VECTOR | SLC_VVECTOR,opcodeMulMatrixVector,(yyvsp[-2].code),getConversion(SLC_VECTOR,(yyvsp[0].code)));
				} else if ((yyvsp[0].code)->type & SLC_VPOINT) {
					(yyval.code)	=	new CBinaryExpression(SLC_VECTOR | SLC_VPOINT,opcodeMulMatrixPoint,(yyvsp[-2].code),getConversion(SLC_VECTOR,(yyvsp[0].code)));
				} else if ((yyvsp[0].code)->type & SLC_VNORMAL) {
					(yyval.code)	=	new CBinaryExpression(SLC_VECTOR | SLC_VNORMAL,opcodeMulMatrixNormal,(yyvsp[-2].code),getConversion(SLC_VECTOR,(yyvsp[0].code)));
				}
			}

			if ((yyval.code) == NULL) {
				if ((yyvsp[0].code)->type & SLC_MATRIX) {
					if ((yyvsp[-2].code)->type & SLC_VVECTOR) {
						(yyval.code)	=	new CBinaryExpression(SLC_VECTOR | SLC_VVECTOR,opcodeMulVectorMatrix,(yyvsp[-2].code),getConversion(SLC_VECTOR,(yyvsp[0].code)));
					} else if ((yyvsp[-2].code)->type & SLC_VPOINT) {
						(yyval.code)	=	new CBinaryExpression(SLC_VECTOR | SLC_VPOINT,opcodeMulPointMatrix,(yyvsp[-2].code),getConversion(SLC_VECTOR,(yyvsp[0].code)));
					} else if ((yyvsp[-2].code)->type & SLC_VNORMAL) {
						(yyval.code)	=	new CBinaryExpression(SLC_VECTOR | SLC_VNORMAL,opcodeMulNormalMatrix,(yyvsp[-2].code),getConversion(SLC_VECTOR,(yyvsp[0].code)));
					}
				}
			}


			if ((yyval.code) == NULL)
				(yyval.code)	=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeMulFloatFloat,opcodeMulVectorVector,opcodeMulMatrixMatrix,NULL,0);
		}
#line 3955 "sl.cpp"
    break;

  case 191:
#line 2077 "sl.y"
                {
			(yyval.code)	=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeDivFloatFloat,opcodeDivVectorVector,opcodeDivMatrixMatrix,NULL,0);
		}
#line 3963 "sl.cpp"
    break;

  case 192:
#line 2083 "sl.y"
                {
			sdr->desire(SLC_VECTOR | SLC_VVECTOR);
		}
#line 3971 "sl.cpp"
    break;

  case 193:
#line 2087 "sl.y"
                {
			sdr->undesire();
			(yyval.code)	=	new CBinaryExpression(SLC_FLOAT,opcodeDotProduct,getConversion(SLC_VECTOR,(yyvsp[-3].code)),getConversion(SLC_VECTOR,(yyvsp[0].code)));
		}
#line 3980 "sl.cpp"
    break;

  case 194:
#line 2094 "sl.y"
                {
			sdr->desire(SLC_VECTOR | SLC_VVECTOR);
		}
#line 3988 "sl.cpp"
    break;

  case 195:
#line 2098 "sl.y"
                {
			sdr->undesire();
			(yyval.code)	=	new CBinaryExpression(SLC_VECTOR,opcodeCrossProduct,getConversion(SLC_VECTOR,(yyvsp[-3].code)),getConversion(SLC_VECTOR,(yyvsp[0].code)));
		}
#line 3997 "sl.cpp"
    break;

  case 196:
#line 2105 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);	
		}
#line 4005 "sl.cpp"
    break;

  case 197:
#line 2111 "sl.y"
                {
			(yyval.code)	=	getOperation((yyvsp[0].code),opcodeNegFloat,opcodeNegVector,opcodeNegMatrix,NULL,0);
		}
#line 4013 "sl.cpp"
    break;

  case 198:
#line 2120 "sl.y"
                {
			int	ft	=	(yyvsp[-2].code)->type;
			int	st	=	(yyvsp[0].code)->type;

			if (((yyvsp[-2].code)->type & SLC_TYPE_MASK) == ((yyvsp[0].code)->type & SLC_TYPE_MASK)) {
				(yyval.code)	=	new CConditionalExpression((yyvsp[-2].code)->type,(yyvsp[-4].code),(yyvsp[-2].code),(yyvsp[0].code));
			} else {
				sdr->error("Type mismatch in conditional execution\n");
			}
		}
#line 4028 "sl.cpp"
    break;

  case 199:
#line 2134 "sl.y"
                {
			(yyval.code)	=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeAnd,NULL,NULL,NULL,0);
		}
#line 4036 "sl.cpp"
    break;

  case 200:
#line 2141 "sl.y"
                {
			(yyval.code)	=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeOr,NULL,NULL,NULL,0);
		}
#line 4044 "sl.cpp"
    break;

  case 201:
#line 2148 "sl.y"
                {
			(yyval.code)			=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeFloatGreater,opcodeVectorGreater,NULL,NULL,SLC_FLOAT);
		}
#line 4052 "sl.cpp"
    break;

  case 202:
#line 2155 "sl.y"
                {
			(yyval.code)			=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeFloatLess,opcodeVectorLess,NULL,NULL,SLC_FLOAT);
		}
#line 4060 "sl.cpp"
    break;

  case 203:
#line 2162 "sl.y"
                {
			(yyval.code)			=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeFloatEGreater,opcodeVectorEGreater,NULL,NULL,SLC_FLOAT);
		}
#line 4068 "sl.cpp"
    break;

  case 204:
#line 2169 "sl.y"
                {
			(yyval.code)			=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeFloatELess,opcodeVectorELess,NULL,NULL,SLC_FLOAT);
		}
#line 4076 "sl.cpp"
    break;

  case 205:
#line 2176 "sl.y"
                {
			(yyval.code)			=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeFloatEqual,opcodeVectorEqual,NULL,opcodeStringEqual,SLC_FLOAT);
		}
#line 4084 "sl.cpp"
    break;

  case 206:
#line 2183 "sl.y"
                {
			(yyval.code)			=	getOperation((yyvsp[-2].code),(yyvsp[0].code),opcodeFloatNotEqual,opcodeVectorNotEqual,NULL,opcodeStringNotEqual,SLC_FLOAT);
		}
#line 4092 "sl.cpp"
    break;

  case 207:
#line 2189 "sl.y"
                {
			(yyval.code)			=	new CUnaryExpression(SLC_FLOAT,opcodeNot,getConversion(SLC_FLOAT,(yyvsp[0].code)));
		}
#line 4100 "sl.cpp"
    break;

  case 208:
#line 2198 "sl.y"
                {
			(yyval.array)	=	(yyvsp[-1].array);
		}
#line 4108 "sl.cpp"
    break;

  case 209:
#line 2207 "sl.y"
                {
			(yyval.array)	=	(yyvsp[0].array);
			(yyval.array)->push((yyvsp[-2].code));
		}
#line 4117 "sl.cpp"
    break;

  case 210:
#line 2213 "sl.y"
                {
			(yyval.array)	=	new CList<CExpression *>;
			(yyval.array)->push((yyvsp[0].code));
		}
#line 4126 "sl.cpp"
    break;

  case 211:
#line 2221 "sl.y"
                {
			(yyval.code)	=	new CConstantTerminalExpression(SLC_FLOAT | SLC_UNIFORM,strdup("3.141592654"));
		}
#line 4134 "sl.cpp"
    break;

  case 212:
#line 2226 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 4142 "sl.cpp"
    break;

  case 213:
#line 2231 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 4150 "sl.cpp"
    break;

  case 214:
#line 2236 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 4158 "sl.cpp"
    break;

  case 215:
#line 2241 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 4166 "sl.cpp"
    break;

  case 216:
#line 2247 "sl.y"
                {
			(yyval.code)	=	getConversion((yyvsp[-1].integer),(yyvsp[0].code));
			sdr->undesire();
		}
#line 4175 "sl.cpp"
    break;

  case 217:
#line 2255 "sl.y"
                {
			(yyval.code)	=	getConversion((yyvsp[-2].integer),(yyvsp[-1].string),(yyvsp[0].code));
			sdr->undesire();
		}
#line 4184 "sl.cpp"
    break;

  case 218:
#line 2261 "sl.y"
                {
	
			CVariable	*cVar	=	sdr->getVariable((yyvsp[0].string));

			if (cVar == NULL) {
				sdr->error("Identifier \"%s\" is not found\n",(yyvsp[0].string));
				(yyval.code)	=	new CNullExpression;
			} else { 
				(yyval.code)	=	new CTerminalExpression(cVar);
			}
		}
#line 4200 "sl.cpp"
    break;

  case 219:
#line 2275 "sl.y"
                {
	
			CVariable	*cVar	=	sdr->getVariable((yyvsp[0].string));

			if (cVar == NULL) {
				sdr->error("Identifier \"%s\" is not found\n",(yyvsp[0].string));
				(yyval.code)	=	new CNullExpression;
			} else { 
				(yyval.code)	=	getConversion((yyvsp[-1].integer),new CTerminalExpression(cVar));
			}
			
			sdr->undesire();
		}
#line 4218 "sl.cpp"
    break;

  case 220:
#line 2293 "sl.y"
                {
			CVariable *cVar	=	sdr->getVariable((yyvsp[-3].string));

			if (cVar == NULL) {
				sdr->error("Identifier \"%s\" is not found\n",(yyvsp[-3].string));
				(yyval.code)	=	new CNullExpression;
			} else if (cVar->type & SLC_ARRAY) { 
				(yyval.code)	=	new CArrayExpression(cVar,(yyvsp[-1].code));
			} else {
				CList<CExpression *>	*dummyParams = new CList<CExpression *>;
				CFunctionPrototype		*cFun;

				dummyParams->push(new CTerminalExpression(cVar));
				dummyParams->push((yyvsp[-1].code));

				// Check the builtin functions
				for (cFun = sdr->builtinFunctions->first(); cFun != NULL; cFun = sdr->builtinFunctions->next()) {
					if (cFun->match("comp",dummyParams,SLC_FLOAT)) break;
				}
				
				if (cFun == NULL) {
					// Cleanup
					CExpression	*cCode;
					while((cCode = dummyParams->pop()) != NULL) {
						delete cCode;
					}
					delete dummyParams;
					// Report error
					sdr->error("Can't index non array\n");
					(yyval.code)	=	new CNullExpression;
				} else {
					(yyval.code)	=	new CBuiltinExpression(cFun,dummyParams);
				}
			}
		}
#line 4258 "sl.cpp"
    break;

  case 221:
#line 2330 "sl.y"
                {
			(yyval.code)	=	new CConstantTerminalExpression(SLC_FLOAT,strdup((yyvsp[0].string)));
		}
#line 4266 "sl.cpp"
    break;

  case 222:
#line 2335 "sl.y"
                {
			(yyval.code)	=	new CConstantTerminalExpression(SLC_STRING,strdup((yyvsp[0].string)));
		}
#line 4274 "sl.cpp"
    break;

  case 223:
#line 2342 "sl.y"
                {	
			(yyval.code)	=	(yyvsp[-1].code);
		}
#line 4282 "sl.cpp"
    break;

  case 224:
#line 2352 "sl.y"
                {
			// Change the expected type to float
			sdr->undesire();
			sdr->desire(SLC_FLOAT | ((yyvsp[-1].integer) & (~(SLC_TYPE_MASK | SLC_SUB_TYPE_MASK))));
		}
#line 4292 "sl.cpp"
    break;

  case 225:
#line 2358 "sl.y"
                {
			(yyval.code)	=	getConversion((yyvsp[-3].integer),(yyvsp[-2].string),(yyvsp[0].code));

			sdr->undesire();
		}
#line 4302 "sl.cpp"
    break;

  case 226:
#line 2365 "sl.y"
                {
			// Change the expected type to float
			sdr->undesire();
			sdr->desire(SLC_FLOAT | ((yyvsp[0].integer) & (~(SLC_TYPE_MASK | SLC_SUB_TYPE_MASK))));
		}
#line 4312 "sl.cpp"
    break;

  case 227:
#line 2371 "sl.y"
                {
			(yyval.code)	=	getConversion((yyvsp[-2].integer),(yyvsp[0].code));

			sdr->undesire();
		}
#line 4322 "sl.cpp"
    break;

  case 228:
#line 2378 "sl.y"
                {
			// Change the expected type to float
			sdr->undesire();
			sdr->desire(SLC_FLOAT | ((yyvsp[0].integer) & (~(SLC_TYPE_MASK | SLC_SUB_TYPE_MASK))));
		}
#line 4332 "sl.cpp"
    break;

  case 229:
#line 2384 "sl.y"
                {
			(yyval.code)	=	getConversion((yyvsp[-2].integer),new CConstantTerminalExpression(SLC_FLOAT,strdup((yyvsp[0].string))));

			sdr->undesire();
		}
#line 4342 "sl.cpp"
    break;

  case 230:
#line 2391 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 4350 "sl.cpp"
    break;

  case 231:
#line 2400 "sl.y"
                {
			(yyval.code)	=	(yyvsp[-1].code);
		}
#line 4358 "sl.cpp"
    break;

  case 232:
#line 2408 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 4366 "sl.cpp"
    break;

  case 233:
#line 2417 "sl.y"
                {
			(yyval.code)	=	new CVectorExpression((yyvsp[-4].code),(yyvsp[-2].code),(yyvsp[0].code));
		}
#line 4374 "sl.cpp"
    break;

  case 234:
#line 2452 "sl.y"
                {
			CExpression	*elements[16];

			elements[0]		=	(yyvsp[-30].code);
			elements[1]		=	(yyvsp[-28].code);
			elements[2]		=	(yyvsp[-26].code);
			elements[3]		=	(yyvsp[-24].code);
			elements[4]		=	(yyvsp[-22].code);
			elements[5]		=	(yyvsp[-20].code);
			elements[6]		=	(yyvsp[-18].code);
			elements[7]		=	(yyvsp[-16].code);
			elements[8]		=	(yyvsp[-14].code);
			elements[9]		=	(yyvsp[-12].code);
			elements[10]	=	(yyvsp[-10].code);
			elements[11]	=	(yyvsp[-8].code);
			elements[12]	=	(yyvsp[-6].code);
			elements[13]	=	(yyvsp[-4].code);
			elements[14]	=	(yyvsp[-2].code);
			elements[15]	=	(yyvsp[0].code);

			(yyval.code)				=	new CMatrixExpression(elements);
		}
#line 4401 "sl.cpp"
    break;

  case 235:
#line 2482 "sl.y"
                {
			CFunctionPrototype		*cFun;
			CList<CExpression *>	*parameters	=	sdr->actualParameters;	// This is the list of parameters to the function
			const char				*funName	=	(yyvsp[0].string);

			// Clear the desired type flags
			sdr->undesire();

			// Restore the old parameters
			sdr->actualParameters		=	sdr->actualParameterStack->pop();

			// Check the builtin functions
			for (cFun = sdr->builtinFunctions->first(); cFun != NULL; cFun = sdr->builtinFunctions->next()) {
				if (cFun->perfectMatch((yyvsp[0].string),parameters,sdr->desired())) break;
			}

			if (cFun == NULL) {
				for (cFun = sdr->builtinFunctions->first(); cFun != NULL; cFun = sdr->builtinFunctions->next()) {
					if (cFun->match((yyvsp[0].string),parameters,sdr->desired())) break;
				}
			}

			if (cFun != NULL) {
				(yyval.code)	=	new CBuiltinExpression(cFun,parameters);
			} else {
				sdr->error("Function \"%s\" is not found\n",(yyvsp[0].string));
				if (parameters->numItems != 0) {
					CExpression	*cCode;
					while((cCode = parameters->pop()) != NULL) {
						delete cCode;
					}
				}
				delete parameters;
				(yyval.code)	=	new CNullExpression;
			}
		}
#line 4442 "sl.cpp"
    break;

  case 236:
#line 2520 "sl.y"
                {
			(yyval.code)	=	(yyvsp[0].code);
		}
#line 4450 "sl.cpp"
    break;

  case 237:
#line 2530 "sl.y"
                {
			// Save the old parameters
			sdr->actualParameterStack->push(sdr->actualParameters);
			// Start a new parameter list
			sdr->actualParameters	=	new CList<CExpression *>;

			// Make sure we do not do something stupid with the parameters
			sdr->desire(SLC_NONE);

			// Set the name
			(yyval.string)	=	(yyvsp[-1].string);
		}
#line 4467 "sl.cpp"
    break;

  case 238:
#line 2545 "sl.y"
                {
			// Save the old parameters
			sdr->actualParameterStack->push(sdr->actualParameters);
			// Start a new parameter list
			sdr->actualParameters	=	new CList<CExpression *>;

			// Make sure we do not do something stupid with the parameters
			sdr->desire(SLC_NONE);

			// Set the name
			(yyval.string)	=	"surface";
		}
#line 4484 "sl.cpp"
    break;

  case 239:
#line 2560 "sl.y"
                {
			// Save the old parameters
			sdr->actualParameterStack->push(sdr->actualParameters);
			// Start a new parameter list
			sdr->actualParameters	=	new CList<CExpression *>;

			// Make sure we do not do something stupid with the parameters
			sdr->desire(SLC_NONE);

			// Set the name
			(yyval.string)	=	"displacement";
		}
#line 4501 "sl.cpp"
    break;

  case 240:
#line 2578 "sl.y"
                {
			CFunction				*cFun;
			CList<CExpression *>	*parameters	=	sdr->actualParameters;	// This is the list of parameters to the function
			const char				*funName	=	(yyvsp[-2].string);

			// Clear the desired type flags
			sdr->undesire();

			// Restore the old parameters
			sdr->actualParameters		=	sdr->actualParameterStack->pop();

			// Search for the CFunction here....
			cFun	=	sdr->getFunction((yyvsp[-2].string),parameters);

			if (cFun != NULL) {													// Cool, the function exists
				// A function with the same name is defined ... 
				// Try to match the parameters;
				if (cFun->parameters->numItems == parameters->numItems) {	// The number of parameters match
					// A function with the same name is defined and the number of Parameters match
					(yyval.code)	=	new CFuncallExpression(cFun,parameters);					
				}
			}

			// If not found, check the predefined CFunctions
			if (cFun == NULL) {
				CFunctionPrototype	*cFun;
				const char			*fName	=	(yyvsp[-2].string);
				// Check the builtin CFunctions

				for (cFun = sdr->builtinFunctions->first(); cFun != NULL; cFun = sdr->builtinFunctions->next()) {
					if (cFun->perfectMatch((yyvsp[-2].string),parameters,sdr->desired())) break;
				}

				if (cFun == NULL) {
					for (cFun = sdr->builtinFunctions->first(); cFun != NULL; cFun = sdr->builtinFunctions->next()) {
						if (cFun->match((yyvsp[-2].string),parameters,sdr->desired())) break;
					}
				}

				// Check if there is a DSO implementing this function
				if (cFun == NULL) {
					sdr->enumerateDso((yyvsp[-2].string));

					for (cFun = sdr->builtinFunctions->first(); cFun != NULL; cFun = sdr->builtinFunctions->next()) {
						if (cFun->perfectMatch((yyvsp[-2].string),parameters,sdr->desired())) break;
					}

					if (cFun == NULL) {
						for (cFun = sdr->builtinFunctions->first(); cFun != NULL; cFun = sdr->builtinFunctions->next()) {
							if (cFun->match((yyvsp[-2].string),parameters,sdr->desired())) break;
						}
					}
				}

				if (cFun != NULL) {
					(yyval.code)	=	new CBuiltinExpression(cFun,parameters);
				} else {
					sdr->error("Function \"%s\" is not found\n",(yyvsp[-2].string));
					if (parameters->numItems != 0) {
						CExpression	*cCode;
						while((cCode = parameters->pop()) != NULL) {
							delete cCode;
						}
					}
					delete parameters;
					(yyval.code)	=	new CNullExpression;
				}

			}
		}
#line 4576 "sl.cpp"
    break;

  case 241:
#line 2654 "sl.y"
                {
			(yyval.code)	=	new CConstantTerminalExpression(SLC_STRING | SLC_UNIFORM,strdup((yyvsp[0].string)));
		}
#line 4584 "sl.cpp"
    break;

  case 242:
#line 2659 "sl.y"
                {
			CVariable	*cVar	=	sdr->getVariable((yyvsp[0].string));

			if (cVar != NULL)	(yyval.code)	=	new CTerminalExpression(cVar);
			else				(yyval.code)	=	new CNullExpression;
		}
#line 4595 "sl.cpp"
    break;

  case 243:
#line 2672 "sl.y"
                {
			(yyval.code)	=	getConversion(SLC_FLOAT | ((yyvsp[-1].code)->type & SLC_UNIFORM),(yyvsp[-1].code));
		}
#line 4603 "sl.cpp"
    break;

  case 244:
#line 2676 "sl.y"
                {
			(yyval.code)	=	new CConstantTerminalExpression(SLC_FLOAT | SLC_UNIFORM,strdup("0"));
		}
#line 4611 "sl.cpp"
    break;

  case 245:
#line 2694 "sl.y"
                {
			// Fake the parameters
			CList<CExpression *>	*parameters	=	sdr->actualParameters;	// This is the list of parameters to the function
			CList<CExpression *>	*pl			=	new CList<CExpression *>;
			CExpression				*cExpression;

			pl->push((yyvsp[-4].code));
			pl->push((yyvsp[-3].code));
			for (cExpression=parameters->first();cExpression!=NULL;cExpression=parameters->next())
				pl->push(cExpression);

			delete parameters;
			sdr->actualParameters	=	pl;

			(yyval.string)						=	(yyvsp[-6].string);
		}
#line 4632 "sl.cpp"
    break;

  case 246:
#line 2716 "sl.y"
                {
			// Fake the parameters
			CList<CExpression *>	*parameters	=	sdr->actualParameters;	// This is the list of parameters to the function
			CList<CExpression *>	*pl			=	new CList<CExpression *>;
			CExpression				*cExpression;

			pl->push((yyvsp[-2].code));
			pl->push((yyvsp[-1].code));
			for (cExpression=parameters->first();cExpression!=NULL;cExpression=parameters->next())
				pl->push(cExpression);

			delete parameters;
			sdr->actualParameters	=	pl;

			(yyval.string)						=	(yyvsp[-4].string);
		}
#line 4653 "sl.cpp"
    break;

  case 247:
#line 2736 "sl.y"
                {
			(yyval.string)	=	"texture";

			// Save the old parameters
			sdr->actualParameterStack->push(sdr->actualParameters);
			// Start a new parameter list
			sdr->actualParameters	=	new CList<CExpression *>;

			// Make sure we do not do something stupid with the parameters
			sdr->desire(SLC_NONE);
		}
#line 4669 "sl.cpp"
    break;

  case 248:
#line 2749 "sl.y"
                {
			(yyval.string)	=	"shadow";

			// Save the old parameters
			sdr->actualParameterStack->push(sdr->actualParameters);
			// Start a new parameter list
			sdr->actualParameters	=	new CList<CExpression *>;

			// Make sure we do not do something stupid with the parameters
			sdr->desire(SLC_NONE);
		}
#line 4685 "sl.cpp"
    break;

  case 249:
#line 2762 "sl.y"
                {
			(yyval.string)	=	"environment";

			// Save the old parameters
			sdr->actualParameterStack->push(sdr->actualParameters);
			// Start a new parameter list
			sdr->actualParameters	=	new CList<CExpression *>;

			// Make sure we do not do something stupid with the parameters
			sdr->desire(SLC_NONE);
		}
#line 4701 "sl.cpp"
    break;

  case 250:
#line 2775 "sl.y"
                {
			(yyval.string)	=	"bump";

			// Save the old parameters
			sdr->actualParameterStack->push(sdr->actualParameters);
			// Start a new parameter list
			sdr->actualParameters	=	new CList<CExpression *>;

			// Make sure we do not do something stupid with the parameters
			sdr->desire(SLC_NONE);
		}
#line 4717 "sl.cpp"
    break;

  case 251:
#line 2792 "sl.y"
                {
		}
#line 4724 "sl.cpp"
    break;

  case 252:
#line 2795 "sl.y"
                {
		}
#line 4731 "sl.cpp"
    break;

  case 253:
#line 2802 "sl.y"
                {
			sdr->actualParameters->push((yyvsp[-1].code));
		}
#line 4739 "sl.cpp"
    break;

  case 254:
#line 2806 "sl.y"
                {
		}
#line 4746 "sl.cpp"
    break;

  case 255:
#line 2810 "sl.y"
                {
			sdr->actualParameters->push((yyvsp[0].code));
		}
#line 4754 "sl.cpp"
    break;


#line 4758 "sl.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2815 "sl.y"



#include	"lex.sl.cpp"



int	CScriptContext::compile(FILE *in,char *outName) {
	
	sdr		=	this;

	slin	=	in;

	slparse();

	// Must have exactly one main shader function
	if (!sdr->shaderType)
		sdr->error("Shader file missing main shader body\n");

	if (compileError == 0) {
		char		*tmp;

		if (outName == NULL) {
			// If there's no compile error, dump the compiled code
			tmp	=	new char[strlen(sdr->shaderName)+5];

			strcpy(tmp,sdr->shaderName);
			strcat(tmp,".sdr");
		} else {
			tmp	=	outName;
		}

		sdr->generateCode(tmp);

		if (tmp != outName) delete [] tmp;

		return TRUE;
	}
	return FALSE;
}


void	yyerror(const char *mes) {
	if (yytext && yytext[0])
		sdr->error("Parse error before '%s'\n",yytext);
	else
		sdr->error("Parse error\n");
}

