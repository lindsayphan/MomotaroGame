#include <iostream>
#include "headers/inventory.hpp"
#include "headers/inventoryMenu.hpp"
using namespace std;

int main() {

    Inventory _inventory;
    _inventory.addItem("poptart", 2, 1);
    _inventory.addItem("pretzel", 3, 3);
    _inventory.addItem("popcorn", 1, 1);

    InventoryMenu menu;
    menu.setInventory(&_inventory);
    menu.displayInventoryMenu();

    _inventory.addItem("pretzel", 3, 5);
    menu.setInventory(&_inventory);
    menu.displayInventoryMenu();

    return 0;
}