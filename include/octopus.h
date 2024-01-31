#ifndef OCTOPUS_H_
#define OCTOPUS_H_

#include "alien.h"

namespace spaceInvaders {

class Octopus final: public Alien {
private:
    static const int SCORE = 10;
    static const int WIDTH_UNITS = 2;
public:
    int getScore() const final;
    Octopus(int x_, int y_);
};

}


#endif