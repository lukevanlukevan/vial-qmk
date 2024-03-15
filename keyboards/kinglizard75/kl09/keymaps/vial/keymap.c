#include QMK_KEYBOARD_H

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_three(
        KC_1,   KC_2,   KC_3,
        KC_P4,   KC_5,   KC_6,
        KC_7,   KC_8,   KC_9
    )
};

