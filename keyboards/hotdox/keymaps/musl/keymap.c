/* vim: set sw=2 ts=2 : */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox(
			KC_GRV,   KC_1,     KC_2,     KC_3,    KC_4,     KC_5,            KC_HOME,
			KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,  KC_P,     KC_Y,            KC_BSPC,
			KC_ESC,   KC_A,     KC_O,     KC_E,    KC_U,     KC_I,            KC_LSFT,
			KC_SCLN,  KC_Q,     KC_J,     KC_K,    KC_X,     LCTL_T(KC_ENT),
			KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_UP,   KC_RGHT,
			
			LALT_T(KC_PGUP), KC_NO,
			KC_NO,
			LGUI_T(KC_SPC), MO(1), // Thumbs
			KC_NO,

			KC_END,          KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_EQL,
			KC_DEL,          KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_BSLS,
			KC_D,            KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS,
			RCTL_T(KC_ENT),  KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     KC_RSFT,
			LCTL(KC_A),      KC_HYPR,  KC_LBRC,  KC_RBRC,  KC_SLSH,
			
			KC_NO, RALT_T(KC_PGDN),
			KC_NO,
			RGUI_T(KC_SPC), MO(2), // Thumbs
			KC_NO
			),
	[1] = LAYOUT_ergodox(
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  TO(4),
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			
			KC_NO, KC_NO,
			KC_NO,
			KC_NO, KC_TRNS, // Thumbs
			KC_NO,
			
			KC_NO,  KC_NO,    KC_NO,    KC_WH_U,  KC_NO,    KC_NO,    KC_NO,
			KC_NO,  KC_VOLU,  KC_WH_L,  KC_MS_U,  KC_WH_R,  KC_NO,
			KC_NO,  KC_MUTE,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_BTN1,  KC_BTN2,
			KC_NO,  KC_VOLD,  KC_NO,    KC_WH_D,  KC_NO,    KC_BTN3,  KC_BTN4,
			KC_NO,  KC_NO,    KC_NO,    KC_BTN5,  KC_NO,
			
			KC_NO, KC_NO,
			KC_NO,
			KC_NO, TO(3), // Thumbs
			KC_NO
			),
	[2] = LAYOUT_ergodox(
			KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_NO,
			KC_NO,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,
			KC_NO,   KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_NO,
			KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_NO,
			KC_NO,   KC_F21,  KC_F22,  KC_F23,  KC_F24,
			
			KC_NO, KC_NO,
			KC_NO,
			KC_NO, TO(3), // Thumbs 
			KC_NO,

			TO(4),  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  BL_TOGG,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			
			KC_NO, KC_NO,
			KC_NO,
			KC_NO, KC_TRNS, // Thumbs
			KC_NO
			),
	[3] = LAYOUT_ergodox(
			KC_GESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,    KC_HOME,
			KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,    KC_BSPC,
			KC_LSFT,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,    KC_LCTL,
			KC_Z,     KC_X,   KC_C,   KC_V,   KC_B,   KC_ENT,
			KC_LALT,  KC_F1,  KC_F2,  KC_F3,  KC_F4,

			LALT_T(KC_PGUP), KC_NO,
			KC_NO,
			LGUI_T(KC_SPC), TO(0), // Thumbs
			KC_HYPR,

			KC_END,   KC_6,     KC_7,   KC_8,     KC_9,     KC_0,     KC_EQL,
			KC_DEL,   KC_Y,     KC_U,   KC_I,     KC_O,     KC_P,     KC_BSLS,
			KC_H,     KC_J,     KC_K,   KC_L,     KC_SCLN,  KC_RSFT,
			KC_ENT,   KC_N,     KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_RCTL,
			KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT,  KC_MINS,
			
			KC_NO, LALT_T(KC_PGDN),
			KC_NO,
			RGUI_T(KC_SPC), TO(0), // Thumbs
			KC_HYPR
			),
	[4] = LAYOUT_ergodox(
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_TRNS,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    RESET,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  EEP_RST,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,

			KC_NO, KC_NO,
			KC_NO,
			KC_NO, TO(0), // Thumbs
			KC_NO,

			KC_TRNS,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			RESET,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			EEP_RST,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,

			KC_NO, KC_NO,
			KC_NO,
			KC_NO, TO(0), // Thumbs
			KC_NO
			)
};
