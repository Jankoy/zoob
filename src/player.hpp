#pragma once

#include "entity.hpp"

class Player : public SpriteEntity {
public:
  Player(Vector2 position);

  void update() override;
  void draw() override;
};
