#ifndef CANNON_H_
#define CANNON_H_

#include "game_entity.h"

namespace spaceInvaders {

class Cannon: GameEntity {
private:
    static const int WIDTH = 20;
    static const int HEIGHT = 10;
public: 
    class Bullet: GameEntity {
        friend Cannon;  // Allows that only Cannon generates bullets
    public:
        void move();
    private:
        static const int WIDTH = 1;
        static const int HEIGHT = 1;
        Bullet(int x_, int y_);
    };

    void moveRight();
    void moveLeft();
    Bullet shoot() const;

    Cannon(int x_, int y_);
};
}

#endif