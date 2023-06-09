#include <iostream>
#include <limits>
#include "headers/narrative.hpp"
using namespace std;

Inventory* gameInventory = new Inventory();
Bird bird = Bird("BIRD", 10, 10, 10, 3);
Dog dog = Dog("Dog", 10, 10, 5, 5);
Monkey monkey = Monkey("Monkey", 10, 10, 7, 3);

bool startOverPrompt();

int main() {

    bool gameIsPlaying = true;

    while (gameIsPlaying) {
        Narrative storyline;
        bool battleLost = false;
        bool repeat = true;

        storyline.beginning();
        // BATTLE 1 [battleLost = battle()];

        storyline.middle();
        // BATTLE 2 [battleLost = battle()];
        if (battleLost == true) {
            repeat = startOverPrompt();
                if (!repeat) {
                    cout << "Thank you for playing!" << endl << endl;
                    gameIsPlaying = false;
                    continue;
                }
        }
    
        storyline.finale();
        // FINAL BATTLE [battleLost = battle()];
        if (battleLost == true) {
            repeat = startOverPrompt();
                if (!repeat) {
                    cout << "Thank you for playing!" << endl << endl;
                    gameIsPlaying = false;
                    continue;
                }
        }

        storyline.epilogue();
        repeat = startOverPrompt();
            if (!repeat) {
                cout << "Thank you for playing!" << endl << endl;
                gameIsPlaying = false;
                continue;
            }
    
        delete gameInventory;
        gameInventory = new Inventory();
        // gameInventory->deleteInventory();
    }
    
    delete gameInventory;
    
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