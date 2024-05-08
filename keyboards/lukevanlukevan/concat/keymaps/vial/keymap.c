#include QMK_KEYBOARD_H

enum custom_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _FUNC,
};

#define KC_LOW  LT(_LOWER, KC_NO)
#define KC_RSE  LT(_RAISE, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_split_3x7_4(
        KC_ESC, KC_Q,  KC_W,  KC_E, KC_R, KC_T, KC_VOLD,    KC_VOLU, KC_Y, KC_U, KC_I, KC_O, KC_P,    KC_BSPC,
        KC_TAB, KC_A,  KC_S,  KC_D, KC_F, KC_G, KC_LEFT,    KC_RGHT, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT,KC_Z,  KC_X,  KC_C, KC_V, KC_B, KC_DOWN,    KC_UP,   KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
                      KC_NO, KC_NO, KC_LOW,  KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO
    ),
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}