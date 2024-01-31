#ifndef GAME_BOARD_H_
#define GAME_BOARD_H_

#include <vector>

#include "cannon.h"
#include "game_entity.h"

namespace spaceInvaders {

class GameBoard {
    static const int UNIT_PIXEL_SIZE = 20;  // unit is 20 pixels
    static const int MENU_HEIGHT_UNITS = 4;
    const int WIDTH = 800, HEIGHT = 600;
    
    int aliens_respawn_height_lvl = 4; // in units
    
    std::vector<GameEntity> gameEntities;
    Cannon cannon = Cannon(WIDTH / 2, HEIGHT - 
                        UNIT_PIXEL_SIZE * 3);

    // void respawnAliens();
    
    
};

}

#endif