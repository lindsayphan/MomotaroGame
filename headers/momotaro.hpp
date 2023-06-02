#ifndef MOMOTARO_HPP
#define MOMOTARO_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
using namespace std;

class Momotaro: public Character {
  public:
    Momotaro();
    Momotaro(string n, int health, int maxHealth, int attack, int defense);
    void heal(string item);
    void defend(int enemyHP);
    void attack(Character *oni);
};

#endif
