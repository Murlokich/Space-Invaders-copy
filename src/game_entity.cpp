#include "game_entity.h"

namespace spaceInvaders {

GameEntity::GameEntity(int x_, int y_, int height_, int width_) : 
                        x(x_), y(y_), height(height_), width(width_) {}
GameEntity::~GameEntity(){}

}  // namespace spaceInvaders