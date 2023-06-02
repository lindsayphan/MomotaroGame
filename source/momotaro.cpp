#include <iostream>
#include <string>
#include "../headers/momotaro.hpp"
using namespace std;

Momotaro::Momotaro() {}

Momotaro::Momotaro(string n, int health, int maxHealth, int attack, int defense) {
    this->name = n;
    this->hp = health;
    this->maxHP = maxHealth;
    this->atk = attack;
    this->def = defense;
}

void Momotaro::heal(string item) {
    if (item == "Green Tea") {
        hp += 10;
        setHP(hp);
    }
    else if(item == "Rice Cake") {
        hp += 15;
        setHP(hp);
    }
}
    
void Momotaro::defend(int enemyHP) {
    int newAttack = enemyHP - this->def;
    this->atk += newAttack;
}

void Momotaro::attack(Character *oni) {
    int damage = (this->hp / this->maxHP) * this->atk;
    int enemyHP = oni->getHP() - damage;

    oni->setHP(enemyHP);
    
    cout << "+" << damage << " DAMAGE dealt to " << oni->getName() << endl;
}