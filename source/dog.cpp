#include <iostream>
#include <string>
#include "../headers/dog.hpp"
#include "../headers/enemy.hpp"
using namespace std;

Dog::Dog() {}

Dog::Dog(string n, int health, int maxHealth, int attack, int defense) { 
    this->name = n;
    this->hp = health;
    this->maxHP = maxHealth;
    this->atk = attack;
    this->def = defense;
}

void Dog::defend(int enemyHP) {
    int newAttack = enemyHP - this->def;
    this->atk += newAttack;
}

void Dog::attack(Enemy *oni) {
    int damage = (this->hp / this->maxHP) * this->atk;
    int enemyHP = oni->getHP() - damage;

    oni->setHP(enemyHP);
    
    cout << "+" << damage << " DAMAGE dealt to " << oni->getName() << endl;
}
