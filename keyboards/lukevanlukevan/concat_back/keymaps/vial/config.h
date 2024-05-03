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

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// Vial
#define VIAL_KEYBOARD_UID {0x84, 0x85, 0xB8, 0xB1, 0xFB, 0x07, 0xA2, 0x0F}
#define VIAL_UNLOCK_COMBO_ROWS { 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 5
