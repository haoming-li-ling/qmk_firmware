#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_65_ansi_blocker(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_GRV, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP, OSM(MOD_LSFT), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, OSM(MOD_RSFT), KC_UP, KC_PGDN, MO(1), KC_LALT, KC_LGUI, KC_SPC, KC_HYPR, MO(2), KC_LEFT, KC_DOWN, KC_RGHT),
	[1] = LAYOUT_65_ansi_blocker(KC_TILD, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_HOME, KC_GRV, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, RESET, KC_PGUP, KC_CAPS, RGB_SPI, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, EEP_RST, KC_PGDN, CL_NORM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, NK_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_VOLD, KC_END),
	[2] = LAYOUT_65_ansi_blocker(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO)
};

enum combo_events {
  JK_ESC,
  QUOT,
  DQUOT,
  LRB,
  LRS,
  LRP,
  COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM jk_esc[] = {KC_J, KC_K, COMBO_END};

const uint16_t PROGMEM quot[] = {KC_SCLN, KC_BSLS, COMBO_END};

const uint16_t PROGMEM dquot[] = {KC_L, KC_SCLN, KC_BSLS, COMBO_END};

const uint16_t PROGMEM lrb[] = {KC_M, KC_COMM, COMBO_END};

const uint16_t PROGMEM lrs[] = {KC_P, KC_BSPC, COMBO_END};

const uint16_t PROGMEM lrp[] = {KC_C, KC_V, COMBO_END};

combo_t key_combos[] = {
  [JK_ESC] = COMBO_ACTION(jk_esc),
  [QUOT] = COMBO_ACTION(quot),
  [DQUOT] = COMBO_ACTION(dquot),
  [LRB] = COMBO_ACTION(lrb),
  [LRS] = COMBO_ACTION(lrs),
  [LRP] = COMBO_ACTION(lrp)

};

/* COMBO_ACTION(x) is same as COMBO(x, KC_NO) */

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case JK_ESC:
      if (pressed) {
        SEND_STRING(SS_TAP(X_ESC));
      }
      break;
    case QUOT:
      if (pressed) {
        SEND_STRING("'");
      }
      break;
    case DQUOT:
      if (pressed) {
        SEND_STRING("\"");
      }
      break;
    case LRB:
      if (pressed) {
        SEND_STRING("{}" SS_TAP(X_LEFT));
      }
      break;
    case LRS:
      if (pressed) {
        SEND_STRING("[]" SS_TAP(X_LEFT));
      }
      break;
    case LRP:
      if (pressed) {
        SEND_STRING("()" SS_TAP(X_LEFT));
      }
      break;
  }
}

