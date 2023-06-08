#include <iostream>
#include <limits>
#include <sstream>
#include "../headers/choicesBird.hpp"
using namespace std;

ChoicesBird::ChoicesBird() {
    answerPrompts.push_back("Should you invite it to join your team?   ");
    answerPrompts.push_back("Should you stop them?   ");
}

void ChoicesBird::executeAnswer1() {
    if (getAnswer() == 'y') {
        cout << "After a mental debate, you ultimately decided to stop them." << endl << endl;

        cout << "YOU: \"Please don't. You might hurt it. We don't need to anger the heavens.\"" << endl << endl;
    }

    else {
        cout << "After a mental debate, you ultimately decided to just let them be." << endl
             << "Whatever happens because of their game should only be theirs to bear — especially if their targeted bird happened to be a deity in disguise." << endl << endl;

        cout << "However, thankfully, they decided to abandon their game by themselves." << endl << endl;
    }

}

void ChoicesBird::executeAnswer2() {
        if (getAnswer() == 'y') {
            
        gameInventory->useItem("rice cakes");

        cout << "YOU: \"Would you be interested in finding out for yourself, then?\"" << endl << endl;

        cout << "BIRD: \"Since you're kind enough to offer me food… Perhaps I shall.\"" << endl << endl;

        cout << "BIRD joins your party!" << endl << endl;

        if (gameLvl == 1) {
            bird.setHP(bird.getHP() + 3);
        }
    }

    else {
        cout << "YOU: \"I guess we will all find out soon enough.\"" << endl << endl;

        cout << "BIRD: \"You intrigue me. I shall follow you lot to see how far your courage takes you.\"" << endl << endl;

        cout << "BIRD joins your party!" << endl << endl;
    }
}