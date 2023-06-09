#ifndef BATTLE_HPP
#define BATTLE_HPP
#include "character.hpp"
#include "momotaro.hpp"
#include "enemy.hpp"
#include <iostream>
using namespace std;

class Battle {
  public:
    int damageDealt(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy);
    void damageTaken(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy);
};

#endif