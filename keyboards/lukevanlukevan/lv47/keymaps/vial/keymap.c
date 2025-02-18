#include QMK_KEYBOARD_H

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] =  LAYOUT_ortho_4x12 (
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, SC_SENT,
        KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),
};