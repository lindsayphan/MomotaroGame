#include <iostream>
#include <string>
#include "../headers/character.hpp"

Character::Character(string _name, int _maxHp, int _atk, int _def) {
    name = _name;
    hp = _maxHP;
    maxHp = _maxHP;
    atk = _atk;
    def = _def;
}

virtual void Character::setHP(int value) {
    hp = value;
}

virtual int Character::getHP() const {
    return hp;
}

virtual int Character::getMaxHP() const {
    return maxHP;
}

virtual int Character::getDefense() const {
    return def;
}

virtual int Character::getAtack() const {
    return atk;
}