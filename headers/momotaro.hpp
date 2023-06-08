#ifndef MOMOTARO_HPP
#define MOMOTARO_HPP
#include <iostream>
#include <string>
#include "../headers/character.hpp"
#include "../headers/enemy.hpp"
using namespace std;

class Momotaro: public Character {
  private: 
    string currAnimal;
  public:
    Momotaro();
    Momotaro(string _name, int _maxHP, int _atk, int _def) : Character(_name, _maxHP, _atk, _def) {}
    void heal(string item);
    void defend(int enemyHP);
    void attack(Enemy *oni);
    void setAnimal(string animal);
    string getAnimal() const;
};

#endif
