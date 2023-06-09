#ifndef BIRD_HPP
#define BIRD_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
#include "../headers/enemy.hpp"
using namespace std;

class Bird: public Character {
  public:
    Bird();
    Bird(string _name, int _maxHP, int _atk, int _def) : Character(_name, _maxHP, _atk, _def) {}
    void defend(int enemyHP);
    void attack(Enemy *oni);
};

#endif