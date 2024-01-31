#ifndef CRAB_H_
#define CRAB_H_

#include "alien.h"

namespace spaceInvaders {

class Crab: public Alien {
private:
    static const int WIDTH_UNITS = 2;
    static const int SCORE = 20;
public:
    int getScore() const final;
    Crab(int x_, int y_);
};

}



#endif