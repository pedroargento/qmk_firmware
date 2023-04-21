/* Copyright 2018 MechMerlin This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#define _QW 0
#define _FN 1
#define _NUM 2
#define _SYM 3
#define _NAV 4
#define _MID 5
#define _GAME 6

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)

// Right-hand home row mods
#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

#define SPC_FUN LT(_FN, KC_SPC)
#define SPC_NUM LT(_NUM, KC_SPC)
#define SPC_SYM LT(_SYM, KC_SPC)
#define SPC_NAV LT(_NAV, KC_SPC)
#define SPC_MID LT(_MID, KC_SPC)


// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_QW] = LAYOUT_ortho_5x15(
    KC_QUOT,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,   KC_7,    KC_8,    KC_9,    KC_0,      KC_MINS,   KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,      KC_BSPC,   KC_P7,   KC_P8,   KC_P9,
    KC_ESC,   HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,    KC_H,   HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_ENT,    KC_P4,   KC_P5,   KC_P6,
    KC_DEL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,   KC_P1,   KC_P2,   KC_P3,
    _______,  _______, _______, SPC_MID, SPC_NAV,  KC_SPC,  SPC_SYM, SPC_NUM,  SPC_FUN,  _______,  _______, _______, _______,  _______, TO(_GAME)
  ),

  [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
    QK_BOOT, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
    KC_TRNS, KC_F10, KC_F7,   KC_F8,   KC_F9,   KC_PSCR, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    KC_TRNS, KC_F11, KC_F4,   KC_F5,   KC_F6,   KC_SCRL, _______, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, _______, _______, _______, _______,
    KC_TRNS, KC_F12, KC_F1,   KC_F2,   KC_F3,   KC_PAUS, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_TRNS, _______, _______,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _______, _______, _______, _______, _______, _______
 ),

  [_NUM] = LAYOUT_ortho_5x15( /* FUNCTION */
    _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
    KC_TRNS, KC_LBRC, KC_7,   KC_8,   KC_9,   KC_RBRC, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    KC_TRNS, KC_SCRL, KC_4,   KC_5,   KC_6,   KC_EQL, _______, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, _______, _______, _______, _______,
    KC_TRNS, KC_GRV, KC_1,   KC_2,   KC_3,   KC_NUHS, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_TRNS, _______, _______,KC_DOT, KC_0, KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS, _______, _______, _______, _______, _______, _______
 ),

  [_SYM] = LAYOUT_ortho_5x15( /* FUNCTION */
    _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
    KC_TRNS, KC_LCBR, KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RCBR, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    KC_TRNS, KC_COLN, KC_DLR, KC_PERC,   KC_CIRC,   KC_PLUS, _______, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, _______, _______, _______, _______,
    KC_TRNS, KC_TILD, KC_EXLM,   KC_AT,   KC_HASH,   KC_PIPE, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_TRNS, _______, _______,KC_LPRN, KC_RPRN, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS, _______, _______, _______, _______, _______, _______
 ),

  [_NAV] = LAYOUT_ortho_5x15( /* FUNCTION */
    _______, _______,_______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,  
    KC_TRNS, _______, _______, _______, _______, _______, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO,  _______, _______, _______, _______, 
    KC_TRNS, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______, _______, _______, _______,
    KC_TRNS, _______, _______, _______, _______, _______, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, _______, _______,
    KC_TRNS, _______, _______, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT,  KC_BSPC, KC_DEL,  _______, _______,  _______, _______, _______, _______
 ),

  [_MID] = LAYOUT_ortho_5x15( /* FUNCTION */
    _______, _______,_______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,  
    KC_TRNS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, 
    KC_TRNS, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, RGB_TOG, _______, _______, _______, _______,
    KC_TRNS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
    KC_TRNS, _______, _______, KC_TRNS, KC_TRNS, KC_TRNS, KC_MRWD,  KC_MPLY, KC_MFFD,  _______, _______,  _______, _______, _______, _______
 ),

  [_GAME] = LAYOUT_ortho_5x15( /* FUNCTION */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, KC_DEL,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,  KC_PGUP,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, KC_UP,   KC_PGDN,
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_RALT, KC_RCTL, KC_RCTL, KC_LEFT, KC_DOWN, TO(_QW)
 ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}
