#pragma once

/* Select hand configuration */
#define MASTER_LEFT

/* Tapping Terms */
#undef TAPPING_TERM
#define TAPPING_TERM 185

#undef RETRO_TAPPING
#undef PERMISSIVE_HOLD

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4
