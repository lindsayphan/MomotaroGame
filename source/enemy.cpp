#include "../headers/enemy.hpp"
#include "../headers/character.hpp"
#include <string>

using namespace std;

Enemy::Enemy(string _name, int _maxHP, int _atk, int _def):Character(_name, _maxHP, _atk, _def){
}

void Enemy::attack(Character *Opponent){
    int damage = 0;
    // if (choice==DEFEND) {
    //     damage = this->getAtk() - Opponent->getDef();
    // } else {
        damage = this->getAtk();
    //}
    cout << this->getName() << " dealt " << damage << " damage to " << Opponent->getName() << "!" << endl;
    Opponent->setHP(Opponent->getHP() - damage);
}