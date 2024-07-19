#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 228
#define ALIAS_COUNT 0
#define TOKEN_COUNT 222
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_ACCESS = 1,
  anon_sym_ADDRESSOF = 2,
  anon_sym_ALIAS = 3,
  anon_sym_AND = 4,
  anon_sym_ATTRIBUTE = 5,
  anon_sym_APPACTIVATE = 6,
  anon_sym_APPEND = 7,
  anon_sym_AS = 8,
  anon_sym_BEEP = 9,
  anon_sym_BEGIN = 10,
  anon_sym_BEGINPROPERTY = 11,
  anon_sym_BINARY = 12,
  anon_sym_BOOLEAN = 13,
  anon_sym_BYVAL = 14,
  anon_sym_BYREF = 15,
  anon_sym_BYTE = 16,
  anon_sym_CALL = 17,
  anon_sym_CASE = 18,
  anon_sym_CHDIR = 19,
  anon_sym_CHDRIVE = 20,
  anon_sym_CLASS = 21,
  anon_sym_CLOSE = 22,
  anon_sym_COLLECTION = 23,
  anon_sym_CONST = 24,
  anon_sym_DATE = 25,
  anon_sym_DECLARE = 26,
  anon_sym_DEFBOOL = 27,
  anon_sym_DEFBYTE = 28,
  anon_sym_DEFDATE = 29,
  anon_sym_DEFDBL = 30,
  anon_sym_DEFDEC = 31,
  anon_sym_DEFCUR = 32,
  anon_sym_DEFINT = 33,
  anon_sym_DEFLNG = 34,
  anon_sym_DEFOBJ = 35,
  anon_sym_DEFSNG = 36,
  anon_sym_DEFSTR = 37,
  anon_sym_DEFVAR = 38,
  anon_sym_DELETESETTING = 39,
  anon_sym_DIM = 40,
  anon_sym_DO = 41,
  anon_sym_DOUBLE = 42,
  anon_sym_EACH = 43,
  anon_sym_ELSE = 44,
  anon_sym_ELSEIF = 45,
  anon_sym_END_ENUM = 46,
  anon_sym_END_FUNCTION = 47,
  anon_sym_END_IF = 48,
  anon_sym_END_PROPERTY = 49,
  anon_sym_END_SELECT = 50,
  anon_sym_END_SUB = 51,
  anon_sym_END_TYPE = 52,
  anon_sym_END_WITH = 53,
  anon_sym_END = 54,
  anon_sym_ENDPROPERTY = 55,
  anon_sym_ENUM = 56,
  anon_sym_EQV = 57,
  anon_sym_ERASE = 58,
  anon_sym_ERROR = 59,
  anon_sym_EVENT = 60,
  anon_sym_EXIT_DO = 61,
  anon_sym_EXIT_FOR = 62,
  anon_sym_EXIT_FUNCTION = 63,
  anon_sym_EXIT_PROPERTY = 64,
  anon_sym_EXIT_SUB = 65,
  anon_sym_FALSE = 66,
  anon_sym_FILECOPY = 67,
  anon_sym_FRIEND = 68,
  anon_sym_FOR = 69,
  anon_sym_FUNCTION = 70,
  anon_sym_GET = 71,
  anon_sym_GLOBAL = 72,
  anon_sym_GOSUB = 73,
  anon_sym_GOTO = 74,
  anon_sym_IF = 75,
  anon_sym_IMP = 76,
  anon_sym_IMPLEMENTS = 77,
  anon_sym_IN = 78,
  anon_sym_INPUT = 79,
  anon_sym_IS = 80,
  anon_sym_INTEGER = 81,
  anon_sym_KILL = 82,
  anon_sym_LOAD = 83,
  anon_sym_LOCK = 84,
  anon_sym_LONG = 85,
  anon_sym_LOOP = 86,
  anon_sym_LEN = 87,
  anon_sym_LET = 88,
  anon_sym_LIB = 89,
  anon_sym_LIKE = 90,
  anon_sym_LINE_INPUT = 91,
  anon_sym_LOCK_READ = 92,
  anon_sym_LOCK_WRITE = 93,
  anon_sym_LOCK_READ_WRITE = 94,
  anon_sym_LSET = 95,
  anon_sym_MACRO_IF = 96,
  anon_sym_MACRO_ELSEIF = 97,
  anon_sym_MACRO_ELSE = 98,
  anon_sym_MACRO_END_IF = 99,
  anon_sym_ME = 100,
  anon_sym_MID = 101,
  anon_sym_MKDIR = 102,
  anon_sym_MOD = 103,
  anon_sym_NAME = 104,
  anon_sym_NEXT = 105,
  anon_sym_NEW = 106,
  anon_sym_NOT = 107,
  anon_sym_NOTHING = 108,
  anon_sym_NULL_ = 109,
  anon_sym_OBJECT = 110,
  anon_sym_ON = 111,
  anon_sym_ON_ERROR = 112,
  anon_sym_ON_LOCAL_ERROR = 113,
  anon_sym_OPEN = 114,
  anon_sym_OPTIONAL = 115,
  anon_sym_OPTION_BASE = 116,
  anon_sym_OPTION_EXPLICIT = 117,
  anon_sym_OPTION_COMPARE = 118,
  anon_sym_OPTION_PRIVATE_MODULE = 119,
  anon_sym_OR = 120,
  anon_sym_OUTPUT = 121,
  anon_sym_PARAMARRAY = 122,
  anon_sym_PRESERVE = 123,
  anon_sym_PRINT = 124,
  anon_sym_PRIVATE = 125,
  anon_sym_PROPERTY_GET = 126,
  anon_sym_PROPERTY_LET = 127,
  anon_sym_PROPERTY_SET = 128,
  anon_sym_PUBLIC = 129,
  anon_sym_PUT = 130,
  anon_sym_RANDOM = 131,
  anon_sym_RANDOMIZE = 132,
  anon_sym_RAISEEVENT = 133,
  anon_sym_READ = 134,
  anon_sym_READ_WRITE = 135,
  anon_sym_REDIM = 136,
  anon_sym_REM = 137,
  anon_sym_RESET = 138,
  anon_sym_RESUME = 139,
  anon_sym_RETURN = 140,
  anon_sym_RMDIR = 141,
  anon_sym_RSET = 142,
  anon_sym_SAVEPICTURE = 143,
  anon_sym_SAVESETTING = 144,
  anon_sym_SEEK = 145,
  anon_sym_SELECT = 146,
  anon_sym_SENDKEYS = 147,
  anon_sym_SET = 148,
  anon_sym_SETATTR = 149,
  anon_sym_SHARED = 150,
  anon_sym_SINGLE = 151,
  anon_sym_SPC = 152,
  anon_sym_STATIC = 153,
  anon_sym_STEP = 154,
  anon_sym_STOP = 155,
  anon_sym_STRING = 156,
  anon_sym_SUB = 157,
  anon_sym_TAB = 158,
  anon_sym_TEXT = 159,
  anon_sym_THEN = 160,
  anon_sym_TIME = 161,
  anon_sym_TO = 162,
  anon_sym_TRUE = 163,
  anon_sym_TYPE = 164,
  anon_sym_TYPEOF = 165,
  anon_sym_UNLOAD = 166,
  anon_sym_UNLOCK = 167,
  anon_sym_UNTIL = 168,
  anon_sym_VARIANT = 169,
  anon_sym_VERSION = 170,
  anon_sym_WEND = 171,
  anon_sym_WHILE = 172,
  anon_sym_WIDTH = 173,
  anon_sym_WITH = 174,
  anon_sym_WITHEVENTS = 175,
  anon_sym_WRITE = 176,
  anon_sym_XOR = 177,
  anon_sym_AMP = 178,
  anon_sym_COLON_EQ = 179,
  anon_sym_AT = 180,
  anon_sym_COLON = 181,
  anon_sym_COMMA = 182,
  anon_sym_BSLASH = 183,
  anon_sym_SLASH = 184,
  anon_sym_DOLLAR = 185,
  anon_sym_DOT = 186,
  anon_sym_EQ = 187,
  anon_sym_BANG = 188,
  anon_sym_GT_EQ = 189,
  anon_sym_GT = 190,
  anon_sym_POUND = 191,
  anon_sym_LT_EQ = 192,
  anon_sym_LBRACE = 193,
  anon_sym_LPAREN = 194,
  anon_sym_LT = 195,
  anon_sym_DASH = 196,
  anon_sym_DASH_EQ = 197,
  anon_sym_STAR = 198,
  anon_sym_LT_GT = 199,
  anon_sym_PERCENT = 200,
  anon_sym_PLUS = 201,
  anon_sym_PLUS_EQ = 202,
  anon_sym_CARET = 203,
  anon_sym_RBRACE = 204,
  anon_sym_RPAREN = 205,
  anon_sym_SEMI = 206,
  anon_sym_LBRACK = 207,
  anon_sym_RBRACK = 208,
  sym_string_literal = 209,
  sym_date_literal = 210,
  sym_color_literal = 211,
  sym_integer_literal = 212,
  sym_double_literal = 213,
  sym_file_number = 214,
  sym_octal_literal = 215,
  sym_frx_offset = 216,
  sym_guid = 217,
  sym_identifier = 218,
  sym_line_continuation = 219,
  sym_newline = 220,
  sym_comment = 221,
  sym_source_file = 222,
  sym__statement = 223,
  sym_keyword = 224,
  sym_symbol = 225,
  sym_literal = 226,
  aux_sym_source_file_repeat1 = 227,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ACCESS] = "ACCESS",
  [anon_sym_ADDRESSOF] = "ADDRESSOF",
  [anon_sym_ALIAS] = "ALIAS",
  [anon_sym_AND] = "AND",
  [anon_sym_ATTRIBUTE] = "ATTRIBUTE",
  [anon_sym_APPACTIVATE] = "APPACTIVATE",
  [anon_sym_APPEND] = "APPEND",
  [anon_sym_AS] = "AS",
  [anon_sym_BEEP] = "BEEP",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_BEGINPROPERTY] = "BEGINPROPERTY",
  [anon_sym_BINARY] = "BINARY",
  [anon_sym_BOOLEAN] = "BOOLEAN",
  [anon_sym_BYVAL] = "BYVAL",
  [anon_sym_BYREF] = "BYREF",
  [anon_sym_BYTE] = "BYTE",
  [anon_sym_CALL] = "CALL",
  [anon_sym_CASE] = "CASE",
  [anon_sym_CHDIR] = "CHDIR",
  [anon_sym_CHDRIVE] = "CHDRIVE",
  [anon_sym_CLASS] = "CLASS",
  [anon_sym_CLOSE] = "CLOSE",
  [anon_sym_COLLECTION] = "COLLECTION",
  [anon_sym_CONST] = "CONST",
  [anon_sym_DATE] = "DATE",
  [anon_sym_DECLARE] = "DECLARE",
  [anon_sym_DEFBOOL] = "DEFBOOL",
  [anon_sym_DEFBYTE] = "DEFBYTE",
  [anon_sym_DEFDATE] = "DEFDATE",
  [anon_sym_DEFDBL] = "DEFDBL",
  [anon_sym_DEFDEC] = "DEFDEC",
  [anon_sym_DEFCUR] = "DEFCUR",
  [anon_sym_DEFINT] = "DEFINT",
  [anon_sym_DEFLNG] = "DEFLNG",
  [anon_sym_DEFOBJ] = "DEFOBJ",
  [anon_sym_DEFSNG] = "DEFSNG",
  [anon_sym_DEFSTR] = "DEFSTR",
  [anon_sym_DEFVAR] = "DEFVAR",
  [anon_sym_DELETESETTING] = "DELETESETTING",
  [anon_sym_DIM] = "DIM",
  [anon_sym_DO] = "DO",
  [anon_sym_DOUBLE] = "DOUBLE",
  [anon_sym_EACH] = "EACH",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_ELSEIF] = "ELSEIF",
  [anon_sym_END_ENUM] = "END_ENUM",
  [anon_sym_END_FUNCTION] = "END_FUNCTION",
  [anon_sym_END_IF] = "END_IF",
  [anon_sym_END_PROPERTY] = "END_PROPERTY",
  [anon_sym_END_SELECT] = "END_SELECT",
  [anon_sym_END_SUB] = "END_SUB",
  [anon_sym_END_TYPE] = "END_TYPE",
  [anon_sym_END_WITH] = "END_WITH",
  [anon_sym_END] = "END",
  [anon_sym_ENDPROPERTY] = "ENDPROPERTY",
  [anon_sym_ENUM] = "ENUM",
  [anon_sym_EQV] = "EQV",
  [anon_sym_ERASE] = "ERASE",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_EVENT] = "EVENT",
  [anon_sym_EXIT_DO] = "EXIT_DO",
  [anon_sym_EXIT_FOR] = "EXIT_FOR",
  [anon_sym_EXIT_FUNCTION] = "EXIT_FUNCTION",
  [anon_sym_EXIT_PROPERTY] = "EXIT_PROPERTY",
  [anon_sym_EXIT_SUB] = "EXIT_SUB",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_FILECOPY] = "FILECOPY",
  [anon_sym_FRIEND] = "FRIEND",
  [anon_sym_FOR] = "FOR",
  [anon_sym_FUNCTION] = "FUNCTION",
  [anon_sym_GET] = "GET",
  [anon_sym_GLOBAL] = "GLOBAL",
  [anon_sym_GOSUB] = "GOSUB",
  [anon_sym_GOTO] = "GOTO",
  [anon_sym_IF] = "IF",
  [anon_sym_IMP] = "IMP",
  [anon_sym_IMPLEMENTS] = "IMPLEMENTS",
  [anon_sym_IN] = "IN",
  [anon_sym_INPUT] = "INPUT",
  [anon_sym_IS] = "IS",
  [anon_sym_INTEGER] = "INTEGER",
  [anon_sym_KILL] = "KILL",
  [anon_sym_LOAD] = "LOAD",
  [anon_sym_LOCK] = "LOCK",
  [anon_sym_LONG] = "LONG",
  [anon_sym_LOOP] = "LOOP",
  [anon_sym_LEN] = "LEN",
  [anon_sym_LET] = "LET",
  [anon_sym_LIB] = "LIB",
  [anon_sym_LIKE] = "LIKE",
  [anon_sym_LINE_INPUT] = "LINE_INPUT",
  [anon_sym_LOCK_READ] = "LOCK_READ",
  [anon_sym_LOCK_WRITE] = "LOCK_WRITE",
  [anon_sym_LOCK_READ_WRITE] = "LOCK_READ_WRITE",
  [anon_sym_LSET] = "LSET",
  [anon_sym_MACRO_IF] = "MACRO_IF",
  [anon_sym_MACRO_ELSEIF] = "MACRO_ELSEIF",
  [anon_sym_MACRO_ELSE] = "MACRO_ELSE",
  [anon_sym_MACRO_END_IF] = "MACRO_END_IF",
  [anon_sym_ME] = "ME",
  [anon_sym_MID] = "MID",
  [anon_sym_MKDIR] = "MKDIR",
  [anon_sym_MOD] = "MOD",
  [anon_sym_NAME] = "NAME",
  [anon_sym_NEXT] = "NEXT",
  [anon_sym_NEW] = "NEW",
  [anon_sym_NOT] = "NOT",
  [anon_sym_NOTHING] = "NOTHING",
  [anon_sym_NULL_] = "NULL_",
  [anon_sym_OBJECT] = "OBJECT",
  [anon_sym_ON] = "ON",
  [anon_sym_ON_ERROR] = "ON_ERROR",
  [anon_sym_ON_LOCAL_ERROR] = "ON_LOCAL_ERROR",
  [anon_sym_OPEN] = "OPEN",
  [anon_sym_OPTIONAL] = "OPTIONAL",
  [anon_sym_OPTION_BASE] = "OPTION_BASE",
  [anon_sym_OPTION_EXPLICIT] = "OPTION_EXPLICIT",
  [anon_sym_OPTION_COMPARE] = "OPTION_COMPARE",
  [anon_sym_OPTION_PRIVATE_MODULE] = "OPTION_PRIVATE_MODULE",
  [anon_sym_OR] = "OR",
  [anon_sym_OUTPUT] = "OUTPUT",
  [anon_sym_PARAMARRAY] = "PARAMARRAY",
  [anon_sym_PRESERVE] = "PRESERVE",
  [anon_sym_PRINT] = "PRINT",
  [anon_sym_PRIVATE] = "PRIVATE",
  [anon_sym_PROPERTY_GET] = "PROPERTY_GET",
  [anon_sym_PROPERTY_LET] = "PROPERTY_LET",
  [anon_sym_PROPERTY_SET] = "PROPERTY_SET",
  [anon_sym_PUBLIC] = "PUBLIC",
  [anon_sym_PUT] = "PUT",
  [anon_sym_RANDOM] = "RANDOM",
  [anon_sym_RANDOMIZE] = "RANDOMIZE",
  [anon_sym_RAISEEVENT] = "RAISEEVENT",
  [anon_sym_READ] = "READ",
  [anon_sym_READ_WRITE] = "READ_WRITE",
  [anon_sym_REDIM] = "REDIM",
  [anon_sym_REM] = "REM",
  [anon_sym_RESET] = "RESET",
  [anon_sym_RESUME] = "RESUME",
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_RMDIR] = "RMDIR",
  [anon_sym_RSET] = "RSET",
  [anon_sym_SAVEPICTURE] = "SAVEPICTURE",
  [anon_sym_SAVESETTING] = "SAVESETTING",
  [anon_sym_SEEK] = "SEEK",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_SENDKEYS] = "SENDKEYS",
  [anon_sym_SET] = "SET",
  [anon_sym_SETATTR] = "SETATTR",
  [anon_sym_SHARED] = "SHARED",
  [anon_sym_SINGLE] = "SINGLE",
  [anon_sym_SPC] = "SPC",
  [anon_sym_STATIC] = "STATIC",
  [anon_sym_STEP] = "STEP",
  [anon_sym_STOP] = "STOP",
  [anon_sym_STRING] = "STRING",
  [anon_sym_SUB] = "SUB",
  [anon_sym_TAB] = "TAB",
  [anon_sym_TEXT] = "TEXT",
  [anon_sym_THEN] = "THEN",
  [anon_sym_TIME] = "TIME",
  [anon_sym_TO] = "TO",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_TYPE] = "TYPE",
  [anon_sym_TYPEOF] = "TYPEOF",
  [anon_sym_UNLOAD] = "UNLOAD",
  [anon_sym_UNLOCK] = "UNLOCK",
  [anon_sym_UNTIL] = "UNTIL",
  [anon_sym_VARIANT] = "VARIANT",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_WEND] = "WEND",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_WIDTH] = "WIDTH",
  [anon_sym_WITH] = "WITH",
  [anon_sym_WITHEVENTS] = "WITHEVENTS",
  [anon_sym_WRITE] = "WRITE",
  [anon_sym_XOR] = "XOR",
  [anon_sym_AMP] = "&",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_AT] = "@",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG] = "!",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_POUND] = "#",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LT] = "<",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR] = "*",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_CARET] = "^",
  [anon_sym_RBRACE] = "}",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_string_literal] = "string_literal",
  [sym_date_literal] = "date_literal",
  [sym_color_literal] = "color_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_double_literal] = "double_literal",
  [sym_file_number] = "file_number",
  [sym_octal_literal] = "octal_literal",
  [sym_frx_offset] = "frx_offset",
  [sym_guid] = "guid",
  [sym_identifier] = "identifier",
  [sym_line_continuation] = "line_continuation",
  [sym_newline] = "newline",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_keyword] = "keyword",
  [sym_symbol] = "symbol",
  [sym_literal] = "literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ACCESS] = anon_sym_ACCESS,
  [anon_sym_ADDRESSOF] = anon_sym_ADDRESSOF,
  [anon_sym_ALIAS] = anon_sym_ALIAS,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_ATTRIBUTE] = anon_sym_ATTRIBUTE,
  [anon_sym_APPACTIVATE] = anon_sym_APPACTIVATE,
  [anon_sym_APPEND] = anon_sym_APPEND,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_BEEP] = anon_sym_BEEP,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_BEGINPROPERTY] = anon_sym_BEGINPROPERTY,
  [anon_sym_BINARY] = anon_sym_BINARY,
  [anon_sym_BOOLEAN] = anon_sym_BOOLEAN,
  [anon_sym_BYVAL] = anon_sym_BYVAL,
  [anon_sym_BYREF] = anon_sym_BYREF,
  [anon_sym_BYTE] = anon_sym_BYTE,
  [anon_sym_CALL] = anon_sym_CALL,
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_CHDIR] = anon_sym_CHDIR,
  [anon_sym_CHDRIVE] = anon_sym_CHDRIVE,
  [anon_sym_CLASS] = anon_sym_CLASS,
  [anon_sym_CLOSE] = anon_sym_CLOSE,
  [anon_sym_COLLECTION] = anon_sym_COLLECTION,
  [anon_sym_CONST] = anon_sym_CONST,
  [anon_sym_DATE] = anon_sym_DATE,
  [anon_sym_DECLARE] = anon_sym_DECLARE,
  [anon_sym_DEFBOOL] = anon_sym_DEFBOOL,
  [anon_sym_DEFBYTE] = anon_sym_DEFBYTE,
  [anon_sym_DEFDATE] = anon_sym_DEFDATE,
  [anon_sym_DEFDBL] = anon_sym_DEFDBL,
  [anon_sym_DEFDEC] = anon_sym_DEFDEC,
  [anon_sym_DEFCUR] = anon_sym_DEFCUR,
  [anon_sym_DEFINT] = anon_sym_DEFINT,
  [anon_sym_DEFLNG] = anon_sym_DEFLNG,
  [anon_sym_DEFOBJ] = anon_sym_DEFOBJ,
  [anon_sym_DEFSNG] = anon_sym_DEFSNG,
  [anon_sym_DEFSTR] = anon_sym_DEFSTR,
  [anon_sym_DEFVAR] = anon_sym_DEFVAR,
  [anon_sym_DELETESETTING] = anon_sym_DELETESETTING,
  [anon_sym_DIM] = anon_sym_DIM,
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_DOUBLE] = anon_sym_DOUBLE,
  [anon_sym_EACH] = anon_sym_EACH,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_END_ENUM] = anon_sym_END_ENUM,
  [anon_sym_END_FUNCTION] = anon_sym_END_FUNCTION,
  [anon_sym_END_IF] = anon_sym_END_IF,
  [anon_sym_END_PROPERTY] = anon_sym_END_PROPERTY,
  [anon_sym_END_SELECT] = anon_sym_END_SELECT,
  [anon_sym_END_SUB] = anon_sym_END_SUB,
  [anon_sym_END_TYPE] = anon_sym_END_TYPE,
  [anon_sym_END_WITH] = anon_sym_END_WITH,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_ENDPROPERTY] = anon_sym_ENDPROPERTY,
  [anon_sym_ENUM] = anon_sym_ENUM,
  [anon_sym_EQV] = anon_sym_EQV,
  [anon_sym_ERASE] = anon_sym_ERASE,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_EVENT] = anon_sym_EVENT,
  [anon_sym_EXIT_DO] = anon_sym_EXIT_DO,
  [anon_sym_EXIT_FOR] = anon_sym_EXIT_FOR,
  [anon_sym_EXIT_FUNCTION] = anon_sym_EXIT_FUNCTION,
  [anon_sym_EXIT_PROPERTY] = anon_sym_EXIT_PROPERTY,
  [anon_sym_EXIT_SUB] = anon_sym_EXIT_SUB,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_FILECOPY] = anon_sym_FILECOPY,
  [anon_sym_FRIEND] = anon_sym_FRIEND,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_FUNCTION] = anon_sym_FUNCTION,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_GLOBAL] = anon_sym_GLOBAL,
  [anon_sym_GOSUB] = anon_sym_GOSUB,
  [anon_sym_GOTO] = anon_sym_GOTO,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_IMP] = anon_sym_IMP,
  [anon_sym_IMPLEMENTS] = anon_sym_IMPLEMENTS,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_INPUT] = anon_sym_INPUT,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_INTEGER] = anon_sym_INTEGER,
  [anon_sym_KILL] = anon_sym_KILL,
  [anon_sym_LOAD] = anon_sym_LOAD,
  [anon_sym_LOCK] = anon_sym_LOCK,
  [anon_sym_LONG] = anon_sym_LONG,
  [anon_sym_LOOP] = anon_sym_LOOP,
  [anon_sym_LEN] = anon_sym_LEN,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_LIB] = anon_sym_LIB,
  [anon_sym_LIKE] = anon_sym_LIKE,
  [anon_sym_LINE_INPUT] = anon_sym_LINE_INPUT,
  [anon_sym_LOCK_READ] = anon_sym_LOCK_READ,
  [anon_sym_LOCK_WRITE] = anon_sym_LOCK_WRITE,
  [anon_sym_LOCK_READ_WRITE] = anon_sym_LOCK_READ_WRITE,
  [anon_sym_LSET] = anon_sym_LSET,
  [anon_sym_MACRO_IF] = anon_sym_MACRO_IF,
  [anon_sym_MACRO_ELSEIF] = anon_sym_MACRO_ELSEIF,
  [anon_sym_MACRO_ELSE] = anon_sym_MACRO_ELSE,
  [anon_sym_MACRO_END_IF] = anon_sym_MACRO_END_IF,
  [anon_sym_ME] = anon_sym_ME,
  [anon_sym_MID] = anon_sym_MID,
  [anon_sym_MKDIR] = anon_sym_MKDIR,
  [anon_sym_MOD] = anon_sym_MOD,
  [anon_sym_NAME] = anon_sym_NAME,
  [anon_sym_NEXT] = anon_sym_NEXT,
  [anon_sym_NEW] = anon_sym_NEW,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_NOTHING] = anon_sym_NOTHING,
  [anon_sym_NULL_] = anon_sym_NULL_,
  [anon_sym_OBJECT] = anon_sym_OBJECT,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_ON_ERROR] = anon_sym_ON_ERROR,
  [anon_sym_ON_LOCAL_ERROR] = anon_sym_ON_LOCAL_ERROR,
  [anon_sym_OPEN] = anon_sym_OPEN,
  [anon_sym_OPTIONAL] = anon_sym_OPTIONAL,
  [anon_sym_OPTION_BASE] = anon_sym_OPTION_BASE,
  [anon_sym_OPTION_EXPLICIT] = anon_sym_OPTION_EXPLICIT,
  [anon_sym_OPTION_COMPARE] = anon_sym_OPTION_COMPARE,
  [anon_sym_OPTION_PRIVATE_MODULE] = anon_sym_OPTION_PRIVATE_MODULE,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_OUTPUT] = anon_sym_OUTPUT,
  [anon_sym_PARAMARRAY] = anon_sym_PARAMARRAY,
  [anon_sym_PRESERVE] = anon_sym_PRESERVE,
  [anon_sym_PRINT] = anon_sym_PRINT,
  [anon_sym_PRIVATE] = anon_sym_PRIVATE,
  [anon_sym_PROPERTY_GET] = anon_sym_PROPERTY_GET,
  [anon_sym_PROPERTY_LET] = anon_sym_PROPERTY_LET,
  [anon_sym_PROPERTY_SET] = anon_sym_PROPERTY_SET,
  [anon_sym_PUBLIC] = anon_sym_PUBLIC,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_RANDOM] = anon_sym_RANDOM,
  [anon_sym_RANDOMIZE] = anon_sym_RANDOMIZE,
  [anon_sym_RAISEEVENT] = anon_sym_RAISEEVENT,
  [anon_sym_READ] = anon_sym_READ,
  [anon_sym_READ_WRITE] = anon_sym_READ_WRITE,
  [anon_sym_REDIM] = anon_sym_REDIM,
  [anon_sym_REM] = anon_sym_REM,
  [anon_sym_RESET] = anon_sym_RESET,
  [anon_sym_RESUME] = anon_sym_RESUME,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_RMDIR] = anon_sym_RMDIR,
  [anon_sym_RSET] = anon_sym_RSET,
  [anon_sym_SAVEPICTURE] = anon_sym_SAVEPICTURE,
  [anon_sym_SAVESETTING] = anon_sym_SAVESETTING,
  [anon_sym_SEEK] = anon_sym_SEEK,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_SENDKEYS] = anon_sym_SENDKEYS,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_SETATTR] = anon_sym_SETATTR,
  [anon_sym_SHARED] = anon_sym_SHARED,
  [anon_sym_SINGLE] = anon_sym_SINGLE,
  [anon_sym_SPC] = anon_sym_SPC,
  [anon_sym_STATIC] = anon_sym_STATIC,
  [anon_sym_STEP] = anon_sym_STEP,
  [anon_sym_STOP] = anon_sym_STOP,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_TEXT] = anon_sym_TEXT,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_TIME] = anon_sym_TIME,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_TYPE] = anon_sym_TYPE,
  [anon_sym_TYPEOF] = anon_sym_TYPEOF,
  [anon_sym_UNLOAD] = anon_sym_UNLOAD,
  [anon_sym_UNLOCK] = anon_sym_UNLOCK,
  [anon_sym_UNTIL] = anon_sym_UNTIL,
  [anon_sym_VARIANT] = anon_sym_VARIANT,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_WEND] = anon_sym_WEND,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_WIDTH] = anon_sym_WIDTH,
  [anon_sym_WITH] = anon_sym_WITH,
  [anon_sym_WITHEVENTS] = anon_sym_WITHEVENTS,
  [anon_sym_WRITE] = anon_sym_WRITE,
  [anon_sym_XOR] = anon_sym_XOR,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_string_literal] = sym_string_literal,
  [sym_date_literal] = sym_date_literal,
  [sym_color_literal] = sym_color_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_double_literal] = sym_double_literal,
  [sym_file_number] = sym_file_number,
  [sym_octal_literal] = sym_octal_literal,
  [sym_frx_offset] = sym_frx_offset,
  [sym_guid] = sym_guid,
  [sym_identifier] = sym_identifier,
  [sym_line_continuation] = sym_line_continuation,
  [sym_newline] = sym_newline,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_keyword] = sym_keyword,
  [sym_symbol] = sym_symbol,
  [sym_literal] = sym_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ACCESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADDRESSOF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALIAS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTRIBUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_APPACTIVATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_APPEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEEP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGINPROPERTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BINARY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOLEAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BYVAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BYREF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHDIR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHDRIVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLASS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLLECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DECLARE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFBOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFDBL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFDEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFCUR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFLNG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFOBJ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFSNG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFSTR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFVAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETESETTING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOUBLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EACH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSEIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_ENUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_PROPERTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_WITH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDPROPERTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EVENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXIT_DO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXIT_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXIT_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXIT_PROPERTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXIT_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILECOPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FRIEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GLOBAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GOSUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GOTO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMPLEMENTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTEGER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KILL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LONG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIKE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINE_INPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCK_READ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCK_WRITE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCK_READ_WRITE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LSET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MACRO_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MACRO_ELSEIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MACRO_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MACRO_END_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MKDIR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEXT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTHING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON_LOCAL_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTION_BASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTION_EXPLICIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTION_COMPARE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTION_PRIVATE_MODULE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARAMARRAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRESERVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRIVATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPERTY_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPERTY_LET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPERTY_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBLIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RANDOM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RANDOMIZE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RAISEEVENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_READ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_READ_WRITE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REDIM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RESET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RESUME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RMDIR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RSET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAVEPICTURE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAVESETTING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEEK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SENDKEYS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SETATTR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHARED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SINGLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STATIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STEP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEXT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPEOF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLOAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNTIL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIANT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WIDTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITHEVENTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WRITE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_date_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_color_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_double_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_file_number] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_frx_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_guid] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
};

static TSCharacterRange sym_file_number_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {0xc0, 0xc4}, {0xc7, 0xca}, {0xcc, 0xce}, {0xd2, 0xd6}, {0xd9, 0xdc},
  {0x128, 0x128}, {0x168, 0x168}, {0x1ebc, 0x1ebc},
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'A', 'Z'}, {'_', '_'}, {0xc0, 0xc4}, {0xc7, 0xca}, {0xcc, 0xce}, {0xd2, 0xd6}, {0xd9, 0xdc}, {0x128, 0x128},
  {0x168, 0x168}, {0x1ebc, 0x1ebc},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 806,
        '\r', 2,
        ' ', 1,
        '!', 215,
        '"', 7,
        '#', 218,
        '$', 212,
        '%', 227,
        '&', 205,
        '\'', 808,
        '(', 221,
        ')', 232,
        '*', 225,
        '+', 228,
        ',', 209,
        '-', 223,
        '.', 213,
        '/', 211,
        ':', 208,
        ';', 233,
        '<', 222,
        '=', 214,
        '>', 217,
        '@', 207,
        'A', 304,
        'B', 347,
        'C', 251,
        'D', 255,
        'E', 254,
        'F', 252,
        'G', 389,
        'I', 437,
        'K', 461,
        'L', 348,
        'M', 261,
        'N', 256,
        'O', 290,
        'P', 259,
        'R', 253,
        'S', 258,
        'T', 260,
        'U', 545,
        'V', 262,
        'W', 393,
        'X', 586,
        '[', 234,
        '\\', 210,
        ']', 235,
        '^', 230,
        '{', 220,
        '}', 231,
        '\t', 2,
        0x0b, 2,
        '\f', 2,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (set_contains(sym_identifier_character_set_1, 10, lookahead)) ADVANCE(804);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 806,
        '\r', 2,
        ' ', 1,
        '!', 215,
        '"', 7,
        '#', 218,
        '$', 212,
        '%', 227,
        '&', 205,
        '\'', 808,
        '(', 221,
        ')', 232,
        '*', 225,
        '+', 228,
        ',', 209,
        '-', 223,
        '.', 213,
        '/', 211,
        ':', 208,
        ';', 233,
        '<', 222,
        '=', 214,
        '>', 217,
        '@', 207,
        'A', 304,
        'B', 347,
        'C', 251,
        'D', 255,
        'E', 254,
        'F', 252,
        'G', 389,
        'I', 437,
        'K', 461,
        'L', 348,
        'M', 261,
        'N', 256,
        'O', 290,
        'P', 259,
        'R', 253,
        'S', 258,
        'T', 260,
        'U', 545,
        'V', 262,
        'W', 393,
        'X', 586,
        '[', 234,
        '\\', 210,
        ']', 235,
        '^', 230,
        '_', 250,
        '{', 220,
        '}', 231,
        '\t', 2,
        0x0b, 2,
        '\f', 2,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (set_contains(sym_identifier_character_set_1, 10, lookahead)) ADVANCE(804);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 806,
        '\r', 2,
        ' ', 1,
        '!', 215,
        '"', 7,
        '#', 218,
        '$', 212,
        '%', 227,
        '&', 205,
        '\'', 808,
        '(', 221,
        ')', 232,
        '*', 225,
        '+', 228,
        ',', 209,
        '-', 223,
        '.', 213,
        '/', 211,
        ':', 208,
        ';', 233,
        '<', 222,
        '=', 214,
        '>', 217,
        '@', 207,
        'A', 304,
        'B', 347,
        'C', 251,
        'D', 255,
        'E', 254,
        'F', 252,
        'G', 389,
        'I', 437,
        'K', 461,
        'L', 348,
        'M', 261,
        'N', 256,
        'O', 290,
        'P', 259,
        'R', 253,
        'S', 258,
        'T', 260,
        'U', 545,
        'V', 262,
        'W', 393,
        'X', 586,
        '[', 234,
        '\\', 210,
        ']', 235,
        '^', 230,
        '{', 220,
        '}', 231,
        '\t', 2,
        0x0b, 2,
        '\f', 2,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (set_contains(sym_identifier_character_set_1, 10, lookahead)) ADVANCE(804);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(805);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(805);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(808);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '_') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(808);
      if (lookahead == ':') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'M') ADVANCE(808);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(239);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(16);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(10);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(11);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(12);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(808);
      if (lookahead == ':') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(6);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_ACCESS);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_ADDRESSOF);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ALIAS);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AND);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_ATTRIBUTE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_APPACTIVATE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_APPEND);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AS);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BEEP);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (lookahead == 'P') ADVANCE(673);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BEGINPROPERTY);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BINARY);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BOOLEAN);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BYVAL);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BYREF);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_CALL);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_CHDIR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CHDRIVE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_CLASS);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_CLOSE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLLECTION);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_CONST);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DATE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DECLARE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DEFBOOL);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DEFBYTE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DEFDATE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DEFDBL);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DEFDEC);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DEFCUR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DEFINT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DEFLNG);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DEFOBJ);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DEFSNG);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DEFSTR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DEFVAR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DELETESETTING);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DIM);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DO);
      if (lookahead == 'U') ADVANCE(303);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EACH);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == 'I') ADVANCE(439);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_END_ENUM);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_END_FUNCTION);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_END_IF);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_END_PROPERTY);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_END_SELECT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_END_SUB);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_END_TYPE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_END_WITH);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == '_') ADVANCE(404);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ENDPROPERTY);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ENUM);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQV);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ERASE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ERROR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EVENT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EXIT_DO);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EXIT_FOR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EXIT_FUNCTION);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EXIT_PROPERTY);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EXIT_SUB);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_FILECOPY);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_FRIEND);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GET);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GLOBAL);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GOSUB);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GOTO);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_IF);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_IMP);
      if (lookahead == 'L') ADVANCE(396);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_IMPLEMENTS);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'P') ADVANCE(762);
      if (lookahead == 'T') ADVANCE(390);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_INPUT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_IS);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_KILL);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LOAD);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '_') ADVANCE(660);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LONG);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LOOP);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LEN);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LET);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LIB);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LIKE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LINE_INPUT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LOCK_READ);
      if (lookahead == '_') ADVANCE(782);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LOCK_WRITE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LOCK_READ_WRITE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LSET);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_MACRO_IF);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_MACRO_ELSEIF);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_MACRO_ELSE);
      if (lookahead == 'I') ADVANCE(444);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_MACRO_END_IF);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ME);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_MID);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_MKDIR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_MOD);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_NAME);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_NEXT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_NEW);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == 'H') ADVANCE(476);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_NOTHING);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_NULL_);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_OBJECT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '_') ADVANCE(406);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ON_ERROR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ON_LOCAL_ERROR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_OPEN);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_OPTIONAL);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_OPTION_BASE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_OPTION_EXPLICIT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_OPTION_COMPARE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_OPTION_PRIVATE_MODULE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_OR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_OUTPUT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PARAMARRAY);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PRESERVE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PRIVATE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PROPERTY_GET);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PROPERTY_LET);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PROPERTY_SET);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RANDOM);
      if (lookahead == 'I') ADVANCE(795);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RANDOMIZE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RAISEEVENT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_READ);
      if (lookahead == '_') ADVANCE(781);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_READ_WRITE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_REDIM);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_REM);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RESET);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RESUME);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RMDIR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RSET);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SAVEPICTURE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SAVESETTING);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SEEK);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SENDKEYS);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == 'A') ADVANCE(750);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SETATTR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SHARED);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_SINGLE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_SPC);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_STATIC);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_STEP);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_STOP);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_TEXT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_THEN);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_TIME);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_TO);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (lookahead == 'O') ADVANCE(441);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_TYPEOF);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_UNLOAD);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_UNTIL);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_VARIANT);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_WEND);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_WIDTH);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_WITH);
      if (lookahead == 'E') ADVANCE(777);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_WITHEVENTS);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_WRITE);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == 'H') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ' ') ADVANCE(807);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == 'R') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(248);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(237);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(9);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(219);
      if (lookahead == '>') ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_date_literal);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_color_literal);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_color_literal);
      if (lookahead == '&') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_double_literal);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_double_literal);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_file_number);
      if (lookahead == '#') ADVANCE(237);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_octal_literal);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_octal_literal);
      if (lookahead == '&') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_frx_offset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_guid);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(805);
      if (lookahead == '\r') ADVANCE(3);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(514);
      if (lookahead == 'H') ADVANCE(326);
      if (lookahead == 'L') ADVANCE(257);
      if (lookahead == 'O') ADVANCE(528);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(529);
      if (lookahead == 'I') ADVANCE(519);
      if (lookahead == 'O') ADVANCE(629);
      if (lookahead == 'R') ADVANCE(487);
      if (lookahead == 'U') ADVANCE(560);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(493);
      if (lookahead == 'E') ADVANCE(267);
      if (lookahead == 'M') ADVANCE(346);
      if (lookahead == 'S') ADVANCE(403);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'L') ADVANCE(687);
      if (lookahead == 'N') ADVANCE(327);
      if (lookahead == 'Q') ADVANCE(772);
      if (lookahead == 'R') ADVANCE(282);
      if (lookahead == 'V') ADVANCE(394);
      if (lookahead == 'X') ADVANCE(464);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(727);
      if (lookahead == 'E') ADVANCE(311);
      if (lookahead == 'I') ADVANCE(533);
      if (lookahead == 'O') ADVANCE(68);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(539);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'O') ADVANCE(700);
      if (lookahead == 'U') ADVANCE(518);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'O') ADVANCE(690);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(773);
      if (lookahead == 'E') ADVANCE(387);
      if (lookahead == 'H') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(558);
      if (lookahead == 'P') ADVANCE(306);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead == 'U') ADVANCE(292);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(646);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == 'U') ADVANCE(300);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(784);
      if (lookahead == 'H') ADVANCE(401);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'O') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(764);
      if (lookahead == 'Y') ADVANCE(618);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(312);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(328);
      if (lookahead == 'K') ADVANCE(340);
      if (lookahead == 'O') ADVANCE(329);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(663);
      if (lookahead == 'E') ADVANCE(644);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(543);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(677);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(787);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'C') ADVANCE(501);
      if (lookahead == 'N') ADVANCE(446);
      if (lookahead == 'O') ADVANCE(612);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(331);
      if (lookahead == 'D') ADVANCE(463);
      if (lookahead == 'M') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(407);
      if (lookahead == 'T') ADVANCE(763);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(507);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(654);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(735);
      if (lookahead == 'E') ADVANCE(613);
      if (lookahead == 'O') ADVANCE(614);
      if (lookahead == 'R') ADVANCE(473);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(631);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(510);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(516);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(336);
      if (lookahead == 'C') ADVANCE(503);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(512);
      if (lookahead == '_') ADVANCE(301);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(552);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(337);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(638);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(664);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(319);
      if (lookahead == 'E') ADVANCE(568);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(659);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(691);
      if (lookahead == 'R') ADVANCE(593);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(573);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(662);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(742);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'E') ADVANCE(307);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(743);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(696);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(747);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(748);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(500);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'P') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(147);
      if (lookahead == 'U') ADVANCE(726);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(116);
      if (lookahead == 'K') ADVANCE(354);
      if (lookahead == 'N') ADVANCE(388);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(184);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(185);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'B', 604,
        'C', 765,
        'D', 285,
        'I', 572,
        'L', 559,
        'O', 298,
        'S', 561,
        'V', 278,
      );
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(100);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(78);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(92);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(499);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(769);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(520);
      if (lookahead == 'T') ADVANCE(157);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(287);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'E') ADVANCE(783);
      if (lookahead == 'P') ADVANCE(676);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(272);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(524);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'D') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(460);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == 'P') ADVANCE(615);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(728);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(456);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(179);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(58);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(156);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(180);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(416);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(294);
      if (lookahead == 'L') ADVANCE(418);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(647);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(590);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(755);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(712);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(714);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(751);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(716);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(736);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(483);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(273);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(756);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(757);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(758);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(31);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(475);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(534);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(128);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(130);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(110);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(161);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(198);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(34);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(95);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(177);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(193);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(119);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(504);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(668);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(477);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(770);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(588);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'F') ADVANCE(601);
      if (lookahead == 'P') ADVANCE(675);
      if (lookahead == 'S') ADVANCE(761);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(723);
      if (lookahead == 'T') ADVANCE(457);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(801);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(479);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(605);
      if (lookahead == 'Y') ADVANCE(645);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(546);
      if (lookahead == 'I') ADVANCE(291);
      if (lookahead == 'O') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(398);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(438);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(43);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(45);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(52);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(71);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(117);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(131);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(617);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(188);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(190);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(191);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(49);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(85);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(93);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(199);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(203);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(69);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(166);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(178);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(47);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(53);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(55);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(56);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(152);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(79);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(150);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(32);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(159);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(120);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(125);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(162);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(33);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(143);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(170);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(145);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(121);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(146);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(530);
      if (lookahead == 'I') ADVANCE(442);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(502);
      if (lookahead == 'L') ADVANCE(423);
      if (lookahead == 'N') ADVANCE(338);
      if (lookahead == 'T') ADVANCE(175);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(803);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(699);
      if (lookahead == 'L') ADVANCE(584);
      if (lookahead == 'O') ADVANCE(683);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(453);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(793);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(611);
      if (lookahead == 'G') ADVANCE(469);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(567);
      if (lookahead == 'H') ADVANCE(489);
      if (lookahead == 'I') ADVANCE(344);
      if (lookahead == 'R') ADVANCE(484);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(570);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(313);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(544);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'T') ADVANCE(467);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(702);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(276);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(800);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(548);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(277);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(704);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(771);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'P') ADVANCE(670);
      if (lookahead == 'S') ADVANCE(432);
      if (lookahead == 'T') ADVANCE(794);
      if (lookahead == 'W') ADVANCE(482);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(335);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(652);
      if (lookahead == 'L') ADVANCE(589);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(710);
      if (lookahead == 'U') ADVANCE(542);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(666);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(653);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(639);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(738);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(433);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(719);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(720);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(721);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(685);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(655);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(740);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(686);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(569);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(315);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(656);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(316);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(574);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(657);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(693);
      if (lookahead == 'I') ADVANCE(571);
      if (lookahead == 'O') ADVANCE(619);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(575);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(658);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(318);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(576);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(698);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(532);
      if (lookahead == 'U') ADVANCE(296);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(779);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(671);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(754);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(322);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(102);
      if (lookahead == 'M') ADVANCE(610);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(107);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(42);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(72);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(75);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(192);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(123);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(29);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(124);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(126);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(112);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(61);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(63);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(183);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(135);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(171);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(66);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(410);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(413);
      if (lookahead == 'L') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(415);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(525);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(70);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(201);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(200);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(80);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(264);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(517);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(776);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(535);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(701);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(283);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(299);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(594);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(445);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(549);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(308);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(309);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(508);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(562);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(320);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(632);
      if (lookahead == 'R') ADVANCE(485);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(564);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(634);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(578);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(635);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(565);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(566);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(724);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(722);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(739);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(774);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(595);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(420);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(597);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(523);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(598);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(317);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(599);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(694);
      if (lookahead == 'N') ADVANCE(342);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(600);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(745);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(746);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(749);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(778);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(62);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(421);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(111);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(172);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(194);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(391);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(44);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(109);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(41);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(195);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(57);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(99);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(54);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(142);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(797);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(505);
      if (lookahead == 'S') ADVANCE(351);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(582);
      if (lookahead == 'T') ADVANCE(472);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(802);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(506);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(513);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(395);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(470);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(474);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(399);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(363);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(365);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(367);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(385);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(436);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(527);
      if (lookahead == 'N') ADVANCE(689);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(692);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(695);
      if (lookahead == 'N') ADVANCE(345);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(281);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(429);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(67);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(83);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(163);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(158);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(73);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(628);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(355);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(596);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(357);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(366);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(279);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(424);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(515);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(115);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(141);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(187);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(37);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(275);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(167);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(40);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(197);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(97);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(50);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(74);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(90);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(455);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(447);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(314);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(448);
      if (lookahead == 'T') ADVANCE(637);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(449);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(760);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(450);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(451);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(452);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(332);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(333);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(334);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(707);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(709);
      if (lookahead == 'V') ADVANCE(286);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(711);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(715);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(732);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(734);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(718);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(271);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(624);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(323);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(324);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(101);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(274);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(88);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(302);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(798);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(630);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(443);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(536);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(321);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(616);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(538);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(511);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(633);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(550);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(553);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(341);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(554);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(555);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(556);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(557);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(641);
      if (lookahead == 'U') ADVANCE(580);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(642);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(643);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(592);
      if (lookahead == 'Y') ADVANCE(741);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(522);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(623);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(625);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(626);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(627);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(103);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(36);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(113);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(181);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(182);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(280);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(786);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(491);
      if (lookahead == 'S') ADVANCE(411);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(359);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(409);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(373);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(766);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(521);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(417);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(767);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(422);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(425);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(428);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(284);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(96);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(204);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(785);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(46);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(86);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(129);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(168);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(59);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(64);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(65);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(108);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(176);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(89);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(139);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(140);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(697);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(349);
      if (lookahead == 'T') ADVANCE(350);
      if (lookahead == 'V') ADVANCE(268);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(263);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(585);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(466);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(606);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(265);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(551);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(665);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(725);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(405);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(729);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(730);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(731);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(733);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(369);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == 'W') ADVANCE(669);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(382);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(383);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(465);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(650);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(602);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(775);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(603);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(419);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(495);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(607);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(667);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(496);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(608);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(497);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(609);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(498);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(30);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(48);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(28);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(174);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(104);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(202);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(759);
      if (lookahead == 'T') ADVANCE(581);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(678);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(679);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(688);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(353);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(587);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(706);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(360);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(361);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(362);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(408);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(412);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(378);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(381);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(486);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(435);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(98);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(134);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(796);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(122);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(132);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(169);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(186);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(51);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(87);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(106);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(151);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(165);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(60);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(137);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(148);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(173);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(196);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(77);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(118);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(160);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(153);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(154);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(155);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(144);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(458);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(459);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(792);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(621);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(352);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(648);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(788);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(789);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(790);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(681);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(791);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(682);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(471);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(462);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(640);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(752);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(364);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(431);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(370);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(371);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(372);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(375);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(377);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(379);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(380);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(400);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(384);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(737);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(768);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(480);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(481);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(753);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(488);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(490);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(492);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(494);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(295);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(537);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(297);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(708);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(651);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(358);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(636);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(713);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(717);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(661);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(744);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(526);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(579);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(84);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(356);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(368);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(374);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(288);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(427);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(289);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(430);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(133);
      if (lookahead == 'X') ADVANCE(703);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(672);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(674);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(622);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(705);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(39);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(94);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(149);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(82);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(76);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(38);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(91);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(799);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(680);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(620);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z') ADVANCE(376);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(343);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(136);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(386);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(454);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(540);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(468);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(434);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(478);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(804);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(806);
      if (lookahead == '\r') ADVANCE(806);
      if (lookahead == ' ') ADVANCE(806);
      if (lookahead == ':') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == 'R') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(808);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(808);
      if (lookahead != 0) ADVANCE(809);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(809);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ACCESS] = ACTIONS(1),
    [anon_sym_ADDRESSOF] = ACTIONS(1),
    [anon_sym_ALIAS] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_ATTRIBUTE] = ACTIONS(1),
    [anon_sym_APPACTIVATE] = ACTIONS(1),
    [anon_sym_APPEND] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_BEEP] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_BEGINPROPERTY] = ACTIONS(1),
    [anon_sym_BINARY] = ACTIONS(1),
    [anon_sym_BOOLEAN] = ACTIONS(1),
    [anon_sym_BYVAL] = ACTIONS(1),
    [anon_sym_BYREF] = ACTIONS(1),
    [anon_sym_BYTE] = ACTIONS(1),
    [anon_sym_CALL] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_CHDIR] = ACTIONS(1),
    [anon_sym_CHDRIVE] = ACTIONS(1),
    [anon_sym_CLASS] = ACTIONS(1),
    [anon_sym_CLOSE] = ACTIONS(1),
    [anon_sym_COLLECTION] = ACTIONS(1),
    [anon_sym_CONST] = ACTIONS(1),
    [anon_sym_DATE] = ACTIONS(1),
    [anon_sym_DECLARE] = ACTIONS(1),
    [anon_sym_DEFBOOL] = ACTIONS(1),
    [anon_sym_DEFBYTE] = ACTIONS(1),
    [anon_sym_DEFDATE] = ACTIONS(1),
    [anon_sym_DEFDBL] = ACTIONS(1),
    [anon_sym_DEFDEC] = ACTIONS(1),
    [anon_sym_DEFCUR] = ACTIONS(1),
    [anon_sym_DEFINT] = ACTIONS(1),
    [anon_sym_DEFLNG] = ACTIONS(1),
    [anon_sym_DEFOBJ] = ACTIONS(1),
    [anon_sym_DEFSNG] = ACTIONS(1),
    [anon_sym_DEFSTR] = ACTIONS(1),
    [anon_sym_DEFVAR] = ACTIONS(1),
    [anon_sym_DELETESETTING] = ACTIONS(1),
    [anon_sym_DIM] = ACTIONS(1),
    [anon_sym_DO] = ACTIONS(1),
    [anon_sym_DOUBLE] = ACTIONS(1),
    [anon_sym_EACH] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_END_ENUM] = ACTIONS(1),
    [anon_sym_END_FUNCTION] = ACTIONS(1),
    [anon_sym_END_IF] = ACTIONS(1),
    [anon_sym_END_PROPERTY] = ACTIONS(1),
    [anon_sym_END_SELECT] = ACTIONS(1),
    [anon_sym_END_SUB] = ACTIONS(1),
    [anon_sym_END_TYPE] = ACTIONS(1),
    [anon_sym_END_WITH] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_ENDPROPERTY] = ACTIONS(1),
    [anon_sym_ENUM] = ACTIONS(1),
    [anon_sym_EQV] = ACTIONS(1),
    [anon_sym_ERASE] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_EVENT] = ACTIONS(1),
    [anon_sym_EXIT_DO] = ACTIONS(1),
    [anon_sym_EXIT_FOR] = ACTIONS(1),
    [anon_sym_EXIT_FUNCTION] = ACTIONS(1),
    [anon_sym_EXIT_PROPERTY] = ACTIONS(1),
    [anon_sym_EXIT_SUB] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_FILECOPY] = ACTIONS(1),
    [anon_sym_FRIEND] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_FUNCTION] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_GLOBAL] = ACTIONS(1),
    [anon_sym_GOSUB] = ACTIONS(1),
    [anon_sym_GOTO] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_IMP] = ACTIONS(1),
    [anon_sym_IMPLEMENTS] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_INPUT] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_INTEGER] = ACTIONS(1),
    [anon_sym_KILL] = ACTIONS(1),
    [anon_sym_LOAD] = ACTIONS(1),
    [anon_sym_LOCK] = ACTIONS(1),
    [anon_sym_LONG] = ACTIONS(1),
    [anon_sym_LOOP] = ACTIONS(1),
    [anon_sym_LEN] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_LIB] = ACTIONS(1),
    [anon_sym_LIKE] = ACTIONS(1),
    [anon_sym_LINE_INPUT] = ACTIONS(1),
    [anon_sym_LOCK_READ] = ACTIONS(1),
    [anon_sym_LOCK_WRITE] = ACTIONS(1),
    [anon_sym_LOCK_READ_WRITE] = ACTIONS(1),
    [anon_sym_LSET] = ACTIONS(1),
    [anon_sym_MACRO_IF] = ACTIONS(1),
    [anon_sym_MACRO_ELSEIF] = ACTIONS(1),
    [anon_sym_MACRO_ELSE] = ACTIONS(1),
    [anon_sym_MACRO_END_IF] = ACTIONS(1),
    [anon_sym_ME] = ACTIONS(1),
    [anon_sym_MID] = ACTIONS(1),
    [anon_sym_MKDIR] = ACTIONS(1),
    [anon_sym_MOD] = ACTIONS(1),
    [anon_sym_NAME] = ACTIONS(1),
    [anon_sym_NEXT] = ACTIONS(1),
    [anon_sym_NEW] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_NOTHING] = ACTIONS(1),
    [anon_sym_NULL_] = ACTIONS(1),
    [anon_sym_OBJECT] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_ON_ERROR] = ACTIONS(1),
    [anon_sym_ON_LOCAL_ERROR] = ACTIONS(1),
    [anon_sym_OPEN] = ACTIONS(1),
    [anon_sym_OPTIONAL] = ACTIONS(1),
    [anon_sym_OPTION_BASE] = ACTIONS(1),
    [anon_sym_OPTION_EXPLICIT] = ACTIONS(1),
    [anon_sym_OPTION_COMPARE] = ACTIONS(1),
    [anon_sym_OPTION_PRIVATE_MODULE] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_OUTPUT] = ACTIONS(1),
    [anon_sym_PARAMARRAY] = ACTIONS(1),
    [anon_sym_PRESERVE] = ACTIONS(1),
    [anon_sym_PRINT] = ACTIONS(1),
    [anon_sym_PRIVATE] = ACTIONS(1),
    [anon_sym_PROPERTY_GET] = ACTIONS(1),
    [anon_sym_PROPERTY_LET] = ACTIONS(1),
    [anon_sym_PROPERTY_SET] = ACTIONS(1),
    [anon_sym_PUBLIC] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_RANDOM] = ACTIONS(1),
    [anon_sym_RANDOMIZE] = ACTIONS(1),
    [anon_sym_RAISEEVENT] = ACTIONS(1),
    [anon_sym_READ] = ACTIONS(1),
    [anon_sym_READ_WRITE] = ACTIONS(1),
    [anon_sym_REDIM] = ACTIONS(1),
    [anon_sym_REM] = ACTIONS(1),
    [anon_sym_RESET] = ACTIONS(1),
    [anon_sym_RESUME] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_RMDIR] = ACTIONS(1),
    [anon_sym_RSET] = ACTIONS(1),
    [anon_sym_SAVEPICTURE] = ACTIONS(1),
    [anon_sym_SAVESETTING] = ACTIONS(1),
    [anon_sym_SEEK] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_SENDKEYS] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_SETATTR] = ACTIONS(1),
    [anon_sym_SHARED] = ACTIONS(1),
    [anon_sym_SINGLE] = ACTIONS(1),
    [anon_sym_SPC] = ACTIONS(1),
    [anon_sym_STATIC] = ACTIONS(1),
    [anon_sym_STEP] = ACTIONS(1),
    [anon_sym_STOP] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_TEXT] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_TIME] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_TYPE] = ACTIONS(1),
    [anon_sym_TYPEOF] = ACTIONS(1),
    [anon_sym_UNLOAD] = ACTIONS(1),
    [anon_sym_UNLOCK] = ACTIONS(1),
    [anon_sym_UNTIL] = ACTIONS(1),
    [anon_sym_VARIANT] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_WEND] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_WIDTH] = ACTIONS(1),
    [anon_sym_WITH] = ACTIONS(1),
    [anon_sym_WITHEVENTS] = ACTIONS(1),
    [anon_sym_WRITE] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_date_literal] = ACTIONS(1),
    [sym_color_literal] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_double_literal] = ACTIONS(1),
    [sym_file_number] = ACTIONS(1),
    [sym_octal_literal] = ACTIONS(1),
    [sym_frx_offset] = ACTIONS(1),
    [sym_guid] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [sym_newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym__statement] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ACCESS] = ACTIONS(7),
    [anon_sym_ADDRESSOF] = ACTIONS(7),
    [anon_sym_ALIAS] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(7),
    [anon_sym_ATTRIBUTE] = ACTIONS(7),
    [anon_sym_APPACTIVATE] = ACTIONS(7),
    [anon_sym_APPEND] = ACTIONS(7),
    [anon_sym_AS] = ACTIONS(7),
    [anon_sym_BEEP] = ACTIONS(7),
    [anon_sym_BEGIN] = ACTIONS(7),
    [anon_sym_BEGINPROPERTY] = ACTIONS(7),
    [anon_sym_BINARY] = ACTIONS(7),
    [anon_sym_BOOLEAN] = ACTIONS(7),
    [anon_sym_BYVAL] = ACTIONS(7),
    [anon_sym_BYREF] = ACTIONS(7),
    [anon_sym_BYTE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_CASE] = ACTIONS(7),
    [anon_sym_CHDIR] = ACTIONS(7),
    [anon_sym_CHDRIVE] = ACTIONS(7),
    [anon_sym_CLASS] = ACTIONS(7),
    [anon_sym_CLOSE] = ACTIONS(7),
    [anon_sym_COLLECTION] = ACTIONS(7),
    [anon_sym_CONST] = ACTIONS(7),
    [anon_sym_DATE] = ACTIONS(7),
    [anon_sym_DECLARE] = ACTIONS(7),
    [anon_sym_DEFBOOL] = ACTIONS(7),
    [anon_sym_DEFBYTE] = ACTIONS(7),
    [anon_sym_DEFDATE] = ACTIONS(7),
    [anon_sym_DEFDBL] = ACTIONS(7),
    [anon_sym_DEFDEC] = ACTIONS(7),
    [anon_sym_DEFCUR] = ACTIONS(7),
    [anon_sym_DEFINT] = ACTIONS(7),
    [anon_sym_DEFLNG] = ACTIONS(7),
    [anon_sym_DEFOBJ] = ACTIONS(7),
    [anon_sym_DEFSNG] = ACTIONS(7),
    [anon_sym_DEFSTR] = ACTIONS(7),
    [anon_sym_DEFVAR] = ACTIONS(7),
    [anon_sym_DELETESETTING] = ACTIONS(7),
    [anon_sym_DIM] = ACTIONS(7),
    [anon_sym_DO] = ACTIONS(7),
    [anon_sym_DOUBLE] = ACTIONS(7),
    [anon_sym_EACH] = ACTIONS(7),
    [anon_sym_ELSE] = ACTIONS(7),
    [anon_sym_ELSEIF] = ACTIONS(7),
    [anon_sym_END_ENUM] = ACTIONS(7),
    [anon_sym_END_FUNCTION] = ACTIONS(7),
    [anon_sym_END_IF] = ACTIONS(7),
    [anon_sym_END_PROPERTY] = ACTIONS(7),
    [anon_sym_END_SELECT] = ACTIONS(7),
    [anon_sym_END_SUB] = ACTIONS(7),
    [anon_sym_END_TYPE] = ACTIONS(7),
    [anon_sym_END_WITH] = ACTIONS(7),
    [anon_sym_END] = ACTIONS(7),
    [anon_sym_ENDPROPERTY] = ACTIONS(7),
    [anon_sym_ENUM] = ACTIONS(7),
    [anon_sym_EQV] = ACTIONS(7),
    [anon_sym_ERASE] = ACTIONS(7),
    [anon_sym_ERROR] = ACTIONS(7),
    [anon_sym_EVENT] = ACTIONS(7),
    [anon_sym_EXIT_DO] = ACTIONS(7),
    [anon_sym_EXIT_FOR] = ACTIONS(7),
    [anon_sym_EXIT_FUNCTION] = ACTIONS(7),
    [anon_sym_EXIT_PROPERTY] = ACTIONS(7),
    [anon_sym_EXIT_SUB] = ACTIONS(7),
    [anon_sym_FALSE] = ACTIONS(7),
    [anon_sym_FILECOPY] = ACTIONS(7),
    [anon_sym_FRIEND] = ACTIONS(7),
    [anon_sym_FOR] = ACTIONS(7),
    [anon_sym_FUNCTION] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_GLOBAL] = ACTIONS(7),
    [anon_sym_GOSUB] = ACTIONS(7),
    [anon_sym_GOTO] = ACTIONS(7),
    [anon_sym_IF] = ACTIONS(7),
    [anon_sym_IMP] = ACTIONS(7),
    [anon_sym_IMPLEMENTS] = ACTIONS(7),
    [anon_sym_IN] = ACTIONS(7),
    [anon_sym_INPUT] = ACTIONS(7),
    [anon_sym_IS] = ACTIONS(7),
    [anon_sym_INTEGER] = ACTIONS(7),
    [anon_sym_KILL] = ACTIONS(7),
    [anon_sym_LOAD] = ACTIONS(7),
    [anon_sym_LOCK] = ACTIONS(7),
    [anon_sym_LONG] = ACTIONS(7),
    [anon_sym_LOOP] = ACTIONS(7),
    [anon_sym_LEN] = ACTIONS(7),
    [anon_sym_LET] = ACTIONS(7),
    [anon_sym_LIB] = ACTIONS(7),
    [anon_sym_LIKE] = ACTIONS(7),
    [anon_sym_LINE_INPUT] = ACTIONS(7),
    [anon_sym_LOCK_READ] = ACTIONS(7),
    [anon_sym_LOCK_WRITE] = ACTIONS(7),
    [anon_sym_LOCK_READ_WRITE] = ACTIONS(7),
    [anon_sym_LSET] = ACTIONS(7),
    [anon_sym_MACRO_IF] = ACTIONS(7),
    [anon_sym_MACRO_ELSEIF] = ACTIONS(7),
    [anon_sym_MACRO_ELSE] = ACTIONS(7),
    [anon_sym_MACRO_END_IF] = ACTIONS(7),
    [anon_sym_ME] = ACTIONS(7),
    [anon_sym_MID] = ACTIONS(7),
    [anon_sym_MKDIR] = ACTIONS(7),
    [anon_sym_MOD] = ACTIONS(7),
    [anon_sym_NAME] = ACTIONS(7),
    [anon_sym_NEXT] = ACTIONS(7),
    [anon_sym_NEW] = ACTIONS(7),
    [anon_sym_NOT] = ACTIONS(7),
    [anon_sym_NOTHING] = ACTIONS(7),
    [anon_sym_NULL_] = ACTIONS(7),
    [anon_sym_OBJECT] = ACTIONS(7),
    [anon_sym_ON] = ACTIONS(7),
    [anon_sym_ON_ERROR] = ACTIONS(7),
    [anon_sym_ON_LOCAL_ERROR] = ACTIONS(7),
    [anon_sym_OPEN] = ACTIONS(7),
    [anon_sym_OPTIONAL] = ACTIONS(7),
    [anon_sym_OPTION_BASE] = ACTIONS(7),
    [anon_sym_OPTION_EXPLICIT] = ACTIONS(7),
    [anon_sym_OPTION_COMPARE] = ACTIONS(7),
    [anon_sym_OPTION_PRIVATE_MODULE] = ACTIONS(7),
    [anon_sym_OR] = ACTIONS(7),
    [anon_sym_OUTPUT] = ACTIONS(7),
    [anon_sym_PARAMARRAY] = ACTIONS(7),
    [anon_sym_PRESERVE] = ACTIONS(7),
    [anon_sym_PRINT] = ACTIONS(7),
    [anon_sym_PRIVATE] = ACTIONS(7),
    [anon_sym_PROPERTY_GET] = ACTIONS(7),
    [anon_sym_PROPERTY_LET] = ACTIONS(7),
    [anon_sym_PROPERTY_SET] = ACTIONS(7),
    [anon_sym_PUBLIC] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_RANDOM] = ACTIONS(7),
    [anon_sym_RANDOMIZE] = ACTIONS(7),
    [anon_sym_RAISEEVENT] = ACTIONS(7),
    [anon_sym_READ] = ACTIONS(7),
    [anon_sym_READ_WRITE] = ACTIONS(7),
    [anon_sym_REDIM] = ACTIONS(7),
    [anon_sym_REM] = ACTIONS(7),
    [anon_sym_RESET] = ACTIONS(7),
    [anon_sym_RESUME] = ACTIONS(7),
    [anon_sym_RETURN] = ACTIONS(7),
    [anon_sym_RMDIR] = ACTIONS(7),
    [anon_sym_RSET] = ACTIONS(7),
    [anon_sym_SAVEPICTURE] = ACTIONS(7),
    [anon_sym_SAVESETTING] = ACTIONS(7),
    [anon_sym_SEEK] = ACTIONS(7),
    [anon_sym_SELECT] = ACTIONS(7),
    [anon_sym_SENDKEYS] = ACTIONS(7),
    [anon_sym_SET] = ACTIONS(7),
    [anon_sym_SETATTR] = ACTIONS(7),
    [anon_sym_SHARED] = ACTIONS(7),
    [anon_sym_SINGLE] = ACTIONS(7),
    [anon_sym_SPC] = ACTIONS(7),
    [anon_sym_STATIC] = ACTIONS(7),
    [anon_sym_STEP] = ACTIONS(7),
    [anon_sym_STOP] = ACTIONS(7),
    [anon_sym_STRING] = ACTIONS(7),
    [anon_sym_SUB] = ACTIONS(7),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_TEXT] = ACTIONS(7),
    [anon_sym_THEN] = ACTIONS(7),
    [anon_sym_TIME] = ACTIONS(7),
    [anon_sym_TO] = ACTIONS(7),
    [anon_sym_TRUE] = ACTIONS(7),
    [anon_sym_TYPE] = ACTIONS(7),
    [anon_sym_TYPEOF] = ACTIONS(7),
    [anon_sym_UNLOAD] = ACTIONS(7),
    [anon_sym_UNLOCK] = ACTIONS(7),
    [anon_sym_UNTIL] = ACTIONS(7),
    [anon_sym_VARIANT] = ACTIONS(7),
    [anon_sym_VERSION] = ACTIONS(7),
    [anon_sym_WEND] = ACTIONS(7),
    [anon_sym_WHILE] = ACTIONS(7),
    [anon_sym_WIDTH] = ACTIONS(7),
    [anon_sym_WITH] = ACTIONS(7),
    [anon_sym_WITHEVENTS] = ACTIONS(7),
    [anon_sym_WRITE] = ACTIONS(7),
    [anon_sym_XOR] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_COLON_EQ] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [sym_string_literal] = ACTIONS(11),
    [sym_date_literal] = ACTIONS(11),
    [sym_color_literal] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(11),
    [sym_double_literal] = ACTIONS(11),
    [sym_file_number] = ACTIONS(11),
    [sym_octal_literal] = ACTIONS(11),
    [sym_frx_offset] = ACTIONS(11),
    [sym_guid] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_line_continuation] = ACTIONS(3),
    [sym_newline] = ACTIONS(13),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_literal] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_ACCESS] = ACTIONS(7),
    [anon_sym_ADDRESSOF] = ACTIONS(7),
    [anon_sym_ALIAS] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(7),
    [anon_sym_ATTRIBUTE] = ACTIONS(7),
    [anon_sym_APPACTIVATE] = ACTIONS(7),
    [anon_sym_APPEND] = ACTIONS(7),
    [anon_sym_AS] = ACTIONS(7),
    [anon_sym_BEEP] = ACTIONS(7),
    [anon_sym_BEGIN] = ACTIONS(7),
    [anon_sym_BEGINPROPERTY] = ACTIONS(7),
    [anon_sym_BINARY] = ACTIONS(7),
    [anon_sym_BOOLEAN] = ACTIONS(7),
    [anon_sym_BYVAL] = ACTIONS(7),
    [anon_sym_BYREF] = ACTIONS(7),
    [anon_sym_BYTE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_CASE] = ACTIONS(7),
    [anon_sym_CHDIR] = ACTIONS(7),
    [anon_sym_CHDRIVE] = ACTIONS(7),
    [anon_sym_CLASS] = ACTIONS(7),
    [anon_sym_CLOSE] = ACTIONS(7),
    [anon_sym_COLLECTION] = ACTIONS(7),
    [anon_sym_CONST] = ACTIONS(7),
    [anon_sym_DATE] = ACTIONS(7),
    [anon_sym_DECLARE] = ACTIONS(7),
    [anon_sym_DEFBOOL] = ACTIONS(7),
    [anon_sym_DEFBYTE] = ACTIONS(7),
    [anon_sym_DEFDATE] = ACTIONS(7),
    [anon_sym_DEFDBL] = ACTIONS(7),
    [anon_sym_DEFDEC] = ACTIONS(7),
    [anon_sym_DEFCUR] = ACTIONS(7),
    [anon_sym_DEFINT] = ACTIONS(7),
    [anon_sym_DEFLNG] = ACTIONS(7),
    [anon_sym_DEFOBJ] = ACTIONS(7),
    [anon_sym_DEFSNG] = ACTIONS(7),
    [anon_sym_DEFSTR] = ACTIONS(7),
    [anon_sym_DEFVAR] = ACTIONS(7),
    [anon_sym_DELETESETTING] = ACTIONS(7),
    [anon_sym_DIM] = ACTIONS(7),
    [anon_sym_DO] = ACTIONS(7),
    [anon_sym_DOUBLE] = ACTIONS(7),
    [anon_sym_EACH] = ACTIONS(7),
    [anon_sym_ELSE] = ACTIONS(7),
    [anon_sym_ELSEIF] = ACTIONS(7),
    [anon_sym_END_ENUM] = ACTIONS(7),
    [anon_sym_END_FUNCTION] = ACTIONS(7),
    [anon_sym_END_IF] = ACTIONS(7),
    [anon_sym_END_PROPERTY] = ACTIONS(7),
    [anon_sym_END_SELECT] = ACTIONS(7),
    [anon_sym_END_SUB] = ACTIONS(7),
    [anon_sym_END_TYPE] = ACTIONS(7),
    [anon_sym_END_WITH] = ACTIONS(7),
    [anon_sym_END] = ACTIONS(7),
    [anon_sym_ENDPROPERTY] = ACTIONS(7),
    [anon_sym_ENUM] = ACTIONS(7),
    [anon_sym_EQV] = ACTIONS(7),
    [anon_sym_ERASE] = ACTIONS(7),
    [anon_sym_ERROR] = ACTIONS(7),
    [anon_sym_EVENT] = ACTIONS(7),
    [anon_sym_EXIT_DO] = ACTIONS(7),
    [anon_sym_EXIT_FOR] = ACTIONS(7),
    [anon_sym_EXIT_FUNCTION] = ACTIONS(7),
    [anon_sym_EXIT_PROPERTY] = ACTIONS(7),
    [anon_sym_EXIT_SUB] = ACTIONS(7),
    [anon_sym_FALSE] = ACTIONS(7),
    [anon_sym_FILECOPY] = ACTIONS(7),
    [anon_sym_FRIEND] = ACTIONS(7),
    [anon_sym_FOR] = ACTIONS(7),
    [anon_sym_FUNCTION] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_GLOBAL] = ACTIONS(7),
    [anon_sym_GOSUB] = ACTIONS(7),
    [anon_sym_GOTO] = ACTIONS(7),
    [anon_sym_IF] = ACTIONS(7),
    [anon_sym_IMP] = ACTIONS(7),
    [anon_sym_IMPLEMENTS] = ACTIONS(7),
    [anon_sym_IN] = ACTIONS(7),
    [anon_sym_INPUT] = ACTIONS(7),
    [anon_sym_IS] = ACTIONS(7),
    [anon_sym_INTEGER] = ACTIONS(7),
    [anon_sym_KILL] = ACTIONS(7),
    [anon_sym_LOAD] = ACTIONS(7),
    [anon_sym_LOCK] = ACTIONS(7),
    [anon_sym_LONG] = ACTIONS(7),
    [anon_sym_LOOP] = ACTIONS(7),
    [anon_sym_LEN] = ACTIONS(7),
    [anon_sym_LET] = ACTIONS(7),
    [anon_sym_LIB] = ACTIONS(7),
    [anon_sym_LIKE] = ACTIONS(7),
    [anon_sym_LINE_INPUT] = ACTIONS(7),
    [anon_sym_LOCK_READ] = ACTIONS(7),
    [anon_sym_LOCK_WRITE] = ACTIONS(7),
    [anon_sym_LOCK_READ_WRITE] = ACTIONS(7),
    [anon_sym_LSET] = ACTIONS(7),
    [anon_sym_MACRO_IF] = ACTIONS(7),
    [anon_sym_MACRO_ELSEIF] = ACTIONS(7),
    [anon_sym_MACRO_ELSE] = ACTIONS(7),
    [anon_sym_MACRO_END_IF] = ACTIONS(7),
    [anon_sym_ME] = ACTIONS(7),
    [anon_sym_MID] = ACTIONS(7),
    [anon_sym_MKDIR] = ACTIONS(7),
    [anon_sym_MOD] = ACTIONS(7),
    [anon_sym_NAME] = ACTIONS(7),
    [anon_sym_NEXT] = ACTIONS(7),
    [anon_sym_NEW] = ACTIONS(7),
    [anon_sym_NOT] = ACTIONS(7),
    [anon_sym_NOTHING] = ACTIONS(7),
    [anon_sym_NULL_] = ACTIONS(7),
    [anon_sym_OBJECT] = ACTIONS(7),
    [anon_sym_ON] = ACTIONS(7),
    [anon_sym_ON_ERROR] = ACTIONS(7),
    [anon_sym_ON_LOCAL_ERROR] = ACTIONS(7),
    [anon_sym_OPEN] = ACTIONS(7),
    [anon_sym_OPTIONAL] = ACTIONS(7),
    [anon_sym_OPTION_BASE] = ACTIONS(7),
    [anon_sym_OPTION_EXPLICIT] = ACTIONS(7),
    [anon_sym_OPTION_COMPARE] = ACTIONS(7),
    [anon_sym_OPTION_PRIVATE_MODULE] = ACTIONS(7),
    [anon_sym_OR] = ACTIONS(7),
    [anon_sym_OUTPUT] = ACTIONS(7),
    [anon_sym_PARAMARRAY] = ACTIONS(7),
    [anon_sym_PRESERVE] = ACTIONS(7),
    [anon_sym_PRINT] = ACTIONS(7),
    [anon_sym_PRIVATE] = ACTIONS(7),
    [anon_sym_PROPERTY_GET] = ACTIONS(7),
    [anon_sym_PROPERTY_LET] = ACTIONS(7),
    [anon_sym_PROPERTY_SET] = ACTIONS(7),
    [anon_sym_PUBLIC] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_RANDOM] = ACTIONS(7),
    [anon_sym_RANDOMIZE] = ACTIONS(7),
    [anon_sym_RAISEEVENT] = ACTIONS(7),
    [anon_sym_READ] = ACTIONS(7),
    [anon_sym_READ_WRITE] = ACTIONS(7),
    [anon_sym_REDIM] = ACTIONS(7),
    [anon_sym_REM] = ACTIONS(7),
    [anon_sym_RESET] = ACTIONS(7),
    [anon_sym_RESUME] = ACTIONS(7),
    [anon_sym_RETURN] = ACTIONS(7),
    [anon_sym_RMDIR] = ACTIONS(7),
    [anon_sym_RSET] = ACTIONS(7),
    [anon_sym_SAVEPICTURE] = ACTIONS(7),
    [anon_sym_SAVESETTING] = ACTIONS(7),
    [anon_sym_SEEK] = ACTIONS(7),
    [anon_sym_SELECT] = ACTIONS(7),
    [anon_sym_SENDKEYS] = ACTIONS(7),
    [anon_sym_SET] = ACTIONS(7),
    [anon_sym_SETATTR] = ACTIONS(7),
    [anon_sym_SHARED] = ACTIONS(7),
    [anon_sym_SINGLE] = ACTIONS(7),
    [anon_sym_SPC] = ACTIONS(7),
    [anon_sym_STATIC] = ACTIONS(7),
    [anon_sym_STEP] = ACTIONS(7),
    [anon_sym_STOP] = ACTIONS(7),
    [anon_sym_STRING] = ACTIONS(7),
    [anon_sym_SUB] = ACTIONS(7),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_TEXT] = ACTIONS(7),
    [anon_sym_THEN] = ACTIONS(7),
    [anon_sym_TIME] = ACTIONS(7),
    [anon_sym_TO] = ACTIONS(7),
    [anon_sym_TRUE] = ACTIONS(7),
    [anon_sym_TYPE] = ACTIONS(7),
    [anon_sym_TYPEOF] = ACTIONS(7),
    [anon_sym_UNLOAD] = ACTIONS(7),
    [anon_sym_UNLOCK] = ACTIONS(7),
    [anon_sym_UNTIL] = ACTIONS(7),
    [anon_sym_VARIANT] = ACTIONS(7),
    [anon_sym_VERSION] = ACTIONS(7),
    [anon_sym_WEND] = ACTIONS(7),
    [anon_sym_WHILE] = ACTIONS(7),
    [anon_sym_WIDTH] = ACTIONS(7),
    [anon_sym_WITH] = ACTIONS(7),
    [anon_sym_WITHEVENTS] = ACTIONS(7),
    [anon_sym_WRITE] = ACTIONS(7),
    [anon_sym_XOR] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_COLON_EQ] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [sym_string_literal] = ACTIONS(11),
    [sym_date_literal] = ACTIONS(11),
    [sym_color_literal] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(11),
    [sym_double_literal] = ACTIONS(11),
    [sym_file_number] = ACTIONS(11),
    [sym_octal_literal] = ACTIONS(11),
    [sym_frx_offset] = ACTIONS(11),
    [sym_guid] = ACTIONS(11),
    [sym_identifier] = ACTIONS(17),
    [sym_line_continuation] = ACTIONS(3),
    [sym_newline] = ACTIONS(17),
    [sym_comment] = ACTIONS(17),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_literal] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_ACCESS] = ACTIONS(21),
    [anon_sym_ADDRESSOF] = ACTIONS(21),
    [anon_sym_ALIAS] = ACTIONS(21),
    [anon_sym_AND] = ACTIONS(21),
    [anon_sym_ATTRIBUTE] = ACTIONS(21),
    [anon_sym_APPACTIVATE] = ACTIONS(21),
    [anon_sym_APPEND] = ACTIONS(21),
    [anon_sym_AS] = ACTIONS(21),
    [anon_sym_BEEP] = ACTIONS(21),
    [anon_sym_BEGIN] = ACTIONS(21),
    [anon_sym_BEGINPROPERTY] = ACTIONS(21),
    [anon_sym_BINARY] = ACTIONS(21),
    [anon_sym_BOOLEAN] = ACTIONS(21),
    [anon_sym_BYVAL] = ACTIONS(21),
    [anon_sym_BYREF] = ACTIONS(21),
    [anon_sym_BYTE] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_CASE] = ACTIONS(21),
    [anon_sym_CHDIR] = ACTIONS(21),
    [anon_sym_CHDRIVE] = ACTIONS(21),
    [anon_sym_CLASS] = ACTIONS(21),
    [anon_sym_CLOSE] = ACTIONS(21),
    [anon_sym_COLLECTION] = ACTIONS(21),
    [anon_sym_CONST] = ACTIONS(21),
    [anon_sym_DATE] = ACTIONS(21),
    [anon_sym_DECLARE] = ACTIONS(21),
    [anon_sym_DEFBOOL] = ACTIONS(21),
    [anon_sym_DEFBYTE] = ACTIONS(21),
    [anon_sym_DEFDATE] = ACTIONS(21),
    [anon_sym_DEFDBL] = ACTIONS(21),
    [anon_sym_DEFDEC] = ACTIONS(21),
    [anon_sym_DEFCUR] = ACTIONS(21),
    [anon_sym_DEFINT] = ACTIONS(21),
    [anon_sym_DEFLNG] = ACTIONS(21),
    [anon_sym_DEFOBJ] = ACTIONS(21),
    [anon_sym_DEFSNG] = ACTIONS(21),
    [anon_sym_DEFSTR] = ACTIONS(21),
    [anon_sym_DEFVAR] = ACTIONS(21),
    [anon_sym_DELETESETTING] = ACTIONS(21),
    [anon_sym_DIM] = ACTIONS(21),
    [anon_sym_DO] = ACTIONS(21),
    [anon_sym_DOUBLE] = ACTIONS(21),
    [anon_sym_EACH] = ACTIONS(21),
    [anon_sym_ELSE] = ACTIONS(21),
    [anon_sym_ELSEIF] = ACTIONS(21),
    [anon_sym_END_ENUM] = ACTIONS(21),
    [anon_sym_END_FUNCTION] = ACTIONS(21),
    [anon_sym_END_IF] = ACTIONS(21),
    [anon_sym_END_PROPERTY] = ACTIONS(21),
    [anon_sym_END_SELECT] = ACTIONS(21),
    [anon_sym_END_SUB] = ACTIONS(21),
    [anon_sym_END_TYPE] = ACTIONS(21),
    [anon_sym_END_WITH] = ACTIONS(21),
    [anon_sym_END] = ACTIONS(21),
    [anon_sym_ENDPROPERTY] = ACTIONS(21),
    [anon_sym_ENUM] = ACTIONS(21),
    [anon_sym_EQV] = ACTIONS(21),
    [anon_sym_ERASE] = ACTIONS(21),
    [anon_sym_ERROR] = ACTIONS(21),
    [anon_sym_EVENT] = ACTIONS(21),
    [anon_sym_EXIT_DO] = ACTIONS(21),
    [anon_sym_EXIT_FOR] = ACTIONS(21),
    [anon_sym_EXIT_FUNCTION] = ACTIONS(21),
    [anon_sym_EXIT_PROPERTY] = ACTIONS(21),
    [anon_sym_EXIT_SUB] = ACTIONS(21),
    [anon_sym_FALSE] = ACTIONS(21),
    [anon_sym_FILECOPY] = ACTIONS(21),
    [anon_sym_FRIEND] = ACTIONS(21),
    [anon_sym_FOR] = ACTIONS(21),
    [anon_sym_FUNCTION] = ACTIONS(21),
    [anon_sym_GET] = ACTIONS(21),
    [anon_sym_GLOBAL] = ACTIONS(21),
    [anon_sym_GOSUB] = ACTIONS(21),
    [anon_sym_GOTO] = ACTIONS(21),
    [anon_sym_IF] = ACTIONS(21),
    [anon_sym_IMP] = ACTIONS(21),
    [anon_sym_IMPLEMENTS] = ACTIONS(21),
    [anon_sym_IN] = ACTIONS(21),
    [anon_sym_INPUT] = ACTIONS(21),
    [anon_sym_IS] = ACTIONS(21),
    [anon_sym_INTEGER] = ACTIONS(21),
    [anon_sym_KILL] = ACTIONS(21),
    [anon_sym_LOAD] = ACTIONS(21),
    [anon_sym_LOCK] = ACTIONS(21),
    [anon_sym_LONG] = ACTIONS(21),
    [anon_sym_LOOP] = ACTIONS(21),
    [anon_sym_LEN] = ACTIONS(21),
    [anon_sym_LET] = ACTIONS(21),
    [anon_sym_LIB] = ACTIONS(21),
    [anon_sym_LIKE] = ACTIONS(21),
    [anon_sym_LINE_INPUT] = ACTIONS(21),
    [anon_sym_LOCK_READ] = ACTIONS(21),
    [anon_sym_LOCK_WRITE] = ACTIONS(21),
    [anon_sym_LOCK_READ_WRITE] = ACTIONS(21),
    [anon_sym_LSET] = ACTIONS(21),
    [anon_sym_MACRO_IF] = ACTIONS(21),
    [anon_sym_MACRO_ELSEIF] = ACTIONS(21),
    [anon_sym_MACRO_ELSE] = ACTIONS(21),
    [anon_sym_MACRO_END_IF] = ACTIONS(21),
    [anon_sym_ME] = ACTIONS(21),
    [anon_sym_MID] = ACTIONS(21),
    [anon_sym_MKDIR] = ACTIONS(21),
    [anon_sym_MOD] = ACTIONS(21),
    [anon_sym_NAME] = ACTIONS(21),
    [anon_sym_NEXT] = ACTIONS(21),
    [anon_sym_NEW] = ACTIONS(21),
    [anon_sym_NOT] = ACTIONS(21),
    [anon_sym_NOTHING] = ACTIONS(21),
    [anon_sym_NULL_] = ACTIONS(21),
    [anon_sym_OBJECT] = ACTIONS(21),
    [anon_sym_ON] = ACTIONS(21),
    [anon_sym_ON_ERROR] = ACTIONS(21),
    [anon_sym_ON_LOCAL_ERROR] = ACTIONS(21),
    [anon_sym_OPEN] = ACTIONS(21),
    [anon_sym_OPTIONAL] = ACTIONS(21),
    [anon_sym_OPTION_BASE] = ACTIONS(21),
    [anon_sym_OPTION_EXPLICIT] = ACTIONS(21),
    [anon_sym_OPTION_COMPARE] = ACTIONS(21),
    [anon_sym_OPTION_PRIVATE_MODULE] = ACTIONS(21),
    [anon_sym_OR] = ACTIONS(21),
    [anon_sym_OUTPUT] = ACTIONS(21),
    [anon_sym_PARAMARRAY] = ACTIONS(21),
    [anon_sym_PRESERVE] = ACTIONS(21),
    [anon_sym_PRINT] = ACTIONS(21),
    [anon_sym_PRIVATE] = ACTIONS(21),
    [anon_sym_PROPERTY_GET] = ACTIONS(21),
    [anon_sym_PROPERTY_LET] = ACTIONS(21),
    [anon_sym_PROPERTY_SET] = ACTIONS(21),
    [anon_sym_PUBLIC] = ACTIONS(21),
    [anon_sym_PUT] = ACTIONS(21),
    [anon_sym_RANDOM] = ACTIONS(21),
    [anon_sym_RANDOMIZE] = ACTIONS(21),
    [anon_sym_RAISEEVENT] = ACTIONS(21),
    [anon_sym_READ] = ACTIONS(21),
    [anon_sym_READ_WRITE] = ACTIONS(21),
    [anon_sym_REDIM] = ACTIONS(21),
    [anon_sym_REM] = ACTIONS(21),
    [anon_sym_RESET] = ACTIONS(21),
    [anon_sym_RESUME] = ACTIONS(21),
    [anon_sym_RETURN] = ACTIONS(21),
    [anon_sym_RMDIR] = ACTIONS(21),
    [anon_sym_RSET] = ACTIONS(21),
    [anon_sym_SAVEPICTURE] = ACTIONS(21),
    [anon_sym_SAVESETTING] = ACTIONS(21),
    [anon_sym_SEEK] = ACTIONS(21),
    [anon_sym_SELECT] = ACTIONS(21),
    [anon_sym_SENDKEYS] = ACTIONS(21),
    [anon_sym_SET] = ACTIONS(21),
    [anon_sym_SETATTR] = ACTIONS(21),
    [anon_sym_SHARED] = ACTIONS(21),
    [anon_sym_SINGLE] = ACTIONS(21),
    [anon_sym_SPC] = ACTIONS(21),
    [anon_sym_STATIC] = ACTIONS(21),
    [anon_sym_STEP] = ACTIONS(21),
    [anon_sym_STOP] = ACTIONS(21),
    [anon_sym_STRING] = ACTIONS(21),
    [anon_sym_SUB] = ACTIONS(21),
    [anon_sym_TAB] = ACTIONS(21),
    [anon_sym_TEXT] = ACTIONS(21),
    [anon_sym_THEN] = ACTIONS(21),
    [anon_sym_TIME] = ACTIONS(21),
    [anon_sym_TO] = ACTIONS(21),
    [anon_sym_TRUE] = ACTIONS(21),
    [anon_sym_TYPE] = ACTIONS(21),
    [anon_sym_TYPEOF] = ACTIONS(21),
    [anon_sym_UNLOAD] = ACTIONS(21),
    [anon_sym_UNLOCK] = ACTIONS(21),
    [anon_sym_UNTIL] = ACTIONS(21),
    [anon_sym_VARIANT] = ACTIONS(21),
    [anon_sym_VERSION] = ACTIONS(21),
    [anon_sym_WEND] = ACTIONS(21),
    [anon_sym_WHILE] = ACTIONS(21),
    [anon_sym_WIDTH] = ACTIONS(21),
    [anon_sym_WITH] = ACTIONS(21),
    [anon_sym_WITHEVENTS] = ACTIONS(21),
    [anon_sym_WRITE] = ACTIONS(21),
    [anon_sym_XOR] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(24),
    [anon_sym_COLON_EQ] = ACTIONS(24),
    [anon_sym_AT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_COMMA] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_SLASH] = ACTIONS(24),
    [anon_sym_DOLLAR] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_GT_EQ] = ACTIONS(24),
    [anon_sym_GT] = ACTIONS(24),
    [anon_sym_POUND] = ACTIONS(24),
    [anon_sym_LT_EQ] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LT] = ACTIONS(24),
    [anon_sym_DASH] = ACTIONS(24),
    [anon_sym_DASH_EQ] = ACTIONS(24),
    [anon_sym_STAR] = ACTIONS(24),
    [anon_sym_LT_GT] = ACTIONS(24),
    [anon_sym_PERCENT] = ACTIONS(24),
    [anon_sym_PLUS] = ACTIONS(24),
    [anon_sym_PLUS_EQ] = ACTIONS(24),
    [anon_sym_CARET] = ACTIONS(24),
    [anon_sym_RBRACE] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(24),
    [anon_sym_SEMI] = ACTIONS(24),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(24),
    [sym_string_literal] = ACTIONS(27),
    [sym_date_literal] = ACTIONS(27),
    [sym_color_literal] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(27),
    [sym_double_literal] = ACTIONS(27),
    [sym_file_number] = ACTIONS(27),
    [sym_octal_literal] = ACTIONS(27),
    [sym_frx_offset] = ACTIONS(27),
    [sym_guid] = ACTIONS(27),
    [sym_identifier] = ACTIONS(30),
    [sym_line_continuation] = ACTIONS(3),
    [sym_newline] = ACTIONS(30),
    [sym_comment] = ACTIONS(30),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_ACCESS] = ACTIONS(35),
    [anon_sym_ADDRESSOF] = ACTIONS(35),
    [anon_sym_ALIAS] = ACTIONS(35),
    [anon_sym_AND] = ACTIONS(35),
    [anon_sym_ATTRIBUTE] = ACTIONS(35),
    [anon_sym_APPACTIVATE] = ACTIONS(35),
    [anon_sym_APPEND] = ACTIONS(35),
    [anon_sym_AS] = ACTIONS(35),
    [anon_sym_BEEP] = ACTIONS(35),
    [anon_sym_BEGIN] = ACTIONS(35),
    [anon_sym_BEGINPROPERTY] = ACTIONS(35),
    [anon_sym_BINARY] = ACTIONS(35),
    [anon_sym_BOOLEAN] = ACTIONS(35),
    [anon_sym_BYVAL] = ACTIONS(35),
    [anon_sym_BYREF] = ACTIONS(35),
    [anon_sym_BYTE] = ACTIONS(35),
    [anon_sym_CALL] = ACTIONS(35),
    [anon_sym_CASE] = ACTIONS(35),
    [anon_sym_CHDIR] = ACTIONS(35),
    [anon_sym_CHDRIVE] = ACTIONS(35),
    [anon_sym_CLASS] = ACTIONS(35),
    [anon_sym_CLOSE] = ACTIONS(35),
    [anon_sym_COLLECTION] = ACTIONS(35),
    [anon_sym_CONST] = ACTIONS(35),
    [anon_sym_DATE] = ACTIONS(35),
    [anon_sym_DECLARE] = ACTIONS(35),
    [anon_sym_DEFBOOL] = ACTIONS(35),
    [anon_sym_DEFBYTE] = ACTIONS(35),
    [anon_sym_DEFDATE] = ACTIONS(35),
    [anon_sym_DEFDBL] = ACTIONS(35),
    [anon_sym_DEFDEC] = ACTIONS(35),
    [anon_sym_DEFCUR] = ACTIONS(35),
    [anon_sym_DEFINT] = ACTIONS(35),
    [anon_sym_DEFLNG] = ACTIONS(35),
    [anon_sym_DEFOBJ] = ACTIONS(35),
    [anon_sym_DEFSNG] = ACTIONS(35),
    [anon_sym_DEFSTR] = ACTIONS(35),
    [anon_sym_DEFVAR] = ACTIONS(35),
    [anon_sym_DELETESETTING] = ACTIONS(35),
    [anon_sym_DIM] = ACTIONS(35),
    [anon_sym_DO] = ACTIONS(35),
    [anon_sym_DOUBLE] = ACTIONS(35),
    [anon_sym_EACH] = ACTIONS(35),
    [anon_sym_ELSE] = ACTIONS(35),
    [anon_sym_ELSEIF] = ACTIONS(35),
    [anon_sym_END_ENUM] = ACTIONS(35),
    [anon_sym_END_FUNCTION] = ACTIONS(35),
    [anon_sym_END_IF] = ACTIONS(35),
    [anon_sym_END_PROPERTY] = ACTIONS(35),
    [anon_sym_END_SELECT] = ACTIONS(35),
    [anon_sym_END_SUB] = ACTIONS(35),
    [anon_sym_END_TYPE] = ACTIONS(35),
    [anon_sym_END_WITH] = ACTIONS(35),
    [anon_sym_END] = ACTIONS(35),
    [anon_sym_ENDPROPERTY] = ACTIONS(35),
    [anon_sym_ENUM] = ACTIONS(35),
    [anon_sym_EQV] = ACTIONS(35),
    [anon_sym_ERASE] = ACTIONS(35),
    [anon_sym_ERROR] = ACTIONS(35),
    [anon_sym_EVENT] = ACTIONS(35),
    [anon_sym_EXIT_DO] = ACTIONS(35),
    [anon_sym_EXIT_FOR] = ACTIONS(35),
    [anon_sym_EXIT_FUNCTION] = ACTIONS(35),
    [anon_sym_EXIT_PROPERTY] = ACTIONS(35),
    [anon_sym_EXIT_SUB] = ACTIONS(35),
    [anon_sym_FALSE] = ACTIONS(35),
    [anon_sym_FILECOPY] = ACTIONS(35),
    [anon_sym_FRIEND] = ACTIONS(35),
    [anon_sym_FOR] = ACTIONS(35),
    [anon_sym_FUNCTION] = ACTIONS(35),
    [anon_sym_GET] = ACTIONS(35),
    [anon_sym_GLOBAL] = ACTIONS(35),
    [anon_sym_GOSUB] = ACTIONS(35),
    [anon_sym_GOTO] = ACTIONS(35),
    [anon_sym_IF] = ACTIONS(35),
    [anon_sym_IMP] = ACTIONS(35),
    [anon_sym_IMPLEMENTS] = ACTIONS(35),
    [anon_sym_IN] = ACTIONS(35),
    [anon_sym_INPUT] = ACTIONS(35),
    [anon_sym_IS] = ACTIONS(35),
    [anon_sym_INTEGER] = ACTIONS(35),
    [anon_sym_KILL] = ACTIONS(35),
    [anon_sym_LOAD] = ACTIONS(35),
    [anon_sym_LOCK] = ACTIONS(35),
    [anon_sym_LONG] = ACTIONS(35),
    [anon_sym_LOOP] = ACTIONS(35),
    [anon_sym_LEN] = ACTIONS(35),
    [anon_sym_LET] = ACTIONS(35),
    [anon_sym_LIB] = ACTIONS(35),
    [anon_sym_LIKE] = ACTIONS(35),
    [anon_sym_LINE_INPUT] = ACTIONS(35),
    [anon_sym_LOCK_READ] = ACTIONS(35),
    [anon_sym_LOCK_WRITE] = ACTIONS(35),
    [anon_sym_LOCK_READ_WRITE] = ACTIONS(35),
    [anon_sym_LSET] = ACTIONS(35),
    [anon_sym_MACRO_IF] = ACTIONS(35),
    [anon_sym_MACRO_ELSEIF] = ACTIONS(35),
    [anon_sym_MACRO_ELSE] = ACTIONS(35),
    [anon_sym_MACRO_END_IF] = ACTIONS(35),
    [anon_sym_ME] = ACTIONS(35),
    [anon_sym_MID] = ACTIONS(35),
    [anon_sym_MKDIR] = ACTIONS(35),
    [anon_sym_MOD] = ACTIONS(35),
    [anon_sym_NAME] = ACTIONS(35),
    [anon_sym_NEXT] = ACTIONS(35),
    [anon_sym_NEW] = ACTIONS(35),
    [anon_sym_NOT] = ACTIONS(35),
    [anon_sym_NOTHING] = ACTIONS(35),
    [anon_sym_NULL_] = ACTIONS(35),
    [anon_sym_OBJECT] = ACTIONS(35),
    [anon_sym_ON] = ACTIONS(35),
    [anon_sym_ON_ERROR] = ACTIONS(35),
    [anon_sym_ON_LOCAL_ERROR] = ACTIONS(35),
    [anon_sym_OPEN] = ACTIONS(35),
    [anon_sym_OPTIONAL] = ACTIONS(35),
    [anon_sym_OPTION_BASE] = ACTIONS(35),
    [anon_sym_OPTION_EXPLICIT] = ACTIONS(35),
    [anon_sym_OPTION_COMPARE] = ACTIONS(35),
    [anon_sym_OPTION_PRIVATE_MODULE] = ACTIONS(35),
    [anon_sym_OR] = ACTIONS(35),
    [anon_sym_OUTPUT] = ACTIONS(35),
    [anon_sym_PARAMARRAY] = ACTIONS(35),
    [anon_sym_PRESERVE] = ACTIONS(35),
    [anon_sym_PRINT] = ACTIONS(35),
    [anon_sym_PRIVATE] = ACTIONS(35),
    [anon_sym_PROPERTY_GET] = ACTIONS(35),
    [anon_sym_PROPERTY_LET] = ACTIONS(35),
    [anon_sym_PROPERTY_SET] = ACTIONS(35),
    [anon_sym_PUBLIC] = ACTIONS(35),
    [anon_sym_PUT] = ACTIONS(35),
    [anon_sym_RANDOM] = ACTIONS(35),
    [anon_sym_RANDOMIZE] = ACTIONS(35),
    [anon_sym_RAISEEVENT] = ACTIONS(35),
    [anon_sym_READ] = ACTIONS(35),
    [anon_sym_READ_WRITE] = ACTIONS(35),
    [anon_sym_REDIM] = ACTIONS(35),
    [anon_sym_REM] = ACTIONS(35),
    [anon_sym_RESET] = ACTIONS(35),
    [anon_sym_RESUME] = ACTIONS(35),
    [anon_sym_RETURN] = ACTIONS(35),
    [anon_sym_RMDIR] = ACTIONS(35),
    [anon_sym_RSET] = ACTIONS(35),
    [anon_sym_SAVEPICTURE] = ACTIONS(35),
    [anon_sym_SAVESETTING] = ACTIONS(35),
    [anon_sym_SEEK] = ACTIONS(35),
    [anon_sym_SELECT] = ACTIONS(35),
    [anon_sym_SENDKEYS] = ACTIONS(35),
    [anon_sym_SET] = ACTIONS(35),
    [anon_sym_SETATTR] = ACTIONS(35),
    [anon_sym_SHARED] = ACTIONS(35),
    [anon_sym_SINGLE] = ACTIONS(35),
    [anon_sym_SPC] = ACTIONS(35),
    [anon_sym_STATIC] = ACTIONS(35),
    [anon_sym_STEP] = ACTIONS(35),
    [anon_sym_STOP] = ACTIONS(35),
    [anon_sym_STRING] = ACTIONS(35),
    [anon_sym_SUB] = ACTIONS(35),
    [anon_sym_TAB] = ACTIONS(35),
    [anon_sym_TEXT] = ACTIONS(35),
    [anon_sym_THEN] = ACTIONS(35),
    [anon_sym_TIME] = ACTIONS(35),
    [anon_sym_TO] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(35),
    [anon_sym_TYPE] = ACTIONS(35),
    [anon_sym_TYPEOF] = ACTIONS(35),
    [anon_sym_UNLOAD] = ACTIONS(35),
    [anon_sym_UNLOCK] = ACTIONS(35),
    [anon_sym_UNTIL] = ACTIONS(35),
    [anon_sym_VARIANT] = ACTIONS(35),
    [anon_sym_VERSION] = ACTIONS(35),
    [anon_sym_WEND] = ACTIONS(35),
    [anon_sym_WHILE] = ACTIONS(35),
    [anon_sym_WIDTH] = ACTIONS(35),
    [anon_sym_WITH] = ACTIONS(35),
    [anon_sym_WITHEVENTS] = ACTIONS(35),
    [anon_sym_WRITE] = ACTIONS(35),
    [anon_sym_XOR] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_DOLLAR] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_DASH_EQ] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_PLUS_EQ] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_string_literal] = ACTIONS(35),
    [sym_date_literal] = ACTIONS(35),
    [sym_color_literal] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(35),
    [sym_double_literal] = ACTIONS(35),
    [sym_file_number] = ACTIONS(35),
    [sym_octal_literal] = ACTIONS(35),
    [sym_frx_offset] = ACTIONS(35),
    [sym_guid] = ACTIONS(35),
    [sym_identifier] = ACTIONS(35),
    [sym_line_continuation] = ACTIONS(3),
    [sym_newline] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_ACCESS] = ACTIONS(39),
    [anon_sym_ADDRESSOF] = ACTIONS(39),
    [anon_sym_ALIAS] = ACTIONS(39),
    [anon_sym_AND] = ACTIONS(39),
    [anon_sym_ATTRIBUTE] = ACTIONS(39),
    [anon_sym_APPACTIVATE] = ACTIONS(39),
    [anon_sym_APPEND] = ACTIONS(39),
    [anon_sym_AS] = ACTIONS(39),
    [anon_sym_BEEP] = ACTIONS(39),
    [anon_sym_BEGIN] = ACTIONS(39),
    [anon_sym_BEGINPROPERTY] = ACTIONS(39),
    [anon_sym_BINARY] = ACTIONS(39),
    [anon_sym_BOOLEAN] = ACTIONS(39),
    [anon_sym_BYVAL] = ACTIONS(39),
    [anon_sym_BYREF] = ACTIONS(39),
    [anon_sym_BYTE] = ACTIONS(39),
    [anon_sym_CALL] = ACTIONS(39),
    [anon_sym_CASE] = ACTIONS(39),
    [anon_sym_CHDIR] = ACTIONS(39),
    [anon_sym_CHDRIVE] = ACTIONS(39),
    [anon_sym_CLASS] = ACTIONS(39),
    [anon_sym_CLOSE] = ACTIONS(39),
    [anon_sym_COLLECTION] = ACTIONS(39),
    [anon_sym_CONST] = ACTIONS(39),
    [anon_sym_DATE] = ACTIONS(39),
    [anon_sym_DECLARE] = ACTIONS(39),
    [anon_sym_DEFBOOL] = ACTIONS(39),
    [anon_sym_DEFBYTE] = ACTIONS(39),
    [anon_sym_DEFDATE] = ACTIONS(39),
    [anon_sym_DEFDBL] = ACTIONS(39),
    [anon_sym_DEFDEC] = ACTIONS(39),
    [anon_sym_DEFCUR] = ACTIONS(39),
    [anon_sym_DEFINT] = ACTIONS(39),
    [anon_sym_DEFLNG] = ACTIONS(39),
    [anon_sym_DEFOBJ] = ACTIONS(39),
    [anon_sym_DEFSNG] = ACTIONS(39),
    [anon_sym_DEFSTR] = ACTIONS(39),
    [anon_sym_DEFVAR] = ACTIONS(39),
    [anon_sym_DELETESETTING] = ACTIONS(39),
    [anon_sym_DIM] = ACTIONS(39),
    [anon_sym_DO] = ACTIONS(39),
    [anon_sym_DOUBLE] = ACTIONS(39),
    [anon_sym_EACH] = ACTIONS(39),
    [anon_sym_ELSE] = ACTIONS(39),
    [anon_sym_ELSEIF] = ACTIONS(39),
    [anon_sym_END_ENUM] = ACTIONS(39),
    [anon_sym_END_FUNCTION] = ACTIONS(39),
    [anon_sym_END_IF] = ACTIONS(39),
    [anon_sym_END_PROPERTY] = ACTIONS(39),
    [anon_sym_END_SELECT] = ACTIONS(39),
    [anon_sym_END_SUB] = ACTIONS(39),
    [anon_sym_END_TYPE] = ACTIONS(39),
    [anon_sym_END_WITH] = ACTIONS(39),
    [anon_sym_END] = ACTIONS(39),
    [anon_sym_ENDPROPERTY] = ACTIONS(39),
    [anon_sym_ENUM] = ACTIONS(39),
    [anon_sym_EQV] = ACTIONS(39),
    [anon_sym_ERASE] = ACTIONS(39),
    [anon_sym_ERROR] = ACTIONS(39),
    [anon_sym_EVENT] = ACTIONS(39),
    [anon_sym_EXIT_DO] = ACTIONS(39),
    [anon_sym_EXIT_FOR] = ACTIONS(39),
    [anon_sym_EXIT_FUNCTION] = ACTIONS(39),
    [anon_sym_EXIT_PROPERTY] = ACTIONS(39),
    [anon_sym_EXIT_SUB] = ACTIONS(39),
    [anon_sym_FALSE] = ACTIONS(39),
    [anon_sym_FILECOPY] = ACTIONS(39),
    [anon_sym_FRIEND] = ACTIONS(39),
    [anon_sym_FOR] = ACTIONS(39),
    [anon_sym_FUNCTION] = ACTIONS(39),
    [anon_sym_GET] = ACTIONS(39),
    [anon_sym_GLOBAL] = ACTIONS(39),
    [anon_sym_GOSUB] = ACTIONS(39),
    [anon_sym_GOTO] = ACTIONS(39),
    [anon_sym_IF] = ACTIONS(39),
    [anon_sym_IMP] = ACTIONS(39),
    [anon_sym_IMPLEMENTS] = ACTIONS(39),
    [anon_sym_IN] = ACTIONS(39),
    [anon_sym_INPUT] = ACTIONS(39),
    [anon_sym_IS] = ACTIONS(39),
    [anon_sym_INTEGER] = ACTIONS(39),
    [anon_sym_KILL] = ACTIONS(39),
    [anon_sym_LOAD] = ACTIONS(39),
    [anon_sym_LOCK] = ACTIONS(39),
    [anon_sym_LONG] = ACTIONS(39),
    [anon_sym_LOOP] = ACTIONS(39),
    [anon_sym_LEN] = ACTIONS(39),
    [anon_sym_LET] = ACTIONS(39),
    [anon_sym_LIB] = ACTIONS(39),
    [anon_sym_LIKE] = ACTIONS(39),
    [anon_sym_LINE_INPUT] = ACTIONS(39),
    [anon_sym_LOCK_READ] = ACTIONS(39),
    [anon_sym_LOCK_WRITE] = ACTIONS(39),
    [anon_sym_LOCK_READ_WRITE] = ACTIONS(39),
    [anon_sym_LSET] = ACTIONS(39),
    [anon_sym_MACRO_IF] = ACTIONS(39),
    [anon_sym_MACRO_ELSEIF] = ACTIONS(39),
    [anon_sym_MACRO_ELSE] = ACTIONS(39),
    [anon_sym_MACRO_END_IF] = ACTIONS(39),
    [anon_sym_ME] = ACTIONS(39),
    [anon_sym_MID] = ACTIONS(39),
    [anon_sym_MKDIR] = ACTIONS(39),
    [anon_sym_MOD] = ACTIONS(39),
    [anon_sym_NAME] = ACTIONS(39),
    [anon_sym_NEXT] = ACTIONS(39),
    [anon_sym_NEW] = ACTIONS(39),
    [anon_sym_NOT] = ACTIONS(39),
    [anon_sym_NOTHING] = ACTIONS(39),
    [anon_sym_NULL_] = ACTIONS(39),
    [anon_sym_OBJECT] = ACTIONS(39),
    [anon_sym_ON] = ACTIONS(39),
    [anon_sym_ON_ERROR] = ACTIONS(39),
    [anon_sym_ON_LOCAL_ERROR] = ACTIONS(39),
    [anon_sym_OPEN] = ACTIONS(39),
    [anon_sym_OPTIONAL] = ACTIONS(39),
    [anon_sym_OPTION_BASE] = ACTIONS(39),
    [anon_sym_OPTION_EXPLICIT] = ACTIONS(39),
    [anon_sym_OPTION_COMPARE] = ACTIONS(39),
    [anon_sym_OPTION_PRIVATE_MODULE] = ACTIONS(39),
    [anon_sym_OR] = ACTIONS(39),
    [anon_sym_OUTPUT] = ACTIONS(39),
    [anon_sym_PARAMARRAY] = ACTIONS(39),
    [anon_sym_PRESERVE] = ACTIONS(39),
    [anon_sym_PRINT] = ACTIONS(39),
    [anon_sym_PRIVATE] = ACTIONS(39),
    [anon_sym_PROPERTY_GET] = ACTIONS(39),
    [anon_sym_PROPERTY_LET] = ACTIONS(39),
    [anon_sym_PROPERTY_SET] = ACTIONS(39),
    [anon_sym_PUBLIC] = ACTIONS(39),
    [anon_sym_PUT] = ACTIONS(39),
    [anon_sym_RANDOM] = ACTIONS(39),
    [anon_sym_RANDOMIZE] = ACTIONS(39),
    [anon_sym_RAISEEVENT] = ACTIONS(39),
    [anon_sym_READ] = ACTIONS(39),
    [anon_sym_READ_WRITE] = ACTIONS(39),
    [anon_sym_REDIM] = ACTIONS(39),
    [anon_sym_REM] = ACTIONS(39),
    [anon_sym_RESET] = ACTIONS(39),
    [anon_sym_RESUME] = ACTIONS(39),
    [anon_sym_RETURN] = ACTIONS(39),
    [anon_sym_RMDIR] = ACTIONS(39),
    [anon_sym_RSET] = ACTIONS(39),
    [anon_sym_SAVEPICTURE] = ACTIONS(39),
    [anon_sym_SAVESETTING] = ACTIONS(39),
    [anon_sym_SEEK] = ACTIONS(39),
    [anon_sym_SELECT] = ACTIONS(39),
    [anon_sym_SENDKEYS] = ACTIONS(39),
    [anon_sym_SET] = ACTIONS(39),
    [anon_sym_SETATTR] = ACTIONS(39),
    [anon_sym_SHARED] = ACTIONS(39),
    [anon_sym_SINGLE] = ACTIONS(39),
    [anon_sym_SPC] = ACTIONS(39),
    [anon_sym_STATIC] = ACTIONS(39),
    [anon_sym_STEP] = ACTIONS(39),
    [anon_sym_STOP] = ACTIONS(39),
    [anon_sym_STRING] = ACTIONS(39),
    [anon_sym_SUB] = ACTIONS(39),
    [anon_sym_TAB] = ACTIONS(39),
    [anon_sym_TEXT] = ACTIONS(39),
    [anon_sym_THEN] = ACTIONS(39),
    [anon_sym_TIME] = ACTIONS(39),
    [anon_sym_TO] = ACTIONS(39),
    [anon_sym_TRUE] = ACTIONS(39),
    [anon_sym_TYPE] = ACTIONS(39),
    [anon_sym_TYPEOF] = ACTIONS(39),
    [anon_sym_UNLOAD] = ACTIONS(39),
    [anon_sym_UNLOCK] = ACTIONS(39),
    [anon_sym_UNTIL] = ACTIONS(39),
    [anon_sym_VARIANT] = ACTIONS(39),
    [anon_sym_VERSION] = ACTIONS(39),
    [anon_sym_WEND] = ACTIONS(39),
    [anon_sym_WHILE] = ACTIONS(39),
    [anon_sym_WIDTH] = ACTIONS(39),
    [anon_sym_WITH] = ACTIONS(39),
    [anon_sym_WITHEVENTS] = ACTIONS(39),
    [anon_sym_WRITE] = ACTIONS(39),
    [anon_sym_XOR] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_COLON_EQ] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_DASH_EQ] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_LT_GT] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_PLUS_EQ] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [sym_string_literal] = ACTIONS(39),
    [sym_date_literal] = ACTIONS(39),
    [sym_color_literal] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(39),
    [sym_double_literal] = ACTIONS(39),
    [sym_file_number] = ACTIONS(39),
    [sym_octal_literal] = ACTIONS(39),
    [sym_frx_offset] = ACTIONS(39),
    [sym_guid] = ACTIONS(39),
    [sym_identifier] = ACTIONS(39),
    [sym_line_continuation] = ACTIONS(3),
    [sym_newline] = ACTIONS(39),
    [sym_comment] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_ACCESS] = ACTIONS(43),
    [anon_sym_ADDRESSOF] = ACTIONS(43),
    [anon_sym_ALIAS] = ACTIONS(43),
    [anon_sym_AND] = ACTIONS(43),
    [anon_sym_ATTRIBUTE] = ACTIONS(43),
    [anon_sym_APPACTIVATE] = ACTIONS(43),
    [anon_sym_APPEND] = ACTIONS(43),
    [anon_sym_AS] = ACTIONS(43),
    [anon_sym_BEEP] = ACTIONS(43),
    [anon_sym_BEGIN] = ACTIONS(43),
    [anon_sym_BEGINPROPERTY] = ACTIONS(43),
    [anon_sym_BINARY] = ACTIONS(43),
    [anon_sym_BOOLEAN] = ACTIONS(43),
    [anon_sym_BYVAL] = ACTIONS(43),
    [anon_sym_BYREF] = ACTIONS(43),
    [anon_sym_BYTE] = ACTIONS(43),
    [anon_sym_CALL] = ACTIONS(43),
    [anon_sym_CASE] = ACTIONS(43),
    [anon_sym_CHDIR] = ACTIONS(43),
    [anon_sym_CHDRIVE] = ACTIONS(43),
    [anon_sym_CLASS] = ACTIONS(43),
    [anon_sym_CLOSE] = ACTIONS(43),
    [anon_sym_COLLECTION] = ACTIONS(43),
    [anon_sym_CONST] = ACTIONS(43),
    [anon_sym_DATE] = ACTIONS(43),
    [anon_sym_DECLARE] = ACTIONS(43),
    [anon_sym_DEFBOOL] = ACTIONS(43),
    [anon_sym_DEFBYTE] = ACTIONS(43),
    [anon_sym_DEFDATE] = ACTIONS(43),
    [anon_sym_DEFDBL] = ACTIONS(43),
    [anon_sym_DEFDEC] = ACTIONS(43),
    [anon_sym_DEFCUR] = ACTIONS(43),
    [anon_sym_DEFINT] = ACTIONS(43),
    [anon_sym_DEFLNG] = ACTIONS(43),
    [anon_sym_DEFOBJ] = ACTIONS(43),
    [anon_sym_DEFSNG] = ACTIONS(43),
    [anon_sym_DEFSTR] = ACTIONS(43),
    [anon_sym_DEFVAR] = ACTIONS(43),
    [anon_sym_DELETESETTING] = ACTIONS(43),
    [anon_sym_DIM] = ACTIONS(43),
    [anon_sym_DO] = ACTIONS(43),
    [anon_sym_DOUBLE] = ACTIONS(43),
    [anon_sym_EACH] = ACTIONS(43),
    [anon_sym_ELSE] = ACTIONS(43),
    [anon_sym_ELSEIF] = ACTIONS(43),
    [anon_sym_END_ENUM] = ACTIONS(43),
    [anon_sym_END_FUNCTION] = ACTIONS(43),
    [anon_sym_END_IF] = ACTIONS(43),
    [anon_sym_END_PROPERTY] = ACTIONS(43),
    [anon_sym_END_SELECT] = ACTIONS(43),
    [anon_sym_END_SUB] = ACTIONS(43),
    [anon_sym_END_TYPE] = ACTIONS(43),
    [anon_sym_END_WITH] = ACTIONS(43),
    [anon_sym_END] = ACTIONS(43),
    [anon_sym_ENDPROPERTY] = ACTIONS(43),
    [anon_sym_ENUM] = ACTIONS(43),
    [anon_sym_EQV] = ACTIONS(43),
    [anon_sym_ERASE] = ACTIONS(43),
    [anon_sym_ERROR] = ACTIONS(43),
    [anon_sym_EVENT] = ACTIONS(43),
    [anon_sym_EXIT_DO] = ACTIONS(43),
    [anon_sym_EXIT_FOR] = ACTIONS(43),
    [anon_sym_EXIT_FUNCTION] = ACTIONS(43),
    [anon_sym_EXIT_PROPERTY] = ACTIONS(43),
    [anon_sym_EXIT_SUB] = ACTIONS(43),
    [anon_sym_FALSE] = ACTIONS(43),
    [anon_sym_FILECOPY] = ACTIONS(43),
    [anon_sym_FRIEND] = ACTIONS(43),
    [anon_sym_FOR] = ACTIONS(43),
    [anon_sym_FUNCTION] = ACTIONS(43),
    [anon_sym_GET] = ACTIONS(43),
    [anon_sym_GLOBAL] = ACTIONS(43),
    [anon_sym_GOSUB] = ACTIONS(43),
    [anon_sym_GOTO] = ACTIONS(43),
    [anon_sym_IF] = ACTIONS(43),
    [anon_sym_IMP] = ACTIONS(43),
    [anon_sym_IMPLEMENTS] = ACTIONS(43),
    [anon_sym_IN] = ACTIONS(43),
    [anon_sym_INPUT] = ACTIONS(43),
    [anon_sym_IS] = ACTIONS(43),
    [anon_sym_INTEGER] = ACTIONS(43),
    [anon_sym_KILL] = ACTIONS(43),
    [anon_sym_LOAD] = ACTIONS(43),
    [anon_sym_LOCK] = ACTIONS(43),
    [anon_sym_LONG] = ACTIONS(43),
    [anon_sym_LOOP] = ACTIONS(43),
    [anon_sym_LEN] = ACTIONS(43),
    [anon_sym_LET] = ACTIONS(43),
    [anon_sym_LIB] = ACTIONS(43),
    [anon_sym_LIKE] = ACTIONS(43),
    [anon_sym_LINE_INPUT] = ACTIONS(43),
    [anon_sym_LOCK_READ] = ACTIONS(43),
    [anon_sym_LOCK_WRITE] = ACTIONS(43),
    [anon_sym_LOCK_READ_WRITE] = ACTIONS(43),
    [anon_sym_LSET] = ACTIONS(43),
    [anon_sym_MACRO_IF] = ACTIONS(43),
    [anon_sym_MACRO_ELSEIF] = ACTIONS(43),
    [anon_sym_MACRO_ELSE] = ACTIONS(43),
    [anon_sym_MACRO_END_IF] = ACTIONS(43),
    [anon_sym_ME] = ACTIONS(43),
    [anon_sym_MID] = ACTIONS(43),
    [anon_sym_MKDIR] = ACTIONS(43),
    [anon_sym_MOD] = ACTIONS(43),
    [anon_sym_NAME] = ACTIONS(43),
    [anon_sym_NEXT] = ACTIONS(43),
    [anon_sym_NEW] = ACTIONS(43),
    [anon_sym_NOT] = ACTIONS(43),
    [anon_sym_NOTHING] = ACTIONS(43),
    [anon_sym_NULL_] = ACTIONS(43),
    [anon_sym_OBJECT] = ACTIONS(43),
    [anon_sym_ON] = ACTIONS(43),
    [anon_sym_ON_ERROR] = ACTIONS(43),
    [anon_sym_ON_LOCAL_ERROR] = ACTIONS(43),
    [anon_sym_OPEN] = ACTIONS(43),
    [anon_sym_OPTIONAL] = ACTIONS(43),
    [anon_sym_OPTION_BASE] = ACTIONS(43),
    [anon_sym_OPTION_EXPLICIT] = ACTIONS(43),
    [anon_sym_OPTION_COMPARE] = ACTIONS(43),
    [anon_sym_OPTION_PRIVATE_MODULE] = ACTIONS(43),
    [anon_sym_OR] = ACTIONS(43),
    [anon_sym_OUTPUT] = ACTIONS(43),
    [anon_sym_PARAMARRAY] = ACTIONS(43),
    [anon_sym_PRESERVE] = ACTIONS(43),
    [anon_sym_PRINT] = ACTIONS(43),
    [anon_sym_PRIVATE] = ACTIONS(43),
    [anon_sym_PROPERTY_GET] = ACTIONS(43),
    [anon_sym_PROPERTY_LET] = ACTIONS(43),
    [anon_sym_PROPERTY_SET] = ACTIONS(43),
    [anon_sym_PUBLIC] = ACTIONS(43),
    [anon_sym_PUT] = ACTIONS(43),
    [anon_sym_RANDOM] = ACTIONS(43),
    [anon_sym_RANDOMIZE] = ACTIONS(43),
    [anon_sym_RAISEEVENT] = ACTIONS(43),
    [anon_sym_READ] = ACTIONS(43),
    [anon_sym_READ_WRITE] = ACTIONS(43),
    [anon_sym_REDIM] = ACTIONS(43),
    [anon_sym_REM] = ACTIONS(43),
    [anon_sym_RESET] = ACTIONS(43),
    [anon_sym_RESUME] = ACTIONS(43),
    [anon_sym_RETURN] = ACTIONS(43),
    [anon_sym_RMDIR] = ACTIONS(43),
    [anon_sym_RSET] = ACTIONS(43),
    [anon_sym_SAVEPICTURE] = ACTIONS(43),
    [anon_sym_SAVESETTING] = ACTIONS(43),
    [anon_sym_SEEK] = ACTIONS(43),
    [anon_sym_SELECT] = ACTIONS(43),
    [anon_sym_SENDKEYS] = ACTIONS(43),
    [anon_sym_SET] = ACTIONS(43),
    [anon_sym_SETATTR] = ACTIONS(43),
    [anon_sym_SHARED] = ACTIONS(43),
    [anon_sym_SINGLE] = ACTIONS(43),
    [anon_sym_SPC] = ACTIONS(43),
    [anon_sym_STATIC] = ACTIONS(43),
    [anon_sym_STEP] = ACTIONS(43),
    [anon_sym_STOP] = ACTIONS(43),
    [anon_sym_STRING] = ACTIONS(43),
    [anon_sym_SUB] = ACTIONS(43),
    [anon_sym_TAB] = ACTIONS(43),
    [anon_sym_TEXT] = ACTIONS(43),
    [anon_sym_THEN] = ACTIONS(43),
    [anon_sym_TIME] = ACTIONS(43),
    [anon_sym_TO] = ACTIONS(43),
    [anon_sym_TRUE] = ACTIONS(43),
    [anon_sym_TYPE] = ACTIONS(43),
    [anon_sym_TYPEOF] = ACTIONS(43),
    [anon_sym_UNLOAD] = ACTIONS(43),
    [anon_sym_UNLOCK] = ACTIONS(43),
    [anon_sym_UNTIL] = ACTIONS(43),
    [anon_sym_VARIANT] = ACTIONS(43),
    [anon_sym_VERSION] = ACTIONS(43),
    [anon_sym_WEND] = ACTIONS(43),
    [anon_sym_WHILE] = ACTIONS(43),
    [anon_sym_WIDTH] = ACTIONS(43),
    [anon_sym_WITH] = ACTIONS(43),
    [anon_sym_WITHEVENTS] = ACTIONS(43),
    [anon_sym_WRITE] = ACTIONS(43),
    [anon_sym_XOR] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_DASH_EQ] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_LT_GT] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_PLUS_EQ] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym_string_literal] = ACTIONS(43),
    [sym_date_literal] = ACTIONS(43),
    [sym_color_literal] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(43),
    [sym_double_literal] = ACTIONS(43),
    [sym_file_number] = ACTIONS(43),
    [sym_octal_literal] = ACTIONS(43),
    [sym_frx_offset] = ACTIONS(43),
    [sym_guid] = ACTIONS(43),
    [sym_identifier] = ACTIONS(43),
    [sym_line_continuation] = ACTIONS(3),
    [sym_newline] = ACTIONS(43),
    [sym_comment] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_vb(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
