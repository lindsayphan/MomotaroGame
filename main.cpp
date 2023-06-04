#include <iostream>
#include "headers/inventory.hpp"
#include "headers/inventoryMenu.hpp"
#include <limits>
#include "headers/narrative.hpp"
#include "../headers/character.hpp"
#include "../headers/battleOutput.hpp"
#include "headers/difficulty.hpp"
using namespace std;

// to compile in the terminal:
// g++ main.cpp source/narrative.cpp source/choices.cpp source/choicesDog.cpp source/choicesMonkey.cpp source/choicesBird.cpp source/difficulty.cpp
// source/storyDog.cpp source/storyMonkey.cpp source/storyBird.cpp source/finalNarrations.cpp -o narrative

bool startOverPrompt();

int main() {
    // Inventory _inventory;
    // _inventory.addItem("poptart", 2, 1);
    // _inventory.addItem("pretzel", 3, 3);
    // _inventory.addItem("popcorn", 1, 1);

    // InventoryMenu menu;
    // menu.setInventory(&_inventory);
    // menu.displayInventoryMenu();

    // _inventory.addItem("pretzel", 3, 5);
    // menu.setInventory(&_inventory);
    // menu.displayInventoryMenu();

    while (true) {
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
                    return 1;
                    break;
                }
        }
    
        storyline.finale();
        // FINAL BATTLE [battleLost = battle()];
        if (battleLost == true) {
            repeat = startOverPrompt();
                if (!repeat) {
                    cout << "Thank you for playing!" << endl << endl;
                    return 1;
                    break;
                }
        }

        storyline.epilogue();
        repeat = startOverPrompt();
            if (!repeat) {
                cout << "Thank you for playing!" << endl << endl;
                return 1;
                break;
            }
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