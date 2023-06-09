#ifndef BATTLE_HPP
#define BATTLE_HPP
#include "../headers/character.hpp"
#include "../headers/momotaro.hpp"
#include "../headers/enemy.hpp"
#include "../headers/inventory.hpp"
#include <iostream>
using namespace std;

// extern Inventory* gameInventory;

class Battle {
  private:
  public:
    void damageDealt(Enemy *d_enemy, int totalDmg);
    int damageDealt(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy);
    void damageTaken(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy);
    // void battleUseItem();
};

#endif