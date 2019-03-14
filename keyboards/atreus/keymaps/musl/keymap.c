// vim: set ft=c sw=2 ts=2 :

#include "atreus.h"

#define PREVENT_STUCK_MODIFIERS

// layers
#define BASE 0
#define MOM1 1
#define MOM2 2
#define FNSP 3
#define GAME 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // Hardware Dvorak Base Layer
  [BASE] = { 
    {KC_QUOTE, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_NO,                KC_F,               KC_G,     KC_C,    KC_R,    KC_L,   },
    {KC_A,     KC_O,    KC_E,    KC_U,    KC_I,    KC_NO,                KC_D,               KC_H,     KC_T,    KC_N,    KC_S,   },
    {KC_SCLN,  KC_Q,    KC_J,    KC_K,    KC_X,    MT(MOD_LALT, KC_ESC), KC_B,               KC_M,     KC_W,    KC_V,    KC_Z,   },
    {MO(MOM2), KC_TAB,  KC_LGUI, KC_LSFT, KC_BSPC, MT(MOD_LCTL, KC_ENT), MT(KC_DEL, KC_SPC), MO(MOM1), KC_MINS, KC_SLSH, KC_BSLS,},
  },  

  // Symbols, Arrow Keys, Numpad, & Utility Momentary Layer
  [MOM1] = { 
    {KC_GRV,   KC_NO,      KC_UP,      LSFT(KC_LBRC), LSFT(KC_RBRC), KC_NO,                KC_PGUP, KC_7,   KC_8,   KC_9, KC_MINUS,},
    {KC_HOME,  KC_LEFT,    KC_DOWN,    KC_RIGHT,      KC_END,        KC_NO,                KC_PGDN, KC_4,   KC_5,   KC_6, KC_EQUAL,},
    {TO(GAME), LSFT(KC_9), LSFT(KC_0), KC_LBRC,       KC_RBRC,       MT(MOD_LALT, KC_ESC), KC_NO,   KC_1,   KC_2,   KC_3, KC_PAST, },
    {TO(FNSP), KC_INS,     KC_LGUI,    KC_LSFT,       KC_BSPC,       MT(MOD_LCTL, KC_ENT), KC_SPC,  MO(MOM1), KC_DOT, KC_0, KC_SLSH, },
  },  

	// Window Manager / Hammerspoon Hotkey Momentary Layer
  [MOM2] = {
    {KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,              KC_NO, LALT(LCTL(KC_M)), LALT(LCTL(KC_F5)),   LALT(LCTL(KC_UP)),   LALT(LCTL(KC_F6)),    KC_NO,},
    {KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,              KC_NO, LALT(LCTL(KC_N)), LALT(LCTL(KC_LEFT)), LALT(LCTL(KC_DOWN)), LALT(LCTL(KC_RIGHT)), KC_NO,},
    {KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,              KC_NO, KC_NO,            KC_NO,               KC_NO,               KC_NO,                KC_NO,},
    {MO(MOM2), KC_NO, KC_NO, KC_NO, LALT(LCTL(KC_F11)), KC_NO, KC_NO,            KC_NO,               KC_NO,               KC_NO,                KC_NO,},
  },

  // Function, Media, Special Key Layer
  [FNSP] = {
    {KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_VOLU, KC_F8,    KC_F8,   KC_F9,     KC_F12,},
    {KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_VOLD, KC_F4,    KC_F5,   KC_F6,     KC_F11,},
    {KC_NO, KC_NO, KC_NO,   KC_NO,   RESET,   MT(MOD_LALT, KC_ESC), KC_MUTE, KC_F1,    KC_F2,   KC_F3,     KC_F10,},
    {KC_NO, KC_NO, KC_LGUI, KC_LSFT, KC_BSPC, MT(MOD_LCTL, KC_ENT), KC_MPLY, TO(BASE), KC_PSCR, KC_SYSREQ, KC_DEL,},
  },  

  // Gamepad Layer
  [GAME] = { 
    {KC_1,     KC_2,    KC_3,   KC_4, KC_5, KC_NO,                KC_VOLU, KC_NO,    KC_NO, KC_NO, KC_NO,},
    {KC_QUOTE, KC_COMM, KC_DOT, KC_P, KC_Y, KC_NO,                KC_VOLD, KC_NO,    KC_NO, KC_NO, KC_NO,},
    {KC_A,     KC_O,    KC_E,   KC_U, KC_I, KC_SPC,               KC_MUTE, KC_NO,    KC_NO, KC_NO, KC_NO,},
    {KC_SCLN,  KC_Q,    KC_J,   KC_K, KC_X, MT(MOD_LSFT, KC_ESC), KC_TAB,  TO(BASE), KC_NO, KC_NO, KC_NO,},
  },  

};

