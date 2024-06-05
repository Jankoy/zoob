#include "player.hpp"

#include <raymath.h>

Player::Player(Vector2 position) : Entity(position) {
  texture = AssetManager::load_texture("sprites/player.png");
}
Player::~Player() { UnloadTexture(texture); }

void Player::update() {
  const Vector2 input_vector = Vector2Normalize(Vector2Subtract(
      {static_cast<float>(IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)),
       static_cast<float>(IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN))},
      {static_cast<float>(IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)),
       static_cast<float>(IsKeyDown(KEY_W) || IsKeyDown(KEY_UP))}));

  position =
      Vector2Add(position, Vector2Scale(input_vector, GetFrameTime() * 180.0f));
}
void Player::draw() { DrawTextureV(texture, position, WHITE); }
