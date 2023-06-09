#include <iostream>
#include "../headers/statsOutput.hpp"
#include "../headers/character.hpp"

using namespace std;

void StatsOutput::printStats(int numCompanions) {
    cout << "=========================== STATS ===========================" << endl;
    cout << "|MOMOTARO\t|";
    if (numCompanions >= 1) {
        cout << "DOG\t\t|";
    }
    if (numCompanions >= 2) {
        cout << "MONKEY\t\t|";
    }
    if (numCompanions == 3) {
        cout << "BIRD";
    }
    cout << endl;

    cout << "|HP  : " << momotaro->getHP() << "/" << momotaro->getMaxHP() << "\t|";
    if (numCompanions >= 1) {
        cout << "HP  : " << dog->getHP() << "/" << dog->getMaxHP() << "\t|";
    }
    if (numCompanions >= 2) {
        cout << "HP  : " << monkey->getHP() << "/" << monkey->getMaxHP() << "\t|";
    }
    if (numCompanions == 3) {
        cout << "HP  : " << bird->getHP() << "/" << bird->getMaxHP();
    }
    cout << endl;

    cout << "|ATK : " << momotaro->getAtk() << "\t|";
    if (numCompanions >= 1) {
        cout << "ATK : " << dog->getAtk() << "\t|";
    }
    if (numCompanions >= 2) {
        cout << "ATK : " << monkey->getAtk() << "\t|";
    }
    if (numCompanions == 3) {
        cout << "ATK : " << bird->getAtk() << "\t|";
    }
    cout << endl;

    cout << "|DEF : " << momotaro->getDef() << "\t|";
    if (numCompanions >= 1) {
        cout << "DEF : " << dog->getDef() << "\t|";
    }
    if (numCompanions >= 2) {
        cout << "DEF : " << monkey->getDef() << "\t|";
    }
    if (numCompanions == 3) {
        cout << "DEF : " << bird->getDef() << "\t|";
    }
    cout << endl;
    cout << "Selected companion: " << momotaro->getAnimal() << endl;
    cout << "=============================================================" << endl << endl;
}

void StatsOutput::printStats(Momotaro *s_momotaro, Character *s_companion) {
cout << "=========================== STATS ===========================" << endl;
    cout << "|MOMOTARO\t|DOG\t\t|" << endl;
    cout << "|HP  : " << s_momotaro->getHP() << "/" << s_momotaro->getMaxHP() << "\t|" <<
            "HP  : " << s_companion->getHP() << "/" << s_companion->getMaxHP() << "\t|" << endl;
    cout << "|ATK : " << s_momotaro->getAtk() << "\t|" <<
            "ATK : " << s_companion->getAtk() << "\t|" << endl;
    cout << "|DEF : " << s_momotaro->getDef() << "\t|" << 
            "DEF : " << s_companion->getDef() << "\t|" << endl << endl;
    cout << "Selected companion: " << s_momotaro->getAnimal() << endl;
    cout << "=============================================================" << endl << endl;
}

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