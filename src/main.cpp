#include <raylib.h>

#include "game.hpp"
#include "player.hpp"

static Game game;

int main(void) {
  InitWindow(800, 600, "Zoob");
  SetTargetFPS(60);

  game.add(std::make_unique<Player>(Vector2{128.0f, 96.0f}));
  game.add(std::make_unique<Player>(Vector2{256.0f, 192.0f}));
  game.add(Tile{{32.0f, 32.0f}, {64.0f, 64.0f}, BROWN, true});

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
