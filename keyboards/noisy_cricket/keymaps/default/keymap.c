// Copyright 2023 XenGi
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"

#define LAYOUT_NC( \
    k00, k01, k02, k03, k04, k05, k06, \
    k10, k11, k12, k13, k14, k15,      \
    k20, k21, k22, k23, k24,           \
    k30, k31, k32, k33, k34, k35       \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k06 }, \
    { k20, k21, k22, k23, k24, k15 }, \
    { k30, k31, k32, k33, k34, k35 } \
}

#ifndef MAGIC_ENABLE
uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}
#endif

#ifndef MAGIC_ENABLE
uint8_t mod_config(uint8_t mod) {
    return mod;
}
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ╔═══╤═══╤═══╤═══╤═══╤═══╤═══╗
     * ║Esc│ 1 │ 2 │ 3 │ 4 │ 5 │Prt║
     * ╟───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───╢
     * ║ Tab │ Q │ W │ E │ R │Enter║
     * ╟─────┴┬──┴┬──┴┬──┴┬──┴┐    ║
     * ║Shift │ A │ S │ D │ F │    ║
     * ╟───┬──┴┬──┴┬──┴┬──┴───┴┬───╢
     * ║Ctl│Fn │ C │ V │ Space │Mut║
     * ╚═══╧═══╧═══╧═══╧═══════╧═══╝
     * default layer
     */
    [0] = LAYOUT_NC(
        KC_ESC,  KC_1,  KC_2, KC_3, KC_4,   KC_5,   KC_PSCR,
        KC_TAB,  KC_Q,  KC_W, KC_E, KC_R,   KC_ENT,
        KC_LSFT, KC_A,  KC_S, KC_D, KC_F,
        KC_LCTL, MO(1), KC_C, KC_V, KC_SPC, KC_MUTE
    ),
    /*
     * ╔═══╤═══╤═══╤═══╤═══╤═══╤═══╗
     * ║   │ 6 │ 7 │ 8 │ 9 │ 0 │Ply║
     * ╟───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───╢
     * ║     │Hu+│Sa+│Br+│Sp+│OnOff║
     * ╟─────┴┬──┴┬──┴┬──┴┬──┴┐    ║
     * ║      │Hu-│Sa-│Br-│Sp-│    ║
     * ╟───┬──┴┬──┴┬──┴┬──┴───┴┬───╢
     * ║   │▒▒▒│MdR│Mod│       │   ║
     * ╚═══╧═══╧═══╧═══╧═══════╧═══╝
     * function layer
     */
    [1] = LAYOUT_NC(
        _______, KC_6,    KC_7,     KC_8,    KC_9,    KC_0,    KC_MPLY,
        _______, RGB_HUI, RGB_SAI,  RGB_VAI, RGB_SPI, RGB_TOG,
        _______, RGB_HUD, RGB_SAD,  RGB_VAD, RGB_SPD,
        _______, _______, RGB_RMOD, RGB_MOD, _______, _______
    )
};

