/* Configure your desired default key bindings. */

#define ALIAS(name) .alias = name,
#define ACTION(id) .action = &vis_action[VIS_ACTION_##id],

static const char *keymaps[] = {
	NULL
};

static const KeyBinding bindings_basic[] = {
	{ "<C-z>",              ACTION(EDITOR_SUSPEND)                      },
	{ "<Down>",             ACTION(CURSOR_LINE_DOWN)                    },
	{ "<End>",              ACTION(CURSOR_LINE_END)                     },
	{ "<Home>",             ACTION(CURSOR_LINE_BEGIN)                   },
	{ "<Left>",             ACTION(CURSOR_CHAR_PREV)                    },
	{ "<PageDown>",         ACTION(WINDOW_PAGE_DOWN)                    },
	{ "<PageUp>",           ACTION(WINDOW_PAGE_UP)                      },
	{ "<Right>",            ACTION(CURSOR_CHAR_NEXT)                    },
	{ "<S-Left>",           ACTION(CURSOR_LONGWORD_START_PREV)          },
	{ "<S-PageDown>",       ACTION(WINDOW_HALFPAGE_DOWN)                },
	{ "<S-PageUp>",         ACTION(WINDOW_HALFPAGE_UP)                  },
	{ "<S-Right>",          ACTION(CURSOR_LONGWORD_START_NEXT)          },
	{ "<Up>",               ACTION(CURSOR_LINE_UP)                      },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_motions[] = {
	{ "g|",                 ACTION(CURSOR_COLUMN)                       },
	{ "[{",                 ACTION(CURSOR_BLOCK_START)                  },
	{ "]}",                 ACTION(CURSOR_BLOCK_END)                    },
	{ "[(",                 ACTION(CURSOR_PARENTHESE_START)             },
	{ "])",                 ACTION(CURSOR_PARENTHESE_END)               },
	{ "$",                  ACTION(CURSOR_LINE_END)                     },
	{ "^",                  ACTION(CURSOR_LINE_START)                   },
	{ "}",                  ACTION(CURSOR_PARAGRAPH_NEXT)               },
	{ "{",                  ACTION(CURSOR_PARAGRAPH_PREV)               },
	{ "%",                  ACTION(CURSOR_PERCENT)                      },
	{ "#",                  ACTION(CURSOR_SEARCH_WORD_BACKWARD)         },
	{ "*",                  ACTION(CURSOR_SEARCH_WORD_FORWARD)          },
	{ ")",                  ACTION(CURSOR_SENTENCE_NEXT)                },
	{ "(",                  ACTION(CURSOR_SENTENCE_PREV)                },
	{ "?",                  ACTION(PROMPT_SEARCH_BACKWARD)              },
	{ "/",                  ACTION(PROMPT_SEARCH_FORWARD)               },
	{ ";",                  ACTION(TOTILL_REPEAT)                       },
	{ ",",                  ACTION(TOTILL_REVERSE)                      },
	{ "+",                  ALIAS("j^")                                 },
	{ "-",                  ALIAS("k^")                                 },
	{ " ",                  ALIAS("<Space>")                            },
	{ "<Space>",            ALIAS("l")                                  },
	{ "<Backspace>",        ALIAS("h")                                  },
	{ "B",                  ACTION(CURSOR_LONGWORD_START_PREV)          },
	{ "b",                  ACTION(CURSOR_WORD_START_PREV)              },
	{ "<C-h>",              ALIAS("<Backspace>")                        },
	{ "<C-j>",              ALIAS("j")                                  },
	{ "<C-n>",              ALIAS("j")                                  },
	{ "<C-p>",              ALIAS("k")                                  },
	{ "E",                  ACTION(CURSOR_LONGWORD_END_NEXT)            },
	{ "e",                  ACTION(CURSOR_WORD_END_NEXT)                },
	{ "<Enter>",            ALIAS("j")                                  },
	{ "F",                  ACTION(TO_LEFT)                             },
	{ "f",                  ACTION(TO_RIGHT)                            },
	{ "go",                 ACTION(CURSOR_BYTE)                         },
	{ "gH",                 ACTION(CURSOR_BYTE_LEFT)                    },
	{ "gL",                 ACTION(CURSOR_BYTE_RIGHT)                   },
	{ "gh",                 ACTION(CURSOR_CODEPOINT_PREV)               },
	{ "gl",                 ACTION(CURSOR_CODEPOINT_NEXT)               },
	{ "g0",                 ACTION(CURSOR_SCREEN_LINE_BEGIN)            },
	{ "g_",                 ACTION(CURSOR_LINE_FINISH)                  },
	{ "G",                  ACTION(CURSOR_LINE_LAST)                    },
	{ "g$",                 ACTION(CURSOR_SCREEN_LINE_END)              },
	{ "gE",                 ACTION(CURSOR_LONGWORD_END_PREV)            },
	{ "ge",                 ACTION(CURSOR_WORD_END_PREV)                },
	{ "gg",                 ACTION(CURSOR_LINE_FIRST)                   },
	{ "gj",                 ACTION(CURSOR_SCREEN_LINE_DOWN)             },
	{ "gk",                 ACTION(CURSOR_SCREEN_LINE_UP)               },
	{ "gm",                 ACTION(CURSOR_SCREEN_LINE_MIDDLE)           },
	{ "h",                  ACTION(CURSOR_CHAR_PREV)                    },
	{ "H",                  ACTION(CURSOR_WINDOW_LINE_TOP)              },
	{ "j",                  ACTION(CURSOR_LINE_DOWN)                    },
	{ "k",                  ACTION(CURSOR_LINE_UP)                      },
	{ "l",                  ACTION(CURSOR_CHAR_NEXT)                    },
	{ "L",                  ACTION(CURSOR_WINDOW_LINE_BOTTOM)           },
	{ "M",                  ACTION(CURSOR_WINDOW_LINE_MIDDLE)           },
	{ "n",                  ACTION(CURSOR_SEARCH_REPEAT_FORWARD)        },
	{ "N",                  ACTION(CURSOR_SEARCH_REPEAT_BACKWARD)       },
	{ "T",                  ACTION(TILL_LEFT)                           },
	{ "t",                  ACTION(TILL_RIGHT)                          },
	{ "W",                  ACTION(CURSOR_LONGWORD_START_NEXT)          },
	{ "w",                  ACTION(CURSOR_WORD_START_NEXT)              },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_textobjects[] = {
	{ "a<",                 ACTION(TEXT_OBJECT_ANGLE_BRACKET_OUTER)     },
	{ "a`",                 ACTION(TEXT_OBJECT_BACKTICK_OUTER)          },
	{ "a{",                 ACTION(TEXT_OBJECT_CURLY_BRACKET_OUTER)     },
	{ "a(",                 ACTION(TEXT_OBJECT_PARANTHESE_OUTER)        },
	{ "a\"",                ACTION(TEXT_OBJECT_QUOTE_OUTER)             },
	{ "a\'",                ACTION(TEXT_OBJECT_SINGLE_QUOTE_OUTER)      },
	{ "a[",                 ACTION(TEXT_OBJECT_SQUARE_BRACKET_OUTER)    },
	{ "a>",                 ALIAS("a<")                                 },
	{ "a)",                 ALIAS("a(")                                 },
	{ "a]",                 ALIAS("a[")                                 },
	{ "a}",                 ALIAS("a{")                                 },
	{ "ab",                 ALIAS("a(")                                 },
	{ "aB",                 ALIAS("a{")                                 },
	{ "ae",                 ACTION(TEXT_OBJECT_ENTIRE_OUTER)            },
	{ "al",                 ACTION(TEXT_OBJECT_LINE_OUTER)              },
	{ "ap",                 ACTION(TEXT_OBJECT_PARAGRAPH_OUTER)         },
	{ "as",                 ACTION(TEXT_OBJECT_SENTENCE)                },
	{ "a<Tab>",             ACTION(TEXT_OBJECT_INDENTATION)             },
	{ "aW",                 ACTION(TEXT_OBJECT_LONGWORD_OUTER)          },
	{ "aw",                 ACTION(TEXT_OBJECT_WORD_OUTER)              },
	{ "gN",                 ACTION(TEXT_OBJECT_SEARCH_BACKWARD)         },
	{ "gn",                 ACTION(TEXT_OBJECT_SEARCH_FORWARD)          },
	{ "i<",                 ACTION(TEXT_OBJECT_ANGLE_BRACKET_INNER)     },
	{ "i`",                 ACTION(TEXT_OBJECT_BACKTICK_INNER)          },
	{ "i{",                 ACTION(TEXT_OBJECT_CURLY_BRACKET_INNER)     },
	{ "i(",                 ACTION(TEXT_OBJECT_PARANTHESE_INNER)        },
	{ "i\"",                ACTION(TEXT_OBJECT_QUOTE_INNER)             },
	{ "i\'",                ACTION(TEXT_OBJECT_SINGLE_QUOTE_INNER)      },
	{ "i[",                 ACTION(TEXT_OBJECT_SQUARE_BRACKET_INNER)    },
	{ "i>",                 ALIAS("i<")                                 },
	{ "i)",                 ALIAS("i(")                                 },
	{ "i]",                 ALIAS("i[")                                 },
	{ "i}",                 ALIAS("i{")                                 },
	{ "ib",                 ALIAS("i(")                                 },
	{ "iB",                 ALIAS("i{")                                 },
	{ "ie",                 ACTION(TEXT_OBJECT_ENTIRE_INNER)            },
	{ "il",                 ACTION(TEXT_OBJECT_LINE_INNER)              },
	{ "ip",                 ACTION(TEXT_OBJECT_PARAGRAPH)               },
	{ "is",                 ACTION(TEXT_OBJECT_SENTENCE)                },
	{ "i<Tab>",             ACTION(TEXT_OBJECT_INDENTATION)             },
	{ "iW",                 ACTION(TEXT_OBJECT_LONGWORD_INNER)          },
	{ "iw",                 ACTION(TEXT_OBJECT_WORD_INNER)              },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_selections[] = {
	{ "m",                  ACTION(SELECTIONS_SAVE)                     },
	{ "M",                  ACTION(SELECTIONS_RESTORE)                  },
	{ "|",                  ACTION(SELECTIONS_UNION)                    },
	{ "&",                  ACTION(SELECTIONS_INTERSECT)                },
	{ "!",                  ACTION(SELECTIONS_COMPLEMENT)               },
	{ "\\",                 ACTION(SELECTIONS_MINUS)                    },
	{ "z|",                 ACTION(SELECTIONS_COMBINE_UNION)            },
	{ "z&",                 ACTION(SELECTIONS_COMBINE_INTERSECT)        },
	{ "z+",                 ACTION(SELECTIONS_COMBINE_LONGER)           },
	{ "z-",                 ACTION(SELECTIONS_COMBINE_SHORTER)          },
	{ "z<",                 ACTION(SELECTIONS_COMBINE_LEFTMOST)         },
	{ "z>",                 ACTION(SELECTIONS_COMBINE_RIGHTMOST)        },
//	{ "-",                  ACTION(SELECTIONS_ROTATE_LEFT)              },
//	{ "+",                  ACTION(SELECTIONS_ROTATE_RIGHT)             },
	{ "_",                  ACTION(SELECTIONS_TRIM)                     },
	{ "<S-Tab>",            ACTION(SELECTIONS_ALIGN_INDENT_RIGHT)       },
	{ "<Tab>",              ACTION(SELECTIONS_ALIGN_INDENT_LEFT)        },
	{ "g<",                 ACTION(JUMPLIST_PREV)                       },
	{ "gs",                 ACTION(JUMPLIST_SAVE)                       },
	{ "g>",                 ACTION(JUMPLIST_NEXT)                       },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_operators[] = {
	{ "0",                  ACTION(COUNT)                               },
	{ "1",                  ACTION(COUNT)                               },
	{ "2",                  ACTION(COUNT)                               },
	{ "3",                  ACTION(COUNT)                               },
	{ "4",                  ACTION(COUNT)                               },
	{ "5",                  ACTION(COUNT)                               },
	{ "6",                  ACTION(COUNT)                               },
	{ "7",                  ACTION(COUNT)                               },
	{ "8",                  ACTION(COUNT)                               },
	{ "9",                  ACTION(COUNT)                               },
	{ "~",                  ACTION(OPERATOR_CASE_SWAP)                  },
	{ "=",                  ALIAS("gq")                                 },
	{ "<",                  ACTION(OPERATOR_SHIFT_LEFT)                 },
	{ ">",                  ACTION(OPERATOR_SHIFT_RIGHT)                },
	{ "\"",                 ACTION(REGISTER)                            },
	{ "'",                  ACTION(MARK)                                },
	{ "c",                  ACTION(OPERATOR_CHANGE)                     },
	{ "d",                  ACTION(OPERATOR_DELETE)                     },
	{ "g~",                 ACTION(OPERATOR_CASE_SWAP)                  },
	{ "gp",                 ACTION(PUT_AFTER_END)                       },
	{ "gP",                 ACTION(PUT_BEFORE_END)                      },
	{ "gq",                 ALIAS(":| fmt<Enter>")                      },
	{ "gu",                 ACTION(OPERATOR_CASE_LOWER)                 },
	{ "gU",                 ACTION(OPERATOR_CASE_UPPER)                 },
	{ "p",                  ACTION(PUT_AFTER)                           },
	{ "P",                  ACTION(PUT_BEFORE)                          },
	{ "y",                  ACTION(OPERATOR_YANK)                       },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_operator_options[] = {
	{ "v",                  ACTION(MOTION_CHARWISE)                     },
	{ "V",                  ACTION(MOTION_LINEWISE)                     },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_normal[] = {
	{ "a",                  ACTION(APPEND_CHAR_NEXT)                    },
	{ "A",                  ACTION(APPEND_LINE_END)                     },
	{ "@",                  ACTION(MACRO_REPLAY)                        },
	{ ":",                  ACTION(PROMPT_SHOW)                         },
	{ ".",                  ACTION(REPEAT)                              },
	{ "~",                  ALIAS("<vis-operator-case-swap>ll")         },
	{ "C",                  ALIAS("c$")                                 },
	{ "<C-b>",              ALIAS("<PageUp>")                           },
	{ "<C-c>",              ACTION(SELECTIONS_REMOVE_COLUMN)            },
	{ "<C-d>",              ACTION(SELECTIONS_NEXT)                     },
	{ "<C-e>",              ACTION(WINDOW_SLIDE_UP)                     },
	{ "<C-f>",              ALIAS("<PageDown>")                         },
	{ "<C-j>",              ACTION(SELECTIONS_NEW_LINE_BELOW)           },
	{ "<C-k>",              ACTION(SELECTIONS_NEW_LINE_ABOVE)           },
	{ "<C-l>",              ACTION(SELECTIONS_REMOVE_COLUMN_EXCEPT)     },
	{ "<C-n>",              ACTION(SELECTIONS_MATCH_WORD)               },
	{ "<C-p>",              ACTION(SELECTIONS_REMOVE_LAST)              },
	{ "<C-r>",              ACTION(REDO)                                },
	{ "<C-u>",              ACTION(SELECTIONS_PREV)                     },
	{ "<C-w><Backspace>",   ALIAS("<C-w>k")                             },
	{ "<C-w>c",             ALIAS(":q<Enter>")                          },
	{ "<C-w><C-h>",         ALIAS("<C-w>k")                             },
	{ "<C-w><C-j>",         ALIAS("<C-w>j")                             },
	{ "<C-w><C-k>",         ALIAS("<C-w>k")                             },
	{ "<C-w><C-l>",         ALIAS("<C-w>j")                             },
	{ "<C-w><C-w>",         ALIAS("<C-w>j")                             },
	{ "<C-w>h",             ALIAS("<C-w>k")                             },
	{ "<C-w>j",             ACTION(WINDOW_NEXT)                         },
	{ "<C-w>k",             ACTION(WINDOW_PREV)                         },
	{ "<C-w>l",             ALIAS("<C-w>j")                             },
	{ "<C-w>n",             ALIAS(":open<Enter>")                       },
	{ "<C-w>s",             ALIAS(":split<Enter>")                      },
	{ "<C-w>v",             ALIAS(":vsplit<Enter>")                     },
	{ "<C-w>w",             ALIAS("<C-w>j")                             },
	{ "<C-y>",              ACTION(WINDOW_SLIDE_DOWN)                   },
	{ "D",                  ALIAS("d$")                                 },
	{ "<Delete>",           ALIAS("x")                                  },
	{ "<Escape>",           ACTION(SELECTIONS_REMOVE_ALL)               },
	{ "<F1>",               ALIAS(":help<Enter>")                       },
	{ "ga",                 ACTION(UNICODE_INFO)                        },
	{ "g8",                 ACTION(UTF8_INFO)                           },
	{ "g-",                 ACTION(EARLIER)                             },
	{ "g+",                 ACTION(LATER)                               },
	{ "gn",                 ALIAS("vgn")                                },
	{ "gN",                 ALIAS("vgN")                                },
	{ "gv",                 ALIAS("v'^M")                               },
	{ "I",                  ACTION(INSERT_LINE_START)                   },
	{ "i",                  ACTION(MODE_INSERT)                         },
	{ "J",                  ACTION(JOIN_LINES)                          },
	{ "gJ",                 ACTION(JOIN_LINES_TRIM)                     },
	{ "<M-C-j>",            ACTION(SELECTIONS_NEW_LINE_BELOW_LAST)      },
	{ "<M-C-k>",            ACTION(SELECTIONS_NEW_LINE_ABOVE_FIRST)     },
	{ "O",                  ACTION(OPEN_LINE_ABOVE)                     },
	{ "o",                  ACTION(OPEN_LINE_BELOW)                     },
	{ "q",                  ACTION(MACRO_RECORD)                        },
	{ "R",                  ACTION(MODE_REPLACE)                        },
	{ "r",                  ACTION(REPLACE_CHAR)                        },
	{ "S",                  ALIAS("^c$")                                },
	{ "s",                  ALIAS("cl")                                 },
	{ "<Tab>",              ACTION(SELECTIONS_ALIGN)                    },
	{ "u",                  ACTION(UNDO)                                },
	{ "v",                  ACTION(MODE_VISUAL)                         },
	{ "V",                  ACTION(MODE_VISUAL_LINE)                    },
	{ "x",                  ACTION(DELETE_CHAR_NEXT)                    },
	{ "X",                  ALIAS("dh")                                 },
	{ "Y",                  ALIAS("y$")                                 },
	{ "zb",                 ACTION(WINDOW_REDRAW_BOTTOM)                },
	{ "ZQ",                 ALIAS(":q!<Enter>")                         },
	{ "zt",                 ACTION(WINDOW_REDRAW_TOP)                   },
	{ "zz",                 ACTION(WINDOW_REDRAW_CENTER)                },
	{ "ZZ",                 ALIAS(":wq<Enter>")                         },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_visual[] = {
	{ "A",                  ACTION(SELECTIONS_NEW_LINES_END)            },
	{ "@",                  ACTION(MACRO_REPLAY)                        },
	{ ":",                  ACTION(PROMPT_SHOW)                         },
	{ "-",                  ACTION(SELECTIONS_ROTATE_LEFT)              },
	{ "+",                  ACTION(SELECTIONS_ROTATE_RIGHT)             },
	{ "<",                  ALIAS("<vis-operator-shift-left>gv")        },
	{ ">",                  ALIAS("<vis-operator-shift-right>gv")       },
	{ "<Backspace>",        ALIAS("d")                                  },
	{ "<C-b>",              ALIAS("<PageUp>")                           },
	{ "<C-c>",              ACTION(SELECTIONS_REMOVE_COLUMN)            },
	{ "<C-d>",              ACTION(SELECTIONS_NEXT)                     },
	{ "<C-f>",              ALIAS("<PageDown>")                         },
	{ "<C-h>",              ALIAS("<Backspace>")                        },
	{ "<C-j>",              ALIAS("<C-d>")                              },
	{ "<C-k>",              ALIAS("<C-u>")                              },
	{ "<C-l>",              ACTION(SELECTIONS_REMOVE_COLUMN_EXCEPT)     },
	{ "<C-n>",              ACTION(SELECTIONS_NEW_MATCH_NEXT)           },
	{ "<C-p>",              ACTION(SELECTIONS_REMOVE_LAST)              },
	{ "<C-u>",              ACTION(SELECTIONS_PREV)                     },
	{ "<C-x>",              ACTION(SELECTIONS_NEW_MATCH_SKIP)           },
	{ "<Delete>",           ALIAS("<Backspace>")                        },
	{ "<Escape>",           ACTION(MODE_NORMAL)                         },
	{ "I",                  ACTION(SELECTIONS_NEW_LINES_BEGIN)          },
	{ "J",                  ACTION(JOIN_LINES)                          },
	{ "gJ",                 ACTION(JOIN_LINES_TRIM)                     },
	{ "o",                  ACTION(SELECTION_FLIP)                      },
	{ "q",                  ACTION(MACRO_RECORD)                        },
	{ "r",                  ACTION(REPLACE_CHAR)                        },
	{ "s",                  ALIAS("c")                                  },
	{ "V",                  ACTION(MODE_VISUAL_LINE)                    },
	{ "v",                  ALIAS("<Escape>")                           },
	{ "x",                  ALIAS("d")                                  },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_visual_line[] = {
	{ "v",                  ACTION(MODE_VISUAL)                         },
	{ "V",                  ACTION(MODE_NORMAL)                         },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_readline[] = {
	{ "<Backspace>",        ACTION(DELETE_CHAR_PREV)                    },
	{ "<C-c>",              ALIAS("<Escape>")                           },
	{ "<C-d>",              ACTION(DELETE_CHAR_NEXT)                    },
	{ "<C-h>",              ALIAS("<Backspace>")                        },
	{ "<C-u>",              ACTION(DELETE_LINE_BEGIN)                   },
	{ "<C-v>",              ACTION(INSERT_VERBATIM)                     },
	{ "<C-w>",              ACTION(DELETE_WORD_PREV)                    },
	{ "<Delete>",           ACTION(DELETE_CHAR_NEXT)                    },
	{ "<Escape>",           ACTION(MODE_NORMAL)                         },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_insert[] = {
	{ "<C-d>",              ALIAS("<vis-operator-shift-left><vis-operator-shift-left>") },
	{ "<C-i>",              ALIAS("<Tab>")                              },
	{ "<C-j>",              ALIAS("<vis-insert-verbatim>u000a")         },
	{ "<C-m>",              ALIAS("<Enter>")                            },
	{ "<C-r>",              ACTION(INSERT_REGISTER)                     },
	{ "<C-t>",              ALIAS("<vis-operator-shift-right><vis-operator-shift-right>") },
	{ "<C-x><C-e>",         ACTION(WINDOW_SLIDE_UP)                     },
	{ "<C-x><C-y>",         ACTION(WINDOW_SLIDE_DOWN)                   },
	{ "<Enter>",            ACTION(INSERT_NEWLINE)                      },
	{ "<Escape>",           ACTION(MODE_NORMAL)                         },
	{ "<S-Tab>",            ACTION(SELECTIONS_ALIGN_INDENT_LEFT)        },
	{ "<Tab>",              ACTION(INSERT_TAB)                          },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_replace[] = {
	{ 0 /* empty last element, array terminator */                      },
};

/* For each mode we list a all key bindings, if a key is bound in more than
 * one array the first definition is used and further ones are ignored. */
static const KeyBinding **default_bindings[] = {
	[VIS_MODE_OPERATOR_PENDING] = (const KeyBinding*[]){
		bindings_operator_options,
		bindings_operators,
		bindings_textobjects,
		bindings_motions,
		bindings_basic,
		NULL,
	},
	[VIS_MODE_NORMAL] = (const KeyBinding*[]){
		bindings_normal,
		bindings_selections,
		bindings_operators,
		bindings_motions,
		bindings_basic,
		NULL,
	},
	[VIS_MODE_VISUAL] = (const KeyBinding*[]){
		bindings_visual,
		bindings_selections,
		bindings_textobjects,
		bindings_operators,
		bindings_motions,
		bindings_basic,
		NULL,
	},
	[VIS_MODE_VISUAL_LINE] = (const KeyBinding*[]){
		bindings_visual_line,
		NULL,
	},
	[VIS_MODE_INSERT] = (const KeyBinding*[]){
		bindings_insert,
		bindings_readline,
		bindings_basic,
		NULL,
	},
	[VIS_MODE_REPLACE] = (const KeyBinding*[]){
		bindings_replace,
		NULL,
	},
};
