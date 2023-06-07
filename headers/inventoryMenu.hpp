#ifndef INVENTORYMENU_HPP
#define INVENTORYMENU_HPP
#include <iostream>
#include <list>
#include <iterator>
#include "../headers/inventory.hpp"
#include "../headers/inventoryOutput.hpp"
using namespace std;

extern Inventory* gameInventory;

class InventoryMenu {
    private:
        // Inventory* _inventory = NULL;
        list<Item*> insideInventory;
        InventoryOutput displayOutput;
        int iterations = 0;
    public:
        // void setInventory(Inventory* inv);
        void displayInventoryMenu();
        string validateAnswer();
        void adjustInventory(string selectedItem);
};

#endif