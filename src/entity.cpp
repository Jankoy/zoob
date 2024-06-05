#include "entity.hpp"

#include "asset_manager.hpp"

Entity::Entity(Vector2 position) : position(position) {}

SpriteEntity::SpriteEntity(Vector2 position, const std::string &sprite_path)
    : Entity(position) {
  sprite = AssetManager::load_texture(sprite_path);
}

SpriteEntity::~SpriteEntity() { UnloadTexture(sprite); }

void SpriteEntity::draw() { DrawTextureV(sprite, position, WHITE); }
