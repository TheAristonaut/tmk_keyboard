#include "keymap_common.h"

// fn_TYPE_SYM FN2
// fn_TYPE_FN FN3
// fn_TYPE_SHIFT FN4

// kTILDE FN14
// kRPAREN FN15
// kBANG FN16
// kATSIGN FN17
// kPOUND FN18
// kDOLLAR FN19
// kPERCENT FN20
// kCARRET FN21
// kAMPERSAND FN22
// kSTAR FN23
// kLPAREN FN24
// kLCURL FN25
// kRCURL FN26
// kLODASH FN27
// kPLUS FN28
// kLESSTHN FN29
// kGREATRTHN FN30
// kPIPE FN31

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Qwerty Type Mode */
    KEYMAP(
       TAB,  Q,  W,  E,  R,  T,    GRV,   Y,  U,    I,   O,    P, BSLS, \
      BSPC,  A,  S,  D,  F,  G,   MINS,   H,  J,    K,   L, SCLN, QUOT, \
       DEL,  Z,  X,  C,  V,  B,   FN27,   N,  M, COMM, DOT, SLSH,  ENT, \
                        LALT,  FN4,  SPC,  RGUI,\
                            FN2,  LCTL,  FN3\
    ),
    /* 1: Type Mode Sym Layer */
    KEYMAP(
      TRNS,  GRV, FN14, FN25, FN26, FN31,   TRNS,   FN21,  7,  8,  9, FN20, TRNS, \
      TRNS, FN17, FN19, FN24, FN15, FN22,   TRNS,   FN23,  4,  5,  6, MINS, FN28, \
      TRNS, COMM,  DOT, LBRC, RBRC, FN16,   TRNS,   FN18,  1,  2,  3, TRNS,  EQL, \
                                 TRNS,  TRNS,  TRNS,   0, \
                                     TRNS,  TRNS,   DOT \
    ),
    /* 2: Type Mode Fn Layer */
    KEYMAP(
       ESC,  F1,  F2,  F3,  F4, PSCR,   TRNS,   VOLU, HOME,   UP,  END, TRNS, TRNS, \
      TRNS,  F5,  F6,  F7,  F8, SLCK,   TRNS,   VOLD, LEFT, DOWN, RGHT,  APP, TRNS, \
      TRNS,  F9, F10, F11, F12, CALC,   TRNS,   MUTE, PGDN, PGUP,  INS, TRNS, TRNS, \
                             TRNS,  TRNS,  TRNS,  TRNS, \
                                 TRNS,  TRNS,  TRNS \
    ),
    /* 3: Type Mode Shift Mode (underscore on win key) */
    KEYMAP(
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
                                 TRNS,  TRNS,  TRNS,  FN27, \
                                     TRNS,  TRNS,  TRNS \
    ),
};

#define lTYPE_MODE 0
#define lTYPE_SYM_LAYER 1
#define lTYPE_FN_LAYER 2
#define lTYPE_SHIFT_LAYER 3

const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_NO,
    [1] = ACTION_NO,
    [2] = ACTION_LAYER_MOMENTARY(lTYPE_SYM_LAYER),
    [3] = ACTION_LAYER_MOMENTARY(lTYPE_FN_LAYER),
    [4] = ACTION_LAYER_MODS(lTYPE_SHIFT_LAYER, MOD_LSFT),

    [5] = ACTION_NO,
    [6] = ACTION_NO,
    [7] = ACTION_NO,
    [8] = ACTION_NO,
    [9] = ACTION_NO,
    [10] = ACTION_NO,
    [11] = ACTION_NO,
    [12] = ACTION_NO,
    [13] = ACTION_NO,

    [14] = ACTION_MODS_KEY(MOD_RSFT, KC_GRV),  // ~ key
    [15] = ACTION_MODS_KEY(MOD_RSFT, KC_0),  // ) key
    [16] = ACTION_MODS_KEY(MOD_RSFT, KC_1),  // ! key
    [17] = ACTION_MODS_KEY(MOD_RSFT, KC_2),  // @ key
    [18] = ACTION_MODS_KEY(MOD_RSFT, KC_3),  // # key
    [19] = ACTION_MODS_KEY(MOD_RSFT, KC_4),  // $ key
    [20] = ACTION_MODS_KEY(MOD_RSFT, KC_5),  // % key
    [21] = ACTION_MODS_KEY(MOD_RSFT, KC_6),  // ^ key
    [22] = ACTION_MODS_KEY(MOD_RSFT, KC_7),  // & key
    [23] = ACTION_MODS_KEY(MOD_RSFT, KC_8),  // * key
    [24] = ACTION_MODS_KEY(MOD_RSFT, KC_9),  // ( key
    [25] = ACTION_MODS_KEY(MOD_RSFT, KC_LBRC), // { key
    [26] = ACTION_MODS_KEY(MOD_RSFT, KC_RBRC), // } key
    [27] = ACTION_MODS_KEY(MOD_RSFT, KC_MINS),  // _ key
    [28] = ACTION_MODS_KEY(MOD_RSFT, KC_EQL), // + key
    [29] = ACTION_MODS_KEY(MOD_RSFT, KC_COMM), // < key
    [30] = ACTION_MODS_KEY(MOD_RSFT, KC_DOT), // > key
    [31] = ACTION_MODS_KEY(MOD_RSFT, KC_BSLS), // | key
};

#undef TYPE_MODE
#undef TYPE_SYM_LAYER
#undef TYPE_FN_LAYER
#undef TYPE_SHIFT_LAYER
