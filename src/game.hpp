#include <memory>
#include <vector>

#include "entity.hpp"
#include "tile.hpp"

class Game {
  std::vector<std::unique_ptr<Entity>> entities;
  std::vector<Tile> tiles;

public:
  void add(std::unique_ptr<Entity> entity);
  void add(Tile tile);

  void update();
  void draw();
};
