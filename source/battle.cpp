#include <iostream>
#include "../headers/battle.hpp"
#include "../headers/battleOutput.hpp"
using namespace std;

int Battle::damageDealt(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy) {
    int totalDmgDealt = d_momotaro->getAtk() + d_companion->getAtk();
    d_enemy->setHP(d_enemy->getHP() - totalDmgDealt);
    return totalDmgDealt;
}

void Battle::damageTaken(Momotaro *d_momotaro, Character *d_companion, Enemy *d_enemy) {
    int totalDmgTaken = d_enemy->getAtk()/2;
    d_momotaro->setHP(d_momotaro->getHP() - totalDmgTaken);
    d_companion->setHP(d_companion->getHP() - totalDmgTaken);
}