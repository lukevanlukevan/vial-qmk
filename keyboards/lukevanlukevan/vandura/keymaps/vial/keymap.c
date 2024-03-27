#include QMK_KEYBOARD_H

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] =  LAYOUT_rowstag_4x13 (
        KC_ESC,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_BSPC,
        KC_TAB,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_ENT,
        KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_UP,  KC_SLASH,
        KC_LCTL,  KC_LGUI,  KC_LALT,  LT(1, KC_NO),  KC_SPC,  KC_SPC,  LT(2, KC_NO), KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
};