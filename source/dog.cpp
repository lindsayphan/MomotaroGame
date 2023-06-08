#include <iostream>
#include <string>
#include "../headers/dog.hpp"
#include "../headers/enemy.hpp"
using namespace std;

Dog::Dog() {
    name = "DOG";
    hp = 10;
    maxHP = 10;
    atk = 5;
    def = 5;
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
