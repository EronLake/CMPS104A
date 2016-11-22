/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

// Dummy parser for scanner project.

#include <cassert>

#include "lyutils.h"
#include "astree.h"


/* Line 371 of yacc.c  */
#line 78 "yyparse.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yyparse.h".  */
#ifndef YY_YY_YYPARSE_H_INCLUDED
# define YY_YY_YYPARSE_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_VOID = 258,
     TOK_CHAR = 259,
     TOK_INT = 260,
     TOK_STRING = 261,
     TOK_IF = 262,
     TOK_ELSE = 263,
     TOK_WHILE = 264,
     TOK_RETURN = 265,
     TOK_STRUCT = 266,
     TOK_NULL = 267,
     TOK_NEW = 268,
     TOK_ARRAY = 269,
     TOK_EQ = 270,
     TOK_NE = 271,
     TOK_LT = 272,
     TOK_LE = 273,
     TOK_GT = 274,
     TOK_GE = 275,
     TOK_IDENT = 276,
     TOK_INTCON = 277,
     TOK_CHARCON = 278,
     TOK_STRINGCON = 279,
     TOK_BLOCK = 280,
     TOK_CALL = 281,
     TOK_IFELSE = 282,
     TOK_INITDECL = 283,
     TOK_POS = 284,
     TOK_NEG = 285,
     TOK_NEWARRAY = 286,
     TOK_TYPEID = 287,
     TOK_FIELD = 288,
     TOK_ORD = 289,
     TOK_CHR = 290,
     TOK_ROOT = 291,
     TOK_DECLID = 292,
     TOK_BINOP = 293,
     TOK_UNOP = 294,
     TOK_VARDECL = 295,
     TOK_PARAMLIST = 296,
     TOK_FUNCTION = 297,
     TOK_PROTOTYPE = 298,
     TOK_INDEX = 299,
     TOK_NEWSTRING = 300,
     TOK_RETURNVOID = 301,
     TOK_THEN = 302
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_YYPARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 191 "yyparse.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   616

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  137

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,    55,     2,     2,
      62,    63,    53,    51,    64,    52,    58,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    60,
      49,    48,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    65,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,    59,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    18,    22,    23,
      29,    34,    38,    41,    45,    48,    50,    52,    54,    56,
      58,    64,    70,    75,    80,    84,    86,    90,    93,    97,
     100,   103,   105,   107,   109,   111,   113,   115,   118,   120,
     125,   131,   139,   145,   149,   152,   156,   159,   161,   163,
     167,   169,   171,   173,   175,   177,   179,   181,   183,   185,
     187,   189,   191,   193,   195,   197,   199,   201,   203,   205,
     210,   216,   222,   227,   231,   235,   237,   239,   244,   248,
     250,   252,   254
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    68,    -1,    68,    69,    -1,    68,    73,
      -1,    68,    78,    -1,    68,     1,    59,    -1,    68,     1,
      60,    -1,    -1,    11,    21,    61,    70,    59,    -1,    11,
      21,    61,    59,    -1,    70,    71,    60,    -1,    71,    60,
      -1,    72,    14,    21,    -1,    72,    21,    -1,     3,    -1,
       5,    -1,     4,    -1,     6,    -1,    21,    -1,    75,    62,
      74,    63,    76,    -1,    75,    62,    74,    63,    60,    -1,
      75,    62,    63,    76,    -1,    75,    62,    63,    60,    -1,
      74,    64,    75,    -1,    75,    -1,    72,    14,    21,    -1,
      72,    21,    -1,    61,    77,    59,    -1,    61,    59,    -1,
      77,    78,    -1,    78,    -1,    76,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    60,    -1,    60,    -1,
      75,    48,    83,    60,    -1,     9,    62,    83,    63,    78,
      -1,     7,    62,    83,    63,    78,     8,    78,    -1,     7,
      62,    83,    63,    78,    -1,    10,    83,    60,    -1,    10,
      60,    -1,    83,    84,    83,    -1,    85,    83,    -1,    86,
      -1,    87,    -1,    62,    83,    63,    -1,    89,    -1,    90,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,    20,    -1,    51,    -1,    52,    -1,    53,    -1,    54,
      -1,    55,    -1,    48,    -1,    51,    -1,    52,    -1,    56,
      -1,    34,    -1,    35,    -1,    13,    21,    62,    63,    -1,
      13,     6,    62,    83,    63,    -1,    13,    72,    57,    83,
      65,    -1,    21,    62,    88,    63,    -1,    21,    62,    63,
      -1,    88,    64,    83,    -1,    83,    -1,    21,    -1,    83,
      57,    83,    65,    -1,    83,    58,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    47,    48,    49,    50,    51,    52,    55,
      62,    70,    75,    78,    83,    90,    91,    92,    93,    94,
     100,   108,   116,   122,   131,   136,   139,   144,   151,   156,
     163,   164,   167,   168,   169,   170,   171,   172,   173,   176,
     184,   191,   198,   205,   209,   216,   217,   218,   219,   220,
     224,   225,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   242,   243,   244,   245,   246,   249,
     255,   261,   270,   275,   282,   286,   289,   290,   295,   302,
     303,   304,   305
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_VOID", "TOK_CHAR", "TOK_INT",
  "TOK_STRING", "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_RETURN",
  "TOK_STRUCT", "TOK_NULL", "TOK_NEW", "TOK_ARRAY", "TOK_EQ", "TOK_NE",
  "TOK_LT", "TOK_LE", "TOK_GT", "TOK_GE", "TOK_IDENT", "TOK_INTCON",
  "TOK_CHARCON", "TOK_STRINGCON", "TOK_BLOCK", "TOK_CALL", "TOK_IFELSE",
  "TOK_INITDECL", "TOK_POS", "TOK_NEG", "TOK_NEWARRAY", "TOK_TYPEID",
  "TOK_FIELD", "TOK_ORD", "TOK_CHR", "TOK_ROOT", "TOK_DECLID", "TOK_BINOP",
  "TOK_UNOP", "TOK_VARDECL", "TOK_PARAMLIST", "TOK_FUNCTION",
  "TOK_PROTOTYPE", "TOK_INDEX", "TOK_NEWSTRING", "TOK_RETURNVOID",
  "TOK_THEN", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "'['", "'.'", "'}'", "';'", "'{'", "'('", "')'", "','", "']'",
  "$accept", "start", "program", "structdef", "fdeclist", "fielddecl",
  "basetype", "function", "idecllist", "identdecl", "block", "smtlist",
  "statement", "vardecl", "while", "ifelse", "return", "expr", "binop",
  "unop", "allocator", "call", "calllist", "variable", "constant", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    61,    60,
      62,    43,    45,    42,    47,    37,    33,    91,    46,   125,
      59,   123,    40,    41,    44,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    72,    72,    72,
      73,    73,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    78,    78,    78,    78,    78,    79,
      80,    81,    81,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    85,    86,
      86,    86,    87,    87,    88,    88,    89,    89,    89,    90,
      90,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     5,
       4,     3,     2,     3,     2,     1,     1,     1,     1,     1,
       5,     5,     4,     4,     3,     1,     3,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     2,     1,     4,
       5,     7,     5,     3,     2,     3,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     5,     4,     3,     3,     1,     1,     4,     3,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    15,    17,    16,    18,     0,
       0,     0,     0,    82,     0,    76,    79,    80,    81,    67,
      68,    64,    65,    66,    38,     0,     0,     3,     0,     4,
       0,    32,     5,    33,    34,    35,    36,     0,     0,    47,
      48,    50,    51,     6,     7,     0,     0,    76,    44,     0,
       0,    18,    19,     0,     0,    29,     0,     0,    31,     0,
       0,    27,     0,     0,    52,    53,    54,    55,    56,    57,
      63,    58,    59,    60,    61,    62,     0,     0,    37,     0,
      46,     0,     0,    43,     0,     0,     0,     0,    73,    75,
       0,    28,    30,    49,    26,     0,    19,     0,     0,    25,
       0,    78,    45,     0,     0,    10,     0,     0,     0,     0,
      69,     0,    72,     0,    39,    23,    22,     0,     0,    77,
      42,    40,     9,     0,    12,     0,    14,    70,    71,    74,
      21,    20,    24,     0,    11,    13,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    27,   106,   107,    28,    29,    98,    56,
      31,    57,    32,    33,    34,    35,    36,    37,    79,    38,
      39,    40,    90,    41,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -90
static const yytype_int16 yypact[] =
{
     -90,    21,   114,   -90,   -17,   -90,   -90,   -90,   -90,   -38,
     -30,   389,    14,   -90,    35,     4,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   174,   138,   -90,     5,   -90,
     -28,   -90,   -90,   -90,   -90,   -90,   -90,   490,   138,   -90,
     -90,   -90,   -90,   -90,   -90,   138,   138,   -18,   -90,   536,
     -15,   -13,    12,    -5,    77,   -90,    20,   234,   -90,   402,
      50,   -90,   138,     1,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   138,    51,   -90,   138,
     558,   415,   464,   -90,     6,   138,    18,   138,   -90,   558,
     -16,   -90,   -90,   -90,   -90,   547,   -90,   -10,    -1,   -90,
     315,   -90,   558,   294,   294,   -90,    10,    17,     9,   477,
     -90,   342,   -90,   138,   -90,   -90,   -90,    -6,    54,   -90,
      74,   -90,   -90,    23,   -90,    63,   -90,   -90,   -90,   558,
     -90,   -90,   -90,   294,   -90,   -90,   -90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -90,   -90,   -90,   -90,   -90,   -21,   -11,   -90,   -90,    -2,
     -89,   -90,   -24,   -90,   -90,   -90,   -90,    -9,   -90,   -90,
     -90,   -90,   -90,   -90,   -90
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -20
static const yytype_int16 yytable[] =
{
      30,    58,    49,    53,     5,     6,     7,     8,   116,     5,
       6,     7,     8,     5,     6,     7,     8,    59,   -19,    60,
      62,     3,    96,   125,    45,   -19,    61,    96,   131,    80,
     126,    96,    46,    92,    63,    50,    81,    82,     5,     6,
       7,    51,    43,    44,    54,    89,    84,   112,   113,    85,
     115,    25,    87,    95,   130,    25,    52,     5,     6,     7,
       8,    99,   117,   118,    97,   105,    54,   100,    62,   122,
     102,    94,   101,   108,    86,    96,   109,   124,   111,   120,
     121,   110,   133,   134,   135,   123,     0,     0,     0,    13,
      14,     0,     0,     0,     0,   108,     0,     0,    47,    16,
      17,    18,     0,     0,   129,     0,     0,     0,     0,   136,
       0,    19,    20,     0,    -2,     4,   132,     5,     6,     7,
       8,     9,     0,    10,    11,    12,    13,    14,    21,    22,
       0,     0,     0,    23,     0,    15,    16,    17,    18,    26,
      88,     0,     0,     0,     0,     0,     0,     0,    19,    20,
      13,    14,     0,     0,     0,     0,     0,     0,     0,    47,
      16,    17,    18,     0,     0,    21,    22,     0,     0,     0,
      23,     0,    19,    20,    24,    25,    26,     5,     6,     7,
       8,     9,     0,    10,    11,     0,    13,    14,     0,    21,
      22,     0,     0,     0,    23,    15,    16,    17,    18,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
      23,     0,     0,    55,    24,    25,    26,     5,     6,     7,
       8,     9,     0,    10,    11,     0,    13,    14,     0,     0,
       0,     0,     0,     0,     0,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
      23,     0,     0,    91,    24,    25,    26,     5,     6,     7,
       8,     9,     0,    10,    11,     0,    13,    14,     0,     0,
       0,     0,     0,     0,     0,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    20,
      64,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
      23,     0,     0,     0,    24,    25,    26,    64,    65,    66,
      67,    68,    69,    70,     0,     0,    71,    72,    73,    74,
      75,     0,    76,    77,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,     0,     0,    71,    72,    73,    74,    75,     0,    76,
      77,    13,    14,     0,     0,     0,     0,   128,     0,     0,
      47,    16,    17,    18,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    19,    20,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,     0,     0,     0,     0,
      21,    22,     0,     0,     0,    23,     0,     0,     0,    48,
      70,    26,     0,    71,    72,    73,    74,    75,     0,    76,
      77,     0,     0,    70,     0,    93,    71,    72,    73,    74,
      75,     0,    76,    77,     0,     0,     0,     0,   103,    64,
      65,    66,    67,    68,    69,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,     0,     0,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,     0,    70,     0,     0,    71,    72,    73,    74,    75,
       0,    76,    77,     0,     0,    70,     0,   104,    71,    72,
      73,    74,    75,     0,    76,    77,     0,     0,    70,     0,
     127,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      78,    64,    65,    66,    67,    68,    69,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,     0,     0,
       0,     0,     0,    64,    65,    66,    67,    68,    69,     0,
       0,     0,     0,     0,    70,     0,     0,    71,    72,    73,
      74,    75,     0,    76,    77,    70,    83,     0,    71,    72,
      73,    74,    75,     0,    76,    77,    70,   114,     0,    71,
      72,    73,    74,    75,     0,    76,    77
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-90)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,    25,    11,    14,     3,     4,     5,     6,    97,     3,
       4,     5,     6,     3,     4,     5,     6,    26,    14,    14,
      48,     0,    21,    14,    62,    21,    21,    21,   117,    38,
      21,    21,    62,    57,    62,    21,    45,    46,     3,     4,
       5,     6,    59,    60,    62,    54,    61,    63,    64,    62,
      60,    61,    57,    62,    60,    61,    21,     3,     4,     5,
       6,    63,    63,    64,    63,    59,    62,    76,    48,    59,
      79,    21,    21,    84,    62,    21,    85,    60,    87,   103,
     104,    63,     8,    60,    21,   106,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,   106,    -1,    -1,    21,    22,
      23,    24,    -1,    -1,   113,    -1,    -1,    -1,    -1,   133,
      -1,    34,    35,    -1,     0,     1,   118,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    51,    52,
      -1,    -1,    -1,    56,    -1,    21,    22,    23,    24,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    -1,    51,    52,    -1,    -1,    -1,
      56,    -1,    34,    35,    60,    61,    62,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    12,    13,    -1,    51,
      52,    -1,    -1,    -1,    56,    21,    22,    23,    24,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      56,    -1,    -1,    59,    60,    61,    62,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      56,    -1,    -1,    59,    60,    61,    62,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    60,    61,    62,    15,    16,    17,
      18,    19,    20,    48,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    52,    53,    54,    55,    -1,    57,
      58,    12,    13,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      21,    22,    23,    24,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    20,    34,    35,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,
      48,    62,    -1,    51,    52,    53,    54,    55,    -1,    57,
      58,    -1,    -1,    48,    -1,    63,    51,    52,    53,    54,
      55,    -1,    57,    58,    -1,    -1,    -1,    -1,    63,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    -1,    48,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    57,    58,    -1,    -1,    48,    -1,    63,    51,    52,
      53,    54,    55,    -1,    57,    58,    -1,    -1,    48,    -1,
      63,    51,    52,    53,    54,    55,    -1,    57,    58,    -1,
      60,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    57,    58,    48,    60,    -1,    51,    52,
      53,    54,    55,    -1,    57,    58,    48,    60,    -1,    51,
      52,    53,    54,    55,    -1,    57,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,    68,     0,     1,     3,     4,     5,     6,     7,
       9,    10,    11,    12,    13,    21,    22,    23,    24,    34,
      35,    51,    52,    56,    60,    61,    62,    69,    72,    73,
      75,    76,    78,    79,    80,    81,    82,    83,    85,    86,
      87,    89,    90,    59,    60,    62,    62,    21,    60,    83,
      21,     6,    21,    72,    62,    59,    75,    77,    78,    83,
      14,    21,    48,    62,    15,    16,    17,    18,    19,    20,
      48,    51,    52,    53,    54,    55,    57,    58,    60,    84,
      83,    83,    83,    60,    61,    62,    62,    57,    63,    83,
      88,    59,    78,    63,    21,    83,    21,    63,    74,    75,
      83,    21,    83,    63,    63,    59,    70,    71,    72,    83,
      63,    83,    63,    64,    60,    60,    76,    63,    64,    65,
      78,    78,    59,    71,    60,    14,    21,    63,    65,    83,
      60,    76,    75,     8,    60,    21,    78
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
      yychar = YYLEX;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 44 "parser.y"
    { parser::root = (yyvsp[(1) - (1)]); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 47 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 48 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 49 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 50 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 51 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 52 "parser.y"
    { (yyval) = new_parseroot(); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 56 "parser.y"
    {
                                  destroy((yyvsp[(5) - (5)]));
                                  (yyvsp[(3) - (5)])->adopt((yyvsp[(4) - (5)]));
                                  (yyvsp[(2) - (5)])->convert_sym(TOK_TYPEID);
                                  (yyval) = (yyvsp[(1) - (5)])->adopt((yyvsp[(2) - (5)]),(yyvsp[(3) - (5)]));
                                }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 63 "parser.y"
    {
                                  destroy((yyvsp[(4) - (4)]));
                                  (yyvsp[(2) - (4)])->convert_sym(TOK_TYPEID);
                                  (yyval) = (yyvsp[(1) - (4)])->adopt((yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]));
                                }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 71 "parser.y"
    {
                                  destroy((yyvsp[(3) - (3)]));
                                  (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(2) - (3)]));
                                }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 75 "parser.y"
    {destroy((yyvsp[(2) - (2)])); (yyval) = (yyvsp[(1) - (2)]);}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 79 "parser.y"
    {
                                  (yyvsp[(3) - (3)])->convert_sym(TOK_FIELD);
                                  (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
                                }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 84 "parser.y"
    {
                                  (yyvsp[(2) - (2)])->convert_sym(TOK_FIELD);
                                  (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));
                                }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 90 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 91 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 92 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 93 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 94 "parser.y"
    {
                                  (yyvsp[(1) - (1)])->convert_sym(TOK_TYPEID);
                                  (yyval) = (yyvsp[(1) - (1)]);
                                }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 101 "parser.y"
    {
                                  destroy((yyvsp[(4) - (5)]));
                                  (yyvsp[(2) - (5)])->convert_sym(TOK_PARAMLIST);
                                  (yyvsp[(2) - (5)])->adopt((yyvsp[(3) - (5)]));
                                  (yyval) = new_node((yyvsp[(1) - (5)]),TOK_FUNCTION);
                                  (yyval) = (yyval)->adopt((yyvsp[(1) - (5)]),(yyvsp[(2) - (5)]),(yyvsp[(5) - (5)]));
                                }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 109 "parser.y"
    {
                                  destroy((yyvsp[(4) - (5)]),(yyvsp[(5) - (5)]));
                                  (yyvsp[(2) - (5)])->convert_sym(TOK_PARAMLIST);
                                  (yyvsp[(2) - (5)])->adopt((yyvsp[(3) - (5)]));
                                  (yyval) = new_node((yyvsp[(1) - (5)]),TOK_PROTOTYPE);
                                  (yyval) = (yyval)->adopt((yyvsp[(1) - (5)]),(yyvsp[(2) - (5)]));
                                }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 117 "parser.y"
    { destroy((yyvsp[(3) - (4)]));
                                  (yyvsp[(2) - (4)])->convert_sym(TOK_PARAMLIST);
                                  (yyval) = new_node((yyvsp[(1) - (4)]),TOK_FUNCTION);
                                  (yyval) = (yyval)->adopt((yyvsp[(1) - (4)]),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));
                                }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 123 "parser.y"
    {
                                  destroy((yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));
                                  (yyvsp[(2) - (4)])->convert_sym(TOK_PARAMLIST);
                                  (yyval) = new_node((yyvsp[(1) - (4)]),TOK_PROTOTYPE);
                                  (yyval) = (yyval)->adopt((yyvsp[(1) - (4)]),(yyvsp[(2) - (4)]));
                                }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 132 "parser.y"
    {
                                  destroy((yyvsp[(2) - (3)]));
                                  (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(3) - (3)]));
                                }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 136 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 140 "parser.y"
    {
                                  (yyvsp[(3) - (3)])->convert_sym(TOK_DECLID);
                                  (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
                                }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 145 "parser.y"
    {
                                  (yyvsp[(2) - (2)])->convert_sym(TOK_DECLID);
                                  (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)]));
                                }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 151 "parser.y"
    {
                                  destroy((yyvsp[(3) - (3)]));
                                  (yyvsp[(1) - (3)])->convert_sym(TOK_BLOCK);
                                  (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(2) - (3)]));
                                }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 156 "parser.y"
    {
                                  destroy((yyvsp[(2) - (2)]));
                                  (yyvsp[(1) - (2)])->convert_sym(TOK_BLOCK);
                                  (yyval) = (yyvsp[(1) - (2)]);
                                }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 163 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 164 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 167 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 168 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 169 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 170 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 171 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 172 "parser.y"
    { destroy((yyvsp[(2) - (2)])); (yyval) = (yyvsp[(1) - (2)]);  }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 173 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 177 "parser.y"
    {
                                  destroy((yyvsp[(4) - (4)]));
                                  (yyvsp[(2) - (4)])->convert_sym(TOK_VARDECL);
                                  (yyval) = (yyvsp[(2) - (4)])->adopt((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));
                                }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 185 "parser.y"
    {
                                  destroy((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));
                                  (yyval) = (yyvsp[(1) - (5)])->adopt((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));
                                }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 193 "parser.y"
    {
                                  destroy((yyvsp[(2) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(6) - (7)]));
                                  (yyvsp[(1) - (7)])->convert_sym(TOK_IFELSE);
                                  (yyval) = (yyvsp[(1) - (7)])->adopt((yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),(yyvsp[(7) - (7)]));
                                }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 199 "parser.y"
    {
                                  destroy((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));
                                  (yyval) = (yyvsp[(1) - (5)])->adopt((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));
                                }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 205 "parser.y"
    {
                                  destroy((yyvsp[(3) - (3)]));
                                  (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(2) - (3)]));
                                }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 209 "parser.y"
    {
                                  destroy((yyvsp[(2) - (2)]));
                                  (yyvsp[(1) - (2)])->convert_sym(TOK_RETURNVOID);
                                  (yyval) = (yyvsp[(1) - (2)]);
                                }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 216 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 217 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 218 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 219 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 220 "parser.y"
    {
                                  destroy((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
                                  (yyval) = (yyvsp[(2) - (3)]);
                                }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 224 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 225 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 228 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 229 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 230 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 231 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 232 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 233 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 234 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 235 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 236 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 237 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 238 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 239 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 242 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)])->convert_sym(TOK_POS); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 243 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)])->convert_sym(TOK_NEG); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 244 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 245 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 246 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 250 "parser.y"
    {
                                  destroy((yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));
                                  (yyvsp[(2) - (4)])->convert_sym(TOK_TYPEID);
                                  (yyval) = (yyvsp[(1) - (4)])->adopt((yyvsp[(2) - (4)]));
                                }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 256 "parser.y"
    {
                                  destroy((yyvsp[(2) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));
                                  (yyvsp[(1) - (5)])->convert_sym(TOK_NEWSTRING);
                                  (yyval) = (yyvsp[(1) - (5)])->adopt((yyvsp[(4) - (5)]));
                                }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 262 "parser.y"
    {
                                  destroy((yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));
                                  (yyvsp[(1) - (5)])->convert_sym(TOK_NEWARRAY);
                                  (yyvsp[(2) - (5)])->convert_sym(TOK_TYPEID);
                                  (yyval) = (yyvsp[(1) - (5)])->adopt((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));
                                }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 271 "parser.y"
    { destroy((yyvsp[(4) - (4)]));
                                  (yyvsp[(2) - (4)])->convert_sym(TOK_CALL);
                                  (yyval) = (yyvsp[(2) - (4)])->adopt((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));
                                }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 275 "parser.y"
    {
                                  destroy((yyvsp[(3) - (3)]));
                                  (yyvsp[(2) - (3)])->convert_sym(TOK_CALL);
                                  (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]));
                                }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 282 "parser.y"
    {
                                  destroy((yyvsp[(2) - (3)]));
                                  (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(3) - (3)]));
                                }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 286 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 289 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 290 "parser.y"
    {
                                  destroy((yyvsp[(4) - (4)]));
                                  (yyvsp[(2) - (4)])->convert_sym(TOK_INDEX);
                                  (yyval) = (yyvsp[(2) - (4)])->adopt((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));
                                }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 296 "parser.y"
    {
                                  (yyvsp[(3) - (3)])->convert_sym(TOK_FIELD);
                                  (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
                                }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 302 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 303 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 304 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 305 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;


/* Line 1792 of yacc.c  */
#line 2211 "yyparse.cpp"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 308 "parser.y"



const char *parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}


bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}

/*
static void* yycalloc (size_t size) {
   void* result = calloc (1, size);
   assert (result != nullptr);
   return result;
}
*/
