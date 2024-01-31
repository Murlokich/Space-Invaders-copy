#include "squid.h"
#include <random>

namespace spaceInvaders {

int Squid::getScore() const {
    return SCORE;
}

void Squid::Web::move() {
    y += UNIT_PIXEL_SIZE;
}

Squid::Web::Web(int x_, int y_): GameEntity(x_, y_, 
                                            HEIGHT_UNITS * UNIT_PIXEL_SIZE,
                                            WIDTH_UNITS * UNIT_PIXEL_SIZE) {}


// Squid makes a shot with probability of SHOOT_PROBABILITY each function call
std::unique_ptr<Squid::Web> Squid::tryShoot() const{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<double> dis(0.0, 1.0);

    if (dis(gen) < SHOOT_PROBABILITY) {
        // Shooting is successful
        return std::make_unique<Web>(x + getWidth() / 2, y + getHeight());
    } else {
        // Shooting is not successful
        return nullptr;
    }
}

Squid::Squid(int x_, int y_) : Alien(x_, y_, 
                                WIDTH_UNITS * UNIT_PIXEL_SIZE) {}

}