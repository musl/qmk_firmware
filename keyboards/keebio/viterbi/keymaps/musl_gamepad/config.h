/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

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

// #define USE_I2C

/* Select hand configuration */

#define MASTER_RIGHT
// #define EE_HANDS

/******************************************************************************/
// Key Behavior
/******************************************************************************/

/*
 * If you press a Mod Tap key, tap another key (press and release) and
 * then release the Mod Tap key, all within the tapping term, it will
 * output the "tapping" function for both keys.
 *
 * Setting IGNORE_MOD_TAP_INTERRUPT requires holding both keys for the
 * TAPPING_TERM to trigger the hold function (the mod).
 */
#define IGNORE_MOD_TAP_INTERRUPT

//#define LEADER_TIMEOUT 300
//#define ONESHOT_TAP_TOGGLE 2
//#define ONESHOT_TIMEOUT 300

/*
 * If you press a Mod Tap key, tap another key (press and release) and
 * then release the Mod Tap key, all within the tapping term, it will
 * output the "tapping" function for both keys.
 */
#define PERMISSIVE_HOLD

#define PREVENT_STUCK_MODIFIERS

//#define QMK_KEYS_PER_SCAN 4

// Send the tap keystroke even if it's outside of the tapping term and
// no other key was pressed.
//#define RETRO_TAPPING

#define TAPPING_TERM 200
//#define TAPPING_TOGGLE 2


#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 3
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
