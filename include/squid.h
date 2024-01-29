#ifndef SQUID_H_
#define SQUID_H_

#include <memory>

#include "alien.h"
#include "game_entity.h"

namespace spaceInvaders {

class Squid: public Alien {
private:
    static const int SCORE = 30;
    static const float SHOOT_PROBABILITY = 0.1;
public: 
    class Web: public GameEntity {
    private:
        void move();
    };
    public:
        std::unique_ptr<Web> tryShoot() const;
        int getScore() const final;
};

}

#endif