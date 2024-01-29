#include "game_entity.h"

namespace spaceInvaders {

class Alien: GameEntity {
private:
    float speed = 1.0f;
public:
    void moveLeft();
    void moveRight();
    void moveDown();
    void speedUp();

    virtual ~Alien() = 0;  // To make class abstract
};

}