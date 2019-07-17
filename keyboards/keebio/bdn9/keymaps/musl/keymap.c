/* Copyright 2019 Danny Nguyen <danny@keeb.io>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "pointing_device.h"

enum custom_keycodes {
	MACRO_0 = SAFE_RANGE,
	MACRO_1,
	MACRO_2,
	MACRO_3,
	MACRO_4,
	MACRO_5,
	MACRO_6,
	MACRO_7,
	MACRO_8,
	MACRO_9
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
		KC_MS_BTN1,  TO(1),    KC_MS_BTN2,
        RGB_TOG,     MACRO_0,  RGB_MOD,
        MACRO_1,     MACRO_2,  MACRO_3
    ),
    [1] = LAYOUT(
		KC_MS_BTN1,  TO(0),    KC_MS_BTN2,
        _______,     MACRO_0,  _______,
		MACRO_1,     MACRO_2,  MACRO_3
    ),
};

static float vx = 0;
static float vy = 0;
static float vstep = 4.0;
static float vdecay = 0.95;

void matrix_scan_user() {
	static report_mouse_t report;

	report = pointing_device_get_report();
	report.x += (int)(vx);
	report.y += (int)(vy);
	pointing_device_set_report(report);
	vx *= vdecay;
	vy *= vdecay;
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
			vx += vstep;
        } else {
			vx -= vstep;
        }
    } else if (index == 1) {
        if (clockwise) {
			vy += vstep;
        } else {
			vy -= vstep;
        }
    }
}

uint32_t layer_state_set_user(uint32_t state) {
	static report_mouse_t report;

	switch(biton32(state)) {
		case 1:
			report = pointing_device_get_report();
			report.buttons |= MOUSE_BTN1;
			pointing_device_set_report(report);
			break;

		default:
			report = pointing_device_get_report();
			report.buttons &= ~MOUSE_BTN1;
			pointing_device_set_report(report);
			break;
	}

	return state;
}	

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch(keycode) {
		case MACRO_0:
			if(record->event.pressed) {
				SEND_STRING(SS_LGUI("a") SS_TAP(X_DELETE));
				return true;
			}
			break;
		case MACRO_1:
			if(record->event.pressed) {
				vstep = 4.0;
				return true;
			}
			break;
		case MACRO_2:
			if(record->event.pressed) {
				vstep = 8.0;
				return true;
			}
			break;
		case MACRO_3:
			if(record->event.pressed) {
				vstep = 16.0;
				return true;
			}
			break;
		case MACRO_4:
			if(record->event.pressed) {
				return true;
			}
			break;
		case MACRO_5:
			if(record->event.pressed) {
				return true;
			}
			break;
		case MACRO_6:
			if(record->event.pressed) {
				return true;
			}
			break;
		case MACRO_7:
			if(record->event.pressed) {
				return true;
			}
			break;
		case MACRO_8:
			if(record->event.pressed) {
				return true;
			}
			break;
		case MACRO_9:
			if(record->event.pressed) {
				return true;
			}
			break;
	}
	return true;
}
