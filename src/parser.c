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
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 65
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_Imports = 1,
  anon_sym_DOT = 2,
  anon_sym_Namespace = 3,
  anon_sym_End = 4,
  anon_sym_Class = 5,
  anon_sym_Sub = 6,
  anon_sym_Function = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_As = 10,
  anon_sym_Public = 11,
  anon_sym_COMMA = 12,
  sym_keyword = 13,
  sym_symbol = 14,
  sym_string_literal = 15,
  sym_date_literal = 16,
  sym_color_literal = 17,
  sym_integer_literal = 18,
  sym_double_literal = 19,
  sym_file_number = 20,
  sym_octal_literal = 21,
  sym_frx_offset = 22,
  sym_guid = 23,
  sym_identifier = 24,
  sym_line_continuation = 25,
  sym_newline = 26,
  sym_comment = 27,
  sym_source_file = 28,
  sym__statement = 29,
  sym_imports_statement = 30,
  sym_namespace_declaration = 31,
  sym_class_declaration = 32,
  sym_method_declaration = 33,
  sym_field_declaration = 34,
  sym_parameter_list = 35,
  sym_literal = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_imports_statement_repeat1 = 38,
  aux_sym_parameter_list_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Imports] = "Imports",
  [anon_sym_DOT] = ".",
  [anon_sym_Namespace] = "Namespace",
  [anon_sym_End] = "End",
  [anon_sym_Class] = "Class",
  [anon_sym_Sub] = "Sub",
  [anon_sym_Function] = "Function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_As] = "As",
  [anon_sym_Public] = "Public",
  [anon_sym_COMMA] = ",",
  [sym_keyword] = "keyword",
  [sym_symbol] = "symbol",
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
  [sym_imports_statement] = "imports_statement",
  [sym_namespace_declaration] = "namespace_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_method_declaration] = "method_declaration",
  [sym_field_declaration] = "field_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_literal] = "literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_imports_statement_repeat1] = "imports_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Imports] = anon_sym_Imports,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Namespace] = anon_sym_Namespace,
  [anon_sym_End] = anon_sym_End,
  [anon_sym_Class] = anon_sym_Class,
  [anon_sym_Sub] = anon_sym_Sub,
  [anon_sym_Function] = anon_sym_Function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_As] = anon_sym_As,
  [anon_sym_Public] = anon_sym_Public,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_keyword] = sym_keyword,
  [sym_symbol] = sym_symbol,
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
  [sym_imports_statement] = sym_imports_statement,
  [sym_namespace_declaration] = sym_namespace_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_method_declaration] = sym_method_declaration,
  [sym_field_declaration] = sym_field_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_literal] = sym_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_imports_statement_repeat1] = aux_sym_imports_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Imports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_End] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_As] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
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
  [sym_imports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
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
  [aux_sym_imports_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 20,
  [21] = 21,
  [22] = 16,
  [23] = 13,
  [24] = 24,
  [25] = 18,
  [26] = 20,
  [27] = 24,
  [28] = 28,
  [29] = 14,
  [30] = 15,
  [31] = 28,
  [32] = 17,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 34,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 45,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 49,
  [57] = 57,
  [58] = 55,
  [59] = 57,
  [60] = 50,
  [61] = 48,
  [62] = 47,
  [63] = 44,
  [64] = 54,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 76,
  [79] = 73,
  [80] = 74,
  [81] = 81,
  [82] = 77,
  [83] = 81,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 85,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 86,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 90,
  [98] = 91,
  [99] = 89,
  [100] = 100,
  [101] = 101,
  [102] = 88,
  [103] = 96,
  [104] = 84,
  [105] = 100,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 111,
  [115] = 109,
  [116] = 116,
  [117] = 93,
  [118] = 116,
  [119] = 94,
  [120] = 106,
  [121] = 110,
};

static TSCharacterRange sym_file_number_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {0xc0, 0xc4}, {0xc7, 0xca}, {0xcc, 0xce}, {0xd2, 0xd6}, {0xd9, 0xdc},
  {0x128, 0x128}, {0x168, 0x168}, {0x1ebc, 0x1ebc},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        ' ', 13,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '(', 74,
        ')', 75,
        '+', 89,
        ',', 79,
        '-', 89,
        '.', 64,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 156,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 121,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(336);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 337,
        '\r', 4,
        ' ', 3,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 93,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 122,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '_', 109,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 337,
        '\r', 4,
        ' ', 3,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 93,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 122,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 6,
        ' ', 5,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 64,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 121,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '_', 109,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 6,
        ' ', 5,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 64,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 121,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 339,
        '\r', 8,
        ' ', 7,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 93,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 156,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 121,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '_', 109,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 339,
        '\r', 8,
        ' ', 7,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 93,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 156,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 121,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 340,
        '\r', 10,
        ' ', 9,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 64,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 122,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '_', 109,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 340,
        '\r', 10,
        ' ', 9,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 64,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 122,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 341,
        '\r', 12,
        ' ', 11,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 93,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 121,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '_', 109,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 341,
        '\r', 12,
        ' ', 11,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 93,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 121,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        ' ', 13,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '(', 74,
        ')', 75,
        '+', 89,
        ',', 79,
        '-', 89,
        '.', 64,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 156,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 121,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '_', 109,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        ' ', 13,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '(', 74,
        ')', 75,
        '+', 89,
        ',', 79,
        '-', 89,
        '.', 64,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 156,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 121,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        ' ', 15,
        '\'', 342,
        '(', 74,
        ')', 75,
        ',', 79,
        'A', 42,
        'C', 36,
        'F', 47,
        'N', 27,
        'R', 25,
        'S', 48,
        '_', 2,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(16);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        ' ', 15,
        '\'', 342,
        '(', 74,
        ')', 75,
        ',', 79,
        'A', 42,
        'C', 36,
        'F', 47,
        'N', 27,
        'R', 25,
        'S', 48,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(342);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(112);
      if (lookahead == '_') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(342);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(342);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(106);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(98);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(49);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(22);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(24);
      END_STATE();
    case 59:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '\n', 337,
        '\r', 4,
        ' ', 3,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 93,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 122,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '\n', 340,
        '\r', 10,
        ' ', 9,
        '"', 19,
        '#', 88,
        '&', 91,
        '\'', 342,
        '+', 89,
        '-', 89,
        '.', 64,
        ':', 90,
        '<', 92,
        '>', 89,
        'A', 157,
        'B', 332,
        'C', 120,
        'D', 170,
        'E', 122,
        'F', 125,
        'G', 174,
        'H', 131,
        'I', 241,
        'L', 266,
        'M', 171,
        'N', 126,
        'O', 273,
        'P', 127,
        'R', 111,
        'S', 175,
        'T', 204,
        'U', 259,
        'W', 206,
        'X', 263,
        'Y', 210,
        '{', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '=') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '}') ADVANCE(87);
      if (('J' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        ' ', 15,
        '\'', 342,
        '(', 74,
        ')', 75,
        ',', 79,
        'A', 42,
        'C', 36,
        'F', 47,
        'N', 27,
        'R', 25,
        'S', 48,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Imports);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Namespace);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Namespace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_End);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_Sub);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Function);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_Function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_As);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_As);
      if (lookahead == 'y') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'E') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'O') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'u') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'y') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(96);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(20);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '=') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'H') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(87);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(19);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_date_literal);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_color_literal);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_color_literal);
      if (lookahead == '&') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_double_literal);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_double_literal);
      if (lookahead == 'E') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_file_number);
      if (lookahead == '#') ADVANCE(96);
      if (set_contains(sym_file_number_character_set_1, 11, lookahead)) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(20);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_octal_literal);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_octal_literal);
      if (lookahead == '&') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_frx_offset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_guid);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'V') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 'x') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'o') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 'w') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == 'f' ||
          lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 'v') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == 'y') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(342);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(342);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 59},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 59},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 60},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 60},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 59},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 59},
  [44] = {.lex_state = 59},
  [45] = {.lex_state = 59},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 59},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 59},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 59},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 59},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 59},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 59},
  [65] = {.lex_state = 61},
  [66] = {.lex_state = 61},
  [67] = {.lex_state = 61},
  [68] = {.lex_state = 61},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 61},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 61},
  [76] = {.lex_state = 61},
  [77] = {.lex_state = 61},
  [78] = {.lex_state = 61},
  [79] = {.lex_state = 61},
  [80] = {.lex_state = 61},
  [81] = {.lex_state = 61},
  [82] = {.lex_state = 61},
  [83] = {.lex_state = 61},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 61},
  [86] = {.lex_state = 61},
  [87] = {.lex_state = 61},
  [88] = {.lex_state = 61},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 61},
  [91] = {.lex_state = 61},
  [92] = {.lex_state = 61},
  [93] = {.lex_state = 61},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 61},
  [98] = {.lex_state = 61},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 61},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 61},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 61},
  [106] = {.lex_state = 61},
  [107] = {.lex_state = 61},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 18},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 61},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 61},
  [121] = {.lex_state = 18},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Imports] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Namespace] = ACTIONS(1),
    [anon_sym_End] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_Sub] = ACTIONS(1),
    [anon_sym_Function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_As] = ACTIONS(1),
    [anon_sym_Public] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(107),
    [sym__statement] = STATE(21),
    [sym_imports_statement] = STATE(21),
    [sym_namespace_declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_method_declaration] = STATE(21),
    [sym_field_declaration] = STATE(21),
    [sym_literal] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_Imports] = ACTIONS(9),
    [anon_sym_Namespace] = ACTIONS(11),
    [anon_sym_Class] = ACTIONS(13),
    [anon_sym_Sub] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Public] = ACTIONS(17),
    [sym_keyword] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(21),
    [sym_date_literal] = ACTIONS(21),
    [sym_color_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [sym_double_literal] = ACTIONS(21),
    [sym_file_number] = ACTIONS(21),
    [sym_octal_literal] = ACTIONS(21),
    [sym_frx_offset] = ACTIONS(21),
    [sym_guid] = ACTIONS(21),
    [sym_identifier] = ACTIONS(19),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(23),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym__statement] = STATE(11),
    [sym_imports_statement] = STATE(11),
    [sym_namespace_declaration] = STATE(11),
    [sym_class_declaration] = STATE(11),
    [sym_method_declaration] = STATE(11),
    [sym_field_declaration] = STATE(11),
    [sym_literal] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym_imports_statement_repeat1] = STATE(4),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(31),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(39),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(43),
    [sym_comment] = ACTIONS(39),
  },
  [3] = {
    [sym__statement] = STATE(29),
    [sym_imports_statement] = STATE(29),
    [sym_namespace_declaration] = STATE(29),
    [sym_class_declaration] = STATE(29),
    [sym_method_declaration] = STATE(29),
    [sym_field_declaration] = STATE(29),
    [sym_literal] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [aux_sym_imports_statement_repeat1] = STATE(37),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(45),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(47),
    [sym_symbol] = ACTIONS(47),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(47),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(49),
    [sym_comment] = ACTIONS(47),
  },
  [4] = {
    [sym__statement] = STATE(14),
    [sym_imports_statement] = STATE(14),
    [sym_namespace_declaration] = STATE(14),
    [sym_class_declaration] = STATE(14),
    [sym_method_declaration] = STATE(14),
    [sym_field_declaration] = STATE(14),
    [sym_literal] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym_imports_statement_repeat1] = STATE(37),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(51),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(53),
    [sym_symbol] = ACTIONS(53),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(55),
    [sym_comment] = ACTIONS(53),
  },
  [5] = {
    [sym__statement] = STATE(19),
    [sym_imports_statement] = STATE(19),
    [sym_namespace_declaration] = STATE(19),
    [sym_class_declaration] = STATE(19),
    [sym_method_declaration] = STATE(19),
    [sym_field_declaration] = STATE(19),
    [sym_literal] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_imports_statement_repeat1] = STATE(3),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(57),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(59),
    [sym_symbol] = ACTIONS(59),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(59),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(61),
    [sym_comment] = ACTIONS(59),
  },
  [6] = {
    [sym__statement] = STATE(10),
    [sym_imports_statement] = STATE(10),
    [sym_namespace_declaration] = STATE(10),
    [sym_class_declaration] = STATE(10),
    [sym_method_declaration] = STATE(10),
    [sym_field_declaration] = STATE(10),
    [sym_literal] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(63),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_As] = ACTIONS(65),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(67),
    [sym_symbol] = ACTIONS(67),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(67),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(69),
    [sym_comment] = ACTIONS(67),
  },
  [7] = {
    [sym__statement] = STATE(12),
    [sym_imports_statement] = STATE(12),
    [sym_namespace_declaration] = STATE(12),
    [sym_class_declaration] = STATE(12),
    [sym_method_declaration] = STATE(12),
    [sym_field_declaration] = STATE(12),
    [sym_literal] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(71),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_As] = ACTIONS(73),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(75),
    [sym_symbol] = ACTIONS(75),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(75),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(77),
    [sym_comment] = ACTIONS(75),
  },
  [8] = {
    [sym__statement] = STATE(26),
    [sym_imports_statement] = STATE(26),
    [sym_namespace_declaration] = STATE(26),
    [sym_class_declaration] = STATE(26),
    [sym_method_declaration] = STATE(26),
    [sym_field_declaration] = STATE(26),
    [sym_literal] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(26),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(79),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_As] = ACTIONS(81),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(83),
    [sym_symbol] = ACTIONS(83),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(83),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(85),
    [sym_comment] = ACTIONS(83),
  },
  [9] = {
    [sym__statement] = STATE(20),
    [sym_imports_statement] = STATE(20),
    [sym_namespace_declaration] = STATE(20),
    [sym_class_declaration] = STATE(20),
    [sym_method_declaration] = STATE(20),
    [sym_field_declaration] = STATE(20),
    [sym_literal] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(87),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_As] = ACTIONS(89),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(91),
    [sym_symbol] = ACTIONS(91),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(91),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(93),
    [sym_comment] = ACTIONS(91),
  },
  [10] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(87),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [11] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(51),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [12] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(79),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [13] = {
    [sym__statement] = STATE(22),
    [sym_imports_statement] = STATE(22),
    [sym_namespace_declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [sym_method_declaration] = STATE(22),
    [sym_field_declaration] = STATE(22),
    [sym_literal] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(99),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(101),
    [sym_symbol] = ACTIONS(101),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(101),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(103),
    [sym_comment] = ACTIONS(101),
  },
  [14] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(105),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [15] = {
    [sym__statement] = STATE(15),
    [sym_imports_statement] = STATE(15),
    [sym_namespace_declaration] = STATE(15),
    [sym_class_declaration] = STATE(15),
    [sym_method_declaration] = STATE(15),
    [sym_field_declaration] = STATE(15),
    [sym_literal] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_Imports] = ACTIONS(109),
    [anon_sym_Namespace] = ACTIONS(112),
    [anon_sym_Class] = ACTIONS(115),
    [anon_sym_Sub] = ACTIONS(118),
    [anon_sym_Function] = ACTIONS(118),
    [anon_sym_Public] = ACTIONS(121),
    [sym_keyword] = ACTIONS(124),
    [sym_symbol] = ACTIONS(124),
    [sym_string_literal] = ACTIONS(127),
    [sym_date_literal] = ACTIONS(127),
    [sym_color_literal] = ACTIONS(127),
    [sym_integer_literal] = ACTIONS(127),
    [sym_double_literal] = ACTIONS(127),
    [sym_file_number] = ACTIONS(127),
    [sym_octal_literal] = ACTIONS(127),
    [sym_frx_offset] = ACTIONS(127),
    [sym_guid] = ACTIONS(127),
    [sym_identifier] = ACTIONS(124),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(130),
    [sym_comment] = ACTIONS(124),
  },
  [16] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(133),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [17] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(135),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [18] = {
    [sym__statement] = STATE(24),
    [sym_imports_statement] = STATE(24),
    [sym_namespace_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_method_declaration] = STATE(24),
    [sym_field_declaration] = STATE(24),
    [sym_literal] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(137),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(139),
    [sym_symbol] = ACTIONS(139),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(139),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(141),
    [sym_comment] = ACTIONS(139),
  },
  [19] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(45),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [20] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(137),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [21] = {
    [sym__statement] = STATE(15),
    [sym_imports_statement] = STATE(15),
    [sym_namespace_declaration] = STATE(15),
    [sym_class_declaration] = STATE(15),
    [sym_method_declaration] = STATE(15),
    [sym_field_declaration] = STATE(15),
    [sym_literal] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_Imports] = ACTIONS(9),
    [anon_sym_Namespace] = ACTIONS(11),
    [anon_sym_Class] = ACTIONS(13),
    [anon_sym_Sub] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Public] = ACTIONS(17),
    [sym_keyword] = ACTIONS(145),
    [sym_symbol] = ACTIONS(145),
    [sym_string_literal] = ACTIONS(21),
    [sym_date_literal] = ACTIONS(21),
    [sym_color_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [sym_double_literal] = ACTIONS(21),
    [sym_file_number] = ACTIONS(21),
    [sym_octal_literal] = ACTIONS(21),
    [sym_frx_offset] = ACTIONS(21),
    [sym_guid] = ACTIONS(21),
    [sym_identifier] = ACTIONS(145),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(145),
  },
  [22] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(149),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [23] = {
    [sym__statement] = STATE(16),
    [sym_imports_statement] = STATE(16),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(16),
    [sym_method_declaration] = STATE(16),
    [sym_field_declaration] = STATE(16),
    [sym_literal] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(151),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(153),
    [sym_symbol] = ACTIONS(153),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(153),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(155),
    [sym_comment] = ACTIONS(153),
  },
  [24] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(157),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [25] = {
    [sym__statement] = STATE(27),
    [sym_imports_statement] = STATE(27),
    [sym_namespace_declaration] = STATE(27),
    [sym_class_declaration] = STATE(27),
    [sym_method_declaration] = STATE(27),
    [sym_field_declaration] = STATE(27),
    [sym_literal] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(159),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(161),
    [sym_symbol] = ACTIONS(161),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(161),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(161),
  },
  [26] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(159),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [27] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(165),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [28] = {
    [sym__statement] = STATE(32),
    [sym_imports_statement] = STATE(32),
    [sym_namespace_declaration] = STATE(32),
    [sym_class_declaration] = STATE(32),
    [sym_method_declaration] = STATE(32),
    [sym_field_declaration] = STATE(32),
    [sym_literal] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(165),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(167),
    [sym_symbol] = ACTIONS(167),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(167),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(169),
    [sym_comment] = ACTIONS(167),
  },
  [29] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(171),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [30] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(173),
    [anon_sym_Namespace] = ACTIONS(176),
    [anon_sym_End] = ACTIONS(179),
    [anon_sym_Class] = ACTIONS(181),
    [anon_sym_Sub] = ACTIONS(184),
    [anon_sym_Function] = ACTIONS(184),
    [anon_sym_Public] = ACTIONS(187),
    [sym_keyword] = ACTIONS(190),
    [sym_symbol] = ACTIONS(190),
    [sym_string_literal] = ACTIONS(193),
    [sym_date_literal] = ACTIONS(193),
    [sym_color_literal] = ACTIONS(193),
    [sym_integer_literal] = ACTIONS(193),
    [sym_double_literal] = ACTIONS(193),
    [sym_file_number] = ACTIONS(193),
    [sym_octal_literal] = ACTIONS(193),
    [sym_frx_offset] = ACTIONS(193),
    [sym_guid] = ACTIONS(193),
    [sym_identifier] = ACTIONS(190),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(196),
    [sym_comment] = ACTIONS(190),
  },
  [31] = {
    [sym__statement] = STATE(17),
    [sym_imports_statement] = STATE(17),
    [sym_namespace_declaration] = STATE(17),
    [sym_class_declaration] = STATE(17),
    [sym_method_declaration] = STATE(17),
    [sym_field_declaration] = STATE(17),
    [sym_literal] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(157),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(199),
    [sym_symbol] = ACTIONS(199),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(199),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(199),
  },
  [32] = {
    [sym__statement] = STATE(30),
    [sym_imports_statement] = STATE(30),
    [sym_namespace_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_method_declaration] = STATE(30),
    [sym_field_declaration] = STATE(30),
    [sym_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_Imports] = ACTIONS(25),
    [anon_sym_Namespace] = ACTIONS(29),
    [anon_sym_End] = ACTIONS(203),
    [anon_sym_Class] = ACTIONS(33),
    [anon_sym_Sub] = ACTIONS(35),
    [anon_sym_Function] = ACTIONS(35),
    [anon_sym_Public] = ACTIONS(37),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(95),
    [sym_string_literal] = ACTIONS(41),
    [sym_date_literal] = ACTIONS(41),
    [sym_color_literal] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(41),
    [sym_double_literal] = ACTIONS(41),
    [sym_file_number] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(41),
    [sym_frx_offset] = ACTIONS(41),
    [sym_guid] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [33] = {
    [aux_sym_imports_statement_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_Imports] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_Namespace] = ACTIONS(207),
    [anon_sym_Class] = ACTIONS(207),
    [anon_sym_Sub] = ACTIONS(207),
    [anon_sym_Function] = ACTIONS(207),
    [anon_sym_Public] = ACTIONS(207),
    [sym_keyword] = ACTIONS(207),
    [sym_symbol] = ACTIONS(207),
    [sym_string_literal] = ACTIONS(207),
    [sym_date_literal] = ACTIONS(207),
    [sym_color_literal] = ACTIONS(207),
    [sym_integer_literal] = ACTIONS(207),
    [sym_double_literal] = ACTIONS(207),
    [sym_file_number] = ACTIONS(207),
    [sym_octal_literal] = ACTIONS(207),
    [sym_frx_offset] = ACTIONS(207),
    [sym_guid] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(207),
  },
  [34] = {
    [aux_sym_imports_statement_repeat1] = STATE(37),
    [anon_sym_Imports] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_Namespace] = ACTIONS(211),
    [anon_sym_End] = ACTIONS(211),
    [anon_sym_Class] = ACTIONS(211),
    [anon_sym_Sub] = ACTIONS(211),
    [anon_sym_Function] = ACTIONS(211),
    [anon_sym_Public] = ACTIONS(211),
    [sym_keyword] = ACTIONS(211),
    [sym_symbol] = ACTIONS(211),
    [sym_string_literal] = ACTIONS(211),
    [sym_date_literal] = ACTIONS(211),
    [sym_color_literal] = ACTIONS(211),
    [sym_integer_literal] = ACTIONS(211),
    [sym_double_literal] = ACTIONS(211),
    [sym_file_number] = ACTIONS(211),
    [sym_octal_literal] = ACTIONS(211),
    [sym_frx_offset] = ACTIONS(211),
    [sym_guid] = ACTIONS(211),
    [sym_identifier] = ACTIONS(211),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(211),
  },
  [35] = {
    [aux_sym_imports_statement_repeat1] = STATE(34),
    [anon_sym_Imports] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_Namespace] = ACTIONS(207),
    [anon_sym_End] = ACTIONS(207),
    [anon_sym_Class] = ACTIONS(207),
    [anon_sym_Sub] = ACTIONS(207),
    [anon_sym_Function] = ACTIONS(207),
    [anon_sym_Public] = ACTIONS(207),
    [sym_keyword] = ACTIONS(207),
    [sym_symbol] = ACTIONS(207),
    [sym_string_literal] = ACTIONS(207),
    [sym_date_literal] = ACTIONS(207),
    [sym_color_literal] = ACTIONS(207),
    [sym_integer_literal] = ACTIONS(207),
    [sym_double_literal] = ACTIONS(207),
    [sym_file_number] = ACTIONS(207),
    [sym_octal_literal] = ACTIONS(207),
    [sym_frx_offset] = ACTIONS(207),
    [sym_guid] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(207),
  },
  [36] = {
    [aux_sym_imports_statement_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_Imports] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_Namespace] = ACTIONS(211),
    [anon_sym_Class] = ACTIONS(211),
    [anon_sym_Sub] = ACTIONS(211),
    [anon_sym_Function] = ACTIONS(211),
    [anon_sym_Public] = ACTIONS(211),
    [sym_keyword] = ACTIONS(211),
    [sym_symbol] = ACTIONS(211),
    [sym_string_literal] = ACTIONS(211),
    [sym_date_literal] = ACTIONS(211),
    [sym_color_literal] = ACTIONS(211),
    [sym_integer_literal] = ACTIONS(211),
    [sym_double_literal] = ACTIONS(211),
    [sym_file_number] = ACTIONS(211),
    [sym_octal_literal] = ACTIONS(211),
    [sym_frx_offset] = ACTIONS(211),
    [sym_guid] = ACTIONS(211),
    [sym_identifier] = ACTIONS(211),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(211),
  },
  [37] = {
    [aux_sym_imports_statement_repeat1] = STATE(37),
    [anon_sym_Imports] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_Namespace] = ACTIONS(215),
    [anon_sym_End] = ACTIONS(215),
    [anon_sym_Class] = ACTIONS(215),
    [anon_sym_Sub] = ACTIONS(215),
    [anon_sym_Function] = ACTIONS(215),
    [anon_sym_Public] = ACTIONS(215),
    [sym_keyword] = ACTIONS(215),
    [sym_symbol] = ACTIONS(215),
    [sym_string_literal] = ACTIONS(215),
    [sym_date_literal] = ACTIONS(215),
    [sym_color_literal] = ACTIONS(215),
    [sym_integer_literal] = ACTIONS(215),
    [sym_double_literal] = ACTIONS(215),
    [sym_file_number] = ACTIONS(215),
    [sym_octal_literal] = ACTIONS(215),
    [sym_frx_offset] = ACTIONS(215),
    [sym_guid] = ACTIONS(215),
    [sym_identifier] = ACTIONS(215),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(220),
    [sym_comment] = ACTIONS(215),
  },
  [38] = {
    [aux_sym_imports_statement_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_Imports] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_Namespace] = ACTIONS(215),
    [anon_sym_Class] = ACTIONS(215),
    [anon_sym_Sub] = ACTIONS(215),
    [anon_sym_Function] = ACTIONS(215),
    [anon_sym_Public] = ACTIONS(215),
    [sym_keyword] = ACTIONS(215),
    [sym_symbol] = ACTIONS(215),
    [sym_string_literal] = ACTIONS(215),
    [sym_date_literal] = ACTIONS(215),
    [sym_color_literal] = ACTIONS(215),
    [sym_integer_literal] = ACTIONS(215),
    [sym_double_literal] = ACTIONS(215),
    [sym_file_number] = ACTIONS(215),
    [sym_octal_literal] = ACTIONS(215),
    [sym_frx_offset] = ACTIONS(215),
    [sym_guid] = ACTIONS(215),
    [sym_identifier] = ACTIONS(215),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(220),
    [sym_comment] = ACTIONS(215),
  },
  [39] = {
    [anon_sym_Imports] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(215),
    [anon_sym_Namespace] = ACTIONS(215),
    [anon_sym_End] = ACTIONS(215),
    [anon_sym_Class] = ACTIONS(215),
    [anon_sym_Sub] = ACTIONS(215),
    [anon_sym_Function] = ACTIONS(215),
    [anon_sym_Public] = ACTIONS(215),
    [sym_keyword] = ACTIONS(215),
    [sym_symbol] = ACTIONS(215),
    [sym_string_literal] = ACTIONS(215),
    [sym_date_literal] = ACTIONS(215),
    [sym_color_literal] = ACTIONS(215),
    [sym_integer_literal] = ACTIONS(215),
    [sym_double_literal] = ACTIONS(215),
    [sym_file_number] = ACTIONS(215),
    [sym_octal_literal] = ACTIONS(215),
    [sym_frx_offset] = ACTIONS(215),
    [sym_guid] = ACTIONS(215),
    [sym_identifier] = ACTIONS(215),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(220),
    [sym_comment] = ACTIONS(215),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_Imports] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(215),
    [anon_sym_Namespace] = ACTIONS(215),
    [anon_sym_Class] = ACTIONS(215),
    [anon_sym_Sub] = ACTIONS(215),
    [anon_sym_Function] = ACTIONS(215),
    [anon_sym_Public] = ACTIONS(215),
    [sym_keyword] = ACTIONS(215),
    [sym_symbol] = ACTIONS(215),
    [sym_string_literal] = ACTIONS(215),
    [sym_date_literal] = ACTIONS(215),
    [sym_color_literal] = ACTIONS(215),
    [sym_integer_literal] = ACTIONS(215),
    [sym_double_literal] = ACTIONS(215),
    [sym_file_number] = ACTIONS(215),
    [sym_octal_literal] = ACTIONS(215),
    [sym_frx_offset] = ACTIONS(215),
    [sym_guid] = ACTIONS(215),
    [sym_identifier] = ACTIONS(215),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(220),
    [sym_comment] = ACTIONS(215),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_Imports] = ACTIONS(227),
    [anon_sym_Namespace] = ACTIONS(227),
    [anon_sym_Class] = ACTIONS(227),
    [anon_sym_Sub] = ACTIONS(227),
    [anon_sym_Function] = ACTIONS(227),
    [anon_sym_Public] = ACTIONS(227),
    [sym_keyword] = ACTIONS(227),
    [sym_symbol] = ACTIONS(227),
    [sym_string_literal] = ACTIONS(227),
    [sym_date_literal] = ACTIONS(227),
    [sym_color_literal] = ACTIONS(227),
    [sym_integer_literal] = ACTIONS(227),
    [sym_double_literal] = ACTIONS(227),
    [sym_file_number] = ACTIONS(227),
    [sym_octal_literal] = ACTIONS(227),
    [sym_frx_offset] = ACTIONS(227),
    [sym_guid] = ACTIONS(227),
    [sym_identifier] = ACTIONS(227),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(225),
    [sym_comment] = ACTIONS(227),
  },
  [42] = {
    [anon_sym_Imports] = ACTIONS(227),
    [anon_sym_Namespace] = ACTIONS(227),
    [anon_sym_End] = ACTIONS(227),
    [anon_sym_Class] = ACTIONS(227),
    [anon_sym_Sub] = ACTIONS(227),
    [anon_sym_Function] = ACTIONS(227),
    [anon_sym_Public] = ACTIONS(227),
    [sym_keyword] = ACTIONS(227),
    [sym_symbol] = ACTIONS(227),
    [sym_string_literal] = ACTIONS(227),
    [sym_date_literal] = ACTIONS(227),
    [sym_color_literal] = ACTIONS(227),
    [sym_integer_literal] = ACTIONS(227),
    [sym_double_literal] = ACTIONS(227),
    [sym_file_number] = ACTIONS(227),
    [sym_octal_literal] = ACTIONS(227),
    [sym_frx_offset] = ACTIONS(227),
    [sym_guid] = ACTIONS(227),
    [sym_identifier] = ACTIONS(227),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(225),
    [sym_comment] = ACTIONS(227),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_Imports] = ACTIONS(231),
    [anon_sym_Namespace] = ACTIONS(231),
    [anon_sym_Class] = ACTIONS(231),
    [anon_sym_Sub] = ACTIONS(231),
    [anon_sym_Function] = ACTIONS(231),
    [anon_sym_Public] = ACTIONS(231),
    [sym_keyword] = ACTIONS(231),
    [sym_symbol] = ACTIONS(231),
    [sym_string_literal] = ACTIONS(231),
    [sym_date_literal] = ACTIONS(231),
    [sym_color_literal] = ACTIONS(231),
    [sym_integer_literal] = ACTIONS(231),
    [sym_double_literal] = ACTIONS(231),
    [sym_file_number] = ACTIONS(231),
    [sym_octal_literal] = ACTIONS(231),
    [sym_frx_offset] = ACTIONS(231),
    [sym_guid] = ACTIONS(231),
    [sym_identifier] = ACTIONS(231),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(229),
    [sym_comment] = ACTIONS(231),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_Imports] = ACTIONS(235),
    [anon_sym_Namespace] = ACTIONS(235),
    [anon_sym_Class] = ACTIONS(235),
    [anon_sym_Sub] = ACTIONS(235),
    [anon_sym_Function] = ACTIONS(235),
    [anon_sym_Public] = ACTIONS(235),
    [sym_keyword] = ACTIONS(235),
    [sym_symbol] = ACTIONS(235),
    [sym_string_literal] = ACTIONS(235),
    [sym_date_literal] = ACTIONS(235),
    [sym_color_literal] = ACTIONS(235),
    [sym_integer_literal] = ACTIONS(235),
    [sym_double_literal] = ACTIONS(235),
    [sym_file_number] = ACTIONS(235),
    [sym_octal_literal] = ACTIONS(235),
    [sym_frx_offset] = ACTIONS(235),
    [sym_guid] = ACTIONS(235),
    [sym_identifier] = ACTIONS(235),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(233),
    [sym_comment] = ACTIONS(235),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_Imports] = ACTIONS(239),
    [anon_sym_Namespace] = ACTIONS(239),
    [anon_sym_Class] = ACTIONS(239),
    [anon_sym_Sub] = ACTIONS(239),
    [anon_sym_Function] = ACTIONS(239),
    [anon_sym_Public] = ACTIONS(239),
    [sym_keyword] = ACTIONS(239),
    [sym_symbol] = ACTIONS(239),
    [sym_string_literal] = ACTIONS(239),
    [sym_date_literal] = ACTIONS(239),
    [sym_color_literal] = ACTIONS(239),
    [sym_integer_literal] = ACTIONS(239),
    [sym_double_literal] = ACTIONS(239),
    [sym_file_number] = ACTIONS(239),
    [sym_octal_literal] = ACTIONS(239),
    [sym_frx_offset] = ACTIONS(239),
    [sym_guid] = ACTIONS(239),
    [sym_identifier] = ACTIONS(239),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(237),
    [sym_comment] = ACTIONS(239),
  },
  [46] = {
    [anon_sym_Imports] = ACTIONS(231),
    [anon_sym_Namespace] = ACTIONS(231),
    [anon_sym_End] = ACTIONS(231),
    [anon_sym_Class] = ACTIONS(231),
    [anon_sym_Sub] = ACTIONS(231),
    [anon_sym_Function] = ACTIONS(231),
    [anon_sym_Public] = ACTIONS(231),
    [sym_keyword] = ACTIONS(231),
    [sym_symbol] = ACTIONS(231),
    [sym_string_literal] = ACTIONS(231),
    [sym_date_literal] = ACTIONS(231),
    [sym_color_literal] = ACTIONS(231),
    [sym_integer_literal] = ACTIONS(231),
    [sym_double_literal] = ACTIONS(231),
    [sym_file_number] = ACTIONS(231),
    [sym_octal_literal] = ACTIONS(231),
    [sym_frx_offset] = ACTIONS(231),
    [sym_guid] = ACTIONS(231),
    [sym_identifier] = ACTIONS(231),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(229),
    [sym_comment] = ACTIONS(231),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_Imports] = ACTIONS(243),
    [anon_sym_Namespace] = ACTIONS(243),
    [anon_sym_Class] = ACTIONS(243),
    [anon_sym_Sub] = ACTIONS(243),
    [anon_sym_Function] = ACTIONS(243),
    [anon_sym_Public] = ACTIONS(243),
    [sym_keyword] = ACTIONS(243),
    [sym_symbol] = ACTIONS(243),
    [sym_string_literal] = ACTIONS(243),
    [sym_date_literal] = ACTIONS(243),
    [sym_color_literal] = ACTIONS(243),
    [sym_integer_literal] = ACTIONS(243),
    [sym_double_literal] = ACTIONS(243),
    [sym_file_number] = ACTIONS(243),
    [sym_octal_literal] = ACTIONS(243),
    [sym_frx_offset] = ACTIONS(243),
    [sym_guid] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(241),
    [sym_comment] = ACTIONS(243),
  },
  [48] = {
    [anon_sym_Imports] = ACTIONS(245),
    [anon_sym_Namespace] = ACTIONS(245),
    [anon_sym_End] = ACTIONS(245),
    [anon_sym_Class] = ACTIONS(245),
    [anon_sym_Sub] = ACTIONS(245),
    [anon_sym_Function] = ACTIONS(245),
    [anon_sym_Public] = ACTIONS(245),
    [sym_keyword] = ACTIONS(245),
    [sym_symbol] = ACTIONS(245),
    [sym_string_literal] = ACTIONS(245),
    [sym_date_literal] = ACTIONS(245),
    [sym_color_literal] = ACTIONS(245),
    [sym_integer_literal] = ACTIONS(245),
    [sym_double_literal] = ACTIONS(245),
    [sym_file_number] = ACTIONS(245),
    [sym_octal_literal] = ACTIONS(245),
    [sym_frx_offset] = ACTIONS(245),
    [sym_guid] = ACTIONS(245),
    [sym_identifier] = ACTIONS(245),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(247),
    [sym_comment] = ACTIONS(245),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_Imports] = ACTIONS(251),
    [anon_sym_Namespace] = ACTIONS(251),
    [anon_sym_Class] = ACTIONS(251),
    [anon_sym_Sub] = ACTIONS(251),
    [anon_sym_Function] = ACTIONS(251),
    [anon_sym_Public] = ACTIONS(251),
    [sym_keyword] = ACTIONS(251),
    [sym_symbol] = ACTIONS(251),
    [sym_string_literal] = ACTIONS(251),
    [sym_date_literal] = ACTIONS(251),
    [sym_color_literal] = ACTIONS(251),
    [sym_integer_literal] = ACTIONS(251),
    [sym_double_literal] = ACTIONS(251),
    [sym_file_number] = ACTIONS(251),
    [sym_octal_literal] = ACTIONS(251),
    [sym_frx_offset] = ACTIONS(251),
    [sym_guid] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(249),
    [sym_comment] = ACTIONS(251),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_Imports] = ACTIONS(255),
    [anon_sym_Namespace] = ACTIONS(255),
    [anon_sym_Class] = ACTIONS(255),
    [anon_sym_Sub] = ACTIONS(255),
    [anon_sym_Function] = ACTIONS(255),
    [anon_sym_Public] = ACTIONS(255),
    [sym_keyword] = ACTIONS(255),
    [sym_symbol] = ACTIONS(255),
    [sym_string_literal] = ACTIONS(255),
    [sym_date_literal] = ACTIONS(255),
    [sym_color_literal] = ACTIONS(255),
    [sym_integer_literal] = ACTIONS(255),
    [sym_double_literal] = ACTIONS(255),
    [sym_file_number] = ACTIONS(255),
    [sym_octal_literal] = ACTIONS(255),
    [sym_frx_offset] = ACTIONS(255),
    [sym_guid] = ACTIONS(255),
    [sym_identifier] = ACTIONS(255),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(253),
    [sym_comment] = ACTIONS(255),
  },
  [51] = {
    [anon_sym_Imports] = ACTIONS(257),
    [anon_sym_Namespace] = ACTIONS(257),
    [anon_sym_End] = ACTIONS(257),
    [anon_sym_Class] = ACTIONS(257),
    [anon_sym_Sub] = ACTIONS(257),
    [anon_sym_Function] = ACTIONS(257),
    [anon_sym_Public] = ACTIONS(257),
    [sym_keyword] = ACTIONS(257),
    [sym_symbol] = ACTIONS(257),
    [sym_string_literal] = ACTIONS(257),
    [sym_date_literal] = ACTIONS(257),
    [sym_color_literal] = ACTIONS(257),
    [sym_integer_literal] = ACTIONS(257),
    [sym_double_literal] = ACTIONS(257),
    [sym_file_number] = ACTIONS(257),
    [sym_octal_literal] = ACTIONS(257),
    [sym_frx_offset] = ACTIONS(257),
    [sym_guid] = ACTIONS(257),
    [sym_identifier] = ACTIONS(257),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(259),
    [sym_comment] = ACTIONS(257),
  },
  [52] = {
    [anon_sym_Imports] = ACTIONS(239),
    [anon_sym_Namespace] = ACTIONS(239),
    [anon_sym_End] = ACTIONS(239),
    [anon_sym_Class] = ACTIONS(239),
    [anon_sym_Sub] = ACTIONS(239),
    [anon_sym_Function] = ACTIONS(239),
    [anon_sym_Public] = ACTIONS(239),
    [sym_keyword] = ACTIONS(239),
    [sym_symbol] = ACTIONS(239),
    [sym_string_literal] = ACTIONS(239),
    [sym_date_literal] = ACTIONS(239),
    [sym_color_literal] = ACTIONS(239),
    [sym_integer_literal] = ACTIONS(239),
    [sym_double_literal] = ACTIONS(239),
    [sym_file_number] = ACTIONS(239),
    [sym_octal_literal] = ACTIONS(239),
    [sym_frx_offset] = ACTIONS(239),
    [sym_guid] = ACTIONS(239),
    [sym_identifier] = ACTIONS(239),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(237),
    [sym_comment] = ACTIONS(239),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_Imports] = ACTIONS(257),
    [anon_sym_Namespace] = ACTIONS(257),
    [anon_sym_Class] = ACTIONS(257),
    [anon_sym_Sub] = ACTIONS(257),
    [anon_sym_Function] = ACTIONS(257),
    [anon_sym_Public] = ACTIONS(257),
    [sym_keyword] = ACTIONS(257),
    [sym_symbol] = ACTIONS(257),
    [sym_string_literal] = ACTIONS(257),
    [sym_date_literal] = ACTIONS(257),
    [sym_color_literal] = ACTIONS(257),
    [sym_integer_literal] = ACTIONS(257),
    [sym_double_literal] = ACTIONS(257),
    [sym_file_number] = ACTIONS(257),
    [sym_octal_literal] = ACTIONS(257),
    [sym_frx_offset] = ACTIONS(257),
    [sym_guid] = ACTIONS(257),
    [sym_identifier] = ACTIONS(257),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(259),
    [sym_comment] = ACTIONS(257),
  },
  [54] = {
    [anon_sym_Imports] = ACTIONS(261),
    [anon_sym_Namespace] = ACTIONS(261),
    [anon_sym_End] = ACTIONS(261),
    [anon_sym_Class] = ACTIONS(261),
    [anon_sym_Sub] = ACTIONS(261),
    [anon_sym_Function] = ACTIONS(261),
    [anon_sym_Public] = ACTIONS(261),
    [sym_keyword] = ACTIONS(261),
    [sym_symbol] = ACTIONS(261),
    [sym_string_literal] = ACTIONS(261),
    [sym_date_literal] = ACTIONS(261),
    [sym_color_literal] = ACTIONS(261),
    [sym_integer_literal] = ACTIONS(261),
    [sym_double_literal] = ACTIONS(261),
    [sym_file_number] = ACTIONS(261),
    [sym_octal_literal] = ACTIONS(261),
    [sym_frx_offset] = ACTIONS(261),
    [sym_guid] = ACTIONS(261),
    [sym_identifier] = ACTIONS(261),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(261),
  },
  [55] = {
    [anon_sym_Imports] = ACTIONS(265),
    [anon_sym_Namespace] = ACTIONS(265),
    [anon_sym_End] = ACTIONS(265),
    [anon_sym_Class] = ACTIONS(265),
    [anon_sym_Sub] = ACTIONS(265),
    [anon_sym_Function] = ACTIONS(265),
    [anon_sym_Public] = ACTIONS(265),
    [sym_keyword] = ACTIONS(265),
    [sym_symbol] = ACTIONS(265),
    [sym_string_literal] = ACTIONS(265),
    [sym_date_literal] = ACTIONS(265),
    [sym_color_literal] = ACTIONS(265),
    [sym_integer_literal] = ACTIONS(265),
    [sym_double_literal] = ACTIONS(265),
    [sym_file_number] = ACTIONS(265),
    [sym_octal_literal] = ACTIONS(265),
    [sym_frx_offset] = ACTIONS(265),
    [sym_guid] = ACTIONS(265),
    [sym_identifier] = ACTIONS(265),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(267),
    [sym_comment] = ACTIONS(265),
  },
  [56] = {
    [anon_sym_Imports] = ACTIONS(251),
    [anon_sym_Namespace] = ACTIONS(251),
    [anon_sym_End] = ACTIONS(251),
    [anon_sym_Class] = ACTIONS(251),
    [anon_sym_Sub] = ACTIONS(251),
    [anon_sym_Function] = ACTIONS(251),
    [anon_sym_Public] = ACTIONS(251),
    [sym_keyword] = ACTIONS(251),
    [sym_symbol] = ACTIONS(251),
    [sym_string_literal] = ACTIONS(251),
    [sym_date_literal] = ACTIONS(251),
    [sym_color_literal] = ACTIONS(251),
    [sym_integer_literal] = ACTIONS(251),
    [sym_double_literal] = ACTIONS(251),
    [sym_file_number] = ACTIONS(251),
    [sym_octal_literal] = ACTIONS(251),
    [sym_frx_offset] = ACTIONS(251),
    [sym_guid] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(249),
    [sym_comment] = ACTIONS(251),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_Imports] = ACTIONS(271),
    [anon_sym_Namespace] = ACTIONS(271),
    [anon_sym_Class] = ACTIONS(271),
    [anon_sym_Sub] = ACTIONS(271),
    [anon_sym_Function] = ACTIONS(271),
    [anon_sym_Public] = ACTIONS(271),
    [sym_keyword] = ACTIONS(271),
    [sym_symbol] = ACTIONS(271),
    [sym_string_literal] = ACTIONS(271),
    [sym_date_literal] = ACTIONS(271),
    [sym_color_literal] = ACTIONS(271),
    [sym_integer_literal] = ACTIONS(271),
    [sym_double_literal] = ACTIONS(271),
    [sym_file_number] = ACTIONS(271),
    [sym_octal_literal] = ACTIONS(271),
    [sym_frx_offset] = ACTIONS(271),
    [sym_guid] = ACTIONS(271),
    [sym_identifier] = ACTIONS(271),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(269),
    [sym_comment] = ACTIONS(271),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_Imports] = ACTIONS(265),
    [anon_sym_Namespace] = ACTIONS(265),
    [anon_sym_Class] = ACTIONS(265),
    [anon_sym_Sub] = ACTIONS(265),
    [anon_sym_Function] = ACTIONS(265),
    [anon_sym_Public] = ACTIONS(265),
    [sym_keyword] = ACTIONS(265),
    [sym_symbol] = ACTIONS(265),
    [sym_string_literal] = ACTIONS(265),
    [sym_date_literal] = ACTIONS(265),
    [sym_color_literal] = ACTIONS(265),
    [sym_integer_literal] = ACTIONS(265),
    [sym_double_literal] = ACTIONS(265),
    [sym_file_number] = ACTIONS(265),
    [sym_octal_literal] = ACTIONS(265),
    [sym_frx_offset] = ACTIONS(265),
    [sym_guid] = ACTIONS(265),
    [sym_identifier] = ACTIONS(265),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(267),
    [sym_comment] = ACTIONS(265),
  },
  [59] = {
    [anon_sym_Imports] = ACTIONS(271),
    [anon_sym_Namespace] = ACTIONS(271),
    [anon_sym_End] = ACTIONS(271),
    [anon_sym_Class] = ACTIONS(271),
    [anon_sym_Sub] = ACTIONS(271),
    [anon_sym_Function] = ACTIONS(271),
    [anon_sym_Public] = ACTIONS(271),
    [sym_keyword] = ACTIONS(271),
    [sym_symbol] = ACTIONS(271),
    [sym_string_literal] = ACTIONS(271),
    [sym_date_literal] = ACTIONS(271),
    [sym_color_literal] = ACTIONS(271),
    [sym_integer_literal] = ACTIONS(271),
    [sym_double_literal] = ACTIONS(271),
    [sym_file_number] = ACTIONS(271),
    [sym_octal_literal] = ACTIONS(271),
    [sym_frx_offset] = ACTIONS(271),
    [sym_guid] = ACTIONS(271),
    [sym_identifier] = ACTIONS(271),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(269),
    [sym_comment] = ACTIONS(271),
  },
  [60] = {
    [anon_sym_Imports] = ACTIONS(255),
    [anon_sym_Namespace] = ACTIONS(255),
    [anon_sym_End] = ACTIONS(255),
    [anon_sym_Class] = ACTIONS(255),
    [anon_sym_Sub] = ACTIONS(255),
    [anon_sym_Function] = ACTIONS(255),
    [anon_sym_Public] = ACTIONS(255),
    [sym_keyword] = ACTIONS(255),
    [sym_symbol] = ACTIONS(255),
    [sym_string_literal] = ACTIONS(255),
    [sym_date_literal] = ACTIONS(255),
    [sym_color_literal] = ACTIONS(255),
    [sym_integer_literal] = ACTIONS(255),
    [sym_double_literal] = ACTIONS(255),
    [sym_file_number] = ACTIONS(255),
    [sym_octal_literal] = ACTIONS(255),
    [sym_frx_offset] = ACTIONS(255),
    [sym_guid] = ACTIONS(255),
    [sym_identifier] = ACTIONS(255),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(253),
    [sym_comment] = ACTIONS(255),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_Imports] = ACTIONS(245),
    [anon_sym_Namespace] = ACTIONS(245),
    [anon_sym_Class] = ACTIONS(245),
    [anon_sym_Sub] = ACTIONS(245),
    [anon_sym_Function] = ACTIONS(245),
    [anon_sym_Public] = ACTIONS(245),
    [sym_keyword] = ACTIONS(245),
    [sym_symbol] = ACTIONS(245),
    [sym_string_literal] = ACTIONS(245),
    [sym_date_literal] = ACTIONS(245),
    [sym_color_literal] = ACTIONS(245),
    [sym_integer_literal] = ACTIONS(245),
    [sym_double_literal] = ACTIONS(245),
    [sym_file_number] = ACTIONS(245),
    [sym_octal_literal] = ACTIONS(245),
    [sym_frx_offset] = ACTIONS(245),
    [sym_guid] = ACTIONS(245),
    [sym_identifier] = ACTIONS(245),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(247),
    [sym_comment] = ACTIONS(245),
  },
  [62] = {
    [anon_sym_Imports] = ACTIONS(243),
    [anon_sym_Namespace] = ACTIONS(243),
    [anon_sym_End] = ACTIONS(243),
    [anon_sym_Class] = ACTIONS(243),
    [anon_sym_Sub] = ACTIONS(243),
    [anon_sym_Function] = ACTIONS(243),
    [anon_sym_Public] = ACTIONS(243),
    [sym_keyword] = ACTIONS(243),
    [sym_symbol] = ACTIONS(243),
    [sym_string_literal] = ACTIONS(243),
    [sym_date_literal] = ACTIONS(243),
    [sym_color_literal] = ACTIONS(243),
    [sym_integer_literal] = ACTIONS(243),
    [sym_double_literal] = ACTIONS(243),
    [sym_file_number] = ACTIONS(243),
    [sym_octal_literal] = ACTIONS(243),
    [sym_frx_offset] = ACTIONS(243),
    [sym_guid] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(241),
    [sym_comment] = ACTIONS(243),
  },
  [63] = {
    [anon_sym_Imports] = ACTIONS(235),
    [anon_sym_Namespace] = ACTIONS(235),
    [anon_sym_End] = ACTIONS(235),
    [anon_sym_Class] = ACTIONS(235),
    [anon_sym_Sub] = ACTIONS(235),
    [anon_sym_Function] = ACTIONS(235),
    [anon_sym_Public] = ACTIONS(235),
    [sym_keyword] = ACTIONS(235),
    [sym_symbol] = ACTIONS(235),
    [sym_string_literal] = ACTIONS(235),
    [sym_date_literal] = ACTIONS(235),
    [sym_color_literal] = ACTIONS(235),
    [sym_integer_literal] = ACTIONS(235),
    [sym_double_literal] = ACTIONS(235),
    [sym_file_number] = ACTIONS(235),
    [sym_octal_literal] = ACTIONS(235),
    [sym_frx_offset] = ACTIONS(235),
    [sym_guid] = ACTIONS(235),
    [sym_identifier] = ACTIONS(235),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(233),
    [sym_comment] = ACTIONS(235),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_Imports] = ACTIONS(261),
    [anon_sym_Namespace] = ACTIONS(261),
    [anon_sym_Class] = ACTIONS(261),
    [anon_sym_Sub] = ACTIONS(261),
    [anon_sym_Function] = ACTIONS(261),
    [anon_sym_Public] = ACTIONS(261),
    [sym_keyword] = ACTIONS(261),
    [sym_symbol] = ACTIONS(261),
    [sym_string_literal] = ACTIONS(261),
    [sym_date_literal] = ACTIONS(261),
    [sym_color_literal] = ACTIONS(261),
    [sym_integer_literal] = ACTIONS(261),
    [sym_double_literal] = ACTIONS(261),
    [sym_file_number] = ACTIONS(261),
    [sym_octal_literal] = ACTIONS(261),
    [sym_frx_offset] = ACTIONS(261),
    [sym_guid] = ACTIONS(261),
    [sym_identifier] = ACTIONS(261),
    [sym_line_continuation] = ACTIONS(5),
    [sym_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(261),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(275), 1,
      anon_sym_As,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [17] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [31] = 4,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [45] = 3,
    ACTIONS(286), 1,
      anon_sym_As,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [57] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [71] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [85] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 1,
      sym_identifier,
    STATE(93), 1,
      sym_parameter_list,
  [101] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_parameter_list,
  [117] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [126] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [135] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [144] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [153] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [162] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [171] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [180] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [189] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [198] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [207] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_Sub,
      anon_sym_Function,
  [216] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_identifier,
  [226] = 2,
    ACTIONS(322), 1,
      anon_sym_Namespace,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [234] = 2,
    ACTIONS(324), 1,
      anon_sym_Namespace,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [242] = 2,
    ACTIONS(326), 1,
      anon_sym_Namespace,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [250] = 2,
    ACTIONS(328), 1,
      anon_sym_Class,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [258] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_identifier,
  [268] = 2,
    ACTIONS(332), 1,
      anon_sym_Namespace,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [276] = 2,
    ACTIONS(334), 1,
      anon_sym_Class,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [284] = 2,
    ACTIONS(336), 1,
      anon_sym_Namespace,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [292] = 2,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [300] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_identifier,
  [310] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_identifier,
  [320] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
  [330] = 2,
    ACTIONS(346), 1,
      anon_sym_Namespace,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [338] = 2,
    ACTIONS(348), 1,
      anon_sym_Class,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [346] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_identifier,
  [356] = 2,
    ACTIONS(352), 1,
      anon_sym_As,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [364] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_identifier,
  [374] = 2,
    ACTIONS(356), 1,
      anon_sym_Class,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [382] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_identifier,
  [392] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
  [402] = 2,
    ACTIONS(362), 1,
      anon_sym_As,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [410] = 2,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [418] = 2,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [426] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_identifier,
  [436] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_identifier,
  [446] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_identifier,
  [456] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_identifier,
  [466] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_identifier,
  [476] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_identifier,
  [486] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_identifier,
  [496] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_identifier,
  [506] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_identifier,
  [516] = 2,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [524] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_identifier,
  [534] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_identifier,
  [544] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [552] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(65)] = 0,
  [SMALL_STATE(66)] = 17,
  [SMALL_STATE(67)] = 31,
  [SMALL_STATE(68)] = 45,
  [SMALL_STATE(69)] = 57,
  [SMALL_STATE(70)] = 71,
  [SMALL_STATE(71)] = 85,
  [SMALL_STATE(72)] = 101,
  [SMALL_STATE(73)] = 117,
  [SMALL_STATE(74)] = 126,
  [SMALL_STATE(75)] = 135,
  [SMALL_STATE(76)] = 144,
  [SMALL_STATE(77)] = 153,
  [SMALL_STATE(78)] = 162,
  [SMALL_STATE(79)] = 171,
  [SMALL_STATE(80)] = 180,
  [SMALL_STATE(81)] = 189,
  [SMALL_STATE(82)] = 198,
  [SMALL_STATE(83)] = 207,
  [SMALL_STATE(84)] = 216,
  [SMALL_STATE(85)] = 226,
  [SMALL_STATE(86)] = 234,
  [SMALL_STATE(87)] = 242,
  [SMALL_STATE(88)] = 250,
  [SMALL_STATE(89)] = 258,
  [SMALL_STATE(90)] = 268,
  [SMALL_STATE(91)] = 276,
  [SMALL_STATE(92)] = 284,
  [SMALL_STATE(93)] = 292,
  [SMALL_STATE(94)] = 300,
  [SMALL_STATE(95)] = 310,
  [SMALL_STATE(96)] = 320,
  [SMALL_STATE(97)] = 330,
  [SMALL_STATE(98)] = 338,
  [SMALL_STATE(99)] = 346,
  [SMALL_STATE(100)] = 356,
  [SMALL_STATE(101)] = 364,
  [SMALL_STATE(102)] = 374,
  [SMALL_STATE(103)] = 382,
  [SMALL_STATE(104)] = 392,
  [SMALL_STATE(105)] = 402,
  [SMALL_STATE(106)] = 410,
  [SMALL_STATE(107)] = 418,
  [SMALL_STATE(108)] = 426,
  [SMALL_STATE(109)] = 436,
  [SMALL_STATE(110)] = 446,
  [SMALL_STATE(111)] = 456,
  [SMALL_STATE(112)] = 466,
  [SMALL_STATE(113)] = 476,
  [SMALL_STATE(114)] = 486,
  [SMALL_STATE(115)] = 496,
  [SMALL_STATE(116)] = 506,
  [SMALL_STATE(117)] = 516,
  [SMALL_STATE(118)] = 524,
  [SMALL_STATE(119)] = 534,
  [SMALL_STATE(120)] = 544,
  [SMALL_STATE(121)] = 552,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports_statement, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imports_statement, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imports_statement, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports_statement, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_imports_statement_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_imports_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imports_statement_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_imports_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 8, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 8, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declaration, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_declaration, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_declaration, 5, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declaration, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_declaration, 6, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_declaration, 6, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 10, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 10, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 9, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 9, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 7, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 7, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
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
