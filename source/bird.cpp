#include <iostream>
#include <string>
#include "../headers/bird.hpp"
using namespace std;

Bird::Bird() {
    name = "BIRD";
    hp = 10;
    maxHP = 10;
    atk = 2;
    def = 8;
}

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
