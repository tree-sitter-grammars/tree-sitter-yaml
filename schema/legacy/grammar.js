/** @see {@link YAML 1.1|https://yaml.org/type/} */

/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "legacy_schema",

  extras: _ => [],

  rules: {
    scalar: $ => choice($.null, $.bool, $.int, $.float, $.timestamp),

    null: _ => token(choice("~", "null", "Null", "NULL")),

    bool: _ => token(choice(
      "y", "Y", "yes", "Yes", "YES", "n", "N", "no", "No", "NO",
      "true", "True", "TRUE", "false", "False", "FALSE",
      "on", "On", "ON", "off", "Off", "OFF",
    )),

    int: _ => token(choice(
      /[-+]?0b[0-1_]+/, // base 2
      /[-+]?0[0-7_]+/, // base 8
      /[-+]?(0|[1-9][0-9_]*)/, // base 10
      /[-+]?0x[0-9a-fA-F_]+/, // base 16
      /[-+]?[1-9][0-9_]*(:[0-5]?[0-9])+/, // base 60
    )),

    float: _ => token(choice(
      /[-+]?([0-9][0-9_]*)?\.[0-9.]*([eE][-+][0-9]+)?/, // base 10
      /[-+]?[0-9][0-9_]*(:[0-5]?[0-9])+\.[0-9_]*/, // base 60
      seq(
        optional(choice("-", "+")),
        choice(".inf", ".Inf", ".INF")
      ),  // infinity
      choice(".nan", ".NaN", ".NAN"),  // not a number
    )),

    timestamp: _ => token(choice(
      /\d\d\d\d-\d\d-\d\d/, // ymd
      seq(
        /\d\d\d\d-\d\d?-\d\d?/, // year-month-day
        choice("T", "t", /[ \t]+/),
        /\d\d?:\d\d:\d\d/, // hour:minute:second
        optional(/\.\d+/), // fraction
        optional(choice(
          /[ \t]*Z/,
          /[-+]\d\d?(:\d\d)?/
        )) // time zone
      )
    ))
  },
});
