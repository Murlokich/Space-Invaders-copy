#include <cassert>
#include "cannon.h"

namespace spaceInvaders {

void Cannon::moveRight() {
    x += 10;  // moves by 10 pixels to the right
}

void Cannon::moveLeft() {
    assert(x >= 10);
    x -= 10;  // moves by 10 pixels to the right
}

Cannon::Cannon(int x_, int y_):
                    GameEntity(x_, y_, HEIGHT, WIDTH){}

Cannon::Bullet Cannon::shoot() const {
    return Cannon::Bullet(x + width / 2, y + 1);
}

void Cannon::Bullet::move() {
    y += 10;
}

Cannon::Bullet::Bullet(int x_, int y_): 
                        GameEntity(x_, y_, HEIGHT, WIDTH) {}

}