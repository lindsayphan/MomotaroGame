#include <iostream>
#include "../headers/battle.hpp"
using namespace std;

void Battle::damageDealt(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy) {
    d_enemy->setHP(d_enemy->getHP() - d_momotaro->getAtk() + d_companion->getAtk());
}

void Battle::damageTaken(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy) {
    d_momotaro->setHP(d_momotaro->getHP() - d_enemy->getAtk()/2);
    d_companion->setHP(d_companion->getHP() - d_enemy->getAtk()/2);
}