#pragma once

#include <raylib.h>

class Entity {
protected:
  Vector2 position;

public:
  Entity(Vector2 position);
  virtual void update() = 0;
  virtual void draw() = 0;
};
