#ifndef OBJECT_H
#define OBJECT_H

#include "Types.h"

#define OFLAG_ACTIVE (1 << 0)

class Object {
public:
  UBYTE type, flags;
  COORD x, y, z;    // coordinates
  COORD vx, vy, vz; // velocity in x,y,z
  const UBYTE *lines;

public:
  void move();
  void draw();
};

#endif
