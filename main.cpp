#include <iostream>
#include <limits>
#include "headers/narrative.hpp"
using namespace std;

// to compile in the terminal:
// g++ main.cpp source/narrative.cpp source/choices.cpp source/choicesDog.cpp source/choicesMonkey.cpp source/choicesBird.cpp source/difficulty.cpp
// source/storyDog.cpp source/storyMonkey.cpp source/storyBird.cpp -o narrative

bool startOverPrompt();

int main() {

    while (true) {
        Narrative storyline;
        bool battleLost = true;
        bool repeat = true;

        storyline.beginning();
        // BATTLE 1 [battleLost = battle()];

        storyline.middle();
        // BATTLE 2 [battleLost = battle()];
        if (battleLost == true) {
            repeat = startOverPrompt();
                if (!repeat) {
                    return 1;
                    break;
                }
        }
    
        // storyline.finale();
        // FINAL BATTLE [battleLost = battle()];
        // if (battleLost == true) {
            // repeat = startOverPrompt();
                // if (!repeat) {
                    // return 1;
                    // break;
                // }
        // }

        // storyline.epilogue();
    }
    return 0;
}

bool startOverPrompt() {
    string answer;

    cout << "Would you like to play again?   ";
    cin >> answer;
    answer = tolower(answer[0]);

    while (!cin.good() || (answer[0] != 'y' && answer[0] != 'n')) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Would you like to play again?   ";
        cin >> answer;
        answer = tolower(answer[0]);
    }

    cout << endl;

    if (answer[0] == 'y') {
        return true;
    }

    else {
        return false;
    }
}