#ifndef OCTOPUS_H_
#define OCTOPUS_H_

#include "alien.h"

namespace spaceInvaders {

class Octopus final: public Alien {
private:
    static const int SCORE = 10;
public:
    int getScore() const final;
};

}


#endif