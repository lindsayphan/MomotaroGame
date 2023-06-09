#ifndef BATTLE_HPP
#define BATTLE_HPP
#include "character.hpp"
#include "momotaro.hpp"
#include "enemy.hpp"
#include "inventory.hpp"
#include <iostream>
using namespace std;

// extern Inventory* gameInventory;

class Battle {
  public:
    void damageDealt(Enemy *d_enemy, int totalDmg);
    int damageDealt(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy);
    void damageTaken(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy);
    // void battleUseItem(string itemName);
};

#endif