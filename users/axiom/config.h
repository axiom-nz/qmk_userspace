#pragma once

// Select hand configuration
#define MASTER_LEFT

// Tapping Terms
#undef TAPPING_TERM
#define TAPPING_TERM 250

// Chordal Hold - Formerly Accordian
#define CHORDAL_HOLD
#define PERMISSIVE_HOLD

// Disable key repeat for now to diagnose HRM issues
#undef QUICK_TAP_TERM
#define QUICK_TAP_TERM 0

#undef RETRO_TAPPING
#undef HOLD_ON_OTHER_KEY_PRESS

// Caps Word
#define CAPS_WORD_INVERT_ON_SHIFT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4
