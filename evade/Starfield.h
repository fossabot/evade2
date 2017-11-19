#ifndef STARFIELD_H
#define STARFIELD_H

#include "Game.h"

class Starfield {
  COORD starX[NUM_STARS], starY[NUM_STARS], starZ[NUM_STARS];

public:
  void init();
  void render();
};

extern Starfield starfield;

#endif