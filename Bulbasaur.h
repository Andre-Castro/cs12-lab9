#ifndef __BULBASAUR_H__
#define __BULBASAUR_H__

#include "Pokemon.h"

class Bulbasaur: public Pokemon{
  public:
    Bulbasaur():Pokemon(Grass, "Bulbasaur", 45, 65){}
    /*
    The attack functions does 1/5 times the sp_attack of damage to the 
    "poke" pointer. If the attack is super effective double the damage output. 
    */
    void attack(Pokemon *poke);
};

#endif
