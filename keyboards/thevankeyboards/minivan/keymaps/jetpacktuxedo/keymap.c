#include QMK_KEYBOARD_H

enum {
    TD_COL = 0,
    //BE_TD_CTL, //not used; kept here for formatting reminder
    //BE_TD_ALT,  //not used; kept here for formatting reminder
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for apostrophe, twice for semicolon
  //Shift hopefully keeps shift properties for the actions (" and :)
  [TD_COL]  = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_SCLN)
// Other declarations would go here, separated by commas, if you have them
};

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_arrow_command( /* Qwerty */
    KC_TAB,       KC_Q,    KC_W,    KC_E,  KC_R, KC_T,    KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
    LT(2,KC_BSPC), KC_A,    KC_S,    KC_D,  KC_F, KC_G,    KC_H,   KC_J,  KC_K,    KC_L,    TD(TD_COL), LT(2, KC_ENT),
    KC_LSPO,       KC_Z,    KC_X,    KC_C,  KC_V, KC_B,    KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH,   MT(MOD_RSFT,KC_UP),
    KC_LCTL, TT(4),       KC_LGUI, KC_LALT, LT(1, KC_SPC), LT(1, KC_SPC), KC_RGUI, MT(MOD_RALT,KC_LEFT), LT(3,KC_DOWN), MT(MOD_RCTL,KC_RIGHT)
  ),
  [1] = LAYOUT_arrow_command( /* hold spacebar LAYER 1 for arrows and home/end/etc */
    KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_CAPS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END, KC_TRNS, KC_DEL,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_UP, KC_END,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  [2] = LAYOUT_arrow_command( /* hold left backspace and enter LAYER 2 for classic numbers at top plus symbols 1 below*/
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
    KC_TRNS, KC_EXLM, KC_AT,  KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,  KC_RPRN, KC_DEL,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT_arrow_command( /* hold right fn LAYER 3 function keys */
    KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [4] = LAYOUT_arrow_command( /* hold left fn LAYER 4 for right hand numberpad */
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_DEL,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_PENT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_NO,          KC_P0, KC_PDOT, KC_PENT, KC_TRNS
  ),

  [5] = LAYOUT_arrow_command( /* not in use yet; RESET Layer*/
    RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [6] = LAYOUT_arrow_command( /* not in use yet; mouse control layer*/
    KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_TRNS,
    KC_TAB,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(5, KC_SLSH),
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_SPACE, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [7] = LAYOUT_arrow_command( /* LAYER 7 template with all transparent keys (TRNS) */
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_HOME, KC_TRNS, KC_TRNS
  ),
};
/*  commenting out to just enable light per layer
void keyboard_post_init_user(void) {
  #ifdef RGBLIGHT_ENABLE
    // Set up RGB effects on _only_ the third LED (index 2)
    rgblight_set_effect_range(2, 1);
    // Set LED effects to breathing mode in a tealish blue color
    rgblight_sethsv_noeeprom(18, 25, 25);
    rgblight_mode_noeeprom(RGBLIGHT_EFFECT_BREATHING + 2);

    // Init the first two LEDs to a static color
    setrgb(0, 0, 0, (LED_TYPE *)&led[0]);
    setrgb(0, 0, 0, (LED_TYPE *)&led[1]);
    rgblight_set();
  #endif //RGBLIGHT_ENABLE
}
*/
uint32_t layer_state_set_user(uint32_t state){
  #ifdef RGBLIGHT_ENABLE
    uint8_t led0r = 0; uint8_t led0g = 0; uint8_t led0b = 0;
    uint8_t led1r = 0; uint8_t led1g = 0; uint8_t led1b = 0;
    uint8_t led2r = 0; uint8_t led2g = 0; uint8_t led2b = 0;

    if (layer_state_cmp(state, 0)) {
      led0r = 26;
    }
    if (layer_state_cmp(state, 1)) {
      led1b = 26;
    }
    if (layer_state_cmp(state, 2)) {
      led2g = 26;
    }

    if (layer_state_cmp(state, 3)) {
      led1b = 26;
      led0r = 26;
    }
    if (layer_state_cmp(state, 4)) {
      led1r = 26;
      led2g = 26;
    }

    setrgb(led0r, led0g, led0b, (LED_TYPE *)&led[0]);
    setrgb(led1r, led1g, led1b, (LED_TYPE *)&led[1]);
    setrgb(led2r, led2g, led2b, (LED_TYPE *)&led[2]);
    rgblight_set();
  #endif //RGBLIGHT_ENABLE
  return state;
}
