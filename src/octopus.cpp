#include "octopus.h"

namespace spaceInvaders {

int Octopus::getScore() const {
    return SCORE;
}

Octopus::Octopus(int x_, int y_) : Alien(x_, y_, 
                                WIDTH_UNITS * UNIT_PIXEL_SIZE) {}

}