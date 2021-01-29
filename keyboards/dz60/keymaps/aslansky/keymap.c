#include QMK_KEYBOARD_H

enum unicode_names {
  UUML,
  UUUML,
  AUML,
  AUUML,
  OUML,
  OUUML,
  SZET,
  EURO,
  GRAD
};

const uint32_t PROGMEM unicode_map[] = {
  [UUML]  = 0x00FC,   // ü
  [UUUML]  = 0x00DC,   // Ü
  [AUML]  = 0x00E4,   // ä
  [AUUML]  = 0x00C4,   // Ä
  [OUML]  = 0x00F6,  // ö
  [OUUML]  = 0x00D6,  // Ö
  [SZET]  = 0x00DF,  // ß
  [EURO]  = 0x20AC,  // €
  [GRAD]  = 0x00B0,  // °
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_60_ansi_arrows_splitbs(
  KC_ESC,       KC_1,              KC_2,        KC_3,       KC_4,      KC_5,        KC_6,       KC_7,            KC_8,      KC_9,            KC_0,          KC_MINS,        KC_EQL,         KC_BSLS,        KC_GRV,     \
  KC_TAB,       KC_Q,              KC_W,        KC_E,       KC_R,      KC_T,        KC_Y,       KC_U,            KC_I,      KC_O,            KC_P,          KC_LBRC,        KC_RBRC,                        KC_BSPC,    \
  KC_CAPS,      KC_A,              KC_S,        KC_D,       KC_F,      KC_G,        KC_H,       KC_J,            KC_K,      KC_L,            KC_SCLN,       KC_QUOT,                        KC_ENT,                     \
  KC_LSFT,                         KC_Z,        KC_X,       KC_C,      KC_V,        KC_B,       KC_N,            KC_M,      KC_COMM,         KC_DOT,        KC_SLSH,        KC_RSFT,        KC_UP,          MO(1),      \
  KC_LCTL,      KC_LALT,           KC_LGUI,                            KC_SPC,                                                               KC_RGUI,       KC_RALT,        KC_LEFT,        KC_DOWN,        KC_RIGHT),

[1] = LAYOUT_60_ansi_arrows_splitbs(
   KC_SLEP,     KC_F1,            KC_F2,        KC_F3,      KC_F4,     KC_F5,       KC_F6,      KC_F7,           KC_F8,     KC_F9,           KC_F10,        KC_F11,         KC_F12,         UC_MOD,         UC_RMOD,    \
   KC_NO,       KC_NO,            KC_NO,        X(EURO),    KC_NO,     KC_NO,       KC_NO,      XP(UUML, UUUML), KC_NO,     XP(OUML, OUUML), SGUI(KC_5),    KC_NO,          KC_NO,                          KC_DEL,     \
   KC_NO,       XP(AUML, AUUML),  X(SZET),      KC_NO,      LSA(KC_F), X(GRAD),     KC_NO,      KC_NO,           KC_NO,     KC_NO,           KC_NO,         KC_NO,                          KC_NO,                      \
   KC_TRNS,                       KC_NO,        KC_NO,      KC_NO,     KC_NO,       KC_NO,      KC_NO,           KC_MUTE,   KC_VOLD,         KC_VOLU,       KC_NO,          KC_TRNS,        KC_PGUP,        KC_TRNS,    \
   KC_TRNS,     KC_TRNS,          KC_TRNS,                             KC_TRNS,                                                              KC_TRNS,       KC_TRNS,        KC_HOME,        KC_PGDN,        KC_END),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

void led_set_user(uint8_t usb_led) {
}
