#ifndef UFO_H_
#define UFO_H_

#include "random"

#include "game_entity.h"

namespace spaceInvaders {

class UFO final: public GameEntity {
    static const int SCORES[];

    enum DIRECTION {LEFT, RIGHT};

    const DIRECTION direction = RIGHT;

public: 
    [[nodiscard]] int getScore() const;
    void move();
};

}

#endif