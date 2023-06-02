#include <iostream>
#include <limits>
#include <sstream>
#include "../headers/choices.hpp"
#include "../headers/choicesMonkey.hpp"
using namespace std;

ChoicesMonkey::ChoicesMonkey() {
    answerPrompts.push_back("Should you give it food?   ");
    answerPrompts.push_back("Should you open your eyes?   ");
}

void ChoicesMonkey::executeAnswer1() {
    if (getAnswer() == 'y') {
        cout << "You fluttered your eyes open." << endl << endl;
    }

    else {
        cout << "Hands rested on your torso and began to shake you awake. Amidst your sleepy state, you were able to discern that" << endl
             << "the hands on you weren't humane — and that observation was enough to startle you awake." << endl << endl;
    }
}

void ChoicesMonkey::executeAnswer2() {
    if (getAnswer() == 'y') {
        // ADJUST INVENTORY
        
        cout << "YOU: \"Would you like to accompany me to defeat the Devil King?\"" << endl << endl;

        cout << "You extended your hand towards it, a rice cake resting on your opened palm." << endl << endl;

        // ADJUST AVAILABLE COMPANIONS
        
        if (gameLvl == 1) {
            // ADJUST MONKEY HEALTH
        }
    }

    else {
        cout << "You ignored the sound and, as if nothing happened, you proceeded to ask what you meant to ask after hearing the connection it made." << endl << endl;

        cout << "YOU: \"Would you like to accompany me to defeat the Devil King?\"" << endl << endl;
    }
}