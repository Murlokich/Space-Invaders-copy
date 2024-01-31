#ifndef CANNON_H_
#define CANNON_H_

#include "game_entity.h"

namespace spaceInvaders {

class Cannon final: public GameEntity {
private:
    static const int HEIGHT_UNITS = 2;
    static const int WIDTH_UNITS = 3;
public: 
    class Bullet: public GameEntity {
    public:
        void move();
        Bullet(int x_, int y_);
    private:
        static const int HEIGHT_UNITS = 1;
        static constexpr float WIDTH_UNITS = 0.5f;
    };

    void moveRight();
    void moveLeft();
    Bullet shoot() const;

    Cannon(int x_, int y_);
};
}

#endif