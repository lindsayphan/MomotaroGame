#ifndef INVENTORYMENU_HPP
#define INVENTORYMENU_HPP
#include "../headers/inventory.hpp"
#include "../headers/inventoryOutput.hpp"
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

class InventoryMenu {
    private:
        Inventory* _inventory = NULLPTR;
        
        // list<Item*> insideInventory = _inventory.getInventory();
        InventoryOutput displayOutput;
    public:
        void displayInventoryMenu();
        string validateAnswer();
        //void setInventory(Inventory* inv);
        // void adjustInventory(string selectedItem);
};

#endif