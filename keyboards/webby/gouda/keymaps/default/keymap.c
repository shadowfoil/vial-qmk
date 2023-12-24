/* Copyright 2023 webby
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

/*
b
a21
*/

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "gouda.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
                           KC_1,      KC_2,    KC_3,         
                           KC_DEL,  KC_END, KC_PGDN,         
          KC_4, KC_ENTER,                            KC_KP_4,   KC_KP_5,
          KC_5,  KC_RSFT,            KC_UP,          KC_KP_1,   KC_KP_2,
          KC_6,  KC_RCTL, KC_LEFT, KC_DOWN,KC_RIGHT, KC_KP_0, KC_KP_DOT,
    )

    [1] = LAYOUT(
                             KC_1,    KC_2,    KC_3,         
                             KC_1,    KC_2,    KC_3,         
          KC_4,   KC_TAB,                               KC_R,    KC_T,
          KC_5,  KC_CAPS,             KC_W,             KC_F,    KC_G, 
          KC_6,  KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_C,    KC_V,
    )
};