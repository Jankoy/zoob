#include "game.hpp"

void Game::add(std::unique_ptr<Entity> entity) {
  entities.push_back(std::move(entity));
}
void Game::add(Tile tile) { tiles.push_back(std::move(tile)); }

void Game::update() {
  for (auto &tile : tiles)
    tile.update();
  for (auto &entity : entities)
    entity->update();
}

void Game::draw() {
  for (auto &tile : tiles)
    tile.draw();
  for (auto &entity : entities)
    entity->draw();
}
