/* Copyright 2019 Michiel Visser
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

/* Default Anne Pro layout, windows style */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT,
      KC_LCTL, KC_LWIN, KC_LALT,                   KC_SPACE,                                    KC_RALT, MO(1),   KC_APP,  KC_RCTL
  ),
  [1] = LAYOUT(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,
      XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, APL_RGB, APL_RAT, APL_BRT, APL_MOD, KC_UP,   KC_SLCK, KC_PAUS, KC_HOME, KC_END,  KC_PSCR,
      KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, KC_PGDN,          XXXXXXX,
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(3),   XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  KC_DEL,                    _______,
      _______, _______, _______,                   XXXXXXX,                                     _______, _______, MO(2), _______
  ),
  [2] = LAYOUT(
      KC_PWR,  MI_TOG,  KC_ASTG, KC_LOCK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, RESET,
      XXXXXXX, KC_P7,   KC_P8,   KC_P9,   DM_REC1, DM_REC2, XXXXXXX, XXXXXXX, KC_MSTP, XXXXXXX, KC_MSEL, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_NLCK, KC_P4,   KC_P5,   KC_P6,   DM_PLY1, DM_PLY2, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,          XXXXXXX,
      _______, KC_P1,   KC_P2,   KC_P3,   XXXXXXX, DM_RSTP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   _______,
      _______, _______, _______,                   KC_P0,                                       _______, _______, _______, _______
  ),
  [3] = LAYOUT(
      TG(3),   APB_HC1, APB_HC2, APB_HC3, APB_HC4, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, APB_LGC, APB_OFF, APB_ON,  XXXXXXX,
      XXXXXXX, APB_HS1, APB_HS2, APB_HS3, APB_HS4, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, APB_HD1, APB_HD2, APB_HD3, APB_HD4, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,
      APB_HLQ, XXXXXXX, XXXXXXX,                   XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
};
