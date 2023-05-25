#include "../headers/enemy.hpp"
#include "../headers/character.hpp"
#include <string>

using namespace std;

Enemy::Enemy(string _name, int _maxHP, int _atk, int _def):Character(_name, _maxHP, _atk, _def){
}

void Enemy::attack(){
    cout << this->getName() << " dealt " << this->getAtk() << " damage to you!" << endl;
}