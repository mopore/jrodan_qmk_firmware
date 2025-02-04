/* Copyright 2018 Yiancar
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


enum custom_keycodes {
    CAPS_MO = SAFE_RANGE
};


enum unicode_names {
    uUML,  // ü
    UUML,  // Ü
    oUML,  // ö
    OUML,  // Ö
    aUML,  // ä
    AUML,  // Ä
    sSML,  // ß
    eACU,  // é
    eCIR,  // ê
    eGRV,  // è
    EUML,  // ë
    SNEK   // 🐍
};

const uint32_t PROGMEM unicode_map[] = {
    [uUML]  = 0x00FC,  // ü
    [UUML]  = 0x00DC,  // Ü
    [oUML]  = 0x00F6,  // ö
    [OUML]  = 0x00D6,  // Ö
    [aUML]  = 0x00E4,  // ä
    [AUML]  = 0x00C4,  // Ä
    [sSML]  = 0x00DF,  // ß
    [eACU]  = 0x00E9,  // é
    [eCIR]  = 0x00EA,  // ê
    [eGRV]  = 0x00E8,  // è
    [EUML]  = 0x00EB,  // ë
    [SNEK]  = 0x1F40D  // 🐍 (Snake emoji)
};


//This is the ANSI version of the PCB

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_60_ansi( /* Base */
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSLS,\
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSPC,\
    CAPS_MO,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT, \
    KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,           KC_RSFT,\
    KC_LCTL,  KC_LALT,  KC_LGUI,                                KC_SPC,                                 KC_APP,   MO(2),    MO(1),   MO(3)),

[1] = LAYOUT_60_ansi( /* Layer 1 w/ "CAPSLOCK" */
    KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   BR_DEC,   BR_INC,   KC_DEL ,\
    KC_TRNS,  RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_SAI,  RGB_VAI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_HOME,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  EF_INC,   H1_INC,   S1_INC,   H2_INC,   S2_INC,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_PGDN,  KC_END,             KC_TRNS,\
    KC_TRNS,            EF_DEC,   H1_DEC,   S1_DEC,   H2_DEC,   S2_DEC,   KC_TRNS,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,            KC_TRNS,\
    KC_VOLU,  KC_VOLD,  KC_MUTE,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[2] = LAYOUT_60_ansi( /* Layer 2 w/ right ALT */
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_TRNS,  X(eACU),  X(eCIR),  X(eGRV),  KC_TRNS,  KC_TRNS,  X(uUML),  KC_TRNS,  X(oUML),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  X(aUML),  X(sSML),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
    KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[3] = LAYOUT_60_ansi( /* Layer 3 w/ right CTRL */
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  X(EUML),  KC_TRNS,  KC_TRNS,  KC_TRNS,  X(UUML),  KC_TRNS,  X(OUML),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  X(AUML),  X(SNEK),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
    KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
  //user matrix
}

bool layer_used = false;


/**
 * @brief Custom key event processing w/ mod switch/Escape on CAPSLOCK
 *
 * @param keycode The key code
 * @param record The key record
 * @return true if the key event was processed, false otherwise
 */
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CAPS_MO:
            if (record->event.pressed) {
                layer_used = false;
                layer_on(1);
            } else {
                layer_off(1);
                if (!layer_used) {
                    tap_code(KC_ESC);
                }
            }
            return false;
        default:
            if (IS_LAYER_ON(1) && record->event.pressed) {
                layer_used = true;
            }
            break;
    }
    return true;
}

void eeconfig_init_user(void) {
    set_unicode_input_mode(UC_MAC);
}

