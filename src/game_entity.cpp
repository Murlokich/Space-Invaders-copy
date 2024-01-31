#include "game_entity.h"

namespace spaceInvaders {

GameEntity::GameEntity(int x_, int y_, int height_, int width_) : 
                        x(x_), y(y_), height(height_), width(width_) {}
GameEntity::~GameEntity(){}

int GameEntity::getX() const {
    return x;
}

int GameEntity::getY() const {
    return y;
}

int GameEntity::getHeight() const {
    return height;
}

int GameEntity::getWidth() const {
    return width;
}

}  // namespace spaceInvaders