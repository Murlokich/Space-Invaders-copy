#include "alien.h"

namespace spaceInvaders {

void Alien::moveRight() {
    x += speed * 5;
}

void Alien::moveLeft() {
    x -= speed * 5;
}

void Alien::moveDown() {
    y += 5;
}

void Alien::speedUp() {
    speed += 0.5f;
}

Alien::~Alien() {}

}