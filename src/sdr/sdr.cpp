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
#define yyparse         sdrparse
#define yylex           sdrlex
#define yyerror         sdrerror
#define yydebug         sdrdebug
#define yynerrs         sdrnerrs
#define yylval          sdrlval
#define yychar          sdrchar

/* First part of user prologue.  */
#line 1 "sdr.y"

//////////////////////////////////////////////////////////////////////
//
//                             Pixie
//
// Copyright © 1999 - 2003, Okan Arikan
//
// Contact: okan@cs.utexas.edu
//
//	This library is free software; you can redistribute it and/or
//	modify it under the terms of the GNU Lesser General Public
//	License as published by the Free Software Foundation; either
//	version 2.1 of the License, or (at your option) any later version.
//
//	This library is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//	Lesser General Public License for more details.
//
//	You should have received a copy of the GNU Lesser General Public
//	License along with this library; if not, write to the Free Software
//	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
//
//  File				:	sl.y
//  Classes				:	-
//  Description			:	This is the parser file for CShader
//
////////////////////////////////////////////////////////////////////////
#undef alloca
#include <math.h>
#include <string.h>

#include "common/algebra.h"
#include "common/os.h"
#include "sdr.h"

/////////////////////////////////////////////////////////////////////////////////////
//   First some temporary data structures used during the script parsing


// Some forward definitions
		void							sdrerror(const char *);		// Forward definition for stupid yacc
		int								sdrlex(void );				// Forward definition for stupid yacc




		TSdrParameter	*parameters;
		TSdrParameter	*currentParameter;
		UDefaultVal		*currentDefaultItem;
		int				numArrayItemsRemaining;
		ESdrShaderType	shaderType;


#line 135 "sdr.cpp"

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
extern int sdrdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SCRL_PARAMETERS = 258,
    SCRL_VARIABLES = 259,
    SCRL_INIT = 260,
    SCRL_CODE = 261,
    SCRL_OUTPUT = 262,
    SCRL_VARYING = 263,
    SCRL_UNIFORM = 264,
    SCRL_BOOLEAN = 265,
    SCRL_FLOAT = 266,
    SCRL_COLOR = 267,
    SCRL_VECTOR = 268,
    SCRL_NORMAL = 269,
    SCRL_POINT = 270,
    SCRL_MATRIX = 271,
    SCRL_STRING = 272,
    SCRL_SURFACE = 273,
    SCRL_DISPLACEMENT = 274,
    SCRL_IMAGER = 275,
    SCRL_LIGHTSOURCE = 276,
    SCRL_VOLUME = 277,
    SCRL_GENERIC = 278,
    SCRL_DSO = 279,
    SCRL_DOT = 280,
    SCRL_COLON = 281,
    SCRL_EQUAL = 282,
    SCRL_OPEN_PARANTHESIS = 283,
    SCRL_CLOSE_PARANTHESIS = 284,
    SCRL_OPEN_SQR_PARANTHESIS = 285,
    SCRL_CLOSE_SQR_PARANTHESIS = 286,
    SCRL_COMMA = 287,
    SCRL_NL = 288,
    SCRL_TEXT_VALUE = 289,
    SCRL_IDENTIFIER_VALUE = 290,
    SCRL_LABEL_VALUE = 291,
    SCRL_FLOAT_VALUE = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 58 "sdr.y"
union slval
{
#line 58 "sdr.y"

	float			real;
	char			string[64];
	matrix			m;
	vector			v;
	TSdrParameter *parameter;

#line 231 "sdr.cpp"

};
#line 58 "sdr.y"
typedef union slval YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE sdrlval;

int sdrparse (void);





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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  313

#define YYUNDEFTOK  2
#define YYMAXUTOK   292


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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   111,   111,   123,   125,   129,   139,   153,   161,   174,
     179,   182,   190,   194,   198,   203,   209,   215,   221,   227,
     235,   242,   248,   253,   253,   266,   266,   281,   283,   285,
     287,   289,   291,   293,   298,   304,   310,   317,   324,   332,
     343,   358,   352,   369,   387,   398,   410,   414,   423,   440,
     434,   451,   469,   480,   492,   498,   496,   515,   509,   526,
     550,   548,   567,   561,   578,   600,   612,   611,   625,   631,
     629,   648,   642,   659,   683,   681,   700,   694,   711,   733,
     778,   806,   838,   832,   850,   886,   897,   944,   970,   974,
     981,   983,   987,   991,   995,   999,  1003,  1007,  1011,  1015,
    1021,  1026,  1037,  1042,  1052,  1057,  1067,  1072,  1082,  1087,
    1097,  1102,  1112,  1117,  1127,  1132,  1142,  1146,  1150,  1153,
    1159,  1157,  1170,  1174,  1178,  1184,  1189,  1194,  1201,  1208,
    1212,  1216,  1220,  1224,  1234,  1270
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SCRL_PARAMETERS", "SCRL_VARIABLES",
  "SCRL_INIT", "SCRL_CODE", "SCRL_OUTPUT", "SCRL_VARYING", "SCRL_UNIFORM",
  "SCRL_BOOLEAN", "SCRL_FLOAT", "SCRL_COLOR", "SCRL_VECTOR", "SCRL_NORMAL",
  "SCRL_POINT", "SCRL_MATRIX", "SCRL_STRING", "SCRL_SURFACE",
  "SCRL_DISPLACEMENT", "SCRL_IMAGER", "SCRL_LIGHTSOURCE", "SCRL_VOLUME",
  "SCRL_GENERIC", "SCRL_DSO", "SCRL_DOT", "SCRL_COLON", "SCRL_EQUAL",
  "SCRL_OPEN_PARANTHESIS", "SCRL_CLOSE_PARANTHESIS",
  "SCRL_OPEN_SQR_PARANTHESIS", "SCRL_CLOSE_SQR_PARANTHESIS", "SCRL_COMMA",
  "SCRL_NL", "SCRL_TEXT_VALUE", "SCRL_IDENTIFIER_VALUE",
  "SCRL_LABEL_VALUE", "SCRL_FLOAT_VALUE", "$accept", "start",
  "slEmptySpace", "slVectorIn", "slVector", "slVectorInit", "slContainer",
  "slType", "slParameterDefinitions", "slParameters", "slParameter", "$@1",
  "$@2", "slRegularParameter", "slGlobalParameterContainer",
  "slFloatParameter", "$@3", "slFloatArrayInitializer",
  "slFloatArrayInitializerItems", "slStringParameter", "$@4",
  "slStringArrayInitializer", "slStringArrayInitializerItems",
  "slColorParameter", "$@5", "$@6", "slVectorParameter", "$@7", "$@8",
  "slVectorArrayInitializer", "slVectorArrayInitializerItems", "$@9",
  "slNormalParameter", "$@10", "$@11", "slPointParameter", "$@12", "$@13",
  "slMatrixParameter", "$@14", "slMatrixArrayInitializer",
  "slMatrixArrayInitializerItems", "slVariableDefinitions", "slVariables",
  "slVariable", "slBooleanVariable", "slFloatVariable", "slStringVariable",
  "slVectorVariable", "slColorVariable", "slNormalVariable",
  "slPointVariable", "slMatrixVariable", "slCode", "slDSO", "$@15",
  "slOpcode", "slOperandList", "slStatement", "slLabelDefinition",
  "slOperand", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,    26,    31,    44,    53,    54,    58,    71,  -156,  -156,
    -156,  -156,  -156,  -156,    62,    74,    56,    64,    86,  -156,
      59,    60,    -2,  -156,  -156,    61,    73,    38,    52,    -5,
    -156,    19,  -156,  -156,    38,    63,    65,    66,    67,    68,
      69,    70,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,    22,  -156,    75,  -156,  -156,    72,  -156,    80,
      76,   -12,    78,    79,  -156,  -156,  -156,    -1,    83,    84,
      85,    87,    39,    41,    81,    88,    89,    90,    91,    92,
      93,    94,    97,    98,    99,   100,   101,   102,   103,   104,
    -156,  -156,  -156,  -156,    36,  -156,  -156,  -156,  -156,  -156,
     -12,  -156,  -156,    82,   105,   106,    95,   107,    95,   108,
      95,   109,    95,    10,   110,   114,   112,   111,   120,   121,
     122,   123,   124,   125,   126,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,   -15,   129,   130,   128,  -156,  -156,   127,
     131,   -22,  -156,   132,  -156,   133,  -156,   134,  -156,   135,
    -156,   136,  -156,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   150,  -156,   151,  -156,   147,   113,   146,   149,
      11,  -156,  -156,  -156,   160,   161,   162,   153,   164,   165,
     163,   166,   167,   168,   169,   170,   171,   172,  -156,   175,
     173,  -156,  -156,   156,   158,  -156,  -156,  -156,  -156,   159,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
     -12,   174,   176,   177,   178,   179,   177,   177,   177,   180,
     182,   183,  -156,    43,  -156,  -156,  -156,  -156,   187,   184,
    -156,  -156,  -156,   185,  -156,  -156,  -156,  -156,  -156,   186,
      25,   188,  -156,   189,   190,   -20,    45,   192,  -156,  -156,
    -156,   -22,  -156,   191,   193,  -156,  -156,  -156,  -156,   194,
    -156,   195,   196,   197,   198,   199,   200,   201,   202,   208,
     204,   205,   206,   207,   209,   213,   210,   211,   212,   214,
     215,   218,   216,   217,   219,   220,   221,   223,   203,   222,
     224,  -156,   225,   228,   226,   227,   229,   233,   230,   231,
     232,   238,   240,   235,  -156,   241,   237,   243,   239,   245,
     242,   181,  -156
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      19,    17,    18,     1,     0,     0,     0,     0,     0,    22,
       0,     0,    25,    91,   119,     0,     0,     0,    14,     0,
      21,    38,    35,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,    33,
      13,    12,     0,    90,     0,   124,   123,     0,   122,     0,
       0,   126,     0,     0,    37,    36,    24,    40,    55,    60,
      69,    74,    81,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   128,   118,     0,   129,   131,   130,   132,   127,
     126,   116,   117,     0,     0,     0,    11,     0,    11,     0,
      11,     0,    11,     0,     0,     0,     0,   100,   102,   108,
     106,   110,   112,   114,   104,    92,    93,    94,    96,    95,
      97,    98,    99,     3,     0,     0,     0,   125,    39,     0,
       0,     0,    56,     0,    61,     0,    70,     0,    75,     0,
      80,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     2,     0,   135,     0,    43,    59,     0,
       0,     7,     9,    10,    64,    73,    78,     0,    84,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,    41,    57,     0,     0,     5,    62,    71,    76,     0,
      82,    49,   101,   103,   109,   107,   111,   113,   115,   105,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,    46,    42,    68,    58,     0,     0,
      63,    72,    77,     0,    88,    83,    54,    50,   133,     0,
       0,    66,     8,     0,     0,     0,     0,     0,    44,    45,
      65,     0,     6,     0,     0,    85,    87,    52,    53,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,   -67,  -156,  -155,   -45,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,   244,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -133,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,     7,  -156,  -156,  -156,  -100,  -156,  -156,
    -156
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,   163,   172,   173,   142,    52,     7,    15,    22,
      25,    26,    27,    42,    34,    43,   212,   225,   240,    44,
     221,   237,   246,    45,   106,   213,    46,   108,   216,   227,
     241,   251,    47,   110,   217,    48,   112,   218,    49,   220,
     235,   245,    18,    28,    53,    82,    83,    84,    85,    86,
      87,    88,    89,    29,    60,   134,    61,    99,    62,    63,
     100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     137,    54,   -20,    55,    56,   -23,   -23,   -23,   169,    57,
     254,   255,   170,    55,    56,   171,    94,   256,   162,    57,
      58,    59,    95,    96,    97,    98,   103,    64,    65,   104,
      58,    59,    74,    75,    76,    77,    78,    79,    80,    81,
     149,   194,     1,     2,     3,     4,     5,   150,   195,    35,
      36,    37,    38,    39,    40,    41,   248,   -89,    13,     8,
      50,    51,   249,   144,     9,   146,   113,   148,   115,   114,
     135,   116,   238,   136,    14,   239,   257,    10,    17,   258,
      31,    32,    33,   230,   231,   232,    11,    12,    16,    19,
      20,    21,    23,    24,    30,   188,   260,   133,    67,     0,
      68,    69,    70,    71,    72,    73,    92,    91,    90,    93,
     222,   101,   102,   105,   107,   109,   117,   111,     0,   138,
       0,     0,   141,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,     0,     0,
     191,   154,   139,   140,   143,   145,   147,   151,   152,   153,
     155,   156,   157,   158,   159,   160,   161,   164,   167,   165,
     166,     0,   168,   174,   175,   176,     0,   178,   179,     0,
       0,     0,   177,   192,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   162,   190,   189,   193,   196,   197,   198,
     199,   200,   201,   214,   202,   215,   219,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   224,   226,     0,     0,
     312,   223,   234,   236,     0,   228,   229,   233,   242,   250,
     252,   243,   244,   247,   259,     0,     0,   253,   261,   266,
     262,   263,   264,   265,   291,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   278,   277,   279,   280,   281,
     284,   282,   283,   285,   286,   290,   287,   288,   289,   292,
     295,   293,   294,   296,   297,   299,   298,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,    66,   311
};

static const yytype_int16 yycheck[] =
{
     100,     6,     4,    18,    19,     7,     8,     9,    30,    24,
      30,    31,    34,    18,    19,    37,    28,    37,    33,    24,
      35,    36,    34,    35,    36,    37,    27,     8,     9,    30,
      35,    36,    10,    11,    12,    13,    14,    15,    16,    17,
      30,    30,    18,    19,    20,    21,    22,    37,    37,    11,
      12,    13,    14,    15,    16,    17,    31,     5,     0,    33,
       8,     9,    37,   108,    33,   110,    27,   112,    27,    30,
      34,    30,    29,    37,     3,    32,    31,    33,     4,    34,
       7,     8,     9,   216,   217,   218,    33,    33,    26,    33,
      26,     5,    33,    33,    33,   162,   251,    90,    35,    -1,
      35,    35,    35,    35,    35,    35,    26,    35,    33,    33,
     210,    33,    33,    30,    30,    30,    35,    30,    -1,    37,
      -1,    -1,    27,    35,    35,    35,    35,    35,    35,    35,
      33,    33,    33,    33,    33,    33,    33,    33,    -1,    -1,
      27,    30,    37,    37,    37,    37,    37,    37,    34,    37,
      30,    30,    30,    30,    30,    30,    30,    28,    31,    29,
      32,    -1,    31,    31,    31,    31,    -1,    31,    31,    -1,
      -1,    -1,    37,    27,    -1,    37,    37,    37,    37,    37,
      37,    37,    37,    33,    37,    34,    37,    27,    27,    27,
      37,    27,    27,    37,    31,    37,    37,    31,    31,    31,
      31,    31,    31,    31,    29,    32,    30,    30,    -1,    -1,
      29,    37,    30,    30,    -1,    37,    37,    37,    31,    31,
      31,    37,    37,    37,    32,    -1,    -1,    37,    37,    32,
      37,    37,    37,    37,    31,    37,    37,    37,    37,    37,
      32,    37,    37,    37,    37,    32,    37,    37,    37,    37,
      32,    37,    37,    37,    37,    32,    37,    37,    37,    37,
      32,    37,    37,    37,    37,    32,    37,    37,    37,    37,
      32,    31,    37,    32,    37,    32,    37,    32,    34,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    19,    20,    21,    22,    39,    45,    33,    33,
      33,    33,    33,     0,     3,    46,    26,     4,    80,    33,
      26,     5,    47,    33,    33,    48,    49,    50,    81,    91,
      33,     7,     8,     9,    52,    11,    12,    13,    14,    15,
      16,    17,    51,    53,    57,    61,    64,    70,    73,    76,
       8,     9,    44,    82,     6,    18,    19,    24,    35,    36,
      92,    94,    96,    97,     8,     9,    51,    35,    35,    35,
      35,    35,    35,    35,    10,    11,    12,    13,    14,    15,
      16,    17,    83,    84,    85,    86,    87,    88,    89,    90,
      33,    35,    26,    33,    28,    34,    35,    36,    37,    95,
      98,    33,    33,    27,    30,    30,    62,    30,    65,    30,
      71,    30,    74,    27,    30,    27,    30,    35,    35,    35,
      35,    35,    35,    35,    35,    33,    33,    33,    33,    33,
      33,    33,    33,    91,    93,    34,    37,    95,    37,    37,
      37,    27,    43,    37,    43,    37,    43,    37,    43,    30,
      37,    37,    34,    37,    30,    30,    30,    30,    30,    30,
      30,    30,    33,    40,    28,    29,    32,    31,    31,    30,
      34,    37,    41,    42,    31,    31,    31,    37,    31,    31,
      37,    37,    37,    37,    37,    37,    37,    37,    40,    34,
      37,    27,    27,    37,    30,    37,    27,    27,    27,    37,
      27,    27,    31,    31,    31,    31,    31,    31,    31,    31,
      29,    32,    54,    63,    37,    37,    66,    72,    75,    37,
      77,    58,    95,    37,    30,    55,    30,    67,    37,    37,
      67,    67,    67,    37,    30,    78,    30,    59,    29,    32,
      56,    68,    31,    37,    37,    79,    60,    37,    31,    37,
      31,    69,    31,    37,    30,    31,    37,    31,    34,    32,
      42,    37,    37,    37,    37,    37,    32,    37,    37,    37,
      37,    37,    32,    37,    37,    37,    37,    37,    32,    37,
      37,    37,    37,    37,    32,    37,    37,    37,    37,    37,
      32,    31,    37,    37,    37,    32,    37,    37,    37,    32,
      37,    37,    37,    32,    31,    37,    32,    37,    32,    37,
      32,    37,    29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    41,    41,    42,
      43,    43,    44,    44,    44,    45,    45,    45,    45,    45,
      46,    47,    47,    49,    48,    50,    48,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    53,
      53,    54,    53,    53,    55,    56,    56,    57,    57,    58,
      57,    57,    59,    60,    60,    62,    61,    63,    61,    61,
      65,    64,    66,    64,    64,    67,    69,    68,    68,    71,
      70,    72,    70,    70,    74,    73,    75,    73,    73,    76,
      76,    76,    77,    76,    76,    78,    79,    79,    79,    80,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    91,    91,
      93,    92,    94,    94,    94,    95,    95,    96,    97,    98,
      98,    98,    98,    98,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    10,     0,     2,     2,     6,     1,     5,     1,
       2,     0,     1,     1,     0,     2,     2,     2,     2,     2,
       4,     3,     0,     0,     3,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     4,
       2,     0,     8,     5,     3,     2,     0,     2,     4,     0,
       8,     5,     3,     2,     0,     0,     4,     0,     8,     5,
       0,     4,     0,     8,     5,     3,     0,     3,     0,     0,
       4,     0,     8,     5,     0,     4,     0,     8,     5,    21,
       4,     2,     0,     8,     5,     3,    19,     2,     0,     4,
       2,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     5,     2,     5,     2,     5,     2,     5,     2,     5,
       2,     5,     2,     5,     2,     5,     3,     3,     3,     0,
       0,     7,     1,     1,     1,     2,     0,     2,     2,     1,
       1,     1,     1,     7,    33,     3
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
  case 5:
#line 131 "sdr.y"
                        {
				currentParameter->space			=	strdup((yyvsp[-1].string));
				currentDefaultItem->vector		=	new float[3];
				currentDefaultItem->vector[0]	=	(yyvsp[0].real);
				currentDefaultItem->vector[1]	=	(yyvsp[0].real);
				currentDefaultItem->vector[2]	=	(yyvsp[0].real);
			}
#line 1629 "sdr.cpp"
    break;

  case 6:
#line 145 "sdr.y"
                        {
				currentParameter->space			=	strdup((yyvsp[-5].string));
				currentDefaultItem->vector		=	new float[3];
				currentDefaultItem->vector[0]	=	(yyvsp[-3].real);
				currentDefaultItem->vector[1]	=	(yyvsp[-2].real);
				currentDefaultItem->vector[2]	=	(yyvsp[-1].real);
			}
#line 1641 "sdr.cpp"
    break;

  case 7:
#line 154 "sdr.y"
                        {
				currentDefaultItem->vector		=	new float[3];
				currentDefaultItem->vector[0]	=	(yyvsp[0].real);
				currentDefaultItem->vector[1]	=	(yyvsp[0].real);
				currentDefaultItem->vector[2]	=	(yyvsp[0].real);
			}
#line 1652 "sdr.cpp"
    break;

  case 8:
#line 166 "sdr.y"
                        {
				currentDefaultItem->vector		=	new float[3];
				currentDefaultItem->vector[0]	=	(yyvsp[-3].real);
				currentDefaultItem->vector[1]	=	(yyvsp[-2].real);
				currentDefaultItem->vector[2]	=	(yyvsp[-1].real);
			}
#line 1663 "sdr.cpp"
    break;

  case 9:
#line 175 "sdr.y"
                        {
			}
#line 1670 "sdr.cpp"
    break;

  case 11:
#line 182 "sdr.y"
                        {
					currentParameter->defaultValue.vector		=	new float[3];
					currentParameter->defaultValue.vector[0]	=	0;
					currentParameter->defaultValue.vector[1]	=	0;
					currentParameter->defaultValue.vector[2]	=	0;
			}
#line 1681 "sdr.cpp"
    break;

  case 12:
#line 191 "sdr.y"
                                {
				}
#line 1688 "sdr.cpp"
    break;

  case 13:
#line 195 "sdr.y"
                                {
				}
#line 1695 "sdr.cpp"
    break;

  case 14:
#line 198 "sdr.y"
                                {
				}
#line 1702 "sdr.cpp"
    break;

  case 15:
#line 205 "sdr.y"
                {
			shaderType	=	SHADER_SURFACE;
		}
#line 1710 "sdr.cpp"
    break;

  case 16:
#line 211 "sdr.y"
                {
			shaderType	=	SHADER_DISPLACEMENT;
		}
#line 1718 "sdr.cpp"
    break;

  case 17:
#line 217 "sdr.y"
                {
			shaderType	=	SHADER_LIGHT;
		}
#line 1726 "sdr.cpp"
    break;

  case 18:
#line 223 "sdr.y"
                {
			shaderType	=	SHADER_VOLUME;
		}
#line 1734 "sdr.cpp"
    break;

  case 19:
#line 229 "sdr.y"
                {
			shaderType	=	SHADER_IMAGER;
		}
#line 1742 "sdr.cpp"
    break;

  case 21:
#line 245 "sdr.y"
                {
		}
#line 1749 "sdr.cpp"
    break;

  case 22:
#line 248 "sdr.y"
                {
		}
#line 1756 "sdr.cpp"
    break;

  case 23:
#line 253 "sdr.y"
                {
			currentParameter						=	new TSdrParameter;
			currentParameter->space					=	NULL;
			currentParameter->numItems				=	1;
			currentParameter->defaultValue.string	=	NULL;
		}
#line 1767 "sdr.cpp"
    break;

  case 24:
#line 261 "sdr.y"
                {
			currentParameter->next	=	parameters;
			parameters				=	currentParameter;
		}
#line 1776 "sdr.cpp"
    break;

  case 25:
#line 266 "sdr.y"
                {
			currentParameter						=	new TSdrParameter;
			currentParameter->space					=	NULL;
			currentParameter->numItems				=	1;
			currentParameter->defaultValue.string	=	NULL;
			currentParameter->container				=	CONTAINER_UNIFORM;
		}
#line 1788 "sdr.cpp"
    break;

  case 26:
#line 274 "sdr.y"
                {
			currentParameter->next	=	parameters;
			parameters				=	currentParameter;
		}
#line 1797 "sdr.cpp"
    break;

  case 34:
#line 299 "sdr.y"
                {
			currentParameter->container	=	CONTAINER_UNIFORM;
			currentParameter->writable	=	FALSE;
		}
#line 1806 "sdr.cpp"
    break;

  case 35:
#line 305 "sdr.y"
                {
			currentParameter->container	=	CONTAINER_VARYING;
			currentParameter->writable	=	FALSE;
		}
#line 1815 "sdr.cpp"
    break;

  case 36:
#line 312 "sdr.y"
                {
			currentParameter->container	=	CONTAINER_UNIFORM;
			currentParameter->writable	=	TRUE;
		}
#line 1824 "sdr.cpp"
    break;

  case 37:
#line 319 "sdr.y"
                {
			currentParameter->container	=	CONTAINER_VARYING;
			currentParameter->writable	=	TRUE;
		}
#line 1833 "sdr.cpp"
    break;

  case 38:
#line 325 "sdr.y"
                {
			currentParameter->container	=	CONTAINER_UNIFORM;
			currentParameter->writable	=	TRUE;
		}
#line 1842 "sdr.cpp"
    break;

  case 39:
#line 336 "sdr.y"
                {
			currentParameter->type					=	TYPE_FLOAT;
			currentParameter->name					=	strdup((yyvsp[-2].string));
			currentParameter->defaultValue.scalar	=	(yyvsp[0].real);
			currentParameter->numItems				=	1;
		}
#line 1853 "sdr.cpp"
    break;

  case 40:
#line 345 "sdr.y"
                {
			currentParameter->type					=	TYPE_FLOAT;
			currentParameter->name					=	strdup((yyvsp[0].string));
			currentParameter->defaultValue.scalar	=	0;
			currentParameter->numItems				=	1;
		}
#line 1864 "sdr.cpp"
    break;

  case 41:
#line 358 "sdr.y"
                {
			currentParameter->type					=	TYPE_FLOAT;
			currentParameter->name					=	strdup((yyvsp[-4].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-2].real)];
			currentParameter->numItems				=	(int) (yyvsp[-2].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		}
#line 1878 "sdr.cpp"
    break;

  case 43:
#line 374 "sdr.y"
                {
			currentParameter->type					=	TYPE_FLOAT;
			currentParameter->name					=	strdup((yyvsp[-3].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-1].real)];
			currentParameter->numItems				=	(int) (yyvsp[-1].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++)
				currentDefaultItem[i].scalar = 0;
		}
#line 1893 "sdr.cpp"
    break;

  case 44:
#line 390 "sdr.y"
                {
			if(numArrayItemsRemaining){
				sdrerror("Wrong number of items in array initializer\n");
			}
		}
#line 1903 "sdr.cpp"
    break;

  case 45:
#line 400 "sdr.y"
                {
			if(numArrayItemsRemaining){
				currentDefaultItem->scalar = (yyvsp[0].real);
				currentDefaultItem++;
				numArrayItemsRemaining--;
			}
			else{
				sdrerror("Wrong number of items in array initializer\n");
			}
		}
#line 1918 "sdr.cpp"
    break;

  case 47:
#line 416 "sdr.y"
                {
			currentParameter->type					=	TYPE_STRING;
			currentParameter->name					=	strdup((yyvsp[0].string));
			currentParameter->defaultValue.array	=	NULL;
			currentParameter->numItems				=	1;
		}
#line 1929 "sdr.cpp"
    break;

  case 48:
#line 427 "sdr.y"
                {
			currentParameter->type					=	TYPE_STRING;
			currentParameter->name					=	strdup((yyvsp[-2].string));
			currentParameter->defaultValue.string	=	strdup((yyvsp[0].string));
			currentParameter->numItems				=	1;
		}
#line 1940 "sdr.cpp"
    break;

  case 49:
#line 440 "sdr.y"
                {
			currentParameter->type					=	TYPE_STRING;
			currentParameter->name					=	strdup((yyvsp[-4].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-2].real)];
			currentParameter->numItems				=	(int) (yyvsp[-2].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		}
#line 1954 "sdr.cpp"
    break;

  case 51:
#line 456 "sdr.y"
                {
			currentParameter->type					=	TYPE_STRING;
			currentParameter->name					=	strdup((yyvsp[-3].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-1].real)];
			currentParameter->numItems				=	(int) (yyvsp[-1].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++)
				currentDefaultItem[i].string = NULL;
		}
#line 1969 "sdr.cpp"
    break;

  case 52:
#line 472 "sdr.y"
                {
			if(numArrayItemsRemaining){
				sdrerror("Wrong number of items in array initializer\n");
			}
		}
#line 1979 "sdr.cpp"
    break;

  case 53:
#line 482 "sdr.y"
                {
			if(numArrayItemsRemaining){
				currentDefaultItem->string = strdup((yyvsp[0].string));
				currentDefaultItem++;
				numArrayItemsRemaining--;
			}
			else{
				sdrerror("Wrong number of items in array initializer\n");
			}
		}
#line 1994 "sdr.cpp"
    break;

  case 55:
#line 498 "sdr.y"
                {
			currentParameter->type					=	TYPE_COLOR;
			currentParameter->name					=	strdup((yyvsp[0].string));
			currentParameter->numItems				=	1;
			
			currentDefaultItem = &currentParameter->defaultValue;
		}
#line 2006 "sdr.cpp"
    break;

  case 56:
#line 506 "sdr.y"
                {
		}
#line 2013 "sdr.cpp"
    break;

  case 57:
#line 515 "sdr.y"
                {
			currentParameter->type					=	TYPE_COLOR;
			currentParameter->name					=	strdup((yyvsp[-4].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-2].real)];
			currentParameter->numItems				=	(int) (yyvsp[-2].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		}
#line 2027 "sdr.cpp"
    break;

  case 59:
#line 531 "sdr.y"
                {
			currentParameter->type					=	TYPE_COLOR;
			currentParameter->name					=	strdup((yyvsp[-3].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-1].real)];
			currentParameter->numItems				=	(int) (yyvsp[-1].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].vector = new float[3];
				currentDefaultItem[i].vector[0] = 0;
				currentDefaultItem[i].vector[1] = 0;
				currentDefaultItem[i].vector[2] = 0;
			}
		}
#line 2046 "sdr.cpp"
    break;

  case 60:
#line 550 "sdr.y"
                {
			currentParameter->type					=	TYPE_VECTOR;
			currentParameter->name					=	strdup((yyvsp[0].string));
			currentParameter->numItems				=	1;
			
			currentDefaultItem = &currentParameter->defaultValue;
		}
#line 2058 "sdr.cpp"
    break;

  case 61:
#line 558 "sdr.y"
                {
		}
#line 2065 "sdr.cpp"
    break;

  case 62:
#line 567 "sdr.y"
                {
			currentParameter->type					=	TYPE_VECTOR;
			currentParameter->name					=	strdup((yyvsp[-4].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-2].real)];
			currentParameter->numItems				=	(int) (yyvsp[-2].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		}
#line 2079 "sdr.cpp"
    break;

  case 64:
#line 583 "sdr.y"
                {
			currentParameter->type					=	TYPE_VECTOR;
			currentParameter->name					=	strdup((yyvsp[-3].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-1].real)];
			currentParameter->numItems				=	(int) (yyvsp[-1].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].vector = new float[3];
				currentDefaultItem[i].vector[0] = 0;
				currentDefaultItem[i].vector[1] = 0;
				currentDefaultItem[i].vector[2] = 0;
			}
		}
#line 2098 "sdr.cpp"
    break;

  case 65:
#line 603 "sdr.y"
                {
			if(numArrayItemsRemaining){
				sdrerror("Wrong number of items in array initializer\n");
		}
		}
#line 2108 "sdr.cpp"
    break;

  case 66:
#line 612 "sdr.y"
                {
			if(numArrayItemsRemaining){
				currentDefaultItem->vector = new float[3];
			}
			else{
				sdrerror("Wrong number of items in array initializer\n");
			}
		}
#line 2121 "sdr.cpp"
    break;

  case 67:
#line 621 "sdr.y"
                {
			currentDefaultItem++;
			numArrayItemsRemaining--;
		}
#line 2130 "sdr.cpp"
    break;

  case 69:
#line 631 "sdr.y"
                {
			currentParameter->type					=	TYPE_NORMAL;
			currentParameter->name					=	strdup((yyvsp[0].string));
			currentParameter->numItems				=	1;
			
			currentDefaultItem = &currentParameter->defaultValue;
		}
#line 2142 "sdr.cpp"
    break;

  case 70:
#line 639 "sdr.y"
                {
		}
#line 2149 "sdr.cpp"
    break;

  case 71:
#line 648 "sdr.y"
                {
			currentParameter->type					=	TYPE_NORMAL;
			currentParameter->name					=	strdup((yyvsp[-4].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-2].real)];
			currentParameter->numItems				=	(int) (yyvsp[-2].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		}
#line 2163 "sdr.cpp"
    break;

  case 73:
#line 664 "sdr.y"
                {
			currentParameter->type					=	TYPE_NORMAL;
			currentParameter->name					=	strdup((yyvsp[-3].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-1].real)];
			currentParameter->numItems				=	(int) (yyvsp[-1].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].vector = new float[3];
				currentDefaultItem[i].vector[0] = 0;
				currentDefaultItem[i].vector[1] = 0;
				currentDefaultItem[i].vector[3] = 0;
			}
		}
#line 2182 "sdr.cpp"
    break;

  case 74:
#line 683 "sdr.y"
                {
			currentParameter->type					=	TYPE_POINT;
			currentParameter->name					=	strdup((yyvsp[0].string));
			currentParameter->numItems				=	1;
			
			currentDefaultItem = &currentParameter->defaultValue;
		}
#line 2194 "sdr.cpp"
    break;

  case 75:
#line 691 "sdr.y"
                {
		}
#line 2201 "sdr.cpp"
    break;

  case 76:
#line 700 "sdr.y"
                {
			currentParameter->type					=	TYPE_POINT;
			currentParameter->name					=	strdup((yyvsp[-4].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-2].real)];
			currentParameter->numItems				=	(int) (yyvsp[-2].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		}
#line 2215 "sdr.cpp"
    break;

  case 78:
#line 716 "sdr.y"
                {
			currentParameter->type					=	TYPE_POINT;
			currentParameter->name					=	strdup((yyvsp[-3].string));
			currentParameter->defaultValue.array	=	new UDefaultVal[(int) (yyvsp[-1].real)];
			currentParameter->numItems				=	(int) (yyvsp[-1].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].vector	= new float[3];
				currentDefaultItem[i].vector[0] = 0;
				currentDefaultItem[i].vector[1] = 0;
				currentDefaultItem[i].vector[2] = 0;
			}
		}
#line 2234 "sdr.cpp"
    break;

  case 79:
#line 754 "sdr.y"
                {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[-19].string));
			currentParameter->defaultValue.matrix		=	new float[16];
			currentParameter->defaultValue.matrix[0]	=	(yyvsp[-16].real);
			currentParameter->defaultValue.matrix[1]	=	(yyvsp[-15].real);
			currentParameter->defaultValue.matrix[2]	=	(yyvsp[-14].real);
			currentParameter->defaultValue.matrix[3]	=	(yyvsp[-13].real);
			currentParameter->defaultValue.matrix[4]	=	(yyvsp[-12].real);
			currentParameter->defaultValue.matrix[5]	=	(yyvsp[-11].real);
			currentParameter->defaultValue.matrix[6]	=	(yyvsp[-10].real);
			currentParameter->defaultValue.matrix[7]	=	(yyvsp[-9].real);
			currentParameter->defaultValue.matrix[8]	=	(yyvsp[-8].real);
			currentParameter->defaultValue.matrix[9]	=	(yyvsp[-7].real);
			currentParameter->defaultValue.matrix[10]	=	(yyvsp[-6].real);
			currentParameter->defaultValue.matrix[11]	=	(yyvsp[-5].real);
			currentParameter->defaultValue.matrix[12]	=	(yyvsp[-4].real);
			currentParameter->defaultValue.matrix[13]	=	(yyvsp[-3].real);
			currentParameter->defaultValue.matrix[14]	=	(yyvsp[-2].real);
			currentParameter->defaultValue.matrix[15]	=	(yyvsp[-1].real);
			currentParameter->numItems					=	1;
		}
#line 2262 "sdr.cpp"
    break;

  case 80:
#line 782 "sdr.y"
                {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[-2].string));
			currentParameter->defaultValue.matrix		=	new float[16];
			currentParameter->defaultValue.matrix[0]	=	(yyvsp[0].real);
			currentParameter->defaultValue.matrix[1]	=	0;
			currentParameter->defaultValue.matrix[2]	=	0;
			currentParameter->defaultValue.matrix[3]	=	0;
			currentParameter->defaultValue.matrix[4]	=	0;
			currentParameter->defaultValue.matrix[5]	=	(yyvsp[0].real);
			currentParameter->defaultValue.matrix[6]	=	0;
			currentParameter->defaultValue.matrix[7]	=	0;
			currentParameter->defaultValue.matrix[8]	=	0;
			currentParameter->defaultValue.matrix[9]	=	0;
			currentParameter->defaultValue.matrix[10]	=	(yyvsp[0].real);
			currentParameter->defaultValue.matrix[11]	=	0;
			currentParameter->defaultValue.matrix[12]	=	0;
			currentParameter->defaultValue.matrix[13]	=	0;
			currentParameter->defaultValue.matrix[14]	=	0;
			currentParameter->defaultValue.matrix[15]	=	(yyvsp[0].real);
			currentParameter->numItems					=	1;
		}
#line 2290 "sdr.cpp"
    break;

  case 81:
#line 808 "sdr.y"
                {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[0].string));
			currentParameter->defaultValue.matrix		=	new float[16];
			currentParameter->defaultValue.matrix[0]	=	1;
			currentParameter->defaultValue.matrix[1]	=	0;
			currentParameter->defaultValue.matrix[2]	=	0;
			currentParameter->defaultValue.matrix[3]	=	0;
			currentParameter->defaultValue.matrix[4]	=	0;
			currentParameter->defaultValue.matrix[5]	=	1;
			currentParameter->defaultValue.matrix[6]	=	0;
			currentParameter->defaultValue.matrix[7]	=	0;
			currentParameter->defaultValue.matrix[8]	=	0;
			currentParameter->defaultValue.matrix[9]	=	0;
			currentParameter->defaultValue.matrix[10]	=	1;
			currentParameter->defaultValue.matrix[11]	=	0;
			currentParameter->defaultValue.matrix[12]	=	0;
			currentParameter->defaultValue.matrix[13]	=	0;
			currentParameter->defaultValue.matrix[14]	=	0;
			currentParameter->defaultValue.matrix[15]	=	1;
			currentParameter->numItems					=	1;
		}
#line 2318 "sdr.cpp"
    break;

  case 82:
#line 838 "sdr.y"
                {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[-4].string));
			currentParameter->defaultValue.array		=	new UDefaultVal[(int) (yyvsp[-2].real)];
			currentParameter->numItems					=	(int) (yyvsp[-2].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			numArrayItemsRemaining = currentParameter->numItems;
		}
#line 2333 "sdr.cpp"
    break;

  case 84:
#line 855 "sdr.y"
                {
			currentParameter->container					=	CONTAINER_UNIFORM;
			currentParameter->type						=	TYPE_MATRIX;
			currentParameter->name						=	strdup((yyvsp[-3].string));
			currentParameter->defaultValue.array		=	new UDefaultVal[(int) (yyvsp[-1].real)];
			currentParameter->numItems					=	(int) (yyvsp[-1].real);
			
			currentDefaultItem = currentParameter->defaultValue.array;
			for(int i=0;i<currentParameter->numItems;i++){
				currentDefaultItem[i].matrix = new float[16];
				currentDefaultItem[i].matrix[0] = 1;
				currentDefaultItem[i].matrix[1] = 0;
				currentDefaultItem[i].matrix[2] = 0;
				currentDefaultItem[i].matrix[3] = 0;
				currentDefaultItem[i].matrix[4] = 0;
				currentDefaultItem[i].matrix[5] = 1;
				currentDefaultItem[i].matrix[6] = 0;
				currentDefaultItem[i].matrix[7] = 0;
				currentDefaultItem[i].matrix[8] = 0;
				currentDefaultItem[i].matrix[9] = 0;
				currentDefaultItem[i].matrix[10] = 1;
				currentDefaultItem[i].matrix[11] = 0;
				currentDefaultItem[i].matrix[12] = 0;
				currentDefaultItem[i].matrix[13] = 0;
				currentDefaultItem[i].matrix[14] = 0;
				currentDefaultItem[i].matrix[15] = 1;
			}
		}
#line 2366 "sdr.cpp"
    break;

  case 85:
#line 889 "sdr.y"
                {
			if(numArrayItemsRemaining){
				sdrerror("Wrong number of items in array initializer\n");
			}
		}
#line 2376 "sdr.cpp"
    break;

  case 86:
#line 916 "sdr.y"
                {
			if(numArrayItemsRemaining){
				currentDefaultItem->matrix = new float[16];
				currentDefaultItem->matrix[0] = (yyvsp[-16].real);
				currentDefaultItem->matrix[1] = (yyvsp[-15].real);
				currentDefaultItem->matrix[2] = (yyvsp[-14].real);
				currentDefaultItem->matrix[3] = (yyvsp[-13].real);
				currentDefaultItem->matrix[4] = (yyvsp[-12].real);
				currentDefaultItem->matrix[5] = (yyvsp[-11].real);
				currentDefaultItem->matrix[6] = (yyvsp[-10].real);
				currentDefaultItem->matrix[7] = (yyvsp[-9].real);
				currentDefaultItem->matrix[8] = (yyvsp[-8].real);
				currentDefaultItem->matrix[9] = (yyvsp[-7].real);
				currentDefaultItem->matrix[10] = (yyvsp[-6].real);
				currentDefaultItem->matrix[11] = (yyvsp[-5].real);
				currentDefaultItem->matrix[12] = (yyvsp[-4].real);
				currentDefaultItem->matrix[13] = (yyvsp[-3].real);
				currentDefaultItem->matrix[14] = (yyvsp[-2].real);
				currentDefaultItem->matrix[15] = (yyvsp[-1].real);
				
				currentDefaultItem++;
				numArrayItemsRemaining--;
			}
			else{
				sdrerror("Wrong number of items in array initializer\n");
			}
		}
#line 2408 "sdr.cpp"
    break;

  case 87:
#line 946 "sdr.y"
                {
			if(numArrayItemsRemaining){
				currentDefaultItem->matrix = new float[16];
				currentDefaultItem->matrix[0] = (yyvsp[0].real);
				currentDefaultItem->matrix[1] = 0;
				currentDefaultItem->matrix[2] = 0;
				currentDefaultItem->matrix[3] = 0;
				currentDefaultItem->matrix[4] = 0;
				currentDefaultItem->matrix[5] = (yyvsp[0].real);
				currentDefaultItem->matrix[6] = 0;
				currentDefaultItem->matrix[7] = 0;
				currentDefaultItem->matrix[8] = 0;
				currentDefaultItem->matrix[9] = 0;
				currentDefaultItem->matrix[10] = (yyvsp[0].real);
				currentDefaultItem->matrix[11] = 0;
				currentDefaultItem->matrix[12] = 0;
				currentDefaultItem->matrix[13] = 0;
				currentDefaultItem->matrix[14] = 0;
				currentDefaultItem->matrix[15] = 1;
				
				currentDefaultItem++;
				numArrayItemsRemaining--;
			}
		}
#line 2437 "sdr.cpp"
    break;

  case 100:
#line 1023 "sdr.y"
                {
		}
#line 2444 "sdr.cpp"
    break;

  case 101:
#line 1031 "sdr.y"
                {
		}
#line 2451 "sdr.cpp"
    break;

  case 102:
#line 1039 "sdr.y"
                {
		}
#line 2458 "sdr.cpp"
    break;

  case 103:
#line 1047 "sdr.y"
                {
		}
#line 2465 "sdr.cpp"
    break;

  case 104:
#line 1054 "sdr.y"
                {
		}
#line 2472 "sdr.cpp"
    break;

  case 105:
#line 1062 "sdr.y"
                {
		}
#line 2479 "sdr.cpp"
    break;

  case 106:
#line 1069 "sdr.y"
                {
		}
#line 2486 "sdr.cpp"
    break;

  case 107:
#line 1077 "sdr.y"
                {
		}
#line 2493 "sdr.cpp"
    break;

  case 108:
#line 1084 "sdr.y"
                {
		}
#line 2500 "sdr.cpp"
    break;

  case 109:
#line 1092 "sdr.y"
                {
		}
#line 2507 "sdr.cpp"
    break;

  case 110:
#line 1099 "sdr.y"
                {
		}
#line 2514 "sdr.cpp"
    break;

  case 111:
#line 1107 "sdr.y"
                {
		}
#line 2521 "sdr.cpp"
    break;

  case 112:
#line 1114 "sdr.y"
                {
		}
#line 2528 "sdr.cpp"
    break;

  case 113:
#line 1122 "sdr.y"
                {
		}
#line 2535 "sdr.cpp"
    break;

  case 114:
#line 1129 "sdr.y"
                {
		}
#line 2542 "sdr.cpp"
    break;

  case 115:
#line 1137 "sdr.y"
                {
		}
#line 2549 "sdr.cpp"
    break;

  case 120:
#line 1159 "sdr.y"
                {
		}
#line 2556 "sdr.cpp"
    break;

  case 121:
#line 1165 "sdr.y"
                {
		}
#line 2563 "sdr.cpp"
    break;

  case 122:
#line 1171 "sdr.y"
                {
		}
#line 2570 "sdr.cpp"
    break;

  case 123:
#line 1175 "sdr.y"
                {
		}
#line 2577 "sdr.cpp"
    break;

  case 124:
#line 1179 "sdr.y"
                {
		}
#line 2584 "sdr.cpp"
    break;

  case 125:
#line 1186 "sdr.y"
                {
		}
#line 2591 "sdr.cpp"
    break;

  case 126:
#line 1189 "sdr.y"
                {
		}
#line 2598 "sdr.cpp"
    break;

  case 127:
#line 1196 "sdr.y"
                {
		}
#line 2605 "sdr.cpp"
    break;

  case 128:
#line 1203 "sdr.y"
                {
		}
#line 2612 "sdr.cpp"
    break;

  case 129:
#line 1209 "sdr.y"
                {
		}
#line 2619 "sdr.cpp"
    break;

  case 130:
#line 1213 "sdr.y"
                {
		}
#line 2626 "sdr.cpp"
    break;

  case 131:
#line 1217 "sdr.y"
                {
		}
#line 2633 "sdr.cpp"
    break;

  case 132:
#line 1221 "sdr.y"
                {
		}
#line 2640 "sdr.cpp"
    break;

  case 133:
#line 1231 "sdr.y"
                {
		}
#line 2647 "sdr.cpp"
    break;

  case 134:
#line 1267 "sdr.y"
                {
		}
#line 2654 "sdr.cpp"
    break;

  case 135:
#line 1273 "sdr.y"
                {
		}
#line 2661 "sdr.cpp"
    break;


#line 2665 "sdr.cpp"

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
#line 1277 "sdr.y"

#include "lex.sdr.cpp"

int	slLineno	=	0;

///////////////////////////////////////////////////////////////////////
// Function				:	sdrerror
// Description			:	Parser error function
// Return Value			:
// Comments				:
void			sdrerror(const char *s) {
	fprintf(stdout,"%s\n",s);
}


///////////////////////////////////////////////////////////////////////
// Function				:	sdrGet
// Description			:	Parse a shader
// Return Value			:
// Comments				:
TSdrShader		*sdrGet(const char *in,const char *searchpath) {
	TSdrShader		*cShader;
	char			tmp[512];
	const	char	*currentPath;
	char			*dest;

	sdrin	=	fopen(in,"r");

	if (sdrin == NULL) {
		if (searchpath != NULL) {
			for (dest=tmp,currentPath=searchpath;;) {
				if ((*currentPath == '\0') || (*currentPath == ':')) {		// End of the current path

					if ((dest - tmp) > 0) {		// Do we have anything to record ?
						dest--;

						if ((*dest == '/') || (*dest == '\\')) {	// The last character has to be a slash
							dest++;
						} else {
							dest++;
							*dest++	=	'/';
						}

						sprintf(dest,in);
						if (strstr(dest,".sdr") == NULL) {
							strcat(dest,".sdr");
						}

						osFixSlashes(tmp);

						if (strncmp(tmp,"\\\\",2) == 0) {
							tmp[1]	=	tmp[2];
							tmp[2]	=	':';
							tmp[3]	=	'\\';

							sdrin	=	fopen(tmp+1,"r");
						} else {
							sdrin	=	fopen(tmp,"r");
						}

						if (sdrin != NULL)	break;
					}

					dest			=	tmp;

					if (*currentPath == '\0')	break;

					currentPath++;
				} else if (*currentPath == '%') {
					const	char	*endOfCurrentPath	=	strchr(currentPath+1,'%');
					char			environmentVariable[OS_MAX_PATH_LENGTH];

					if (endOfCurrentPath!=NULL) {
						const	int		environmentLength	=	(int) (endOfCurrentPath - currentPath) - 1;
						const	char	*value;

						strncpy(environmentVariable,currentPath+1,environmentLength);
						environmentVariable[environmentLength]	=	'\0';

						value		=	osEnvironment(environmentVariable);
						if (value != NULL) {
							strcpy(dest,value);
							dest	+=	strlen(value);
						}

						currentPath	=	endOfCurrentPath+1;
					} else {
						currentPath++;
					}
				} else if ((*currentPath == '@') || (*currentPath == '&')) {
					currentPath++;
				} else {
					*dest++	=	*currentPath++;
				}
			}
		}
	}

	if (sdrin == NULL)	return NULL;

	parameters	=	NULL;

	sdrparse();

	fclose(sdrin);

	cShader	=	new TSdrShader;

	cShader->name		=	strdup(in);
	cShader->type		=	shaderType;
	cShader->parameters	=	parameters;

	return cShader;
}

///////////////////////////////////////////////////////////////////////
// Function				:	sdrDelete
// Description			:	Delete a shader
// Return Value			:
// Comments				:
void			sdrDelete(TSdrShader *cShader) {
	TSdrParameter	*cParameter;

	while((cParameter = cShader->parameters) != NULL) {
		cShader->parameters	=	cParameter->next;

		free(cParameter->name);
		if (cParameter->space != NULL) {
			free(cParameter->space);
		}

		if (cParameter->numItems == 1) {
			switch(cParameter->type) {
			case TYPE_FLOAT:
				break;
			case TYPE_VECTOR:
			case TYPE_NORMAL:
			case TYPE_POINT:
			case TYPE_COLOR:
				if (cParameter->defaultValue.vector != NULL) {
					delete [] cParameter->defaultValue.vector;
				}
				break;
			case TYPE_MATRIX:
				if (cParameter->defaultValue.matrix != NULL) {
					delete [] cParameter->defaultValue.matrix;
				}
				break;
			case TYPE_STRING:
				if (cParameter->defaultValue.string != NULL) {
					free(cParameter->defaultValue.string);
				}
				break;
			}
		}

		delete cParameter;
	}

	free(cShader->name);
	delete cShader;
}

