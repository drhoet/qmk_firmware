/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LNPAD, RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD,MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_ansi_82(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,            RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            KC_END,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     TG(WIN_FN),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_ansi_82(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_INS ,  KC_HOME,  KC_UP  ,  KC_END ,  KC_PGUP,  _______,  _______,  KC_PSCR,            _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_DEL ,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PGDN,  _______,            _______,            KC_END,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______)
};

// clang-format on
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif // ENCODER_MAP_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}

// Key Matrix to LED Index
// { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, __, __ },
// { 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, __, 28 },
// { 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, __, 43 },
// { 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, __, 56, __, 57 },
// { 58, __, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, __, 70, __ },
// { 71, 72, 73, __, __, __, 74, __, __, __, 75, 76, 77, 78, 79, 80 }
// },

bool caps_word_mode;
void caps_word_set_user(bool active) {
    caps_word_mode = active;
}

bool bat_level_animiation_actived(void); // defined in wireless/bat_level_animation.c
bool indicator_is_running(void); // defined in wireless/indicator.c
void set_color_all_if_not_keychron_animation_active(uint8_t red, uint8_t green, uint8_t blue) {
    // don't wipe all leds if the bat-level animation is running or if an indicator led is on
    if(!bat_level_animiation_actived() && !indicator_is_running()) {
        rgb_matrix_set_color_all(red, green, blue);
    }
}

bool rgb_matrix_indicators_user(void) {
    uint8_t v = rgb_matrix_get_val();
    switch (get_highest_layer(layer_state|default_layer_state)) {
        case MAC_BASE: {
            HSV hsv = {0, 255, v}; // red
            RGB rgb = hsv_to_rgb(hsv);
            set_color_all_if_not_keychron_animation_active(rgb.r, rgb.g, rgb.b);
            break;
        }
        case MAC_FN: {
            HSV hsv = {0, 255, v}; // red
            RGB rgb = hsv_to_rgb(hsv);
            set_color_all_if_not_keychron_animation_active(rgb.r, rgb.g, rgb.b); // red
            break;
        }
        case WIN_BASE: {
            set_color_all_if_not_keychron_animation_active(0, 0, 0);
            break;
        }
        case WIN_FN: {
            set_color_all_if_not_keychron_animation_active(0, 0, 0);
            HSV hsv_green = {85, 255, v}; // green
            RGB rgb_green = hsv_to_rgb(hsv_green);
            for(int i = 0; i <= 13; ++i) {
                rgb_matrix_set_color(i, rgb_green.r, rgb_green.g, rgb_green.b); // top row
            }

            HSV hsv_red = {0, 255, v}; // red
            RGB rgb_red = hsv_to_rgb(hsv_red);
            rgb_matrix_set_color(37, rgb_red.r, rgb_red.g, rgb_red.b); // i
            rgb_matrix_set_color(51, rgb_red.r, rgb_red.g, rgb_red.b); // j
            rgb_matrix_set_color(52, rgb_red.r, rgb_red.g, rgb_red.b); // k
            rgb_matrix_set_color(53, rgb_red.r, rgb_red.g, rgb_red.b); // l
            
            HSV hsv_yellow = {43, 255, v}; // yellow
            RGB rgb_yellow = hsv_to_rgb(hsv_yellow);
            rgb_matrix_set_color(42, rgb_yellow.r, rgb_yellow.g, rgb_yellow.b); // \ key
            break;
        }
    }
    if (caps_word_mode) {
        HSV hsv_yellow = {43, 255, v}; // yello
        RGB rgb_yellow = hsv_to_rgb(hsv_yellow);

        rgb_matrix_set_color(58, rgb_yellow.r, rgb_yellow.g, rgb_yellow.b);
        rgb_matrix_set_color(69, rgb_yellow.r, rgb_yellow.g, rgb_yellow.b);
    } else {
        rgb_matrix_set_color(58, 0, 0, 0);
        rgb_matrix_set_color(69, 0, 0, 0);
    }
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // this method implements a small power optimisation: just turn the LED matrix off when we have nothing on
    switch (get_highest_layer(state)) {
        case MAC_BASE:
            rgb_matrix_enable_noeeprom();
            break;
        case MAC_FN:
            rgb_matrix_enable_noeeprom();
            break;
        case WIN_BASE:
            rgb_matrix_disable_noeeprom();
            break;
        case WIN_FN:
            rgb_matrix_enable_noeeprom();
            break;
    }

    return state;
}

