#pragma once

#include "quantum.h"

// clang-format off
#define LAYOUT_split_3x7_4( \
    L01, L02, L03, L04, L05, L06, L07,    R07, R06, R05, R04, R03, R02, R01, \
    L11, L12, L13, L14, L15, L16, L17,    R17, R16, R15, R14, R13, R12, R11, \
    L21, L22, L23, L24, L25, L26, L27,    R27, R26, R25, R24, R23, R22, R21, \
              L33, L34, L35, L36,              R36, R35, R34, R33 \
  ) \
  { \
    {L01, L02, L03, L04, L05, L06, L07}, \
    {L11, L12, L13, L14, L15, L16, L17}, \
    {L21, L22, L23, L24, L25, L26, L27}, \
    {KC_NO, KC_NO, L33, L34, L35, L36 KC_NO}, \
    {R07, R06, R05, R04, R03, R02, R01}, \
    {R17, R16, R15, R14, R13, R12, R11}, \
    {R27, R26, R25, R24, R23, R22, R21}, \
    {KC_NO, R36, R35, R34, R33, KC_NO, KC_NO} \
  }
