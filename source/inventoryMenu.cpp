#include <iostream>
#include <limits>
#include <algorithm>
#include "../headers/inventoryMenu.hpp"
using namespace std;

// void InventoryMenu::setInventory(Inventory* inv) {
//     _inventory = inv;
// }

void InventoryMenu::displayInventoryMenu() {
    
    while (true) {
        insideInventory = gameInventory->getInventory();       // need to update insideInventory every display
        displayOutput.printInventory(insideInventory);
        string selected = validateAnswer();

        if (selected == "exit") {
            cout << "=========================================" << endl << endl;
            break;
        }

        else {
            adjustInventory(selected);
            iterations++;
        }
    }

    iterations = 0;
}

string InventoryMenu::validateAnswer() {
    string answer;
    bool askAnswerAgain = true;

    cin.clear();
    if (iterations == 0) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    getline(cin, answer);
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    while ((!cin.good()) || (askAnswerAgain == true)) {

        if (answer == "exit") {
            askAnswerAgain = false;
            return answer;
        }

        for (list<Item*>::iterator _iterator = insideInventory.begin(); _iterator != insideInventory.end(); _iterator++) {
            if ((*_iterator)->getName() == answer) {
                cout << endl << "Selected " << answer << endl << endl;
                askAnswerAgain = false;
                return answer;
            }
        }

        if (askAnswerAgain == true) {
            cin.clear();
            // cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Type an item's name or type \'EXIT\' to exit: ";
            getline(cin, answer);
            transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        } 
    }

    return answer;
}

void InventoryMenu::adjustInventory(string selectedItem) {
    gameInventory->useItem(selectedItem);
}