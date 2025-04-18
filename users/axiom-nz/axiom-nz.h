#include QMK_KEYBOARD_H

enum layers { ALPHA, NAV, RSYMB, SYM, NUM, FUN };
enum user_keycodes {
    EQ_ARR = SAFE_RANGE
};


#if defined WIN_COPY
    #define U_RDO C(KC_Y)
    #define U_PST C(KC_V)
    #define U_CPY C(KC_C)
    #define U_CUT C(KC_X)
    #define U_UND C(KC_Z)
#else
    #define U_RDO SCMD(KC_Z)
    #define U_PST LCMD(KC_V)
    #define U_CPY LCMD(KC_C)
    #define U_CUT LCMD(KC_X)
    #define U_UND LCMD(KC_Z)
#endif

