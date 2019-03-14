#include <inttypes.h>
#include "action_layer.h"
#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Base layer, hardware QWERTY
#define LAYER_QWERTY 0

// Hacked up layer that emits QWERTY when software Dvorak is turned on.
#define LAYER_SW_DVORAK 1

// Control lighting, media, layers, macros, etc.
#define LAYER_RAISE 2

// Keys that are dead.
#define _____ KC_NO

// Keys that are not physically present.
#define XXX KC_NO

enum custom_keycodes {
	RAISE = SAFE_RANGE,
	QWERTY,
	SW_DVORAK,
	MACRO_1,
	MACRO_2,
	MACRO_3,
	MACRO_4,
	MACRO_5,
	MACRO_6,
	MACRO_7,
	MACRO_8,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[LAYER_QWERTY] = LAYOUT( \
			KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,    KC_5,      XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,    KC_T,      XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_F,    KC_G,      XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			KC_LCTL,  KC_Z,     KC_X,     KC_C,     KC_V,    KC_B,      XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			RAISE,    KC_LOCK,  KC_LGUI,  KC_LALT,  KC_SPC,  KC_ENTER,  XXX,  XXX,  XXX,  XXX,  XXX,  XXX  \
			),
	[LAYER_SW_DVORAK] = LAYOUT( \
			KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,    KC_5,      XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			KC_TAB,   KC_X,     KC_COMM,  KC_D,     KC_O,    KC_K,      XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			KC_LSFT,  KC_A,     KC_SCLN,  KC_H,     KC_Y,    KC_U,      XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			KC_LCTL,  KC_SLSH,  KC_B,     KC_I,     KC_DOT,  KC_N,      XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			RAISE,    KC_LOCK,  KC_LGUI,  KC_LALT,  KC_SPC,  KC_ENTER,  XXX,  XXX,  XXX,  XXX,  XXX,  XXX  \
			),
	[LAYER_RAISE] = LAYOUT( \
			RGB_TOG,    RGB_MOD,   RGB_HUI,  RGB_SAI,  RGB_VAI,  _____,    XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			_____,      RGB_RMOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  _____,    XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			QWERTY,     RGB_M_P,   RGB_M_R,  RGB_M_B,  RGB_M_X,  KC_VOLU,  XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			SW_DVORAK,  MACRO_5,   MACRO_6,  MACRO_7,  MACRO_8,  KC_VOLD,  XXX,  XXX,  XXX,  XXX,  XXX,  XXX,    \
			RAISE,      MACRO_1,   MACRO_2,  MACRO_3,  MACRO_4,  KC_MUTE,  XXX,  XXX,  XXX,  XXX,  XXX,  XXX  \
			),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case QWERTY:
			if (record->event.pressed) {
				uint16_t layer = (1UL<<LAYER_QWERTY);
				eeconfig_update_default_layer(layer);
				default_layer_set(layer);
			}
			return false;
			break;
		case SW_DVORAK:
			if (record->event.pressed) {
				uint16_t layer = (1UL<<LAYER_SW_DVORAK);
				eeconfig_update_default_layer(layer);
				default_layer_set(layer);
			}
			return false;
			break;
		case RAISE:
			if (record->event.pressed) {
				layer_on(2);
			} else {
				layer_off(2);
			}
			return false;
			break;
	}
	return true;
}
