#ifndef BUNKER_H_
#define BUNKER_H_

#include <vector>

#include "game_entity.h"

namespace spaceInvaders {

class Bunker : public GameEntity {
    static const int HEIGHT_UNITS = 4;
    static const int WIDTH_UNITS = 4;
    class Brick: public GameEntity {};
    std::vector<Brick> bricks;
public: 
    Bunker(int x_, int y_);
};

}

#endif