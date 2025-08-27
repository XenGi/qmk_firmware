// Copyright 2023 XenGi
// SPDX-License-Identifier: GPL-2.0-or-later

// optimize firmware
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define LAYER_STATE_8BIT

// disable features to save on code size
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

// RGB configuration
#define RGBLIGHT_LED_COUNT 23

// encoder config
#define ENCODER_MAP_KEY_DELAY 10

