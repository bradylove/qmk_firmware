#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC714
#define PRODUCT_ID      0x1010
#define DEVICE_VER      0x0001
#define MANUFACTURER    BLove
#define PRODUCT         TEK209
#define DESCRIPTION     Handwired Truly Ergonomic Keyboard 209

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { B0, B1, D5, D3, D2, D1, D0 }
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, C7, C6, B6, B5, B4, D7, B3, D4, E6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for magic key command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
