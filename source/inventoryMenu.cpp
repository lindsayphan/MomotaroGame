#include <iostream>
#include <limits>
#include <algorithm>
#include "../headers/inventoryMenu.hpp"
using namespace std;

void InventoryMenu::setInventory(Inventory* inv) {
    _inventory = inv;
}

void InventoryMenu::displayInventoryMenu() {
    
    while (true) {
        insideInventory = _inventory->getInventory();       // need to update insideInventory every display
        displayOutput.printInventory(insideInventory);
        string selected = validateAnswer();

        if (selected == "exit") {
            cout << "=========================================" << endl << endl;
            break;
        }

        else {
            adjustInventory(selected);
        }
    }
}

string InventoryMenu::validateAnswer() {
    string answer = "input";
    bool askAnswerAgain = true;
    
    getline(cin, answer);
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    while ((!cin.good()) || (askAnswerAgain == true)) {

        if (answer == "exit") {
            askAnswerAgain = false;
            return answer;
        }

        for (list<Item*>::iterator _iterator = insideInventory.begin(); _iterator != insideInventory.end(); _iterator++) {
            if ((*_iterator)->getName() == answer) {
                cout << "Selected " << answer;
                askAnswerAgain = false;
                return answer;
            }
        }

        cin.clear();
        cout << "Type an item's name or type \'EXIT\' to exit: ";
        getline(cin, answer);
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    }

    return answer;
}

void InventoryMenu::adjustInventory(string selectedItem) {
    _inventory->useItem(selectedItem);
}