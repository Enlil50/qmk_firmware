/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#define MY_COPY C(KC_C)
#define MY_PASTE C(KC_V)
#define MY_CUT C(KC_X)
#define MY_UNDO C(KC_Z)
#define MY_REDO C(KC_Y)


// NEW KEYS
enum{    
    TD_SHIFT_CAPS, 
    ACCEL,
};


// TAP DANCE
tap_dance_action_t tap_dance_actions[] = {
    [TD_SHIFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};



const key_override_t wheel_R_override = ko_make_basic(MOD_MASK_ALT, KC_RIGHT, KC_WH_R);
const key_override_t wheel_L_override = ko_make_basic(MOD_MASK_ALT, KC_LEFT, KC_WH_L);
const key_override_t wheel_U_override = ko_make_basic(MOD_MASK_ALT, KC_UP, KC_WH_U);
const key_override_t wheel_D_override = ko_make_basic(MOD_MASK_ALT, KC_DOWN, KC_WH_D);
const key_override_t CTRL_ALT_override = ko_make_basic(MOD_MASK_CTRL, TD(TD_SHIFT_CAPS), C(KC_LALT));
const key_override_t override_1 = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_RPRN);
const key_override_t override_2 = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_RBRC);
const key_override_t override_3 = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_RCBR);
const key_override_t override_4 = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, KC_DOT);
const key_override_t override_5 = ko_make_basic(MOD_MASK_SHIFT, MY_COPY, MY_PASTE);
const key_override_t override_6 = ko_make_basic(MOD_MASK_SHIFT, KC_EQL, KC_TILD);
const key_override_t override_7 = ko_make_basic(MOD_MASK_SHIFT, KC_EXLM, KC_QUES);
const key_override_t override_8 = ko_make_basic(MOD_MASK_SHIFT, KC_DQT, KC_QUOT);
const key_override_t override_9 = ko_make_basic(MOD_MASK_SHIFT, KC_PAST, KC_CIRC);
const key_override_t override_10 = ko_make_basic(MOD_MASK_SHIFT, KC_SLASH, KC_PERC);
const key_override_t override_11 = ko_make_basic(MOD_MASK_SHIFT, KC_AMPR, KC_HASH);
const key_override_t override_12 = ko_make_basic(MOD_MASK_SA, KC_AMPR, KC_AT);
const key_override_t override_13 = ko_make_basic(MOD_MASK_ALT, MY_COPY, MY_UNDO);
const key_override_t override_14 = ko_make_basic(MOD_MASK_SA, MY_COPY, MY_REDO);
const key_override_t override_15 = ko_make_basic(MOD_MASK_ALT, KC_DQT, KC_GRV);
const key_override_t override_17 = ko_make_basic(MOD_MASK_SHIFT, KC_LT, KC_GT);
const key_override_t override_18 = ko_make_basic(MOD_MASK_SHIFT, KC_PPLS, KC_PMNS);

const key_override_t *key_overrides[] = {
  &wheel_R_override,
  &wheel_L_override,
  &wheel_U_override,
  &wheel_D_override,
  &CTRL_ALT_override,
  &override_1,
  &override_2,
  &override_3,
  &override_4,
  &override_5,
  &override_6,
  &override_7,
  &override_8,
  &override_9,
  &override_10,
  &override_11,
  &override_12,
  &override_13,
  &override_14,
  &override_15,
  &override_17,
  &override_18,
  NULL
};


const uint16_t PROGMEM combo2[] = {TD(TD_SHIFT_CAPS), KC_COMM, COMBO_END};
const uint16_t PROGMEM combo3[] = {TD(TD_SHIFT_CAPS), MY_COPY, COMBO_END};
const uint16_t PROGMEM combo4[] = {TD(TD_SHIFT_CAPS), KC_EQL, COMBO_END};
const uint16_t PROGMEM combo5[] = {TD(TD_SHIFT_CAPS), KC_EXLM, COMBO_END};
const uint16_t PROGMEM combo6[] = {KC_LALT, MY_COPY, COMBO_END};
const uint16_t PROGMEM combo7[] = {TD(TD_SHIFT_CAPS), KC_DQT, COMBO_END};
const uint16_t PROGMEM combo8[] = {KC_LALT, KC_DQT, COMBO_END};
const uint16_t PROGMEM combo9[] = {TD(TD_SHIFT_CAPS), KC_LT, COMBO_END};
const uint16_t PROGMEM combo10[] = {TD(TD_SHIFT_CAPS), KC_PAST, COMBO_END};
const uint16_t PROGMEM combo11[] = {TD(TD_SHIFT_CAPS), KC_VOLU, COMBO_END};
const uint16_t PROGMEM combo12[] = {TD(TD_SHIFT_CAPS), KC_AMPR, COMBO_END};
const uint16_t PROGMEM combo13[] = {KC_LALT, KC_AMPR, COMBO_END};
const uint16_t PROGMEM combo14[] = {TD(TD_SHIFT_CAPS), KC_LALT, KC_AMPR, COMBO_END};
const uint16_t PROGMEM combo15[] = {TD(TD_SHIFT_CAPS), KC_SLASH, COMBO_END};
const uint16_t PROGMEM combo16[] = {TD(TD_SHIFT_CAPS), KC_LPRN, COMBO_END};
const uint16_t PROGMEM combo17[] = {TD(TD_SHIFT_CAPS), KC_LBRC, COMBO_END};
const uint16_t PROGMEM combo18[] = {TD(TD_SHIFT_CAPS), KC_LCBR, COMBO_END};
const uint16_t PROGMEM combo24[] = {KC_LCTL, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo25[] = {LT(1, KC_NO), LT(1, KC_Q), COMBO_END};
const uint16_t PROGMEM combo26[] = {TD(TD_SHIFT_CAPS), KC_LALT, MY_COPY, COMBO_END};
const uint16_t PROGMEM combo27[] = {LT(1, KC_NO), KC_SPC, COMBO_END};
const uint16_t PROGMEM combo28[] = {LT(1, KC_Q), KC_SPC, COMBO_END};

combo_t key_combos[] = {
  COMBO(combo2, KC_DOT),
  COMBO(combo3, MY_PASTE),
  COMBO(combo4, KC_TILD),
  COMBO(combo5, KC_QUES),
  COMBO(combo6, MY_UNDO),
  COMBO(combo7, KC_QUOT),
  COMBO(combo8, KC_GRV),
  COMBO(combo9, KC_GT),
  COMBO(combo10, KC_CIRC),
  COMBO(combo11, KC_VOLD),
  COMBO(combo12, KC_HASH),
  COMBO(combo13, KC_DLR),
  COMBO(combo14, KC_AT),
  COMBO(combo15, KC_PERC),
  COMBO(combo16, KC_RPRN),
  COMBO(combo17, KC_RBRC),
  COMBO(combo18, KC_RCBR),
  COMBO(combo24, C(KC_LALT)),
  COMBO(combo25, DF(2)),
  COMBO(combo26, MY_REDO),
  COMBO(combo27, KC_TAB),
  COMBO(combo28, KC_UNDS),

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_Q):
            if (record->event.pressed) {
                if (record->tap.count) {
                    default_layer_set(1 << 0);
                } else {
                    register_mods(MOD_BIT(KC_LSFT));
                    layer_on(1);
                }
            } else {
                if (!record->tap.count) {
                    unregister_mods(MOD_BIT(KC_LSFT));
                    layer_off(1);
                }
            }
            return false;
            break;
            
            
        case LT(1, KC_NO):
            if (record->tap.count && record->event.pressed) {
                default_layer_set(1 << 1);
                return false;
            }
            break;
            
            
         case ACCEL:
            if (record->event.pressed) {
                static bool accel = false;
                if (accel) {
                    tap_code16(MS_ACL0);
                } else {
                    tap_code16(MS_ACL1);
                }
                accel = !accel;
            }
            break;
    }
    return true;
}



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_DEL,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_BSPC,                         KC_H,    KC_J,    KC_K,   KC_L,   KC_COMMA,  KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_Z,    KC_X,    KC_C,   KC_V,    TD(TD_SHIFT_CAPS),  KC_ENTER,            KC_B,    KC_N,    KC_M,  KC_LPRN,  KC_LBRC,  KC_LCBR,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                            		 KC_LGUI,  KC_LCTL, KC_SPC, 	LT(1,KC_NO),  LT(1, KC_Q),  KC_BSLS
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_DEL,                     ACCEL, KC_UP, KC_DQT, KC_SLASH, XXXXXXX, KC_ESC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,                      KC_LEFT,   KC_DOWN,   KC_RIGHT,  KC_EQL,  KC_COMMA,  KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_AMPR,  KC_EXLM, MY_COPY, KC_LALT,  TD(TD_SHIFT_CAPS),  KC_ENTER,          KC_PAST,  KC_PPLS,  KC_SLASH, KC_LPRN, KC_LBRC, KC_LCBR,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                            		 KC_LGUI,  KC_LCTL, KC_SPC, 	LT(1,KC_NO),  LT(1, KC_Q),  KC_BSLS
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_DEL,                     KC_PWR,  KC_UP, XXXXXXX, KC_VOLU, KC_MPLY,  EE_CLR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_BSPC,                     KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_MUTE, KC_RALT, KC_PSCR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_F11, KC_F12,  MY_COPY, KC_LALT, TD(TD_SHIFT_CAPS),  KC_ENTER,             RGB_TOG, XXXXXXX, KC_CALC, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                            		 KC_LGUI,  KC_LCTL, KC_SPC, 	LT(1,KC_NO),  LT(1, KC_Q),  KC_BSLS
                                      //`--------------------------'  `--------------------------'
  )//,

//     [3] = LAYOUT_split_3x6_3(
//   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//         QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
//                                       //`--------------------------'  `--------------------------'
//   )
};
