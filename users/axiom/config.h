#pragma once

// Select hand configuration
#define MASTER_LEFT

// Tapping Terms
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Chordal Hold - Formerly Accordian
#define CHORDAL_HOLD
#define PERMISSIVE_HOLD

// Leaving this on leads to frequent no-ops
// todo: evaluate this setting per key.
// "PERMISSIVE_HOLD for fingers and space, and HOLD_ON_OTHER_KEY_PRESS for other thumb keys"
#undef HOLD_ON_OTHER_KEY_PRESS

#undef QUICK_TAP_TERM
#define QUICK_TAP_TERM 75

#undef RETRO_TAPPING

// Caps Word
#define CAPS_WORD_INVERT_ON_SHIFT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4
