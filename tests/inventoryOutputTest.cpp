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

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
