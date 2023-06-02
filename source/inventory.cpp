#include <iostream>
#include "../headers/inventory.hpp"
using namespace std;

list<Item*> Inventory::getInventory() const {
    return inventory;
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

void Inventory::addItem(string itemName, int healthBoost, int itemCount) {
    bool alreadyAvailable = alreadyHave(itemName);

    if (alreadyAvailable == false) {
        Item *newItem = new Item(itemName, healthBoost, itemCount);
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

