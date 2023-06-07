#include <iostream>
#include "../headers/inventory.hpp"
using namespace std;

// g++ -g -O0 main.cpp source/difficulty.cpp source/narrative.cpp source/choices.cpp source/choicesDog.cpp source/choicesMonkey.cpp source/choicesBird.cpp source/storyDog.cpp source/storyMonkey.cpp source/storyBird.cpp source/finalNarrations.cpp source/item.cpp source/inventory.cpp source/inventoryMenu.cpp source/inventoryOutput.cpp -o narrative
// ./narrative
// valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./narrative

Inventory::~Inventory() {
    // for (int i = 0; i < inventory.size(); ++i) {
    //     delete inventory[];
    // }
}

void Inventory::deleteInventory() {
    for (list<Item*>::iterator _iterator = inventory.begin(); _iterator != inventory.end(); ) {
        _iterator = inventory.erase(_iterator);
    }
}

list<Item*> Inventory::getInventory() const {
    return this->inventory;
}

bool Inventory::alreadyHave(string itemName) {
    if (inventory.empty() == 1) {
        return false;
    }

    else {
    
        for (_iterator = inventory.begin(); _iterator != inventory.end(); _iterator++) {
            if ((*_iterator)->getName() == itemName) {
                return true;
            }
        }

        return false;
        
    }
}

void Inventory::addItem(string itemName, int itemCount) {
    bool alreadyAvailable = alreadyHave(itemName);

    if (alreadyAvailable == false) {
        Item *newItem = new Item(itemName, itemCount);
        inventory.push_back(newItem);
    }

    else {
        for (_iterator = inventory.begin(); _iterator != inventory.end(); _iterator++) {
            if ((*_iterator)->getName() == itemName) {
                (*_iterator)->addCount(itemCount);
            }
        }   
    }

    cout << "+" << itemCount << " " << itemName << " to inventory!" << endl << endl;
}

void Inventory::useItem(string itemName) {

    // FIXME: CALL HEALTH
    
    list<Item*>::iterator _placeHolder = inventory.begin();
    int placeCounter = 0;

    for (_iterator = inventory.begin(); _iterator != inventory.end(); _iterator++) {
        
        placeCounter++;

        if ((*_iterator)->getName() == itemName) {
            (*_iterator)->subtractCount();

            if ((*_iterator)->getCount() == 0) {
                placeCounter--;
                advance(_placeHolder, placeCounter);
                _iterator = inventory.erase(_placeHolder);
            }

            cout << "-1 " << itemName << " from inventory." << endl << endl;
        }
    } 
}