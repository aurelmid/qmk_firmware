/*
Copyright 2020-2026 Aurelien Michaud

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// Keymap: macos_fr

#include QMK_KEYBOARD_H

// Macro declarations
enum {
    EMPTY = SAFE_RANGE,
    LC_AGRV, // Lowercase à
    LC_ACIR, // Lowercase â
    LC_ALIG, // Lowercase æ
    LC_CDIL, // Lowercase ç
    LC_EAGU, // Lowercase é
    LC_EGRV, // Lowercase è
    LC_ECIR, // Lowercase ê
    LC_ETRA, // Lowercase ë
    LC_ICIR, // Lowercase î
    LC_ITRA, // Lowercase ï
    LC_OCIR, // Lowercase ô
    LC_OLIG, // Lowercase œ
    LC_UGRV, // Lowercase ù
    LC_UCIR, // Lowercase û
    LC_UTRA, // Lowercase ü
    LC_YTRA, // Lowercase ÿ
    UC_AGRV, // Uppercase à
    UC_CDIL, // Uppercase ç
    UC_EAGU, // Uppercase é
    UC_EGRV, // Uppercase è
    UC_OLIG, // Uppercase œ
    SL_EURO, // Euro symbol €
    SL_DEGR, // Degree symbol °
    SL_LGIM, // French left guillemets
    SL_RGIM  // French right guillemets
};

// Macro functions
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode){
        case LC_AGRV: // Types a lowercase à
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code(KC_A);
                } else {

                }
                break;

        case LC_ACIR: // Types a lowercase â
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_A);
                } else {

                }
                break;

        case LC_ALIG: // Types a lowercase æ
                if(record->event.pressed){
                    tap_code16(LOPT(KC_QUOTE));
                } else {

                }
                break;

        case LC_CDIL: // Types a lowercase ç
                if(record->event.pressed){
                    tap_code16(LOPT(KC_C));
                } else {

                }
                break;

        case LC_EAGU: // Types a lowercase é
                if(record->event.pressed){
                    tap_code16(LOPT(KC_E));
                    tap_code(KC_E);
                } else {

                }
                break;

        case LC_EGRV: // Types a lowercase è
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code(KC_E);
                } else {

                }
                break;

        case LC_ECIR: // Types a lowercase ê
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_E);
                } else {

                }
                break;

        case LC_ETRA: // Types a lowercase ë
                if(record->event.pressed){
                    tap_code16(LOPT(KC_U));
                    tap_code(KC_E);
                } else {

                }
                break;

        case LC_ICIR: // Types a lowercase î
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_I);
                } else {

                }
                break;

        case LC_ITRA: // Types a lowercase ï
                if(record->event.pressed){
                    tap_code16(LOPT(KC_U));
                    tap_code(KC_I);
                } else {

                }
                break;

        case LC_OCIR: // Types a lowercase ô
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_O);
                } else {

                }
                break;

        case LC_OLIG: // Types a lowercase œ
                if(record->event.pressed){
                    tap_code16(LOPT(KC_Q));
                } else {

                }
                break;

        case LC_UGRV: // Types a lowercase ù
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code(KC_U);
                } else {

                }
                break;

        case LC_UCIR: // Types a lowercase û
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_U);
                } else {

                }
                break;

        case LC_UTRA: // Types a lowercase ü
                if(record->event.pressed){
                    tap_code16(LOPT(KC_U));
                    tap_code(KC_U);
                } else {

                }
                break;

        case LC_YTRA: // Types a lowercase ÿ
                if(record->event.pressed){
                    tap_code16(LOPT(KC_U));
                    tap_code(KC_Y);
                } else {

                }
                break;

        case UC_AGRV: // Types an uppercase À
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code16(LSFT(KC_A));
                } else {

                }
                break;

        case UC_CDIL: // Types an uppercase Ç
                if(record->event.pressed){
                    tap_code16(LOPT(LSFT(KC_C)));
                } else {

                }
                break;

        case UC_EAGU: // Types an uppercase É
                if(record->event.pressed){
                    tap_code16(LOPT(KC_E));
                    tap_code16(LSFT(KC_E));
                } else {

                }
                break;

        case UC_EGRV: // Types an uppercase È
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code16(LSFT(KC_E));
                } else {

                }
                break;

        case UC_OLIG: // Types an uppercase Œ
                if(record->event.pressed){
                    tap_code16(LOPT(LSFT(KC_Q)));
                } else {

                }
                break;

        case SL_EURO: // Types the Euro symbol €
                if(record->event.pressed){
                    tap_code16(LOPT(LSFT(KC_2)));
                } else {

                }
                break;

        case SL_DEGR: // Types the degree symbol
                if(record->event.pressed){
                    tap_code16(LOPT(LSFT(KC_8)));
                } else {

                }
                break;

        case SL_LGIM: // Types the left guillemets
                if(record->event.pressed){
                    tap_code16(LOPT(KC_BSLS));
                } else {

                }
                break;

        case SL_RGIM: // Types the right guillemets
                if(record->event.pressed){
                    tap_code16(LOPT(LSFT(KC_BSLS)));
                } else {

                }
                break;

            }
            return true;
    };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
     * │ ~ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Bspace │Esc│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │ Tab │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │LR1│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │ Caps │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ' │ Enter  │LR2│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │ LShift │ W │ X │ C │ V │ B │ N │ , │ . │ ; │ / │RShift│ ↑ │Del│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┴┬──┴──┬───┼───┼───┤
     * │LCtl│LOpt│LCmd│         Space          │RCmd │ROpt │ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴─────┴─────┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,    KC_BSPC,    KC_ESC,
        KC_TAB,    KC_A,    KC_Z,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,    KC_RBRC,   KC_BSLS,    MO(1),
        KC_CAPS,   KC_Q,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_M,    KC_QUOTE,   KC_ENT,                MO(2),
        KC_LSFT,   KC_W,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_COMM, KC_DOT,  KC_SCLN, KC_SLSH, KC_RSFT,               KC_UP,      KC_DEL,
        KC_LCTL,   KC_LOPT, KC_LCMD,                   KC_SPC,                             KC_RCMD, KC_ROPT, KC_LEFT,               KC_DOWN,    KC_RGHT
    ),

    /* FN keys, lowercase accents and reset
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
     * │   │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│       │   │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │     │ à │ â │ é │ è │   │ ÿ │ ù │ î │ ô │ œ │   │   │     │   │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │      │ æ │   │ ê │ ë │   │   │ û │ ï │   │   │   │        │   │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │        │   │   │ ç │   │   │   │ ü │   │   │   │      │   │   │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┴┬──┴──┬───┼───┼───┤
     * │RST │    │    │                        │     │     │   │   │   │
     * └────┴────┴────┴────────────────────────┴─────┴─────┴───┴───┴───┘
     */
    [1] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
        _______, LC_AGRV, LC_ACIR, LC_EAGU, LC_EGRV, _______, LC_YTRA, LC_UGRV, LC_ICIR, LC_OCIR, LC_OLIG, _______, _______, _______, _______,
        _______, LC_ALIG, _______, LC_ECIR, LC_ETRA, _______, _______, LC_UCIR, LC_ITRA, _______, _______, _______, _______,          _______,
        _______, _______, _______, LC_CDIL, _______, _______, _______, LC_UTRA, _______, _______, _______, _______,          _______, _______,
        QK_BOOT, _______, _______,                   _______,                            _______, _______, _______,          _______, _______
    ),

    /* Uppercase accents and symbols
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
     * │   │   │   │   │ € │   │   │   │ ° │   │   │   │   │       │   │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │     │ À │   │ É │ È │   │   │   │   │   │ Œ │ « │ » │     │   │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │      │   │   │   │   │   │   │   │   │   │   │   │        │   │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │        │   │   │ Ç │   │   │   │   │   │   │   │      │   │   │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┴┬──┴──┬───┼───┼───┤
     * │    │    │    │                        │     │     │   │   │   │
     * └────┴────┴────┴────────────────────────┴─────┴─────┴───┴───┴───┘
     */
    [2] = LAYOUT(
        _______, _______, _______, _______, SL_EURO, _______, _______, _______, SL_DEGR, _______, _______, _______, _______, _______, _______,
        _______, UC_AGRV, _______, UC_EAGU, UC_EGRV, _______, _______, _______, _______, _______, UC_OLIG, SL_LGIM, SL_RGIM, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, UC_CDIL, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                   _______,                            _______, _______, _______,          _______, _______
    ),
};
