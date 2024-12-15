#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * ┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐    ┌───┐
     * │Esc││F1 │F2 │F3 │F4 ││F5 │F6 │F7 │F8 ││F9 │F10│F11│F12│    │Mut│
     * └───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘    └───┘
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│Del│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │PgU│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ Enter  │PgD│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │Shift │ ↑ │End│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
     * │Ctrl│Opt │ 󰘳  │         Space          │ Fn │Code│ │ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴────┴────┘ └───┴───┴───┘
     *
     *
     * The FN key by default maps to a momentary toggle to layer 1.
     *
     * Dynamically engage DFU Bootloader:
     *     FN+backslash
     *
     * RGB Animation Next/Prev:
     *     FN+Up/Down
     *
     * RGB Animation Speed Up/Down (where applicable):
     *     FN+Left/Right
     *
     * RGB Base Hue Up/Down:
     *     FN+PgUp/PgDn
     */
    [0] = LAYOUT(
        KC_ESC,   KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,             KC_MUTE,
        KC_GRV,   KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_DEL,
        KC_TAB,   KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_PGUP,
        KC_CAPS,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,   KC_PGDN,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
        KC_LCTL,  KC_LOPT, KC_LCMD,                         KC_SPC,                  MO(1),   RM_TOGG,            KC_LEFT,  KC_DOWN,  KC_RGHT
    ),

    [1] = LAYOUT(
        _______, _______, _______, KC_MCTL, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT, RM_HUEU,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, RM_HUED,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, RM_NEXT, _______,
        _______, _______, _______,                            _______,                   _______, _______,          RM_SPDD, RM_PREV, RM_SPDU
    ),

};
// clang-format on

#if defined(ENCODER_MAP_ENABLE)

/* Rotary Encoder
 *
 * Layer 1:
 *     CCW/CW: Volume Up/Down
 * Layer 2:
 *     CCW/CW: Base RGB Brightness Up/Down
*/
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = { ENCODER_CCW_CW(RM_VALD, RM_VALU)},
};
#endif // ENCODER_MAP_ENABLE

#if defined(RGB_MATRIX_ENABLE)
#include "color.h"

#define INDICATOR 100 // The index of the LED between F12 and Rotary Encoder

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        if (INDICATOR >= led_min && INDICATOR < led_max) {
            // Indicator is in the current batch
            rgb_matrix_set_color(INDICATOR, RGB_RED);
        }
    }

    // Illuminate layer keys that are active
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index < led_max && index != NO_LED) {
                    if (keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                        rgb_matrix_set_color(index, RGB_GREEN);
                    } else {
                        rgb_matrix_set_color(index, RGB_BLACK);
                    }
                }
            }
        }
    }

    return false;
}
#endif // RGB_MATRIX_ENABLE
