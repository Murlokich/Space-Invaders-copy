#ifndef ALIEN_H_
#define ALIEN_H_

#include "game_entity.h"

namespace spaceInvaders {

class Alien: public GameEntity {
private:
    static float speed;
    static const int HEIGHT_UNITS = 2;

public:
    void moveLeft();
    void moveRight();
    void moveDown();
    void speedUp();
    virtual int getScore() const = 0;

    Alien(int x_, int y_, int width_pixels);
    virtual ~Alien() {}  // To make class abstract

};

}
#endif