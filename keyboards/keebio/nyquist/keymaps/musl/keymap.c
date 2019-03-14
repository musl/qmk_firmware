/* vim: set ft=c ts=4 sw=4 : */

#include "nyquist.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

enum my_keycodes {
	RAISE = SAFE_RANGE,
	LOWER,
	MACRO_1,
	MACRO_2,
	MACRO_3,
	MACRO_4,
	MACRO_5
};

enum my_layers {
	LAYER_HOME = 0,
	LAYER_NAV_KP,
	LAYER_FN_WM,	
	LAYER_COUNT // Make sure this is last in the enum.
};

const uint16_t PROGMEM keymaps[LAYER_COUNT][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_ESC,         KC_1,     KC_2,     KC_3,     KC_4,   KC_5,           KC_6,           KC_7,   KC_8,     KC_9,     KC_0,     KC_ENT,          \
		KC_GRV,         KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,   KC_Y,           KC_F,           KC_G,   KC_C,     KC_R,     KC_L,     KC_EQL,          \
		SFT_T(KC_TAB),  KC_A,     KC_O,     KC_E,     KC_U,   KC_I,           KC_D,           KC_H,   KC_T,     KC_N,     KC_S,     SFT_T(KC_MINS),  \
		KC_BSPC,        KC_SCLN,  KC_Q,     KC_J,     KC_K,   KC_X,           KC_B,           KC_M,   KC_W,     KC_V,     KC_Z,     KC_DEL,          \
		KC_BSLS,        KC_SLSH,  KC_LALT,  KC_LCTL,  LOWER,  GUI_T(KC_SPC),  GUI_T(KC_SPC),  RAISE,  KC_RCTL,  KC_RALT,  KC_LBRC,  KC_RBRC \
	),
	[1] = LAYOUT(
		KC_ESC,         KC_MSTP,  KC_MFFD,  KC_MPLY,  KC_MRWD,  KC_NO,          KC_SLCK,        KC_INS,  KC_PSLS,  KC_PAST,  KC_NO,    KC_ENT,          \
		KC_NO,          KC_PGUP,  KC_HOME,  KC_UP,    KC_END,   KC_VOLU,        KC_PAUS,        KC_P7,   KC_P8,    KC_P9,    KC_PMNS,  KC_EQL,          \
		SFT_T(KC_TAB),  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_VOLD,        KC_PSCR,        KC_P4,   KC_P5,    KC_P6,    KC_PPLS,  SFT_T(KC_MINS),  \
		KC_BSPC,        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_MUTE,        KC_SYSREQ,      KC_P1,   KC_P2,    KC_P3,    KC_ENT,   KC_DEL,          \
		KC_NO,          KC_NO,    KC_LALT,  KC_LCTL,  LOWER,    GUI_T(KC_SPC),  GUI_T(KC_SPC),  RAISE,   KC_P0,    KC_PDOT,  KC_LBRC,  KC_RBRC \
	),
	[2] = LAYOUT(
		KC_ESC,         KC_F1,   KC_F2,    KC_F3,    KC_F4,   KC_F5,          MACRO_1,        MACRO_2,        MACRO_3,        MACRO_4,        MACRO_5,       KC_ENT,          \
		KC_NO,          KC_F6,   KC_F7,    KC_F8,    KC_F9,   KC_F10,         HYPR(KC_F1),    HYPR(KC_F2),    HYPR(KC_UP),    HYPR(KC_F3),    HYPR(KC_F4),   KC_NO,           \
		SFT_T(KC_TAB),  KC_F11,  KC_F12,   KC_F13,   KC_F14,  KC_F15,         HYPR(KC_F5),    HYPR(KC_LEFT),  HYPR(KC_DOWN),  HYPR(KC_RGHT),  HYPR(KC_F6),   SFT_T(KC_MINS),  \
		KC_BSPC,        KC_F16,  KC_F17,   KC_F18,   KC_F19,  KC_F20,         HYPR(KC_F7),    HYPR(KC_F8),    HYPR(KC_F9),    HYPR(KC_F10),   HYPR(KC_F11),  KC_DEL,          \
		KC_NO,          KC_NO,   KC_LALT,  KC_LCTL,  LOWER,   GUI_T(KC_SPC),  GUI_T(KC_SPC),  RAISE,          KC_RCTL,        KC_RALT,        KC_NO,         KC_NO \
	),
};


uint32_t layer_state_set_user(uint32_t state) {
	switch(biton32(state)) {
		case 0:
			rgblight_setrgb(0x00, 0x00, 0x00);
			break;
		case 1:
			rgblight_setrgb(0xff, 0x00, 0x00);
			break;
		case 2:
			rgblight_setrgb(0x00, 0x00, 0xff);
			break;
		case 3:
			rgblight_setrgb(0x00, 0xff, 0x00);
			break;
		default:
			rgblight_setrgb(0x00, 0x00, 0x00);
			break;
	}

	return state;
}

const int colors[40][3] = {
	{255, 0, 0},
	{255, 38, 0},
	{255, 77, 0},
	{255, 115, 0},
	{255, 153, 0},
	{255, 191, 0},
	{255, 229, 0},
	{242, 255, 0},
	{204, 255, 0},
	{166, 255, 0},
	{128, 255, 0},
	{89, 255, 0},
	{51, 255, 0},
	{13, 255, 0},
	{0, 255, 25},
	{0, 255, 64},
	{0, 255, 102},
	{0, 255, 140},
	{0, 255, 179},
	{0, 255, 217},
	{0, 255, 255},
	{0, 217, 255},
	{0, 178, 255},
	{0, 140, 255},
	{0, 102, 255},
	{0, 64, 255},
	{0, 25, 255},
	{13, 0, 255},
	{51, 0, 255},
	{89, 0, 255},
	{127, 0, 255},
	{166, 0, 255},
	{204, 0, 255},
	{242, 0, 255},
	{255, 0, 230},
	{255, 0, 191},
	{255, 0, 153},
	{255, 0, 115},
	{255, 0, 76},
	{255, 0, 38}
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint8_t layer = 0;

  switch (keycode) {
    case RAISE:
      if (record->event.pressed) {
		if(layer < LAYER_COUNT - 1) layer_move(++layer);
      }
      return false;
    case LOWER:
      if (record->event.pressed) {
		if (layer > 0) layer_move(--layer);
      }
      return false;
    case MACRO_1:
      if (!record->event.pressed) {
		  for(int j = 0; j < 5; j++) {
			  for(int i = 0; i < 40; i++) {
				rgblight_setrgb(colors[i][0], colors[i][1], colors[i][2]);
				_delay_ms(33);
			  }
		  }
      }
      return false;
    case MACRO_2:
      if (!record->event.pressed) {
      }
      return false;
    case MACRO_3:
      if (!record->event.pressed) {
      }
      return false;
    case MACRO_4:
      if (!record->event.pressed) {
      }
      return false;
    case MACRO_5:
      if (!record->event.pressed) {
      }
      return false;
    default:
      return true;
  }
}

