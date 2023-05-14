// Copyright 2022 dreipunkteinsvier (@dreipunkteinsvier)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_TIMEOUT 300000
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_TRIGGER_ON_KEYDOWN

// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_HUE_BREATHING
#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN

#endif
