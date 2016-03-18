#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Qwerty Type Mode */
    KEYMAP(
      BSLS,    P,    O,    I,    U,    Y, \
      QUOT, SCLN,    L,    K,    J,    H, \
       ENT, SLSH,  DOT, COMM,    M,    N, \
         T,    R,    E,    W,    Q,  TAB, \
         G,    F,    D,    S,    A, BSPC, \
         B,    V,    C,    X,    Z,  ESC, \
       FN9, FN11,  SPC, FN12, CAPS, \
      RGUI, FN10, LCTL,  FN8, LALT \
    ),
    /* 1: FPS Mode */
    KEYMAP(
      BSLS,    P,    O,    I,    U,    Y, \
      QUOT, SCLN,    L,    K,    J,    H, \
       ENT, SLSH,  DOT, COMM,    M,    N, \
         R,    E,    W,    Q,    1,  TAB, \
         F,    D,    S,    A,    2, CAPS, \
         V,    C,    X,    Z,    3,  ESC, \
         G,    B, LSFT,  SPC,    T, \
       FN7,  FN4, LCTL,  FN3, LALT \
    ),
    /* 2: MOBA Mode */
    KEYMAP(
      BSLS,    P,    O,    I,    U,    Y, \
      QUOT, SCLN,    L,    K,    J,    H, \
       ENT, SLSH,  DOT, COMM,    M,    N, \
         5,    4,    3,    2,    1,  GRV, \
         T,    R,    E,    W,    Q,  TAB, \
         G,    F,    D,    S,    A,  ESC, \
         Y,    H,  SPC, LSFT,    P, \
       FN7,  FN6, LCTL,  FN5,  LALT \
    ),
    /* 3: FPS Mode: Sym Layer */
    KEYMAP(
      FN21, FN23,    9,    8,    7, FN21, \
      FN28, MINS,    6,    5,    4, FN23, \
       EQL, TRNS,    3,    2,    1, FN20, \
      TRNS, TRNS, TRNS, TRNS,    4, TRNS, \
      TRNS, TRNS, TRNS, TRNS,    5, TRNS, \
      TRNS, TRNS, TRNS, TRNS,    6, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, \
         0, TRNS, TRNS, TRNS, TRNS \
    ),
    /* 4: FPS Mode: Fn Layer */
    KEYMAP(
      SLEP,  F10,   F9,   F8,   F7, VOLU, \
      FN13,  F11,   F6,   F5,   F4, VOLD, \
      TRNS,  F12,   F3,   F2,   F1, MUTE, \
         I, TRNS, TRNS, TRNS,    7, TRNS, \
         J, TRNS, TRNS, TRNS,    8, TRNS, \
         M, TRNS, TRNS, TRNS,    9, TRNS, \
      MPLY, MNXT, TRNS, TRNS, MPRV, \
      TRNS, TRNS, TRNS, TRNS, TRNS \
    ),
    /* 5: MOBA Mode: Sym Layer */
    KEYMAP(
      FN21, FN23,    9,    8,    7, FN21, \
      FN28, MINS,    6,    5,    4, FN23, \
       EQL, TRNS,    3,    2,    1, FN20, \
      TRNS,    7,    6, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
         B,    V,    C,    X,    Z, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, \
         0, TRNS, TRNS, TRNS, TRNS \
    ),
    /* 6: MOBA Mode: Fn Layer */
    KEYMAP(
      SLEP,  F10,   F9,   F8,   F7, VOLU, \
      FN13,  F11,   F6,   F5,   F4, VOLD, \
      TRNS,  F12,   F3,   F2,   F1, MUTE, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      MPLY, MNXT, TRNS, TRNS, MPRV, \
      TRNS, TRNS, TRNS, TRNS, TRNS \
    ),
    /* 7: Qwerty Chat Layer */
    KEYMAP(
      BSLS,    P,    O,    I,    U,    Y, \
      QUOT, SCLN,    L,    K,    J,    H, \
       ENT, SLSH,  DOT, COMM,    M,    N, \
         T,    R,    E,    W,    Q,  TAB, \
         G,    F,    D,    S,    A, BSPC, \
         B,    V,    C,    X,    Z,  ESC, \
       FN9, FN11,  SPC, FN12, CAPS, \
      TRNS, FN10, LCTL,  FN8, LALT \
    ),
    /* 8: Type and Chat Mode: Sym Layer */
    KEYMAP(
      FN30, FN29,    9,    8,    7, FN21, \
      FN28, MINS,    6,    5,    4, FN23, \
       EQL, TRNS,    3,    2,    1, FN20, \
      FN22, FN26, FN25, FN14,  GRV, TRNS, \
      FN18, FN15, FN24, FN19, FN17, TRNS, \
      FN16, RBRC, LBRC,    X,    Z, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, \
         0,  DOT, TRNS, TRNS, TRNS \
    ),
    /* 9: Type and Chat Mode: Fn Layer */
    KEYMAP(
      SLEP,  F10,   F9,   F8,   F7, VOLU, \
      FN13,  F11,   F6,   F5,   F4, VOLD, \
      TRNS,  F12,   F3,   F2,   F1, MUTE, \
      MPRV,  END,   UP, HOME, SLCK, TRNS, \
      MPLY, RGHT, DOWN, LEFT,  DEL, TRNS, \
      MNXT, PGDN, PGUP,  INS,  APP, TRNS, \
      CALC, TRNS, TRNS, TRNS, PSCR, \
      TRNS, TRNS, TRNS, TRNS, TRNS \
    ),
    /* 10: Type Mode: Shift Mode (underscore on win key) */
    KEYMAP(
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, \
      FN27, TRNS, TRNS, TRNS, TRNS \
    ),
    /**
     * 11: Layout Selection Layer:
     *    1 or q  -Typing Mode
     *    2 or w  -FPS Mode
     *    3 or e  -MOBA Mode
     **/
    KEYMAP(
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS,  FN2,  FN1,  FN0, TRNS, \
      TRNS, TRNS,  FN2,  FN1,  FN0, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS \
    ),
};

#define TYPE_MODE 0
#define FPS_MODE 1
#define MOBA_MODE 2
#define FPS_SYM_LAYER 3
#define FPS_FN_LAYER 4
#define MOBA_SYM_LAYER 5
#define MOBA_FN_LAYER 6
#define CHAT_LAYER 7
#define TYPE_SYM_LAYER 8
#define TYPE_FN_LAYER 9
#define TYPE_SHIFT_LAYER 10
#define LAYOUT_LAYER 11

const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_DEFAULT_LAYER_SET(TYPE_MODE),
    [1] = ACTION_DEFAULT_LAYER_SET(FPS_MODE),
    [2] = ACTION_DEFAULT_LAYER_SET(MOBA_MODE),
    [3] = ACTION_LAYER_MOMENTARY(FPS_SYM_LAYER),
    [4] = ACTION_LAYER_MOMENTARY(FPS_FN_LAYER),
    [5] = ACTION_LAYER_MOMENTARY(MOBA_SYM_LAYER),
    [6] = ACTION_LAYER_MOMENTARY(MOBA_FN_LAYER),
    [7] = ACTION_LAYER_TOGGLE(CHAT_LAYER),
    [8] = ACTION_LAYER_MOMENTARY(TYPE_SYM_LAYER),
    [9] = ACTION_LAYER_TOGGLE(TYPE_SYM_LAYER),
    [10] = ACTION_LAYER_MOMENTARY(TYPE_FN_LAYER),
    [11] = ACTION_LAYER_TOGGLE(TYPE_FN_LAYER),
    [12] = ACTION_LAYER_MODS(TYPE_SHIFT_LAYER, MOD_LSFT),
    [13] = ACTION_LAYER_TOGGLE(LAYOUT_LAYER),

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
};

#undef TYPE_MODE
#undef FPS_MODE
#undef MOBA_MODE
#undef FPS_SYM_LAYER
#undef FPS_FN_LAYER
#undef MOBA_SYM_LAYER
#undef MOBA_FN_LAYER
#undef CHAT_LAYER
#undef TYPE_SYM_LAYER
#undef TYPE_FN_LAYER
#undef TYPE_SHIFT_LAYER
#undef LAYOUT_LAYER

