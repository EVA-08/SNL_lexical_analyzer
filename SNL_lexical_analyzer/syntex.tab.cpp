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
#line 1 "syntex.y"

 #define YYSTYPE Node*
 #include<iostream>
 #include"ast.hpp"
 #include"syntex.tab.h"
 
 Node* root;
 extern int yylex();
 void yyerror(char const*);

/* Line 371 of yacc.c  */
#line 79 "syntex.tab.cpp"

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntex.tab.h".  */
#ifndef YY_YY_SYNTEX_TAB_H_INCLUDED
# define YY_YY_SYNTEX_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     ENDFILE = 258,
     ERROR1 = 259,
     PROGRAM = 260,
     PROCEDURE = 261,
     TYPE = 262,
     VAR = 263,
     IF = 264,
     THEN = 265,
     ELSE = 266,
     FI = 267,
     WHILE = 268,
     DO = 269,
     ENDWH = 270,
     BEGIN1 = 271,
     END1 = 272,
     READ = 273,
     WRITE = 274,
     ARRAY = 275,
     OF = 276,
     RECORD = 277,
     RETURN1 = 278,
     INTEGER = 279,
     CHAR1 = 280,
     ID = 281,
     INTC = 282,
     CHARC = 283,
     ASSIGN = 284,
     EQ = 285,
     LT = 286,
     PLUS = 287,
     MINUS = 288,
     TIMES = 289,
     OVER = 290,
     LPAREN = 291,
     RPAREN = 292,
     DOT = 293,
     COLON = 294,
     SEMI = 295,
     COMMA = 296,
     LMIDPAREN = 297,
     RMIDPAREN = 298,
     UNDERANGE = 299
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

#endif /* !YY_YY_SYNTEX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 189 "syntex.tab.cpp"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  179

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    13,    17,    18,    20,    23,
      29,    30,    32,    34,    36,    38,    40,    42,    44,    46,
      48,    57,    59,    61,    65,    70,    75,    76,    78,    81,
      82,    85,    86,    88,    91,    96,    97,    99,   102,   103,
     106,   107,   109,   119,   120,   122,   124,   125,   127,   130,
     131,   134,   137,   141,   144,   145,   148,   150,   152,   156,
     159,   160,   163,   165,   167,   169,   171,   173,   176,   178,
     180,   184,   192,   198,   203,   205,   210,   212,   216,   217,
     220,   221,   224,   227,   230,   233,   234,   237,   240,   241,
     244,   248,   250,   252,   255,   256,   260,   263,   266,   267,
     271,   273,   275,   277,   279,   281
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    49,    84,    38,    -1,     5,    48,
      -1,    26,    -1,    50,    66,    72,    -1,    -1,    51,    -1,
       7,    52,    -1,    54,    30,    55,    40,    53,    -1,    -1,
      52,    -1,    26,    -1,    56,    -1,    57,    -1,    26,    -1,
      24,    -1,    25,    -1,    58,    -1,    61,    -1,    20,    42,
      59,    44,    60,    43,    21,    56,    -1,    27,    -1,    27,
      -1,    22,    62,    17,    -1,    56,    64,    40,    63,    -1,
      58,    64,    40,    63,    -1,    -1,    62,    -1,    26,    65,
      -1,    -1,    41,    64,    -1,    -1,    67,    -1,     8,    68,
      -1,    55,    70,    40,    69,    -1,    -1,    68,    -1,    26,
      71,    -1,    -1,    41,    70,    -1,    -1,    73,    -1,     6,
      75,    36,    76,    37,    40,    82,    83,    74,    -1,    -1,
      73,    -1,    26,    -1,    -1,    77,    -1,    79,    78,    -1,
      -1,    40,    77,    -1,    55,    80,    -1,     8,    55,    80,
      -1,    26,    81,    -1,    -1,    41,    80,    -1,    49,    -1,
      84,    -1,    16,    85,    17,    -1,    87,    86,    -1,    -1,
      40,    85,    -1,    90,    -1,    91,    -1,    92,    -1,    94,
      -1,    95,    -1,    26,    88,    -1,    89,    -1,    96,    -1,
     107,    29,   101,    -1,     9,    99,    10,    85,    11,    85,
      12,    -1,    13,    99,    14,    85,    15,    -1,    18,    36,
      93,    37,    -1,    26,    -1,    19,    36,   101,    37,    -1,
      23,    -1,    36,    97,    37,    -1,    -1,   101,    98,    -1,
      -1,    41,    97,    -1,   101,   100,    -1,   110,   101,    -1,
     103,   102,    -1,    -1,   111,   101,    -1,   105,   104,    -1,
      -1,   112,   103,    -1,    36,   101,    37,    -1,    27,    -1,
     106,    -1,    26,   107,    -1,    -1,    42,   101,    43,    -1,
      38,   108,    -1,    26,   109,    -1,    -1,    42,   101,    43,
      -1,    31,    -1,    30,    -1,    32,    -1,    33,    -1,    34,
      -1,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    61,    62,    64,    67,    68,    69,    70,
      71,    72,    73,    76,    77,    78,    80,    81,    83,    84,
      86,    88,    89,    91,    92,    93,    95,    96,    97,    98,
      99,   102,   103,   104,   105,   107,   108,   109,   110,   111,
     114,   115,   116,   122,   123,   124,   127,   128,   129,   131,
     132,   133,   134,   135,   136,   137,   139,   141,   143,   145,
     146,   147,   149,   150,   151,   152,   153,   154,   156,   157,
     159,   161,   164,   166,   167,   169,   171,   173,   174,   175,
     176,   177,   179,   180,   182,   183,   184,   187,   188,   189,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     203,   204,   206,   207,   209,   210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDFILE", "ERROR1", "PROGRAM",
  "PROCEDURE", "TYPE", "VAR", "IF", "THEN", "ELSE", "FI", "WHILE", "DO",
  "ENDWH", "BEGIN1", "END1", "READ", "WRITE", "ARRAY", "OF", "RECORD",
  "RETURN1", "INTEGER", "CHAR1", "ID", "INTC", "CHARC", "ASSIGN", "EQ",
  "LT", "PLUS", "MINUS", "TIMES", "OVER", "LPAREN", "RPAREN", "DOT",
  "COLON", "SEMI", "COMMA", "LMIDPAREN", "RMIDPAREN", "UNDERANGE",
  "$accept", "Program", "ProgramHead", "ProgramName", "DeclarePart",
  "TypeDecpart", "TypeDec", "TypeDecList", "TypeDecMore", "TypeId",
  "TypeDef", "BaseType", "StructureType", "ArrayType", "Low", "Top",
  "RecType", "FieldDecList", "FieldDecMore", "IdList", "IdMore",
  "VarDecpart", "VarDec", "VarDecList", "VarDecMore", "VarIdList",
  "VarIdMore", "ProcDecpart", "ProcDec", "ProcDecMore", "ProcName",
  "ParamList", "ParamDecList", "ParamMore", "Param", "FormList", "FidMore",
  "ProcDecPart", "ProcBody", "ProgramBody", "StmList", "StmMore", "Stm",
  "AssCall", "AssignmentRest", "ConditionalStm", "LoopStm", "InputStm",
  "Invar", "OutputStm", "ReturnStm", "CallStmRest", "ActParamList",
  "ActParamMore", "RelExp", "OtherRelE", "Exp", "OtherTerm", "Term",
  "OtherFactor", "Factor", "Variable", "VariMore", "FieldVar",
  "FieldVarMore", "CmpOp", "AddOp", "MultOp", YY_NULL
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
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    49,    50,    50,    51,    52,
      53,    53,    54,    55,    55,    55,    56,    56,    57,    57,
      58,    59,    60,    61,    62,    62,    63,    63,    64,    65,
      65,    66,    66,    67,    68,    69,    69,    70,    71,    71,
      72,    72,    73,    74,    74,    75,    76,    76,    77,    78,
      78,    79,    79,    80,    81,    81,    82,    83,    84,    85,
      86,    86,    87,    87,    87,    87,    87,    87,    88,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    97,
      98,    98,    99,   100,   101,   102,   102,   103,   104,   104,
     105,   105,   105,   106,   107,   107,   107,   108,   109,   109,
     110,   110,   111,   111,   112,   112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     1,     3,     0,     1,     2,     5,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       8,     1,     1,     3,     4,     4,     0,     1,     2,     0,
       2,     0,     1,     2,     4,     0,     1,     2,     0,     2,
       0,     1,     9,     0,     1,     1,     0,     1,     2,     0,
       2,     2,     3,     2,     0,     2,     1,     1,     3,     2,
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       3,     7,     5,     4,     1,     4,     1,     3,     0,     2,
       0,     2,     2,     2,     2,     0,     2,     2,     0,     2,
       3,     1,     1,     2,     0,     3,     2,     2,     0,     3,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     6,     4,     3,     1,     0,     0,    31,
       7,    12,     8,     0,     0,     0,     0,    40,    32,     0,
       0,     0,     0,     0,    76,    94,     0,    60,    62,    63,
      64,    65,    66,     2,     0,     0,    16,    17,    15,     0,
      13,    14,    18,    19,    33,     0,     5,    41,     0,    94,
      91,     0,     0,     0,    85,    88,    92,     0,     0,     0,
      78,     0,     0,    67,    68,    69,     0,    58,     0,    59,
       0,     0,     0,     0,    38,     0,    45,     0,    10,    93,
       0,     0,   101,   100,    82,     0,   102,   103,    84,     0,
     104,   105,    87,     0,     0,    74,     0,     0,     0,    80,
      98,    96,     0,     0,    61,    21,     0,    29,     0,     0,
      23,     0,    37,    35,    46,    11,     9,    90,     0,    83,
      86,    89,     0,    73,    75,    77,    78,    79,     0,    97,
      95,    70,     0,     0,    28,    26,    26,    39,    36,    34,
       0,     0,     0,    47,    49,     0,    72,    81,     0,    22,
       0,    30,    27,    24,    25,     0,    54,    51,     0,     0,
      48,     0,    99,     0,    52,     0,    53,     6,    50,    71,
       0,    55,    56,     0,    20,    43,    57,    44,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     8,     9,    10,    12,   116,    13,
      39,    40,    41,    42,   106,   150,    43,   152,   153,   108,
     134,    17,    18,    44,   139,    75,   112,    46,    47,   178,
      77,   142,   143,   160,   144,   157,   166,   173,   175,    15,
      26,    69,    27,    63,    64,    28,    29,    30,    96,    31,
      32,    65,    98,   127,    52,    84,    53,    88,    54,    92,
      55,    56,    66,   101,   129,    85,    89,    93
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -147
static const yytype_int16 yypact[] =
{
       2,   -10,    26,    14,  -147,  -147,  -147,     7,    44,    30,
    -147,  -147,  -147,    20,    16,     6,    21,    55,  -147,    21,
       1,     1,    27,    29,  -147,    13,    45,    24,  -147,  -147,
    -147,  -147,  -147,  -147,    25,    28,  -147,  -147,  -147,    42,
    -147,  -147,  -147,  -147,  -147,    43,  -147,  -147,    31,   -30,
    -147,     1,    60,   -16,    -1,    22,  -147,    58,    47,     1,
       1,    48,     1,  -147,  -147,  -147,    46,  -147,    16,  -147,
      49,    52,    52,    63,    41,    50,  -147,    51,     7,  -147,
      54,    16,  -147,  -147,  -147,     1,  -147,  -147,  -147,     1,
    -147,  -147,  -147,     1,    16,  -147,    56,    57,    59,    64,
      65,  -147,    40,     1,  -147,  -147,    53,    67,    66,    69,
    -147,    42,  -147,    21,    -2,  -147,  -147,  -147,    73,  -147,
    -147,  -147,    70,  -147,  -147,  -147,     1,  -147,     1,  -147,
    -147,  -147,    61,    52,  -147,    28,    28,  -147,  -147,  -147,
      21,    72,    62,  -147,    71,    16,  -147,  -147,    74,  -147,
      75,  -147,  -147,  -147,  -147,    72,    78,  -147,    76,    -2,
    -147,    77,  -147,    79,  -147,    72,  -147,    14,  -147,  -147,
      34,  -147,  -147,    44,  -147,    55,  -147,  -147,  -147
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,  -147,  -147,   -81,  -147,  -147,    32,  -147,  -147,
     -19,   -34,  -147,   -32,  -147,  -147,  -147,    80,   -44,   -67,
    -147,  -147,  -147,     0,  -147,     3,  -147,  -147,   -63,  -147,
    -147,  -147,   -39,  -147,  -147,  -146,  -147,  -147,  -147,   -51,
     -64,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,    -3,  -147,   103,  -147,   -49,  -147,    33,  -147,
    -147,  -147,    81,  -147,  -147,  -147,  -147,  -147
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      48,    71,    80,    72,   104,   109,   140,     1,    61,   164,
      97,    99,    62,   102,    82,    83,     4,   118,    34,   171,
      35,     7,    36,    37,    38,    20,     6,    49,    50,    21,
     122,    86,    87,    11,    22,    23,   119,    51,    16,    24,
     120,    34,    25,    35,    33,    36,    37,    38,    34,    60,
      19,    61,    36,    37,   131,    62,    90,    91,    36,    37,
      14,    45,    67,    58,    68,    59,   151,    70,    74,    76,
      81,    78,    94,    95,   100,   103,   105,    99,   107,   148,
     110,   161,   111,   130,   145,   146,   172,   114,   149,   169,
     113,   117,   154,   123,   124,   141,   125,   132,   156,   158,
     170,    71,    71,    72,    72,   126,   135,   128,   133,   136,
     115,   159,   177,   138,   137,    73,   167,   162,   163,   165,
     168,   155,   176,   147,    57,     0,   121,     0,     0,     0,
      79,     0,     0,     0,     0,     0,   174,     0,     0,     0,
     141
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-147)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      19,    35,    51,    35,    68,    72,     8,     5,    38,   155,
      59,    60,    42,    62,    30,    31,    26,    81,    20,   165,
      22,     7,    24,    25,    26,     9,     0,    26,    27,    13,
      94,    32,    33,    26,    18,    19,    85,    36,     8,    23,
      89,    20,    26,    22,    38,    24,    25,    26,    20,    36,
      30,    38,    24,    25,   103,    42,    34,    35,    24,    25,
      16,     6,    17,    36,    40,    36,   133,    42,    26,    26,
      10,    40,    14,    26,    26,    29,    27,   126,    26,   128,
      17,   145,    41,    43,    11,    15,   167,    36,    27,    12,
      40,    37,   136,    37,    37,   114,    37,    44,    26,    37,
      21,   135,   136,   135,   136,    41,    40,    42,    41,    40,
      78,    40,   175,   113,   111,    35,    40,    43,    43,    41,
     159,   140,   173,   126,    21,    -1,    93,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
     159
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    46,    47,    26,    48,     0,     7,    49,    50,
      51,    26,    52,    54,    16,    84,     8,    66,    67,    30,
       9,    13,    18,    19,    23,    26,    85,    87,    90,    91,
      92,    94,    95,    38,    20,    22,    24,    25,    26,    55,
      56,    57,    58,    61,    68,     6,    72,    73,    55,    26,
      27,    36,    99,   101,   103,   105,   106,    99,    36,    36,
      36,    38,    42,    88,    89,    96,   107,    17,    40,    86,
      42,    56,    58,    62,    26,    70,    26,    75,    40,   107,
     101,    10,    30,    31,   100,   110,    32,    33,   102,   111,
      34,    35,   104,   112,    14,    26,    93,   101,    97,   101,
      26,   108,   101,    29,    85,    27,    59,    26,    64,    64,
      17,    41,    71,    40,    36,    52,    53,    37,    85,   101,
     101,   103,    85,    37,    37,    37,    41,    98,    42,   109,
      43,   101,    44,    41,    65,    40,    40,    70,    68,    69,
       8,    55,    76,    77,    79,    11,    15,    97,   101,    27,
      60,    64,    62,    63,    63,    55,    26,    80,    37,    40,
      78,    85,    43,    43,    80,    41,    81,    40,    77,    12,
      21,    80,    49,    82,    56,    83,    84,    73,    74
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
#line 58 "syntex.y"
    {(yyval) = new Parent("Program", (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
		 root = (yyval);											}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 61 "syntex.y"
    {(yyval) = new Parent("ProgramHead", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 62 "syntex.y"
    {(yyval) = new Parent("ProgramName", (yyvsp[(1) - (1)]));}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 64 "syntex.y"
    {(yyval) = new Parent("DeclarePart", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 67 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 68 "syntex.y"
    {(yyval) = new Parent("TypeDecpart", (yyvsp[(1) - (1)]));}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 69 "syntex.y"
    {(yyval) = new Parent("TypeDec", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 70 "syntex.y"
    {(yyval) = new Parent("TypeDecList", (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]));}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 71 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 72 "syntex.y"
    {(yyval) = new Parent("TypeDecMore", (yyvsp[(1) - (1)]));}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 73 "syntex.y"
    {(yyval) = new Parent("TypeId", (yyvsp[(1) - (1)]));}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 76 "syntex.y"
    {(yyval) = new Parent("TypeDef", (yyvsp[(1) - (1)]));}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 77 "syntex.y"
    {(yyval) = new Parent("TypeDef", (yyvsp[(1) - (1)]));}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 78 "syntex.y"
    {(yyval) = new Parent("TypeDef", (yyvsp[(1) - (1)]));}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 80 "syntex.y"
    {(yyval) = new Parent("BaseType", (yyvsp[(1) - (1)]));}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 81 "syntex.y"
    {(yyval) = new Parent("BaseType", (yyvsp[(1) - (1)]));}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 83 "syntex.y"
    {(yyval) = new Parent("StructureType", (yyvsp[(1) - (1)]));}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 84 "syntex.y"
    {(yyval) = new Parent("StructureType", (yyvsp[(1) - (1)]));}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 87 "syntex.y"
    {(yyval) = new Parent("ArrayType", (yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]), (yyvsp[(8) - (8)]));}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 88 "syntex.y"
    {(yyval) = new Parent("Low", (yyvsp[(1) - (1)]));}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 89 "syntex.y"
    {(yyval) = new Parent("Top", (yyvsp[(1) - (1)]));}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 91 "syntex.y"
    {(yyval) = new Parent("RecType", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 92 "syntex.y"
    {(yyval) = new Parent("FieldDecList", (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 93 "syntex.y"
    {(yyval) = new Parent("FieldDecList", (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 95 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 96 "syntex.y"
    {(yyval) = new Parent("FieldDecMore", (yyvsp[(1) - (1)]));}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 97 "syntex.y"
    {(yyval) = new Parent("IdList", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 98 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 99 "syntex.y"
    {(yyval) = new Parent("IdMore", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 102 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 103 "syntex.y"
    {(yyval) = new Parent("VarDecpart", (yyvsp[(1) - (1)]));}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 104 "syntex.y"
    {(yyval) = new Parent("VarDec", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 105 "syntex.y"
    {(yyval) = new Parent("VarDecList", (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 107 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 108 "syntex.y"
    {(yyval) = new Parent("VarDecMore", (yyvsp[(1) - (1)]));}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 109 "syntex.y"
    {(yyval) = new Parent("VarIdeList", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 110 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 111 "syntex.y"
    {(yyval) = new Parent("VarIdMore", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 114 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 115 "syntex.y"
    {(yyval) = new Parent("ProcDecpart", (yyvsp[(1) - (1)]));}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 120 "syntex.y"
    {(yyval) = new Parent("ProcDec", (yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(3) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(7) - (9)]), (yyvsp[(8) - (9)]), (yyvsp[(9) - (9)]));}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 122 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 123 "syntex.y"
    {(yyval) = new Parent("ProcDecMore", (yyvsp[(1) - (1)]));}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 124 "syntex.y"
    {(yyval) = new Parent("ProcName", (yyvsp[(1) - (1)]));}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 127 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 128 "syntex.y"
    {(yyval) = new Parent("ParamList", (yyvsp[(1) - (1)]));}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 129 "syntex.y"
    {(yyval) = new Parent("ParamDecList", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 131 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 132 "syntex.y"
    {(yyval) = new Parent("ParamMore", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 133 "syntex.y"
    {(yyval) = new Parent("Param", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 134 "syntex.y"
    {(yyval) = new Parent("Param", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 135 "syntex.y"
    {(yyval) = new Parent("FormList", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 136 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 137 "syntex.y"
    {(yyval) = new Parent("FidMore", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 139 "syntex.y"
    {(yyval) = new Parent("ProcDecPart", (yyvsp[(1) - (1)]));}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 141 "syntex.y"
    {(yyval) = new Parent("ProgramBode", (yyvsp[(1) - (1)]));}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 143 "syntex.y"
    {(yyval) = new Parent("ProgramBody", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 145 "syntex.y"
    {(yyval) = new Parent("StmList", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 146 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 147 "syntex.y"
    {(yyval) = new Parent("StmMore", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 149 "syntex.y"
    {(yyval) = new Parent("Stm", (yyvsp[(1) - (1)]));}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 150 "syntex.y"
    {(yyval) = new Parent("Stm", (yyvsp[(1) - (1)]));}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 151 "syntex.y"
    {(yyval) = new Parent("Stm", (yyvsp[(1) - (1)]));}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 152 "syntex.y"
    {(yyval) = new Parent("Stm", (yyvsp[(1) - (1)]));}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 153 "syntex.y"
    {(yyval) = new Parent("Stm", (yyvsp[(1) - (1)]));}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 154 "syntex.y"
    {(yyval) = new Parent("Stm", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 156 "syntex.y"
    {(yyval) = new Parent("AssCall", (yyvsp[(1) - (1)]));}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 157 "syntex.y"
    {(yyval) = new Parent("Asscall", (yyvsp[(1) - (1)]));}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 159 "syntex.y"
    {(yyval) = new Parent("AssignmentRest", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 161 "syntex.y"
    {
				(yyval) = new Parent("ConditionalStm", (yyvsp[(1) - (7)]), (yyvsp[(2) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(6) - (7)]), (yyvsp[(7) - (7)]));}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 164 "syntex.y"
    {(yyval) = new Parent("LoopStm", (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 166 "syntex.y"
    {(yyval) = new Parent("InputStm", (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 167 "syntex.y"
    {(yyval) = new Parent("Invar", (yyvsp[(1) - (1)]));}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 169 "syntex.y"
    {(yyval) = new Parent("OutputStm", (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 171 "syntex.y"
    {(yyval) = new Parent("ReturnStm", (yyvsp[(1) - (1)]));}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 173 "syntex.y"
    {(yyval) = new Parent("CallStmRest", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 174 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 175 "syntex.y"
    {(yyval) = new Parent("ActParamList", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 176 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 177 "syntex.y"
    {(yyval) = new Parent("ActParamMore", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 179 "syntex.y"
    {(yyval) = new Parent("RelExp", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 180 "syntex.y"
    {(yyval) = new Parent("OtherRelE", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 182 "syntex.y"
    {(yyval) = new Parent("Exp", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 183 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 184 "syntex.y"
    {(yyval) = new Parent("OtherTerm", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 187 "syntex.y"
    {(yyval) = new Parent("Term", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 188 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 189 "syntex.y"
    {(yyval) = new Parent("OtherFactor", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 192 "syntex.y"
    {(yyval) = new Parent("Factor", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 193 "syntex.y"
    {(yyval) = new Parent("Factor", (yyvsp[(1) - (1)]));}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 194 "syntex.y"
    {(yyval) = new Parent("Factor", (yyvsp[(1) - (1)]));}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 195 "syntex.y"
    {(yyval) = new Parent("Variable", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 196 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 197 "syntex.y"
    {(yyval) = new Parent("VariMore", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 198 "syntex.y"
    {(yyval) = new Parent("VariMore", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 199 "syntex.y"
    {(yyval) = new Parent("FieldVar", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 200 "syntex.y"
    {(yyval) = new Leaf("Empty");}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 201 "syntex.y"
    {(yyval) = new Parent("FieldVarMore", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 203 "syntex.y"
    {(yyval) = new Parent("CmpOp", (yyvsp[(1) - (1)]));}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 204 "syntex.y"
    {(yyval) = new Parent("CmpOp", (yyvsp[(1) - (1)]));}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 206 "syntex.y"
    {(yyval) = new Parent("AddOp", (yyvsp[(1) - (1)]));}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 207 "syntex.y"
    {(yyval) = new Parent("AddOp", (yyvsp[(1) - (1)]));}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 209 "syntex.y"
    {(yyval) = new Parent("MultOp", (yyvsp[(1) - (1)]));}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 210 "syntex.y"
    {(yyval) = new Parent("OVER", (yyvsp[(1) - (1)]));}
    break;


/* Line 1792 of yacc.c  */
#line 2174 "syntex.tab.cpp"
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
#line 212 "syntex.y"


void yyerror (char const *s) {
   std::cout << "ERROR: " << s;
}

int main () {
	yyparse ();
	root->traversal(0);
	system("pause");  
}