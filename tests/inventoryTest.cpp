#include "../source/inventory.cpp"
#include "gtest/gtest.h"

TEST(inventoryTest, helperCheck1) {
  Inventory *newInventory = new Inventory();
  EXPECT_FALSE(newInventory->alreadyHave("item"));
}

TEST(inventoryTest, helperCheck2) {
  Inventory *newInventory = new Inventory();
  newInventory->addItem("name", 3, 2);
  EXPECT_TRUE(newInventory->alreadyHave("name"));
}

TEST(inventoryTest, helperCheck3) {
  Inventory *newInventory = new Inventory();
  newInventory->addItem("name1", 3, 2);
  newInventory->addItem("name2", 3, 2);
  newInventory->addItem("name3", 3, 2);
  EXPECT_FALSE(newInventory->alreadyHave("name"));
  EXPECT_TRUE(newInventory->alreadyHave("name2"));
}

TEST(inventoryTest, helperCheck4) {
  Inventory *newInventory = new Inventory();
  newInventory->addItem("name", 3, 1);
  newInventory->useItem("name");
  EXPECT_FALSE(newInventory->alreadyHave("name"));
}

TEST(inventoryTest, helperCheck5) {
  Inventory *newInventory = new Inventory();
  newInventory->addItem("name", 3, 1);
  newInventory->addItem("name", 3, 1);
  newInventory->useItem("name");
  EXPECT_TRUE(newInventory->alreadyHave("name"));
}