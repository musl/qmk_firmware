#include "viterbi.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

enum my_layers {
	LAYER_HOME = 0,
	LAYER_LEFT,
	LAYER_RIGHT,
	LAYER_PADS,
	LAYER_SYSTEM,
	LAYER_COUNT // LAYER_COUNT stays at the end for automatic layer count.
};

enum my_keycodes {
	DBL_ZERO = SAFE_RANGE,
	BL_MODE,
	WIPE_EEPROM
};

#define ____ KC_TRNS
#define xxxx KC_NO

const uint16_t PROGMEM keymaps[LAYER_COUNT][MATRIX_ROWS][MATRIX_COLS] = {

	/*
	 * Home: Dvorak Typing
	 */
	[LAYER_HOME] = LAYOUT( \
			KC_GRV,   KC_1,     KC_2,     KC_3,    KC_4,     KC_5,            KC_HOME,          KC_END,           KC_6,            KC_7,        KC_8,     KC_9,     KC_0,     KC_EQL,    \
			KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,  KC_P,     KC_Y,            KC_BSPC,          KC_DEL,           KC_F,            KC_G,        KC_C,     KC_R,     KC_L,     KC_BSLS,   \
			KC_ESC,   KC_A,     KC_O,     KC_E,    KC_U,     KC_I,            LCTL_T(KC_ENT),   RCTL_T(KC_ENT),   KC_D,            KC_H,        KC_T,     KC_N,     KC_S,     KC_MINS,   \
			KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,    KC_K,     KC_X,            LALT_T(KC_PGUP),  RALT_T(KC_PGDN),  KC_B,            KC_M,        KC_W,     KC_V,     KC_Z,     KC_RSFT,   \
			KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_UP,   KC_RGHT,  RGUI_T(KC_SPC),  MO(LAYER_RIGHT),  MO(LAYER_LEFT),   RGUI_T(KC_SPC),  RCTL(KC_A),  KC_HYPR,  KC_LBRC,  KC_RBRC,  KC_SLSH \
			),

	/*
	 * Left Momentary Layer: F-Keys
	 */
	[LAYER_LEFT] = LAYOUT( \
			xxxx,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   xxxx,            TO(LAYER_SYSTEM),  ____,  ____,  ____,  ____,  ____,  RGB_TOG,  \
			xxxx,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  xxxx,            ____,              ____,  ____,  ____,  ____,  ____,  BL_MODE,  \
			xxxx,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  xxxx,            ____,              ____,  ____,  ____,  ____,  ____,  RGB_VAI,  \
			xxxx,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  xxxx,            ____,              ____,  ____,  ____,  ____,  ____,  RGB_VAD,  \
			xxxx,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  ____,    TO(LAYER_PADS),  ____,              ____,  ____,  ____,  ____,  ____,  ____ \
			),

	/*
	 * Right Momentary: Media, Mouse, and RGB Controls
	 */
	[LAYER_RIGHT] = LAYOUT( \
			____,  ____,  ____,  ____,  ____,  ____,  TO(LAYER_SYSTEM),  ____,            xxxx,     xxxx,        KC_WH_U,     xxxx,         xxxx,        xxxx,        \
			____,  ____,  ____,  ____,  ____,  ____,  ____,              ____,            KC_VOLU,  KC_WH_L,     KC_MS_UP,    KC_WH_R,      xxxx,        xxxx,        \
			____,  ____,  ____,  ____,  ____,  ____,  ____,              ____,            KC_MUTE,  KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT,  KC_MS_BTN1,  KC_MS_BTN2,  \
			____,  ____,  ____,  ____,  ____,  ____,  ____,              ____,            KC_VOLD,  xxxx,        KC_WH_D,     xxxx,         KC_MS_BTN3,  KC_MS_BTN4,  \
			____,  ____,  ____,  ____,  ____,  ____,  ____,              TO(LAYER_PADS),  ____,     ____,        ____,        xxxx,         KC_MS_BTN5,  xxxx \
			),

	/*
	 * QWERTY Gaming
	 */
	[LAYER_PADS] = LAYOUT( \
			KC_GRV,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,            ____,            ____,            xxxx,           xxxx,   KC_PSLS,   KC_PAST,  KC_PMNS,  xxxx,     \
			KC_TAB,    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,            ____,            ____,            xxxx,           KC_P7,  KC_P8,     KC_P9,    KC_PPLS,  xxxx,     \
			KC_CAPS,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,            ____,            ____,            KC_TAB,         KC_P4,  KC_P5,     KC_P6,    KC_PENT,  xxxx,     \
			MOD_LSFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,            ____,            ____,            xxxx,           KC_P1,  KC_P2,     KC_P3,    KC_PENT,  xxxx,     \
			KC_LALT,   KC_F1,  KC_F2,  KC_F3,  KC_F4,  RGUI_T(KC_SPC),  TO(LAYER_HOME),  TO(LAYER_HOME),  GUI_T(KC_SPC),  KC_P0,  DBL_ZERO,  KC_PDOT,  KC_PCMM,  KC_END \
			),

	/*
	 * System: QMK Functions, Debug, & etc
	 */
	[LAYER_SYSTEM] = LAYOUT( \
			xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  RESET,           RESET,           xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,    \
			xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  EEPROM_RESET,    EEPROM_RESET,    xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,    \
			xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,            xxxx,            xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,    \
			xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,            xxxx,            xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,    \
			xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  TO(LAYER_HOME),  TO(LAYER_HOME),  xxxx,  xxxx,  xxxx,  xxxx,  xxxx,  xxxx  \
			)
				  
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	
	// Store a custom RGB light mode because I want to cycle through a
	// smaller list of modes.
	static uint8_t mode = 1;

	switch (keycode) {
		case DBL_ZERO:
			if (!record->event.pressed) {
				SEND_STRING("00");
			}
			break;
		case BL_MODE:
			if (record->event.pressed) {
				switch(mode) {
					case 1:
						mode = 8;
						break;
					case 8:
						mode = 14;
						break;
					default:
						mode = 1;
						break;
				}
				rgblight_mode(mode);
			}
			break;
	}

	return true;
}	

void blink(uint8_t times, uint8_t mode, uint8_t r, uint8_t g, uint8_t b) { 
	rgblight_mode_noeeprom(0);
	rgblight_setrgb(0, 0, 0);
	for(uint8_t i = times; --i > 0;) {
		rgblight_setrgb(r, g, b);
		_delay_ms(100);
		rgblight_setrgb(0, 0, 0);
		_delay_ms(100);
	}
	rgblight_mode_noeeprom(mode);
}

/*
// This appears to be obsolete as of 2018-11-02.
void matrix_init_user() {
	// Manually disable JTAG so it gets done on both halves.
	MCUCR |= (1<<JTD);       
	MCUCR |= (1<<JTD);
}
*/

