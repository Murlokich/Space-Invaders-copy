#include "alien.h"

namespace spaceInvaders {

float Alien::speed = 1.0f;

void Alien::moveRight() {
    x += speed * UNIT_PIXEL_SIZE;
}

void Alien::moveLeft() {
    x -= speed * UNIT_PIXEL_SIZE;
}

void Alien::moveDown() {
    y += UNIT_PIXEL_SIZE;
}

void Alien::speedUp() {
    speed += 0.5f;
}

Alien::Alien(int x_, int y_, int width_pixels) : GameEntity(x_, y_, 
                                HEIGHT_UNITS * UNIT_PIXEL_SIZE, width_pixels){}

}