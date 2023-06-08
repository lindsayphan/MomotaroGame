#include <iostream>
#include <string>
#include "../headers/monkey.hpp"
#include "../headers/enemy.hpp"
using namespace std;

Monkey::Monkey() {
    name = "MONKEY";
    hp = 10;
    maxHP = 10;
    atk = 7;
    def = 3;
}

void Monkey::defend(int enemyHP) {
    int newAttack = enemyHP - this->def;
    this->atk += newAttack;
}

void Monkey::attack(Enemy *oni) {
    int damage = (this->hp / this->maxHP) * this->atk;
    int enemyHP = oni->getHP() - damage;

    oni->setHP(enemyHP);
    
    cout << "+" << damage << " DAMAGE dealt to " << oni->getName() << endl;
}
