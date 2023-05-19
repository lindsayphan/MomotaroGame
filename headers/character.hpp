#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>

class Character {
  private:
    string name;
    int hp; 
    int maxHP;
    int atk;
    int def;
  protected:
    // Character();
    Character(string _name, int _maxHp, int _atk, int _def);
    virtual void setHP(int value);
    virtual int getHP() const;
    virtual int getMaxHP() const;
    virtual int getDefense() const;
    virtual int getAtack() const;
};

#endif