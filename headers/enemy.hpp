#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "character.hpp"
#include <string>

using namespace std;

class Enemy: public Character {
  public: 
    Enemy(string _name, int _maxHP, int _atk, int _def);
    void attack();
  private:
};

#endif