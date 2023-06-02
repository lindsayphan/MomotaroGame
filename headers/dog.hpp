#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
using namespace std;

class Dog: public Character {
  public:
    Dog();
    Dog(string n, int health, int maxHealth, int attack, int defense);
    // void swap(string characterName);
    void defend(int enemyHP);
    void attack(Character *oni);
};

#endif