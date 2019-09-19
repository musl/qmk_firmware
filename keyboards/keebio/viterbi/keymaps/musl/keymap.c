#include "viterbi.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[5][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
			KC_GRV,   KC_1,     KC_2,     KC_3,        KC_4,             KC_5,            KC_HOME,         KC_END,          KC_6,            KC_7,            KC_8,        KC_9,     KC_0,     KC_EQL,
			KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,      KC_P,             KC_Y,            KC_BSPC,         KC_DEL,          KC_F,            KC_G,            KC_C,        KC_R,     KC_L,     KC_BSLS,
			KC_ESC,   KC_A,     KC_O,     LT(1,KC_E),  LT(2,KC_U),       KC_I,            LCTL_T(KC_ENT),  RCTL_T(KC_ENT),  KC_D,            LT(3,KC_H),      LT(4,KC_T),  KC_N,     KC_S,     KC_MINS,
			KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,        KC_K,             KC_X,            LCTL_T(KC_ENT),  RCTL_T(KC_ENT),  KC_B,            KC_M,            KC_W,        KC_V,     KC_Z,     RSFT_T(KC_SLSH),
			XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_HYPR,     LALT_T(KC_BSPC),  LGUI_T(KC_SPC),  XXXXXXX,         XXXXXXX,         RGUI_T(KC_SPC),  RALT_T(KC_DEL),  KC_HYPR,     XXXXXXX,  XXXXXXX,  XXXXXXX
			),
	[1] = LAYOUT(
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_WH_U,  XXXXXXX,  XXXXXXX,  RESET,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_VOLU,  KC_WH_L,  KC_MS_U,  KC_WH_R,  XXXXXXX,  EEP_RST,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  XXXXXXX,  XXXXXXX,  _______,  _______,  KC_MUTE,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_BTN1,  KC_BTN2,
			_______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  KC_VOLD,  XXXXXXX,  KC_WH_D,  XXXXXXX,  KC_BTN3,  KC_BTN4,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX
			),
	[2] = LAYOUT(
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_PGUP,  KC_LBRC,  KC_RBRC,  XXXXXXX,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_INS,   KC_PSCR,  KC_UP,    KC_PAUS,  XXXXXXX,  XXXXXXX,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  XXXXXXX,  _______,  _______,  KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_END,   XXXXXXX,
			_______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  XXXXXXX,  XXXXXXX,  KC_PGDN,  XXXXXXX,  XXXXXXX,  _______,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX
			),
	[3] = LAYOUT(
			XXXXXXX,  KC_F11,   KC_F12,   KC_F13,   KC_F14,   KC_F15,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
			XXXXXXX,  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
			XXXXXXX,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    _______,  _______,  XXXXXXX,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
			_______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX
			),
	[4] = LAYOUT(
			RESET,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
			EEP_RST,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
			XXXXXXX,  RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_MOD,   RGB_TOG,  _______,  _______,  XXXXXXX,  XXXXXXX,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,
			_______,  RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_RMOD,  XXXXXXX,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX
			)
	/*
	[] = LAYOUT(:
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
			_______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
			XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX
			)
	*/
};
