#include QMK_KEYBOARD_H

enum layers { BASE, NAV, RSYMB, SYM, NUM, FUN };
enum custom_keycodes {
    EQ_ARR = SAFE_RANGE,
};


#if defined WIN_COPY
    #define PREVWRD   LCTL(KC_LEFT)
    #define NEXTWRD   LCTL(KC_RIGHT)

    #define PREVDSKP  LGUI(LCTL(KC_LEFT))
    #define NEXTDSKP  LGUI(LCTL(KC_RIGHT))

    #define U_RDO C(KC_Y)
    #define U_PST C(KC_V)
    #define U_CPY C(KC_C)
    #define U_CUT C(KC_X)
    #define U_UND C(KC_Z)
#else
    #define PREVWRD   LALT(KC_LEFT)
    #define NEXTWRD   LALT(KC_RIGHT)

    #define PREVDSKP  LCTL(KC_LEFT)
    #define NEXTDSKP  LCTL(KC_RIGHT)

    #define U_RDO SCMD(KC_Z)
    #define U_PST LCMD(KC_V)
    #define U_CPY LCMD(KC_C)
    #define U_CUT LCMD(KC_X)
    #define U_UND LCMD(KC_Z)
#endif


#define CTRLUP    LCTL(KC_UP)
#define CTRLDN    LCTL(KC_DOWN)

#define APP_A     LSG(KC_A)
#define APP_S     LSG(KC_S)
#define APP_D     LSG(KC_D)
#define APP_F     LSG(KC_F)
#define APP_G     LSG(KC_G)
#define APP_X     LSG(KC_X)
#define APP_C     LSG(KC_C)
#define APP_V     LSG(KC_V)
#define APP_B     LSG(KC_B)
