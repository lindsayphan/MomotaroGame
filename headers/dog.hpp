#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
using namespace std;

class Dog: public Character {
  public:
    Dog();
    Dog(string _name, int _maxHP, int _atk, int _def) : Character(_name, _maxHP, _atk, _def) {}
    void defend(int enemyHP);
    void attack(Character *oni);
};

#endif