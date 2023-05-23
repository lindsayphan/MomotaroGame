#include <iostream>
#include <limits>
#include "../headers/difficulty.hpp"
using namespace std;

Difficulty::Difficulty() {
    gameLvl = 0;
}

void Difficulty::setLvl() {
    int answer = 0;
    
    cout << "Select a difficulty: type \'1\' for normal, type \'2\' for hard.   ";
    cin >> answer;

    while (!cin.good() || answer <= 0 || answer > 2) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Select a difficulty: type \'1\' for normal, type \'2\' for hard.   ";
            cin >> answer;            
        }

    gameLvl = answer;
    cout << endl;

    cout << "Game difficulty set to " << gameLvl << "." << endl << endl;
}

int Difficulty::getLvl() {
    return this->gameLvl;
}
