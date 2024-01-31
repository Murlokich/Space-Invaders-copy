#ifndef SQUID_H_
#define SQUID_H_

#include <memory>
#include <random>

#include "alien.h"
#include "game_entity.h"

namespace spaceInvaders {

class Squid: public Alien {
private:
    static const int SCORE = 30;
    static const int WIDTH_UNITS = 1;
    static constexpr float SHOOT_PROBABILITY = 0.1;

public: 
    class Web: public GameEntity {
    public:
        Web(int x_, int y_);
    private:
        static const int HEIGHT_UNITS = 1;
        static constexpr float WIDTH_UNITS = 0.5f;
        void move();
    };
    // Squid makes a shot with probability of SHOOT_PROBABILITY each function call
    std::unique_ptr<Web> tryShoot() const;
    int getScore() const final;
    Squid(int x_, int y_);
};
    

}

#endif