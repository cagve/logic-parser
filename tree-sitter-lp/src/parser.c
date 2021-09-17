#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASHland = 1,
  anon_sym_BSLASHlor = 2,
  anon_sym_BSLASHto = 3,
  anon_sym_BSLASHleftrightarrow = 4,
  sym_unary_operator = 5,
  sym_atom = 6,
  sym_open_par = 7,
  sym_close_par = 8,
  sym_formula = 9,
  sym_binary_expression = 10,
  sym_unary_expression = 11,
  sym_binary_operator = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHland] = "\\land",
  [anon_sym_BSLASHlor] = "\\lor",
  [anon_sym_BSLASHto] = "\\to",
  [anon_sym_BSLASHleftrightarrow] = "\\leftrightarrow",
  [sym_unary_operator] = "unary_operator",
  [sym_atom] = "atom",
  [sym_open_par] = "open_par",
  [sym_close_par] = "close_par",
  [sym_formula] = "formula",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_operator] = "binary_operator",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHland] = anon_sym_BSLASHland,
  [anon_sym_BSLASHlor] = anon_sym_BSLASHlor,
  [anon_sym_BSLASHto] = anon_sym_BSLASHto,
  [anon_sym_BSLASHleftrightarrow] = anon_sym_BSLASHleftrightarrow,
  [sym_unary_operator] = sym_unary_operator,
  [sym_atom] = sym_atom,
  [sym_open_par] = sym_open_par,
  [sym_close_par] = sym_close_par,
  [sym_formula] = sym_formula,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_operator] = sym_binary_operator,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHland] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHlor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHleftrightarrow] = {
    .visible = true,
    .named = false,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_open_par] = {
    .visible = true,
    .named = true,
  },
  [sym_close_par] = {
    .visible = true,
    .named = true,
  },
  [sym_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('p' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'g') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(1);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BSLASHland);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BSLASHlor);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BSLASHto);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BSLASHleftrightarrow);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_unary_operator);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_open_par);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_close_par);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASHland] = ACTIONS(1),
    [anon_sym_BSLASHlor] = ACTIONS(1),
    [anon_sym_BSLASHto] = ACTIONS(1),
    [anon_sym_BSLASHleftrightarrow] = ACTIONS(1),
    [sym_unary_operator] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [sym_open_par] = ACTIONS(1),
    [sym_close_par] = ACTIONS(1),
  },
  [1] = {
    [sym_formula] = STATE(5),
    [sym_binary_expression] = STATE(3),
    [sym_unary_expression] = STATE(3),
    [sym_unary_operator] = ACTIONS(3),
    [sym_atom] = ACTIONS(5),
    [sym_open_par] = ACTIONS(7),
  },
  [2] = {
    [sym_binary_operator] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_BSLASHland] = ACTIONS(9),
    [anon_sym_BSLASHlor] = ACTIONS(9),
    [anon_sym_BSLASHto] = ACTIONS(9),
    [anon_sym_BSLASHleftrightarrow] = ACTIONS(9),
    [sym_close_par] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASHland,
      anon_sym_BSLASHlor,
      anon_sym_BSLASHto,
      anon_sym_BSLASHleftrightarrow,
      sym_close_par,
  [9] = 5,
    ACTIONS(3), 1,
      sym_unary_operator,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(7), 1,
      sym_open_par,
    STATE(8), 1,
      sym_formula,
    STATE(3), 2,
      sym_binary_expression,
      sym_unary_expression,
  [26] = 3,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(15), 4,
      anon_sym_BSLASHland,
      anon_sym_BSLASHlor,
      anon_sym_BSLASHto,
      anon_sym_BSLASHleftrightarrow,
  [39] = 1,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASHland,
      anon_sym_BSLASHlor,
      anon_sym_BSLASHto,
      anon_sym_BSLASHleftrightarrow,
      sym_close_par,
  [48] = 5,
    ACTIONS(3), 1,
      sym_unary_operator,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(7), 1,
      sym_open_par,
    STATE(10), 1,
      sym_formula,
    STATE(3), 2,
      sym_binary_expression,
      sym_unary_expression,
  [65] = 3,
    ACTIONS(19), 1,
      sym_close_par,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(15), 4,
      anon_sym_BSLASHland,
      anon_sym_BSLASHlor,
      anon_sym_BSLASHto,
      anon_sym_BSLASHleftrightarrow,
  [78] = 5,
    ACTIONS(3), 1,
      sym_unary_operator,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(7), 1,
      sym_open_par,
    STATE(2), 1,
      sym_formula,
    STATE(3), 2,
      sym_binary_expression,
      sym_unary_expression,
  [95] = 3,
    ACTIONS(21), 1,
      sym_close_par,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(15), 4,
      anon_sym_BSLASHland,
      anon_sym_BSLASHlor,
      anon_sym_BSLASHto,
      anon_sym_BSLASHleftrightarrow,
  [108] = 1,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASHland,
      anon_sym_BSLASHlor,
      anon_sym_BSLASHto,
      anon_sym_BSLASHleftrightarrow,
      sym_close_par,
  [117] = 1,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASHland,
      anon_sym_BSLASHlor,
      anon_sym_BSLASHto,
      anon_sym_BSLASHleftrightarrow,
      sym_close_par,
  [126] = 1,
    ACTIONS(27), 3,
      sym_unary_operator,
      sym_atom,
      sym_open_par,
  [132] = 2,
    ACTIONS(29), 1,
      sym_atom,
    ACTIONS(31), 1,
      sym_open_par,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 9,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 39,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 108,
  [SMALL_STATE(12)] = 117,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 132,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [13] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lp(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
