#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */
#define MASTER_LEFT

/* Tapping Terms */
#undef TAPPING_TERM
#define TAPPING_TERM 185

#undef RETRO_TAPPING
#undef PERMISSIVE_HOLD


// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4
