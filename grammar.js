/**
 * @file VB grammar for tree-sitter
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'vb',

  extras: $ => [
    /\s/,
    $.comment,
    $.line_continuation,
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.identifier,
      $.keyword,
      $.symbol,
      $.literal,
      $.newline,
      $.comment
    ),

    keyword: $ => token(choice(
      'ACCESS', 'ADDRESSOF', 'ALIAS', 'AND', 'ATTRIBUTE', 'APPACTIVATE', 'APPEND', 'AS',
      'BEEP', 'BEGIN', 'BEGINPROPERTY', 'BINARY', 'BOOLEAN', 'BYVAL', 'BYREF', 'BYTE', 'CALL',
      'CASE', 'CHDIR', 'CHDRIVE', 'CLASS', 'CLOSE', 'COLLECTION', 'CONST', 'DATE', 'DECLARE',
      'DEFBOOL', 'DEFBYTE', 'DEFDATE', 'DEFDBL', 'DEFDEC', 'DEFCUR', 'DEFINT', 'DEFLNG', 'DEFOBJ',
      'DEFSNG', 'DEFSTR', 'DEFVAR', 'DELETESETTING', 'DIM', 'DO', 'DOUBLE', 'EACH', 'ELSE', 'ELSEIF',
      'END_ENUM', 'END_FUNCTION', 'END_IF', 'END_PROPERTY', 'END_SELECT', 'END_SUB', 'END_TYPE',
      'END_WITH', 'END', 'ENDPROPERTY', 'ENUM', 'EQV', 'ERASE', 'ERROR', 'EVENT', 'EXIT_DO',
      'EXIT_FOR', 'EXIT_FUNCTION', 'EXIT_PROPERTY', 'EXIT_SUB', 'FALSE', 'FILECOPY', 'FRIEND',
      'FOR', 'FUNCTION', 'GET', 'GLOBAL', 'GOSUB', 'GOTO', 'IF', 'IMP', 'IMPLEMENTS', 'IN',
      'INPUT', 'IS', 'INTEGER', 'KILL', 'LOAD', 'LOCK', 'LONG', 'LOOP', 'LEN', 'LET', 'LIB', 'LIKE',
      'LINE_INPUT', 'LOCK_READ', 'LOCK_WRITE', 'LOCK_READ_WRITE', 'LSET', 'MACRO_IF', 'MACRO_ELSEIF',
      'MACRO_ELSE', 'MACRO_END_IF', 'ME', 'MID', 'MKDIR', 'MOD', 'NAME', 'NEXT', 'NEW', 'NOT',
      'NOTHING', 'NULL_', 'OBJECT', 'ON', 'ON_ERROR', 'ON_LOCAL_ERROR', 'OPEN', 'OPTIONAL',
      'OPTION_BASE', 'OPTION_EXPLICIT', 'OPTION_COMPARE', 'OPTION_PRIVATE_MODULE', 'OR', 'OUTPUT',
      'PARAMARRAY', 'PRESERVE', 'PRINT', 'PRIVATE', 'PROPERTY_GET', 'PROPERTY_LET', 'PROPERTY_SET',
      'PUBLIC', 'PUT', 'RANDOM', 'RANDOMIZE', 'RAISEEVENT', 'READ', 'READ_WRITE', 'REDIM', 'REM',
      'RESET', 'RESUME', 'RETURN', 'RMDIR', 'RSET', 'SAVEPICTURE', 'SAVESETTING', 'SEEK', 'SELECT',
      'SENDKEYS', 'SET', 'SETATTR', 'SHARED', 'SINGLE', 'SPC', 'STATIC', 'STEP', 'STOP', 'STRING',
      'SUB', 'TAB', 'TEXT', 'THEN', 'TIME', 'TO', 'TRUE', 'TYPE', 'TYPEOF', 'UNLOAD', 'UNLOCK',
      'UNTIL', 'VARIANT', 'VERSION', 'WEND', 'WHILE', 'WIDTH', 'WITH', 'WITHEVENTS', 'WRITE', 'XOR'
    )),

    symbol: $ => token(choice(
      '&', ':=', '@', ':', ',', '\\', '/', '$', '.', '=', '!', '>=', '>', '#', '<=', '{', '(', '<', '-',
      '-=', '*', '<>', '%', '+', '+=', '^', '}', ')', ';', '[', ']'
    )),

    literal: $ => choice(
      $.string_literal,
      $.date_literal,
      $.color_literal,
      $.integer_literal,
      $.double_literal,
      $.file_number,
      $.octal_literal,
      $.frx_offset,
      $.guid
    ),

    string_literal: $ => token(/"([^"\r\n]|"")*"/),

    date_literal: $ => token(/#[^#\r\n]*#/),

    color_literal: $ => token(/&H[0-9A-F]+&?/),

    integer_literal: $ => token(/[0-9]+(E[0-9]+)*(#|&|!|@)?/),

    double_literal: $ => token(/[0-9]*\.[0-9]+(E(\+|-)?[0-9]+)*(#|&|!|@)?/),

    file_number: $ => token(/#[A-Z0-9_ÄÖÜÁÉÍÓÚÂÊÎÔÛÀÈÌÒÙÃẼĨÕŨÇ]+/),

    octal_literal: $ => token(/&O[0-7]+&?/),

    frx_offset: $ => token(/:[0-9A-F]+/),

    guid: $ => token(/\{[0-9A-F]+-[0-9A-F]+-[0-9A-F]+-[0-9A-F]+-[0-9A-F]+\}/),

    identifier: $ => token(/[A-Za-z_][A-Za-z0-9_]*/),

    line_continuation: $ => token(/ _\r?\n/),

    newline: $ => token(/\r?\n/),

    comment: $ => token(choice(
      seq("'", /.*/),
      seq(/REM/, /.*/)
    )),
  }
});