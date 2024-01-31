#include "bunker.h"

namespace spaceInvaders {

Bunker::Bunker(int x_, int y_) : GameEntity(x_, y_, 
                                HEIGHT_UNITS * UNIT_PIXEL_SIZE, 
                                WIDTH_UNITS * UNIT_PIXEL_SIZE) {}

}