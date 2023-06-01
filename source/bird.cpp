#include <iostream>
#include <string>
#include "../headers/bird.hpp"
using namespace std;

Bird::Bird() {}

Bird::Bird(string n, int health, int maxHealth, int attack, int defense) : Character(n, health, maxHealth, attack, defense) { }

// void Bird::swap(string characterName) {
    
// }

void Bird::defend(int enemyHP) {
    int newAttack = enemyHP - this->def;
    this->atk += newAttack;
}

void Bird::attack(Character *oni) {
    int damage = (this->hp / this->maxHP) * this->atk;
    int enemyHP = oni->getHP() - damage;

    oni->setHP(enemyHP);
    
    cout << "+" << damage << " DAMAGE dealt to " << oni->getName() << endl;
}
