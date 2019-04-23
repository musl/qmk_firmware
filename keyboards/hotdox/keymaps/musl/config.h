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

#undef MOUSEKEY_DELAY
#undef MOUSEKEY_MAX_SPEED
#undef MOUSEKEY_TIME_TO_MAX

#define MOUSEKEY_DELAY             20
#define MOUSEKEY_INTERVAL          20
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       30
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
