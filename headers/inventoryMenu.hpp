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
        Inventory* _inventory = NULL;
        list<Item*> insideInventory;
        InventoryOutput displayOutput;
    public:
        void setInventory(Inventory* inv);
        void displayInventoryMenu();
        string validateAnswer();
        void adjustInventory(string selectedItem);
};

#endif