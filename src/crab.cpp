#include "crab.h"

namespace spaceInvaders {

int Crab::getScore() const {
    return SCORE;
}

Crab::Crab(int x_, int y_) : Alien(x_, y_, 
                                WIDTH_UNITS * UNIT_PIXEL_SIZE) {}
                                
}