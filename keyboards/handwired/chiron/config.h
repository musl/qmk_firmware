/*
Copyright 2019 Mike Hix

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER Mike Hix
#define PRODUCT chiron
#define DESCRIPTION A custom keyboard

#define MATRIX_ROWS 10
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { C6, D7, B5, B6, B7 }
#define MATRIX_COL_PINS { F6, F5, F4, F1, F0, C7, D6 }

#define UNUSED_PINS

#define SPLIT_HAND_PIN F7

#define SOFT_SERIAL_PIN D0
// 0: about 189kbps (Experimental only)
// 1: about 137kbps (default)
// 2: about 75kbps
// 3: about 39kbps
// 4: about 26kbps
// 5: about 20kbps
#define SELECT_SOFT_SERIAL_SPEED 1

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN D3
#define RGBLED_NUM 4

#define BACKLIGHT_PIN D2
#define BACKLIGHT_LEVELS 7

