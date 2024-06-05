#pragma once

#include "asset_manager.hpp"
#include "entity.hpp"

class Player : public Entity {
  Texture texture;

public:
  Player(Vector2 position);
  ~Player();

  void update() override;
  void draw() override;
};
