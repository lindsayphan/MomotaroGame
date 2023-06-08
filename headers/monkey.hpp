#ifndef MONKEY_HPP
#define MONKEY_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
#include "../headers/enemy.hpp"
using namespace std;

class Monkey: public Character {
  public:
    Monkey();
    Monkey(string n, int health, int maxHealth, int attack, int defense);
    void defend(int enemyHP);
    void attack(Enemy *oni);
};

#endif