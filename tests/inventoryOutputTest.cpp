#include "../source/inventoryOutput.cpp"
#include "../source/inventory.cpp"

#include "gtest/gtest.h"
#include <vector>

TEST(InventoryOutputTest, testConstructor) {
    InventoryOutput output;
    // vector<Item> inventory;
    Inventory *inventory = new Inventory();
    
    output.printInventory(inventory);
}