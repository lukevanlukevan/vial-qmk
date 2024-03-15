// Copyright 2024 Luke Van (@lukevanlukevan)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

#define VIAL_KEYBOARD_UID {0xD9, 0xA4, 0x81, 0x25, 0x6F, 0x7B, 0x74, 0x0E}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

/* disable action features */
//#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

