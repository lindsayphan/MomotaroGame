#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
#include "../headers/enemy.hpp"
using namespace std;

class Dog: public Character {
  public:
    Dog();
    Dog(string n, int health, int maxHealth, int attack, int defense);
    void defend(int enemyHP);
    void attack(Enemy *oni);
};

#endif