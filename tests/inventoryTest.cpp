#include "../source/inventory.cpp"
#include "../headers/momotaro.hpp"
#include "../headers/dog.hpp"
#include "../headers/monkey.hpp"
#include "../headers/bird.hpp"
#include "gtest/gtest.h"

Momotaro momotaro = Momotaro();
extern Dog dog;
extern Monkey monkey;
extern Bird bird;

TEST(inventoryTest, helperCheck1) {
  Inventory *newInventory = new Inventory();
  EXPECT_FALSE(newInventory->alreadyHave("item"));
}

TEST(inventoryTest, helperCheck2) {
  Inventory *newInventory = new Inventory();
  newInventory->addItem("name", 2);
  EXPECT_TRUE(newInventory->alreadyHave("name"));
}

TEST(inventoryTest, helperCheck3) {
  Inventory *newInventory = new Inventory();
  newInventory->addItem("name1", 2);
  newInventory->addItem("name2", 3);
  newInventory->addItem("name3", 3);
  EXPECT_FALSE(newInventory->alreadyHave("name"));
  EXPECT_TRUE(newInventory->alreadyHave("name2"));
}

TEST(inventoryTest, helperCheck4) {
  Inventory *newInventory = new Inventory();
  newInventory->addItem("name", 1);
  newInventory->useItem("name");
  EXPECT_FALSE(newInventory->alreadyHave("name"));
}

TEST(inventoryTest, helperCheck5) {
  Inventory *newInventory = new Inventory();
  newInventory->addItem("name", 1);
  newInventory->addItem("name", 3);
  newInventory->useItem("name");
  EXPECT_TRUE(newInventory->alreadyHave("name"));
}