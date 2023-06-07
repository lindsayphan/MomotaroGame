#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
using namespace std;

class Character {
  protected:
    string name;
    int hp;
    int maxHP;
    int atk;
    int def;
  public:
    Character();
    Character(string _name, int _maxHP, int _atk, int _def);
    string getName() const;
    void setHP(int value);
    int getHP() const;
    int getMaxHP() const;
    int getDef() const;
    int getAtk() const;
    //virtual void attack(Character *) = 0;
};

#endif