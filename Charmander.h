#ifndef __CHARMANDER_H__
#define __CHARMANDER_H__
#include "Pokemon.h"

class Charmander: public Pokemon{
  public:
    Charmander():Pokemon(Fire, "Charmander", 39, 60){}
    void attack(Pokemon *poke);
};

#endif
