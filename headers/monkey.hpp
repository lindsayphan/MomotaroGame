#ifndef MONKEY_HPP
#define MONKEY_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
using namespace std;

class Monkey: public Character {
  public:
    Monkey();
    Monkey(string n, int health, int maxHealth, int attack, int defense);
    // void swap(string characterName);
    void defend(int enemyHP);
    void attack(Character *oni);
};

#endif