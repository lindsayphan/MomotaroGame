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
    Bird(string n, int health, int maxHealth, int attack, int defense);
    void defend(int enemyHP);
    void attack(Enemy *oni);
};

#endif