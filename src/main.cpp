#include <raylib.h>

#include "game.hpp"
#include "player.hpp"

int main(void) {
  InitWindow(800, 600, "Zoob");
  SetTargetFPS(60);

  Game game;
  game.add(std::make_unique<Player>(Vector2{120.0f, 120.0f}));
  game.add(Tile{{10.0f, 10.0f}, {40.0f, 40.0f}, BROWN, true});

  while (!WindowShouldClose()) {
    game.update();
    BeginDrawing();
    ClearBackground(GRAY);
    game.draw();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
