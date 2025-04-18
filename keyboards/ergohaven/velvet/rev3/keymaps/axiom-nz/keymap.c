#include QMK_KEYBOARD_H
#include "axiom-nz.h"
#include "ergohaven.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [ALPHA] = LAYOUT( \
         KC_ESC,  KC_Q,          KC_W,          KC_F,          KC_P,          KC_B,            KC_J, KC_L,         KC_U,         LT(BASE,KC_Y),  KC_QUOT,       KC_BSPC,
         KC_TAB,  LGUI_T(KC_A),  LALT_T(KC_R),  LCTL_T(KC_S),  LSFT_T(KC_T),  KC_G,            KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I),   LGUI_T(KC_O),  KC_SCLN,
         KC_LSFT, LT(BASE,KC_Z), LT(BASE,KC_X), LT(BASE,KC_C), LT(BASE,KC_D), KC_V,            KC_K, KC_H,         KC_COMM,      ALGR_T(KC_DOT), KC_SLSH,       KC_RSFT,

                  KC_GRV, KC_LGUI,      KC_ESC, LT(NAV, KC_BSPC), LT(RSYMB, KC_TAB),           LT(SYM, KC_ENT), LT(NUM, KC_SPC), LT(FUN, KC_DEL),   KC_LBRC, KC_RBRC
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
                  _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______
        ),

        [NUM] = LAYOUT( \
         _______, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,          _______, _______, _______, _______, _______, QK_BOOT,
         _______, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,           _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
         _______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,          _______, _______, _______, KC_ALGR, _______, _______,
                  _______, _______, KC_DOT,  KC_0,    KC_MINS,          _______, _______, _______, _______, _______
        ),

        [SYM] = LAYOUT( \
         _______, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,          _______, _______, _______, _______, _______, QK_BOOT,
         _______, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,          _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
         _______, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,          _______, _______, _______, KC_ALGR, _______, _______,
                  _______, _______, KC_LPRN, KC_RPRN, KC_UNDS,          _______, _______, _______, _______, _______
        ),

        [FUN] = LAYOUT( \
         _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,          _______, _______, _______, _______, _______, QK_BOOT,
         _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,          _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
         _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,          _______, _______, _______, KC_ALGR, _______, _______,
                   _______, _______, KC_APP,  KC_SPC,  KC_TAB,          _______, _______, _______, _______, _______
        ),
};

