// Copyright 2023 XenGi
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

led_config_t g_led_config = {
    { // Key Matrix to LED Index
        { 17, 18, 19, 20, 21, 22 },
        { 16, 15, 14, 13, 12, 11 },
        {  5,  6,  7,  8,  9, 10 },
        {  4,  3,  2,  1,  0, NO_LED }
    }, { // LED Index to Physical Position
         // x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
         // y =  64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION
        { 224, 64 }, { 179, 64 }, { 134, 64 }, { 90, 64 }, { 45, 64 }, { 0, 64 }, { 0, 43 }, { 45, 43 }, { 90, 43 }, { 134, 43 }, { 179, 43 }, { 224, 43 }, { 224, 21 }, { 179, 21 }, { 134, 21 }, { 90, 21 }, { 45, 21 }, { 0, 21 }, { 0, 0 }, { 45, 0 }, { 90, 0 }, { 134, 0 }, { 179, 0 }
    }, { // LED Index to Flag
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4
    }
};

