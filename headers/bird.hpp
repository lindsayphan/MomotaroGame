#ifndef BIRD_HPP
#define BIRD_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
using namespace std;

class Bird: public Character {
  public:
    Bird();
    Bird(string n, int health, int maxHealth, int attack, int defense);
    // void swap(string characterName);
    void defend(int enemyHP);
    void attack(Character *oni);
};

#endif