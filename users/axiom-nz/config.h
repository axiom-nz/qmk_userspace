#pragma once

// Select hand configuration
#define MASTER_LEFT

// Tapping Terms
#undef TAPPING_TERM
#define TAPPING_TERM 250

#undef QUICK_TAP_TERM
#define QUICK_TAP_TERM 0

#undef RETRO_TAPPING
#undef PERMISSIVE_HOLD
#undef HOLD_ON_OTHER_KEY_PRESS

#define CHORDAL_HOLD

// Caps Word
#define CAPS_WORD_INVERT_ON_SHIFT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4
