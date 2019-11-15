/* vim: set sw=3 ts=2 : */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// Main Layer
	[0] = LAYOUT_ergodox(
			KC_GRV,   KC_1,     KC_2,     KC_3,         KC_4,         KC_5,              KC_HOME,
			KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,       KC_P,         KC_Y,              KC_BSPC,
			KC_ESC,   KC_A,     KC_O,     LT(1, KC_E),  LT(3, KC_U),  KC_I,              KC_LSFT,
			KC_SCLN,  KC_Q,     KC_J,     KC_K,         KC_X,         LCTL_T(KC_ENTER),
			KC_CAPS,  KC_NO,    KC_NO,    KC_LCTL,      KC_LALT,
			
			LALT_T(KC_PGUP), // top-left
			KC_NO, // top-right
			KC_NO, // mid
			LGUI_T(KC_SPC), KC_HYPR, // Thumbs
			LCTL(KC_A), // bottom

			KC_END,            KC_6,         KC_7,     KC_8,     KC_9,     KC_0,     KC_EQL,
			KC_DEL,            KC_F,         KC_G,     KC_C,     KC_R,     KC_L,     KC_BSLS,
			KC_D,              LT(2, KC_H),  KC_T,     KC_N,     KC_S,     KC_MINS,
			RCTL_T(KC_ENTER),  KC_B,         KC_M,     KC_W,     KC_V,     KC_Z,     KC_RSFT,
			KC_RALT,           KC_RCTL,      KC_LBRC,  KC_RBRC,  KC_SLSH,
			
			KC_NO, // top-left
			RALT_T(KC_PGDN), // top-right
			KC_NO, // mid
			RCTL(KC_A), // bottom
			KC_HYPR, RGUI_T(KC_SPC)// Thumbs
			),
	// Media, Mouse (Right Hand 1)
	[1] = LAYOUT_ergodox(
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			
			KC_TRNS, KC_TRNS,
			KC_TRNS,
			KC_TRNS, KC_TRNS, // Thumbs
			KC_TRNS,
			
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_WH_U,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_VOLU,  KC_WH_L,  KC_MS_U,  KC_WH_R,  KC_TRNS,  KC_TRNS,
			KC_MUTE,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_BTN1,  KC_BTN2,
			KC_TRNS,  KC_VOLD,  KC_TRNS,  KC_WH_D,  KC_TRNS,  KC_BTN3,  KC_BTN4,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BTN5,  KC_TRNS,

			KC_TRNS, KC_TRNS,
			KC_TRNS,
			KC_TRNS,
			KC_TRNS, KC_TRNS// Thumbs
			),
	// FN Keys (Left Hand 1)
	[2] = LAYOUT_ergodox(
			KC_TRNS,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_TRNS,
			KC_TRNS,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_TRNS,
			KC_TRNS,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,   KC_TRNS,
			KC_F16,   KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_TRNS,
			KC_TRNS,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
			
			KC_TRNS, KC_TRNS,
			KC_TRNS,
			KC_TRNS, KC_TRNS, // Thumbs
			KC_TRNS,

			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BL_TOGG,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			
			KC_TRNS, KC_TRNS,
			KC_TRNS,
			KC_TRNS,
			KC_TRNS, KC_TRNS // Thumbs
			),
	// Arrow Keys (Right Hand 2)
	[3] = LAYOUT_ergodox(
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,

			KC_TRNS, KC_TRNS,
			KC_TRNS,
			KC_TRNS, KC_TRNS, // Thumbs
			KC_TRNS,

			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,   KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_INS,   KC_PAUS,  KC_UP,     KC_PSCR,  KC_TRNS,  KC_TRNS,
			KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_END,   KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,   KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,

			KC_TRNS, KC_TRNS,
			KC_TRNS,
			KC_TRNS,
			KC_TRNS, KC_TRNS // Thumbs
			),
	// System
	[4] = LAYOUT_ergodox(
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  RESET,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  EEP_RST,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,

			KC_NO, KC_NO,
			KC_NO,
			TO(0), KC_NO, // Thumbs
			KC_NO,

			RESET,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			EEP_RST,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
			KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,

			KC_NO, KC_NO,
			KC_NO,
			KC_NO,
			KC_NO, TO(0) // Thumbs
			)
};
