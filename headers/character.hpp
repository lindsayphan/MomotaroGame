#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
using namespace std;

class Character {
  protected:
    string name = "";
    int hp = 0;
    int maxHP = hp;
    int atk = 0;
    int def = 0;
  public:
    Character();
    Character(string _name, int _maxHP, int _atk, int _def);
    string getName() const;
    void setHP(int value);
    int getHP() const;
    int getMaxHP() const;
    int getDef() const;
    int getAtk() const;
    virtual void attack() = 0;
};

#endif