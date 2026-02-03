/*
Copyright 2026 Aurelien Michaud

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

Keymap: macos_fr
Features:
- AZERTY layout for French typing
- Left column: macOS editing shortcuts (Cut/Copy/Paste/Undo/Move)
- Layer 1: F-keys and lowercase French accents
- Layer 2: Uppercase French accents and special symbols

*/

#include QMK_KEYBOARD_H

// Macro declarations
enum {
    EMPTY = SAFE_RANGE,
    LC_AGRV, // Lowercase à
    LC_ACIR, // Lowercase â
    LC_EAGU, // Lowercase é
    LC_EGRV, // Lowercase è
    LC_ECIR, // Lowercase ê
    LC_ETRA, // Lowercase ë
    LC_ICIR, // Lowercase î
    LC_ITRA, // Lowercase ï
    LC_OCIR, // Lowercase ô
    LC_UGRV, // Lowercase ù
    LC_UCIR, // Lowercase û
    LC_UTRA, // Lowercase ü
    LC_YTRA, // Lowercase ÿ
    UC_AGRV, // Uppercase à
    UC_EAGU, // Uppercase é
    UC_EGRV, // Uppercase è
};

// Macro functions
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode){
        case LC_AGRV: // Types a lowercase à
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code(KC_A);
                }
                break;

        case LC_ACIR: // Types a lowercase â
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_A);
                }
                break;

        case LC_EAGU: // Types a lowercase é
                if(record->event.pressed){
                    tap_code16(LOPT(KC_E));
                    tap_code(KC_E);
                }
                break;

        case LC_EGRV: // Types a lowercase è
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code(KC_E);
                }
                break;

        case LC_ECIR: // Types a lowercase ê
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_E);
                }
                break;

        case LC_ETRA: // Types a lowercase ë
                if(record->event.pressed){
                    tap_code16(LOPT(KC_U));
                    tap_code(KC_E);
                }
                break;

        case LC_ICIR: // Types a lowercase î
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_I);
                }
                break;

        case LC_ITRA: // Types a lowercase ï
                if(record->event.pressed){
                    tap_code16(LOPT(KC_U));
                    tap_code(KC_I);
                }
                break;

        case LC_OCIR: // Types a lowercase ô
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_O);
                }
                break;

        case LC_UGRV: // Types a lowercase ù
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code(KC_U);
                }
                break;

        case LC_UCIR: // Types a lowercase û
                if(record->event.pressed){
                    tap_code16(LOPT(KC_I));
                    tap_code(KC_U);
                }
                break;

        case LC_UTRA: // Types a lowercase ü
                if(record->event.pressed){
                    tap_code16(LOPT(KC_U));
                    tap_code(KC_U);
                }
                break;

        case LC_YTRA: // Types a lowercase ÿ
                if(record->event.pressed){
                    tap_code16(LOPT(KC_U));
                    tap_code(KC_Y);
                }
                break;

        case UC_AGRV: // Types an uppercase À
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code16(S(KC_A));
                }
                break;

        case UC_EAGU: // Types an uppercase É
                if(record->event.pressed){
                    tap_code16(LOPT(KC_E));
                    tap_code16(S(KC_E));
                }
                break;

        case UC_EGRV: // Types an uppercase È
                if(record->event.pressed){
                    tap_code16(LOPT(KC_GRV));
                    tap_code16(S(KC_E));
                }
                break;

            }
            return true;
    }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base
     * ┌───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐ ┌───┬───┬───┬───┐
     * │Cut│ │ ~ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Bkspace│Esc│ │   │ / │ * │ - │
     * ├───┤ ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤ ├───┼───┼───┼───┤
     * │Cpy│ │ Tab │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │LR1│ │ 7 │ 8 │ 9 │ + │
     * ├───┤ ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤ ├───┼───┼───┼───┤
     * │Pst│ │ Caps │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ' │ Enter  │LR2│ │ 4 │ 5 │ 6 │ = │
     * ├───┤ ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤ ├───┼───┼───┼───┤
     * │Und│ │ LShift │ W │ X │ C │ V │ B │ N │ , │ . │ ; │ / │RShift│ ↑ │Del│ │ 1 │ 2 │ 3 │ E │
     * ├───┤ ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤ ├───┼───┼───┤ N │
     * │Mve│ │LCtl│LOpt│LCmd│         Space          │RCd│ROp│Fqt│ ← │ ↓ │ → │ │ 0 │ . │ , │ T │
     * └───┘ └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘ └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        LCMD(KC_X),   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,     KC_EQL,  KC_BSPC, KC_ESC,       _______, KC_PSLS, KC_PAST, KC_PMNS,
        LCMD(KC_C),   KC_TAB,  KC_A,    KC_Z,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,     KC_RBRC, KC_BSLS, MO(1),        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        LCMD(KC_V),   KC_CAPS, KC_Q,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_M,    KC_QUOT,     KC_ENT,           MO(2),        KC_P4,   KC_P5,   KC_P6,   KC_PEQL,
        LCMD(KC_Z),   KC_LSFT, KC_W,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_COMM, KC_DOT,  KC_SCLN, KC_SLSH, KC_RSFT,              KC_UP,   KC_DEL,       KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        LAG(KC_V),    KC_LCTL, KC_LOPT, KC_LCMD,                   KC_SPC,                             KC_RCMD, KC_ROPT, LAG(KC_ESC), KC_LEFT, KC_DOWN, KC_RGHT,      KC_P0,   KC_PDOT, KC_PCMM
    ),

    /* F-keys, lowercase French accents and reset
     * ┌───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐ ┌───┬───┬───┬───┐
     * │RST│ │   │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│       │   │ │   │   │   │   │
     * ├───┤ ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤ ├───┼───┼───┼───┤
     * │   │ │     │ à │ â │ é │ è │   │ ÿ │ ù │ î │ ô │ œ │   │   │     │   │ │   │   │   │   │
     * ├───┤ ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤ ├───┼───┼───┼───┤
     * │   │ │      │ æ │   │ ê │ ë │   │   │ û │ ï │   │   │   │        │   │ │   │   │   │   │
     * ├───┤ ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤ ├───┼───┼───┼───┤
     * │   │ │        │   │   │ ç │   │   │   │ ü │   │   │   │      │   │   │ │   │   │   │   │
     * ├───┤ ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤ ├───┼───┼───┤   │
     * │   │ │    │    │    │                        │   │   │   │   │   │   │ │   │   │   │   │
     * └───┘ └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘ └───┴───┴───┴───┘
     */
    [1] = LAYOUT(
        QK_BOOT,      _______, KC_F1,          KC_F2,   KC_F3,      KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,     KC_F11,  KC_F12,  _______, _______,      _______, _______, _______, _______,
        _______,      _______, LC_AGRV,        LC_ACIR, LC_EAGU,    LC_EGRV, _______, LC_YTRA, LC_UGRV, LC_ICIR, LC_OCIR, LOPT(KC_Q), _______, _______, _______, _______,      _______, _______, _______, _______,
        _______,      _______, LOPT(KC_QUOTE), _______, LC_ECIR,    LC_ETRA, _______, _______, LC_UCIR, LC_ITRA, _______, _______,    _______, _______,          _______,      _______, _______, _______, _______,
        _______,      _______, _______,        _______, LOPT(KC_C), _______, _______, _______, LC_UTRA, _______, _______, _______,    _______,          _______, _______,      _______, _______, _______, _______,
        _______,      _______, _______,        _______,                      _______,                            _______, _______,    _______, _______, _______, _______,      _______, _______, _______
    ),

    /* Uppercase French accents and special symbols
     * ┌───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐ ┌───┬───┬───┬───┐
     * │   │ │   │   │   │   │ € │   │   │   │ ° │   │   │   │   │       │   │ │   │   │   │   │
     * ├───┤ ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤ ├───┼───┼───┼───┤
     * │   │ │     │ À │   │ É │ È │   │   │   │   │   │ Œ │ « │ » │     │   │ │   │   │   │   │
     * ├───┤ ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤ ├───┼───┼───┼───┤
     * │   │ │      │   │   │   │   │   │   │   │   │   │   │   │        │   │ │   │   │   │   │
     * ├───┤ ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤ ├───┼───┼───┼───┤
     * │   │ │        │   │   │ Ç │   │   │   │   │   │   │   │      │   │   │ │   │   │   │   │
     * ├───┤ ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤ ├───┼───┼───┤   │
     * │   │ │    │    │    │                        │   │   │   │   │   │   │ │   │   │   │   │
     * └───┘ └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘ └───┴───┴───┴───┘
     */
    [2] = LAYOUT(
        _______,      _______, _______, _______, _______,   LSA(KC_2), _______, _______, _______, LSA(KC_8), _______, _______,   _______,       _______,      _______, _______,      _______, _______, _______, _______,
        _______,      _______, UC_AGRV, _______, UC_EAGU,   UC_EGRV,   _______, _______, _______, _______,   _______, LSA(KC_Q), LOPT(KC_BSLS), LSA(KC_BSLS), _______, _______,      _______, _______, _______, _______,
        _______,      _______, _______, _______, _______,   _______,   _______, _______, _______, _______,   _______, _______,   _______,       _______,               _______,      _______, _______, _______, _______,
        _______,      _______, _______, _______, LSA(KC_C), _______,   _______, _______, _______, _______,   _______, _______,   _______,                     _______, _______,      _______, _______, _______, _______,
        _______,      _______, _______, _______,                       _______,                              _______, _______,   _______,       _______,      _______, _______,      _______, _______, _______
    ),
};
