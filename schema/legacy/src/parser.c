#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 7
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_null = 1,
  sym_bool = 2,
  sym_int = 3,
  sym_float = 4,
  sym_timestamp = 5,
  sym_scalar = 6,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_null] = "null",
  [sym_bool] = "bool",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_timestamp] = "timestamp",
  [sym_scalar] = "scalar",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_null] = sym_null,
  [sym_bool] = sym_bool,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_timestamp] = sym_timestamp,
  [sym_scalar] = sym_scalar,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '.', 89,
        '0', 75,
        'F', 13,
        'N', 70,
        'O', 17,
        'T', 24,
        'Y', 69,
        'f', 29,
        'n', 72,
        'o', 33,
        't', 40,
        'y', 71,
        '~', 67,
        '+', 7,
        '-', 7,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ':') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'F') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'Z') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 50:
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(9);
      END_STATE();
    case 51:
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(85);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == 'E') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ':') ADVANCE(51);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_timestamp);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'Z') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == 'Z') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_timestamp] = ACTIONS(1),
  },
  [1] = {
    [sym_scalar] = STATE(3),
    [sym_null] = ACTIONS(3),
    [sym_bool] = ACTIONS(5),
    [sym_int] = ACTIONS(5),
    [sym_float] = ACTIONS(3),
    [sym_timestamp] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_core_schema(void) {
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
