#include "game.h"

namespace spaceInvaders {

[[nodiscard]] bool Game::gameIsOver() const {
    return gameOver;
}

void Game::run() {
    while (!gameIsOver()) {
        break;    
    }
}

}
