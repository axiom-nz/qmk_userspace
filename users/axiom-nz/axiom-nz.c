#include "axiom-nz.h"
#include "quantum.h"
#include <stdio.h>


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        //BASE LAYER
        case LT(ALPHA,KC_Z):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(U_UND); // Intercept hold function to send Cmd-Z
                return false;
            }
            return true;
        case LT(ALPHA,KC_X):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(U_CUT); // Intercept hold function to send Cmd-X
                return false;
            }
            return true;
        case LT(ALPHA,KC_C):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(U_CPY); // Intercept hold function to send Cmd-C
                return false;
            }
            return true;
        case LT(ALPHA,KC_D):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(U_PST); // Intercept hold function to send Cmd-V
                return false;
            }
            return true;
        case LT(ALPHA,KC_Y):
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
