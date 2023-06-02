#include <iostream>
#include <string>
#include "../headers/monkey.hpp"
using namespace std;

Monkey::Monkey() {}

Monkey::Monkey(string n, int health, int maxHealth, int attack, int defense) { 
    this->name = n;
    this->hp = health;
    this->maxHP = maxHealth;
    this->atk = attack;
    this->def = defense;
}

// void Monkey::swap(string characterName) {
    
// }

void Monkey::defend(int enemyHP) {
    int newAttack = enemyHP - this->def;
    this->atk += newAttack;
}

void Monkey::attack(Character *oni) {
    int damage = (this->hp / this->maxHP) * this->atk;
    int enemyHP = oni->getHP() - damage;

    oni->setHP(enemyHP);
    
    cout << "+" << damage << " DAMAGE dealt to " << oni->getName() << endl;
}
