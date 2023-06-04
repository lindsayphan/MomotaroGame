#include <iostream>
#include <iterator>
#include "../headers/inventoryOutput.hpp"
using namespace std;

void InventoryOutput::printInventory(list<Item*> inv) {
    cout << "============== INVENTORY ===============" << endl; 
    list<Item*>::iterator _iterator;
    int placeCounter = 1;

    for (_iterator = inv.begin(); _iterator != inv.end(); _iterator++) {
        cout << placeCounter << ") ";
        cout << (*_iterator)->getName() << "\t" << (*_iterator)->getCount() << endl;
        placeCounter++;
    }
        
    cout << "----------------------------------------" << endl;
    cout  << "Type an item's name or type \'EXIT\' to exit: ";
}