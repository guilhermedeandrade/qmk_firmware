#include "teatreus.h"

#define _QW 0
#define _RS 1
#define _LW 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 	/* qwerty layer (QW)
	 *  q      w      e      r      t        ||       y      u      i      o      p
	 *  a      s      d      f      g        ||       h      j      k      l      ;
	 *  z      x      c      v      b        ||       n      m      ,      .      /
	 * esc    tab   super  shift  bksp  ctrl || alt  space   RS     LW     '     ret
	 */

	[_QW] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LCTL, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, 
		KC_ESC, KC_TAB, KC_LGUI, KC_LSFT, KC_BSPC, KC_LALT, KC_SPC, MO(_RS), MO(_LW), KC_QUOT, KC_ENT),

	/* raised layer (RS)
	 *  !       @     {      }      |        ||       -      7      8      9      *
	 *  #       $     (      )      `        ||       .      4      5      6      +
	 *  %       ^     [      ]      ~        ||       &      1      2      3      \
	 * menu    caps   <      >     del       ||       _                    0      =
	 */

	[_RS] = LAYOUT(
		KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_MINS, KC_7, KC_8, KC_9, KC_ASTR, 
		KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_DOT, KC_4, KC_5, KC_6, KC_PLUS, 
		KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, KC_AMPR, KC_1, KC_2, KC_3, KC_BSLS, 
		KC_MENU, KC_CAPS, KC_LABK, KC_RABK, KC_DEL, KC_TRNS, KC_UNDS, KC_TRNS, KC_TRNS, KC_0, KC_EQL),

 	/* lower layer (LW)
	 * insert  home   up    end    pgup      ||      vol+    F7     F8     F9    F10
	 *  del    left  down  right   pgdn      ||      vol-    F4     F5     F6    F11
	 *                                       ||      mute    F1     F2     F3    F12
	 *                                       ||                                  reset
	 */

	[_LW] = LAYOUT(
		KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_VOLU, KC_F7, KC_F8, KC_F9, KC_F10, 
		KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_VOLD, KC_F4, KC_F5, KC_F6, KC_F11, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_F1, KC_F2, KC_F3, KC_F12, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET)

};
