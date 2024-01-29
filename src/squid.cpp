#include "squid.h"
#include <random>

namespace spaceInvaders {

int Squid::getScore() const {
    return SCORE;
}

void Squid::Web::move() {
    y += 10;
}

std::unique_ptr<Squid::Web> Squid::tryShoot() const{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0.0, 1.0);
    if (dis(gen) < SHOOT_PROBABILITY) {
        // Shooting is successful, create and return a Web object
        return std::make_unique<Web>();
    } else {
        // Shooting is not successful
        return nullptr;
    }
}

}