#include "Game.h"

void Controls::run() {
  arduboy.pollButtons();
  BYTE keys = 0;
  if (arduboy.pressed(UP_BUTTON)) {
    keys |= JOYSTICK_UP;
  }
  if (arduboy.pressed(DOWN_BUTTON)) {
    keys |= JOYSTICK_DOWN;
  }
  if (arduboy.pressed(LEFT_BUTTON)) {
    keys |= JOYSTICK_LEFT;
  }
  if (arduboy.pressed(RIGHT_BUTTON)) {
    keys |= JOYSTICK_RIGHT;
  }
  if (arduboy.pressed(A_BUTTON)) {
    keys |= BUTTON_A;
  }
  if (arduboy.pressed(B_BUTTON)) {
    keys |= BUTTON_B;
  }
  dkeys = keys ^ ckeys & keys;
  ckeys = keys;
  rkeys = keys;
}

BOOL Controls::debounced(UBYTE key) {
  BOOL v = dkeys & key;
  dkeys &= ~key;
  return v;
}
