#pragma once

#include <raylib.h>
#include <string>

class Entity {
protected:
  Vector2 position;

public:
  Entity(Vector2 position);
  virtual void update() = 0;
  virtual void draw() = 0;
};

class SpriteEntity : public Entity {
protected:
  Texture sprite;

public:
  SpriteEntity(Vector2 position, const std::string &sprite_path);
  ~SpriteEntity();

  virtual void draw() override = 0;
};
