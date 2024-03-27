#include QMK_KEYBOARD_H

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_4x4(
        KC_1,   KC_2,   KC_3, KC_4,
        KC_P4,   KC_5,   KC_6, KC_A,
        KC_7,   KC_8,   KC_9, KC_B,
        KC_7,   KC_8,   KC_9, KC_B
    )
};

