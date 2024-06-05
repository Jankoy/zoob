#pragma once

#include <raylib.h>

struct Tile {
  Vector2 position;
  Vector2 size;
  Color color;
  bool is_solid;

  void update();
  void draw();
};
