#include <iostream>
#include <string>
#include "../headers/bird.hpp"
#include "../headers/enemy.hpp"
using namespace std;

Bird::Bird() {}

Bird::Bird(string n, int health, int maxHealth, int attack, int defense) {
    this->name = n;
    this->hp = health;
    this->maxHP = maxHealth;
    this->atk = attack;
    this->def = defense;
}

void Bird::defend(int enemyHP) {
    int newAttack = enemyHP - this->def;
    this->atk += newAttack;
}

void Bird::attack(Enemy *oni) {
    int damage = (this->hp / this->maxHP) * this->atk;
    int enemyHP = oni->getHP() - damage;

    oni->setHP(enemyHP);
    
    cout << "+" << damage << " DAMAGE dealt to " << oni->getName() << endl;
}
