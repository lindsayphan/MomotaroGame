#include <iostream>
#include <limits>
#include "../headers/inventoryMenu.hpp"
using namespace std;

void InventoryMenu::displayInventoryMenu() {
    
    while (true) {
        displayOutput.printInventory(insideInventory);
        string selected = validateAnswer();

        if (selected == "exit") {
            cout << endl << "=========================================" << endl << endl;
            break;
        }

        else {
            adjustInventory(selected);
        }
    }
}

string InventoryMenu::validateAnswer() {
    string answer = "input";
    cin >> answer;

    for (int place = 0; place < answer.size(); place++) {
        answer = tolower(answer[place]);
    }

    bool lookForAnswer = false;

    while (!cin.good() || (lookForAnswer == false) || (answer != "exit")) {

        for (list<Item*>::iterator _iterator = insideInventory.begin(); _iterator != insideInventory.end(); _iterator++) {
            if ((*_iterator)->getName() == answer) {
                cout << "Selected " << answer;
                lookForAnswer = true;
            }
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Type an item's name or type \'EXIT\' to exit: ";
        cin >> answer;
    
        for (int place = 0; place < answer.size(); place++) {
            answer = tolower(answer[place]);
        }
    }

    cout << endl;

    return answer;
}

// void InventoryMenu::adjustInventory(string selectedItem) {
//     _inventory.useItem(selectedItem);
// }

/*void InventoryMenu::setInventory(Inventory* inv) {
    _inventory = inv;
}*/