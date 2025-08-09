#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LBRACK_LBRACK = 5,
  anon_sym_RBRACK_RBRACK = 6,
  anon_sym_EQ = 7,
  anon_sym_DOT = 8,
  sym_bare_key = 9,
  anon_sym_DQUOTE = 10,
  aux_sym__basic_string_token1 = 11,
  anon_sym_DQUOTE2 = 12,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 13,
  aux_sym__multiline_basic_string_token1 = 14,
  sym_escape_sequence = 15,
  sym__escape_line_ending = 16,
  anon_sym_SQUOTE = 17,
  aux_sym__literal_string_token1 = 18,
  anon_sym_SQUOTE2 = 19,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 20,
  aux_sym_integer_token1 = 21,
  aux_sym_integer_token2 = 22,
  aux_sym_integer_token3 = 23,
  aux_sym_integer_token4 = 24,
  aux_sym_float_token1 = 25,
  aux_sym_float_token2 = 26,
  sym_boolean = 27,
  sym_offset_date_time = 28,
  sym_local_date_time = 29,
  sym_local_date = 30,
  sym_local_time = 31,
  anon_sym_COMMA = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  sym__line_ending_or_eof = 35,
  sym__multiline_basic_string_content = 36,
  sym__multiline_basic_string_end = 37,
  sym__multiline_literal_string_content = 38,
  sym__multiline_literal_string_end = 39,
  sym_document = 40,
  sym_table = 41,
  sym_table_array_element = 42,
  sym_pair = 43,
  sym__inline_pair = 44,
  sym__key = 45,
  sym_dotted_key = 46,
  sym_quoted_key = 47,
  sym__inline_value = 48,
  sym_string = 49,
  sym__basic_string = 50,
  sym__multiline_basic_string = 51,
  sym__literal_string = 52,
  sym__multiline_literal_string = 53,
  sym_integer = 54,
  sym_float = 55,
  sym_array = 56,
  sym_inline_table = 57,
  aux_sym_document_repeat1 = 58,
  aux_sym_document_repeat2 = 59,
  aux_sym__basic_string_repeat1 = 60,
  aux_sym__multiline_basic_string_repeat1 = 61,
  aux_sym__multiline_literal_string_repeat1 = 62,
  aux_sym_array_repeat1 = 63,
  aux_sym_array_repeat2 = 64,
  aux_sym_inline_table_repeat1 = 65,
  alias_sym_string_content = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym_bare_key] = "bare_key",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__basic_string_token1] = "_basic_string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__multiline_basic_string_token1] = "_multiline_basic_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_line_ending] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym_boolean] = "boolean",
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_local_time] = "local_time",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__line_ending_or_eof] = "_line_ending_or_eof",
  [sym__multiline_basic_string_content] = "_multiline_basic_string_content",
  [sym__multiline_basic_string_end] = "_multiline_basic_string_end",
  [sym__multiline_literal_string_content] = "_multiline_literal_string_content",
  [sym__multiline_literal_string_end] = "_multiline_literal_string_end",
  [sym_document] = "document",
  [sym_table] = "table",
  [sym_table_array_element] = "table_array_element",
  [sym_pair] = "pair",
  [sym__inline_pair] = "_inline_pair",
  [sym__key] = "_key",
  [sym_dotted_key] = "dotted_key",
  [sym_quoted_key] = "quoted_key",
  [sym__inline_value] = "_inline_value",
  [sym_string] = "string",
  [sym__basic_string] = "_basic_string",
  [sym__multiline_basic_string] = "_multiline_basic_string",
  [sym__literal_string] = "_literal_string",
  [sym__multiline_literal_string] = "_multiline_literal_string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_array] = "array",
  [sym_inline_table] = "inline_table",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym__basic_string_repeat1] = "_basic_string_repeat1",
  [aux_sym__multiline_basic_string_repeat1] = "_multiline_basic_string_repeat1",
  [aux_sym__multiline_literal_string_repeat1] = "_multiline_literal_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_array_repeat2] = "array_repeat2",
  [aux_sym_inline_table_repeat1] = "inline_table_repeat1",
  [alias_sym_string_content] = "string_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_bare_key] = sym_bare_key,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__basic_string_token1] = aux_sym__basic_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym__multiline_basic_string_token1] = aux_sym__multiline_basic_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_line_ending] = sym_escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_boolean] = sym_boolean,
  [sym_offset_date_time] = sym_offset_date_time,
  [sym_local_date_time] = sym_local_date_time,
  [sym_local_date] = sym_local_date,
  [sym_local_time] = sym_local_time,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__line_ending_or_eof] = sym__line_ending_or_eof,
  [sym__multiline_basic_string_content] = sym__multiline_basic_string_content,
  [sym__multiline_basic_string_end] = sym__multiline_basic_string_end,
  [sym__multiline_literal_string_content] = sym__multiline_literal_string_content,
  [sym__multiline_literal_string_end] = sym__multiline_literal_string_end,
  [sym_document] = sym_document,
  [sym_table] = sym_table,
  [sym_table_array_element] = sym_table_array_element,
  [sym_pair] = sym_pair,
  [sym__inline_pair] = sym__inline_pair,
  [sym__key] = sym__key,
  [sym_dotted_key] = sym_dotted_key,
  [sym_quoted_key] = sym_quoted_key,
  [sym__inline_value] = sym__inline_value,
  [sym_string] = sym_string,
  [sym__basic_string] = sym__basic_string,
  [sym__multiline_basic_string] = sym__multiline_basic_string,
  [sym__literal_string] = sym__literal_string,
  [sym__multiline_literal_string] = sym__multiline_literal_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_array] = sym_array,
  [sym_inline_table] = sym_inline_table,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym__basic_string_repeat1] = aux_sym__basic_string_repeat1,
  [aux_sym__multiline_basic_string_repeat1] = aux_sym__multiline_basic_string_repeat1,
  [aux_sym__multiline_literal_string_repeat1] = aux_sym__multiline_literal_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_array_repeat2] = aux_sym_array_repeat2,
  [aux_sym_inline_table_repeat1] = aux_sym_inline_table_repeat1,
  [alias_sym_string_content] = alias_sym_string_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_bare_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_line_ending] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date] = {
    .visible = true,
    .named = true,
  },
  [sym_local_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__line_ending_or_eof] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_array_element] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_pair] = {
    .visible = false,
    .named = true,
  },
  [sym__key] = {
    .visible = false,
    .named = true,
  },
  [sym_dotted_key] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_key] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_literal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_string_content] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_string_content,
  },
  [2] = {
    [1] = sym_pair,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__inline_pair, 2,
    sym__inline_pair,
    sym_pair,
  aux_sym__basic_string_repeat1, 2,
    aux_sym__basic_string_repeat1,
    alias_sym_string_content,
  aux_sym__multiline_basic_string_repeat1, 2,
    aux_sym__multiline_basic_string_repeat1,
    alias_sym_string_content,
  aux_sym__multiline_literal_string_repeat1, 2,
    aux_sym__multiline_literal_string_repeat1,
    alias_sym_string_content,
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 3,
  [12] = 4,
  [13] = 5,
  [14] = 6,
  [15] = 7,
  [16] = 2,
  [17] = 8,
  [18] = 18,
  [19] = 9,
  [20] = 10,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 39,
  [45] = 42,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 55,
  [61] = 54,
  [62] = 62,
  [63] = 56,
  [64] = 62,
  [65] = 59,
  [66] = 57,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 72,
  [92] = 68,
  [93] = 93,
  [94] = 68,
  [95] = 72,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 99,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 105,
  [108] = 108,
  [109] = 108,
  [110] = 104,
  [111] = 111,
  [112] = 112,
  [113] = 100,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 50,
  [118] = 53,
  [119] = 48,
  [120] = 120,
  [121] = 114,
  [122] = 97,
  [123] = 111,
  [124] = 49,
  [125] = 114,
  [126] = 79,
  [127] = 86,
  [128] = 128,
  [129] = 90,
  [130] = 53,
  [131] = 81,
  [132] = 132,
  [133] = 76,
  [134] = 88,
  [135] = 77,
  [136] = 136,
  [137] = 87,
  [138] = 138,
  [139] = 78,
  [140] = 82,
  [141] = 74,
  [142] = 89,
  [143] = 83,
  [144] = 75,
  [145] = 50,
  [146] = 136,
  [147] = 84,
  [148] = 112,
  [149] = 85,
  [150] = 48,
  [151] = 151,
  [152] = 49,
  [153] = 136,
  [154] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '\n', 129,
        '\r', 1,
        '"', 127,
        '#', 79,
        '\'', 137,
        '+', 15,
        ',', 161,
        '-', 95,
        '.', 86,
        '0', 92,
        '1', 90,
        '2', 89,
        '=', 85,
        '[', 81,
        '\\', 5,
        ']', 82,
        'f', 102,
        'i', 108,
        'n', 103,
        't', 109,
        '{', 162,
        '}', 163,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(131);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 131,
        '\r', 4,
        'U', 74,
        'u', 70,
        '"', 130,
        '\\', 130,
        'b', 130,
        'f', 130,
        'n', 130,
        'r', 130,
        't', 130,
      );
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 78,
        '\r', 6,
        '"', 123,
        '#', 79,
        '\'', 133,
        ',', 161,
        '0', 144,
        '1', 142,
        '2', 141,
        '[', 80,
        ']', 82,
        'f', 30,
        'i', 35,
        'n', 31,
        't', 37,
        '{', 162,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(17);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(159);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '1') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(156);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 42:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(158);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(14);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(28);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(26);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(53);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(65);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 50:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 51:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '\n', 78,
        '\r', 6,
        '"', 123,
        '#', 79,
        '\'', 133,
        '+', 15,
        ',', 161,
        '-', 95,
        '.', 86,
        '0', 92,
        '1', 90,
        '2', 89,
        '=', 85,
        '[', 81,
        ']', 82,
        'f', 102,
        'i', 108,
        'n', 103,
        't', 109,
        '{', 162,
        '}', 163,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '\n', 78,
        '\r', 6,
        '"', 122,
        '#', 79,
        '\'', 132,
        ',', 161,
        '.', 86,
        '=', 85,
        '[', 81,
        ']', 82,
        '}', 163,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_document_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead > 0x08 &&
          (lookahead < '\n' || 0x1f < lookahead) &&
          lookahead != 0x7f) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(87);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '3') ADVANCE(112);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(118);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(98);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(98);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(94);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != 0x7f) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead > 0x08 &&
          (lookahead < '\n' || 0x1f < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 0x7f) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead > ' ' &&
          lookahead != '\'' &&
          lookahead != 0x7f) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead > 0x08 &&
          (lookahead < '\n' || 0x1f < lookahead) &&
          lookahead != '\'' &&
          lookahead != 0x7f) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(140);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_offset_date_time);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_local_date);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 2, .external_lex_state = 2},
  [39] = {.lex_state = 2, .external_lex_state = 2},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 2, .external_lex_state = 2},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 2, .external_lex_state = 2},
  [45] = {.lex_state = 2, .external_lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2, .external_lex_state = 2},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 3, .external_lex_state = 3},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 76},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 3, .external_lex_state = 3},
  [59] = {.lex_state = 3, .external_lex_state = 3},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 3, .external_lex_state = 3},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 3, .external_lex_state = 3},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 3, .external_lex_state = 3},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 76},
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 76},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 0, .external_lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_bare_key] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_local_date] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__line_ending_or_eof] = ACTIONS(1),
    [sym__multiline_basic_string_content] = ACTIONS(1),
    [sym__multiline_basic_string_end] = ACTIONS(1),
    [sym__multiline_literal_string_content] = ACTIONS(1),
    [sym__multiline_literal_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(132),
    [sym_table] = STATE(46),
    [sym_table_array_element] = STATE(46),
    [sym_pair] = STATE(27),
    [sym__inline_pair] = STATE(138),
    [sym__key] = STATE(123),
    [sym_dotted_key] = STATE(123),
    [sym_quoted_key] = STATE(123),
    [sym__basic_string] = STATE(97),
    [sym__literal_string] = STATE(97),
    [aux_sym_document_repeat1] = STATE(27),
    [aux_sym_document_repeat2] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
    [sym_bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [66] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(71), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [132] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(66), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [198] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(65), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(63), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(64), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [264] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      aux_sym_document_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [330] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(71), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [396] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(71), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [462] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(71), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [528] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(75), 1,
      aux_sym_document_token1,
    STATE(11), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [594] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(71), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [660] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      aux_sym_document_token1,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(85), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(83), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(57), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [726] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(91), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(89), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(62), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [792] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      aux_sym_document_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [858] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(71), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [924] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      aux_sym_document_token1,
    STATE(17), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [990] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(71), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1056] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(103), 1,
      aux_sym_document_token1,
    STATE(19), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1122] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(71), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1188] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 1,
      aux_sym_document_token1,
    STATE(3), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1254] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 1,
      aux_sym_document_token1,
    STATE(9), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1320] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      aux_sym_document_token1,
    STATE(23), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1383] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(71), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1446] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(123), 1,
      aux_sym_integer_token1,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(131), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(125), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(129), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(133), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(148), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1503] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(137), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(135), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(76), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(112), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(144), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_integer_token1,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(142), 14,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1593] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    STATE(138), 1,
      sym__inline_pair,
    STATE(31), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(51), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
    STATE(123), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1639] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      aux_sym_document_token1,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(138), 1,
      sym__inline_pair,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(30), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(123), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1678] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    STATE(138), 1,
      sym__inline_pair,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(31), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(123), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1717] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    STATE(138), 1,
      sym__inline_pair,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(31), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(123), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1756] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_document_token1,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      sym_bare_key,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    STATE(138), 1,
      sym__inline_pair,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(31), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(123), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1795] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      aux_sym_document_token1,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(138), 1,
      sym__inline_pair,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(123), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1834] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      sym_bare_key,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym__inline_pair,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(111), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1862] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      sym_bare_key,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym__inline_pair,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(111), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1890] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      sym_bare_key,
    STATE(120), 1,
      sym__inline_pair,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(111), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_bare_key,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    STATE(122), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(116), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      sym_bare_key,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(115), 3,
      sym__key,
      sym_dotted_key,
      sym_quoted_key,
  [1959] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__multiline_basic_string_end,
    STATE(38), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(202), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [1976] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__multiline_basic_string_end,
    STATE(38), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(207), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [1993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_LBRACK_LBRACK,
      sym_bare_key,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2008] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_bare_key,
    STATE(97), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(100), 2,
      sym__key,
      sym_quoted_key,
  [2029] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__multiline_basic_string_end,
    STATE(44), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(207), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2046] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      sym_bare_key,
    STATE(113), 2,
      sym__key,
      sym_quoted_key,
    STATE(122), 2,
      sym__basic_string,
      sym__literal_string,
  [2067] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__multiline_basic_string_end,
    STATE(38), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(207), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2084] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__multiline_basic_string_end,
    STATE(39), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(207), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(52), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2119] = 2,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(225), 6,
      sym__multiline_basic_string_content,
      sym__multiline_basic_string_end,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    STATE(52), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(52), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2215] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym__multiline_literal_string_end,
    STATE(59), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(245), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2230] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(99), 1,
      aux_sym_array_repeat2,
  [2249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    ACTIONS(253), 1,
      aux_sym_document_token1,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_array_repeat1,
    STATE(108), 1,
      aux_sym_array_repeat2,
  [2287] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym__multiline_literal_string_end,
    STATE(58), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(257), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2302] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__multiline_literal_string_end,
    STATE(58), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(245), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2317] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(103), 1,
      aux_sym_array_repeat2,
  [2336] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__multiline_literal_string_end,
    STATE(65), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(245), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2351] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      aux_sym_document_token1,
    STATE(63), 1,
      aux_sym_array_repeat1,
    STATE(103), 1,
      aux_sym_array_repeat2,
  [2370] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(102), 1,
      aux_sym_array_repeat2,
  [2389] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      aux_sym_document_token1,
    STATE(56), 1,
      aux_sym_array_repeat1,
    STATE(99), 1,
      aux_sym_array_repeat2,
  [2408] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__multiline_literal_string_end,
    STATE(58), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(245), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    ACTIONS(276), 1,
      aux_sym_document_token1,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_array_repeat1,
    STATE(109), 1,
      aux_sym_array_repeat2,
  [2442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(280), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2456] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DQUOTE2,
    STATE(93), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(282), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_document_token1,
    STATE(70), 1,
      aux_sym_array_repeat1,
    ACTIONS(288), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(290), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym_document_token1,
    STATE(67), 1,
      aux_sym_array_repeat1,
    ACTIONS(290), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2512] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DQUOTE2,
    STATE(94), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(282), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2526] = 2,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(296), 4,
      sym__multiline_literal_string_content,
      sym__multiline_literal_string_end,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2706] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE2,
    STATE(92), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(282), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2720] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE2,
    STATE(93), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(282), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2734] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DQUOTE2,
    STATE(93), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(336), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2748] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DQUOTE2,
    STATE(93), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(282), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2762] = 4,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE2,
    STATE(68), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(282), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [2798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_inline_table_repeat1,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [2833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_inline_table_repeat1,
  [2885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_inline_table_repeat1,
  [2898] = 2,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(367), 3,
      aux_sym__basic_string_token1,
      anon_sym_DQUOTE2,
      sym_escape_sequence,
  [2907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_inline_table_repeat1,
  [2920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_inline_table_repeat1,
  [2959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_EQ,
    ACTIONS(375), 1,
      anon_sym_DOT,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [2985] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym__literal_string_token1,
    ACTIONS(381), 1,
      anon_sym_SQUOTE2,
  [2995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
  [3005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(387), 1,
      anon_sym_DOT,
  [3015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3047] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym__literal_string_token1,
    ACTIONS(393), 1,
      anon_sym_SQUOTE2,
  [3057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(395), 1,
      anon_sym_EQ,
  [3075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3083] = 3,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym__literal_string_token1,
    ACTIONS(399), 1,
      anon_sym_SQUOTE2,
  [3093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym__line_ending_or_eof,
  [3100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym__line_ending_or_eof,
  [3107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym__line_ending_or_eof,
  [3114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym__line_ending_or_eof,
  [3121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__line_ending_or_eof,
  [3128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym__line_ending_or_eof,
  [3135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [3142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__line_ending_or_eof,
  [3149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym__line_ending_or_eof,
  [3156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__line_ending_or_eof,
  [3163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_SQUOTE2,
  [3170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym__line_ending_or_eof,
  [3177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__line_ending_or_eof,
  [3184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__line_ending_or_eof,
  [3191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__line_ending_or_eof,
  [3198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym__line_ending_or_eof,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym__line_ending_or_eof,
  [3212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym__line_ending_or_eof,
  [3219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__line_ending_or_eof,
  [3226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__line_ending_or_eof,
  [3233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_SQUOTE2,
  [3240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__line_ending_or_eof,
  [3247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym__line_ending_or_eof,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__line_ending_or_eof,
  [3261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__line_ending_or_eof,
  [3268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym__line_ending_or_eof,
  [3275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__line_ending_or_eof,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SQUOTE2,
  [3289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__line_ending_or_eof,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 330,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 462,
  [SMALL_STATE(10)] = 528,
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 660,
  [SMALL_STATE(13)] = 726,
  [SMALL_STATE(14)] = 792,
  [SMALL_STATE(15)] = 858,
  [SMALL_STATE(16)] = 924,
  [SMALL_STATE(17)] = 990,
  [SMALL_STATE(18)] = 1056,
  [SMALL_STATE(19)] = 1122,
  [SMALL_STATE(20)] = 1188,
  [SMALL_STATE(21)] = 1254,
  [SMALL_STATE(22)] = 1320,
  [SMALL_STATE(23)] = 1383,
  [SMALL_STATE(24)] = 1446,
  [SMALL_STATE(25)] = 1503,
  [SMALL_STATE(26)] = 1560,
  [SMALL_STATE(27)] = 1593,
  [SMALL_STATE(28)] = 1639,
  [SMALL_STATE(29)] = 1678,
  [SMALL_STATE(30)] = 1717,
  [SMALL_STATE(31)] = 1756,
  [SMALL_STATE(32)] = 1795,
  [SMALL_STATE(33)] = 1834,
  [SMALL_STATE(34)] = 1862,
  [SMALL_STATE(35)] = 1890,
  [SMALL_STATE(36)] = 1915,
  [SMALL_STATE(37)] = 1937,
  [SMALL_STATE(38)] = 1959,
  [SMALL_STATE(39)] = 1976,
  [SMALL_STATE(40)] = 1993,
  [SMALL_STATE(41)] = 2008,
  [SMALL_STATE(42)] = 2029,
  [SMALL_STATE(43)] = 2046,
  [SMALL_STATE(44)] = 2067,
  [SMALL_STATE(45)] = 2084,
  [SMALL_STATE(46)] = 2101,
  [SMALL_STATE(47)] = 2119,
  [SMALL_STATE(48)] = 2131,
  [SMALL_STATE(49)] = 2143,
  [SMALL_STATE(50)] = 2155,
  [SMALL_STATE(51)] = 2167,
  [SMALL_STATE(52)] = 2185,
  [SMALL_STATE(53)] = 2203,
  [SMALL_STATE(54)] = 2215,
  [SMALL_STATE(55)] = 2230,
  [SMALL_STATE(56)] = 2249,
  [SMALL_STATE(57)] = 2268,
  [SMALL_STATE(58)] = 2287,
  [SMALL_STATE(59)] = 2302,
  [SMALL_STATE(60)] = 2317,
  [SMALL_STATE(61)] = 2336,
  [SMALL_STATE(62)] = 2351,
  [SMALL_STATE(63)] = 2370,
  [SMALL_STATE(64)] = 2389,
  [SMALL_STATE(65)] = 2408,
  [SMALL_STATE(66)] = 2423,
  [SMALL_STATE(67)] = 2442,
  [SMALL_STATE(68)] = 2456,
  [SMALL_STATE(69)] = 2470,
  [SMALL_STATE(70)] = 2484,
  [SMALL_STATE(71)] = 2498,
  [SMALL_STATE(72)] = 2512,
  [SMALL_STATE(73)] = 2526,
  [SMALL_STATE(74)] = 2536,
  [SMALL_STATE(75)] = 2546,
  [SMALL_STATE(76)] = 2556,
  [SMALL_STATE(77)] = 2566,
  [SMALL_STATE(78)] = 2576,
  [SMALL_STATE(79)] = 2586,
  [SMALL_STATE(80)] = 2596,
  [SMALL_STATE(81)] = 2606,
  [SMALL_STATE(82)] = 2616,
  [SMALL_STATE(83)] = 2626,
  [SMALL_STATE(84)] = 2636,
  [SMALL_STATE(85)] = 2646,
  [SMALL_STATE(86)] = 2656,
  [SMALL_STATE(87)] = 2666,
  [SMALL_STATE(88)] = 2676,
  [SMALL_STATE(89)] = 2686,
  [SMALL_STATE(90)] = 2696,
  [SMALL_STATE(91)] = 2706,
  [SMALL_STATE(92)] = 2720,
  [SMALL_STATE(93)] = 2734,
  [SMALL_STATE(94)] = 2748,
  [SMALL_STATE(95)] = 2762,
  [SMALL_STATE(96)] = 2776,
  [SMALL_STATE(97)] = 2789,
  [SMALL_STATE(98)] = 2798,
  [SMALL_STATE(99)] = 2811,
  [SMALL_STATE(100)] = 2824,
  [SMALL_STATE(101)] = 2833,
  [SMALL_STATE(102)] = 2846,
  [SMALL_STATE(103)] = 2859,
  [SMALL_STATE(104)] = 2872,
  [SMALL_STATE(105)] = 2885,
  [SMALL_STATE(106)] = 2898,
  [SMALL_STATE(107)] = 2907,
  [SMALL_STATE(108)] = 2920,
  [SMALL_STATE(109)] = 2933,
  [SMALL_STATE(110)] = 2946,
  [SMALL_STATE(111)] = 2959,
  [SMALL_STATE(112)] = 2969,
  [SMALL_STATE(113)] = 2977,
  [SMALL_STATE(114)] = 2985,
  [SMALL_STATE(115)] = 2995,
  [SMALL_STATE(116)] = 3005,
  [SMALL_STATE(117)] = 3015,
  [SMALL_STATE(118)] = 3023,
  [SMALL_STATE(119)] = 3031,
  [SMALL_STATE(120)] = 3039,
  [SMALL_STATE(121)] = 3047,
  [SMALL_STATE(122)] = 3057,
  [SMALL_STATE(123)] = 3065,
  [SMALL_STATE(124)] = 3075,
  [SMALL_STATE(125)] = 3083,
  [SMALL_STATE(126)] = 3093,
  [SMALL_STATE(127)] = 3100,
  [SMALL_STATE(128)] = 3107,
  [SMALL_STATE(129)] = 3114,
  [SMALL_STATE(130)] = 3121,
  [SMALL_STATE(131)] = 3128,
  [SMALL_STATE(132)] = 3135,
  [SMALL_STATE(133)] = 3142,
  [SMALL_STATE(134)] = 3149,
  [SMALL_STATE(135)] = 3156,
  [SMALL_STATE(136)] = 3163,
  [SMALL_STATE(137)] = 3170,
  [SMALL_STATE(138)] = 3177,
  [SMALL_STATE(139)] = 3184,
  [SMALL_STATE(140)] = 3191,
  [SMALL_STATE(141)] = 3198,
  [SMALL_STATE(142)] = 3205,
  [SMALL_STATE(143)] = 3212,
  [SMALL_STATE(144)] = 3219,
  [SMALL_STATE(145)] = 3226,
  [SMALL_STATE(146)] = 3233,
  [SMALL_STATE(147)] = 3240,
  [SMALL_STATE(148)] = 3247,
  [SMALL_STATE(149)] = 3254,
  [SMALL_STATE(150)] = 3261,
  [SMALL_STATE(151)] = 3268,
  [SMALL_STATE(152)] = 3275,
  [SMALL_STATE(153)] = 3282,
  [SMALL_STATE(154)] = 3289,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 5, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 5, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 3, 0, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3, 0, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(37),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(36),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 4, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 3, 0, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 3, 0, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 3, 0, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 4, 0, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 7, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 8, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_key, 1, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_key, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_pair, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2, 0, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [403] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__line_ending_or_eof = 0,
  ts_external_token__multiline_basic_string_content = 1,
  ts_external_token__multiline_basic_string_end = 2,
  ts_external_token__multiline_literal_string_content = 3,
  ts_external_token__multiline_literal_string_end = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_ending_or_eof] = sym__line_ending_or_eof,
  [ts_external_token__multiline_basic_string_content] = sym__multiline_basic_string_content,
  [ts_external_token__multiline_basic_string_end] = sym__multiline_basic_string_end,
  [ts_external_token__multiline_literal_string_content] = sym__multiline_literal_string_content,
  [ts_external_token__multiline_literal_string_end] = sym__multiline_literal_string_end,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_ending_or_eof] = true,
    [ts_external_token__multiline_basic_string_content] = true,
    [ts_external_token__multiline_basic_string_end] = true,
    [ts_external_token__multiline_literal_string_content] = true,
    [ts_external_token__multiline_literal_string_end] = true,
  },
  [2] = {
    [ts_external_token__multiline_basic_string_content] = true,
    [ts_external_token__multiline_basic_string_end] = true,
  },
  [3] = {
    [ts_external_token__multiline_literal_string_content] = true,
    [ts_external_token__multiline_literal_string_end] = true,
  },
  [4] = {
    [ts_external_token__line_ending_or_eof] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_toml_external_scanner_create(void);
void tree_sitter_toml_external_scanner_destroy(void *);
bool tree_sitter_toml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_toml_external_scanner_serialize(void *, char *);
void tree_sitter_toml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_toml(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_toml_external_scanner_create,
      tree_sitter_toml_external_scanner_destroy,
      tree_sitter_toml_external_scanner_scan,
      tree_sitter_toml_external_scanner_serialize,
      tree_sitter_toml_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
