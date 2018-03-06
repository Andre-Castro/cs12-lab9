#ifndef __SQUIRTLE_H__
#define __SQUIRTLE_H__
#include "Pokemon.h"

class Squirtle: public Pokemon{
  public:// t h a n o s
    Squirtle():Pokemon(Water, "Squirtle", 44, 50){
    }
    void attack(Pokemon *poke);
};

#endif
