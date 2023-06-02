#include <iostream>
#include "headers/inventory.hpp"
#include "headers/inventoryOutput.hpp"
#include "headers/inventoryMenu.hpp"
using namespace std;

int main() {

    Inventory _inventory;
    _inventory.addItem("poptart", 2, 1);
    _inventory.addItem("pretzel", 3, 3);
    _inventory.addItem("popcorn", 1, 1);

    InventoryMenu menu;
    menu.setInventory(&_inventory);
    // menu.displayInventoryMenu();

    InventoryOutput inventory_out;
    inventory_out.printInventory(_inventory.getInventory());
    
    _inventory.useItem("popcorn");
    _inventory.addItem("pretzel", 3, 5);
    inventory_out.printInventory(_inventory.getInventory());

    _inventory.useItem("pretzel");
    inventory_out.printInventory(_inventory.getInventory());

    return 0;
}