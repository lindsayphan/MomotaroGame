#include <iostream>
#include "../headers/statsOutput.hpp"
#include "../headers/character.hpp"

using namespace std;

void StatsOutput::printStats(Momotaro *s_momotaro, Dog *s_dog, Monkey *s_monkey, Bird *s_bird) {
    cout << "=========================== STATS ===========================" << endl;
    cout << "|MOMOTARO\t|DOG\t\t|MONKEY\t\t|BIRD" << endl;
    cout << "|HP  : " << s_momotaro->getHP() << "/" << s_momotaro->getMaxHP() << "\t|" <<
            "HP  : " << s_dog->getHP() << "/" << s_dog->getMaxHP() << "\t|" <<
            "HP  : " << s_monkey->getHP() << "/" << s_monkey->getMaxHP() << "\t|" <<
            "HP  : " << s_bird->getHP() << "/" << s_bird->getMaxHP() << endl;
    cout << "|ATK : " << s_momotaro->getAtk() << "\t|" <<
            "ATK : " << s_dog->getAtk() << "\t|" <<
            "ATK : " << s_monkey->getAtk() << "\t|" <<
            "ATK : " << s_bird->getAtk() << endl;
    cout << "|DEF : " << s_momotaro->getDef() << "\t|" << 
            "DEF : " << s_dog->getDef() << "\t|" <<
            "DEF : " << s_monkey->getDef() << "\t|" <<
            "DEF : " << s_bird->getDef() << endl << endl;
    cout << "Selected companion: " << s_momotaro->getAnimal() << endl;
    cout << "=============================================================" << endl << endl;
}