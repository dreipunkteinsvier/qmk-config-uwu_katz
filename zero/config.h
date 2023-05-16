// Copyright 2023 dreipunkteinsvier (@dreipunkteinsvier)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_LED_COUNT RGBLED_NUM
    #define WS2812_DI_PIN GP2
#endif

#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
#define AUDIO_PIN GP3
#ifdef AUDIO_ENABLE
    #define AUDIO_INIT_DELAY
    #define AUDIO_CLICKY
    #define AUDIO_CLICKY_FREQ_RANDOMNESS 1.0f
    #define STARTUP_SONG SONG(STARTUP_SOUND)
#endif

#define STARTUP_SOUND E__NOTE(_E6), E__NOTE(_A6), ED_NOTE(_E7),
