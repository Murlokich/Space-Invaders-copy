#include "ufo.h"

namespace spaceInvaders {

void UFO::move() {
    switch (direction) {
        case RIGHT:
            x += UNIT_PIXEL_SIZE;
            break;
        case LEFT:
            x -= UNIT_PIXEL_SIZE;
            break;
    }
}

const int UFO::SCORES[]{50, 100, 200, 300};

// return random score out of the list {50, 100, 200, 300}
int UFO::getScore() const {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<std::mt19937::result_type> dis(0, 3);

     int randomIndex = dis(gen);
     return SCORES[randomIndex];
}

}