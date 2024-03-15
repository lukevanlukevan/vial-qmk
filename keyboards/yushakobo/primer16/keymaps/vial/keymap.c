/* Copyright 2022 yushakobo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------|
                KC_F2,  KC_EQL,
  //|--------+--------+--------+--------|
        KC_P7,   KC_P8,   KC_P9, KC_PSLS,
  //|--------+--------+--------+--------|
        KC_P4,   KC_P5,   KC_P6, KC_PAST,
  //|--------+--------+--------+--------|
        KC_P1,   KC_P2,   KC_P3, KC_PMNS,
  //|--------+--------+--------+--------|
      KC_PDOT, KC_P0, KC_PENT, KC_PPLS
  //|-----------------------------------|
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
};
#endif