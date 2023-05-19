#include <iostream>
#include <string>
#include "../headers/character.hpp"
using namespace std;

Character::Character() {}

Character::Character(string _name, int _maxHP, int _atk, int _def) {
    this->name = _name;
    this->hp = _maxHP;
    this->maxHP = _maxHP;
    this->atk = _atk;
    this->def = _def;
}

string Character::getName() const {
    return this->name;
}

void Character::setHP(int value) {
    this->hp = value;
}

int Character::getHP() const {
    return this->hp;
}

int Character::getMaxHP() const {
    return this->maxHP;
}

int Character::getDef() const {
    return this->def;
}

int Character::getAtk() const {
    return this->atk;
}