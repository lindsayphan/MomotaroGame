#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
using namespace std;

class Character {
  private:
    string name = "";
    int hp = 0;
    int maxHP = hp;
    int atk = 0;
    int def = 0;
  public:
    Character();
    Character(string _name, int _maxHP, int _atk, int _def);
    virtual string getName() const;
    virtual void setHP(int value);
    virtual int getHP() const;
    virtual int getMaxHP() const;
    virtual int getDef() const;
    virtual int getAtk() const;
};

#endif