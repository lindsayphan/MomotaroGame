#ifndef MONKEY_HPP
#define MONKEY_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
using namespace std;

class Monkey: public Character {
  public:
    Monkey();
    Monkey(string _name, int _maxHP, int _atk, int _def) : Character(_name, _maxHP, _atk, _def) {}
    void defend(int enemyHP);
    void attack(Character *oni);
};

#endif