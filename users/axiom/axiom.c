#include "axiom.h"
#include "quantum.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        //EDIT TAP
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
                SEND_STRING("=>");
            }
            break;
    }
    return true;
}


bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_MINS:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
