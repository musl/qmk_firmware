/* Copyright 2019 Franklin Harding
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

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    MACRO_1 = SAFE_RANGE,
    MACRO_2,
    MACRO_3,
    MACRO_4,
	MACRO_5,
	MACRO_6
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      MACRO_1,  MACRO_2,
      MACRO_3,  MACRO_4,
      MACRO_5,  MACRO_6
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MACRO_1:
      if (record->event.pressed) {
        SEND_STRING(":joy:");
		return false;
      }
	  break;
    case MACRO_2:
      if (record->event.pressed) {
        SEND_STRING(":heart:");
		return false;
      }
      break;
    case MACRO_3:
      if (record->event.pressed) {
        SEND_STRING(":100:");
      }
      break;
    case MACRO_4:
      if (record->event.pressed) {
        SEND_STRING(":heartpulse:");
		return false;
      }
      break;
    case MACRO_5:
      if (record->event.pressed) {
        SEND_STRING(":metal:");
		return false;
	  }
      break;
    case MACRO_6:
      if (record->event.pressed) {
        SEND_STRING(":fire:");
		return false;
	  }
      break;
  }

  return true;
}

