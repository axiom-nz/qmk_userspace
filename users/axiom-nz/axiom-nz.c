#include QMK_KEYBOARD_H
#include <stdio.h>
#include "axion-nz.h"
#include "ergohaven.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [BASE] = LAYOUT( \
         KC_ESC,  KC_Q,          KC_W,          KC_F,          KC_P,          KC_B,            KC_J, KC_L,         KC_U,         LT(BASE,KC_Y),  KC_QUOT,             KC_BSPC,
         KC_TAB,  LGUI_T(KC_A),  LALT_T(KC_R),  LCTL_T(KC_S),  LSFT_T(KC_T),  KC_G,            KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I),   LGUI_T(KC_O),        KC_SCLN,
         KC_LSFT, LT(BASE,KC_Z), LT(BASE,KC_X), LT(BASE,KC_C), LT(BASE,KC_D), KC_V,            KC_K, KC_H,         KC_COMM,      ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH), KC_RSFT,

         KC_GRV,  KC_LGUI, LT(MEDIA, KC_ESC),  LT(NAV, KC_BSPC),  LT(RSYMB, KC_TAB),           LT(SYM, KC_ENT), LT(NUM, KC_SPC), LT(FUN, KC_DEL),  KC_LBRC, KC_RBRC
        ),

        [NAV] = LAYOUT( \
         _______, KC_1,    KC_2,    KC_3,    KC_4,     KC_5,            KC_6,    KC_7,    KC_8,     KC_9,    KC_0,     _______,
         _______, _______, _______, _______, _______,  KC_ENT,          KC_CAPS, KC_LEFT, KC_DOWN,  KC_UP,   KC_RIGHT, _______,
         _______, _______, KC_HOME, KC_INS,  KC_END,   KC_DEL,          KC_INS,  KC_HOME, KC_PGDN,  KC_PGUP, KC_END,   _______,
                  _______, _______, _______, _______, _______,          _______, PREVWRD, NEXTWRD,  _______, _______
        ),

        [RSYMB] = LAYOUT( \
         QK_BOOT, _______, _______, _______, _______, _______,          EQ_ARR,  KC_UNDS, KC_LPRN, KC_RPRN, KC_BSLS,  _______,
         _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,          KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_DQUO,  _______,
         _______, _______, KC_ALGR, _______, _______, _______,          KC_PIPE, KC_PLUS, KC_LBRC, KC_RBRC, KC_SLSH,  _______,
                  _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
        ),

        [NUM] = LAYOUT( \
         _______, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,          _______, _______, _______, _______, _______, QK_BOOT,
         _______, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,           _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
         _______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,          _______, _______, _______, KC_ALGR, _______, _______,
                  _______, _______, KC_DOT,  KC_0,    KC_MINS,          _______, _______, _______, _______, _______,
        ),

        [SYM] = LAYOUT( \
         _______, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,          _______, _______, _______, _______, _______, QK_BOOT,
         _______, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,          _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
         _______, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,          _______, _______, _______, KC_ALGR, _______, _______,
                  _______, _______, KC_LPRN, KC_RPRN, KC_UNDS,          _______, _______, _______, _______, _______,
        ),

        [FUN] = LAYOUT( \
         _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,          _______, _______, _______, _______, _______, QK_BOOT,
         _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK,          _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
         _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,          _______, _______, _______, KC_ALGR, _______, _______,
                   _______, _______, KC_APP,  KC_SPC,  KC_TAB,          _______, _______, _______, _______, _______
        ),


        [_RAISE] = LAYOUT( \
         _______, _______, KC_LT,   KC_EQL,  KC_GT,   KC_GRV,           KC_CIRC, KC_DQT,  KC_UNDS, KC_QUOT, _______,  _______,
         _______, KC_BSLS, KC_LPRN, KC_MINS, KC_RPRN, KC_PLUS,          KC_PERC, KC_LCBR, KC_SCLN, KC_RCBR, KC_EXLM,  KC_QUES,
         _______, _______, KC_ASTR, KC_COLN, KC_SLSH, KC_DLR,           KC_AT,   KC_PIPE, KC_TILD, KC_AMPR, _______,  _______,
                  _______, _______, _______, ADJUST,  KC_HASH,          _______, _______, _______, _______, _______
        ),

        [_ADJUST] = LAYOUT( \
         QK_BOOT, _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,            _______, _______, _______, _______, DM_PLY1, DM_REC1,
         _______, _______,  KC_F5,   KC_F6,   KC_F7,   KC_F8,            _______, KC_VOLD, KC_MUTE, KC_VOLU, DM_PLY2, DM_REC2,
         _______, _______,  KC_F9,   KC_F10,  KC_F11,  KC_F12,           _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, DM_RSTP,
                  _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______

       ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        //BASE LAYER
        case LT(BASE,KC_Z):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(U_UND); // Intercept hold function to send Cmd-Z
                return false;
            }
            return true;
        case LT(BASE,KC_X):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(U_CUT); // Intercept hold function to send Cmd-X
                return false;
            }
            return true;
        case LT(BASE,KC_C):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(U_CPY); // Intercept hold function to send Cmd-C
                return false;
            }
            return true;
        case LT(BASE,KC_D):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(U_PST); // Intercept hold function to send Cmd-V
                return false;
            }
            return true;
        case LT(BASE,KC_Y):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(U_RDO); // Intercept hold function to send Cmd-Y
                return false;
            }
            return true;

        case EQ_ARR:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("=>");
            }
            break;
    }
    return true;
}
