#include QMK_KEYBOARD_H

#define XX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
			KC_GRV,    KC_1,     KC_2,      KC_3,     KC_4,           KC_5,   XX,  XX,  XX,  XX,  XX,  XX,
			KC_TAB,    KC_Q,     KC_W,      KC_E,     KC_R,           KC_T,   XX,  XX,  XX,  XX,  XX,  XX,
			KC_ESC,    KC_A,     KC_S,      KC_D,     KC_F,           KC_G,   XX,  XX,  XX,  XX,  XX,  XX,
			KC_LSFT,   KC_Z,     KC_X,      KC_C,     KC_V,           KC_B,   XX,  XX,  XX,  XX,  XX,  XX,
			KC_ENTER,  KC_BSPC,  KC_LCTRL,  KC_LALT,  GUI_T(KC_SPC),  MO(1),  XX,  XX,  XX,  XX,  XX,  XX
			),
	[1] = LAYOUT(
			RGB_MOD,  KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,  KC_VOLU,  XX,  XX,  XX,  XX,  XX,  XX,
			_______,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS,  KC_MUTE,  XX,  XX,  XX,  XX,  XX,  XX,
			_______,  KC_P4,    KC_P5,    KC_P6,    KC_PPLS,  KC_VOLD,  XX,  XX,  XX,  XX,  XX,  XX,
			_______,  KC_P1,    KC_P2,    KC_P3,    KC_PENT,  RGB_TOG,  XX,  XX,  XX,  XX,  XX,  XX,
			_______,  _______,  KC_P0,    KC_PDOT,  KC_PENT,  _______,  XX,  XX,  XX,  XX,  XX,  XX
			),
};

