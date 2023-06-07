#include <iostream>
#include "../source/item.cpp"
#include "gtest/gtest.h"

TEST(itemTest, itemConstructor1) {
    Item *newItem = new Item("name1", 1);
    EXPECT_EQ("name1", newItem->getName());
    EXPECT_EQ(1, newItem->getCount());
}

TEST(itemTest, itemConstructor2) {
    Item *newItem = new Item("name2", 5);
    EXPECT_EQ("name2", newItem->getName());
    EXPECT_EQ(5, newItem->getCount());
}

TEST(itemTest, itemSubtractCount1) {
    Item *newItem = new Item("name", 3);
    newItem->subtractCount();
    EXPECT_EQ(2, newItem->getCount());
}

TEST(itemTest, itemSubtractCount2) {
    Item *newItem = new Item("name", 10);
    newItem->subtractCount();
    EXPECT_EQ(9, newItem->getCount());
}

TEST(itemTest, itemAddCount1) {
    Item *newItem = new Item("name", 3);
    newItem->addCount(2);
    EXPECT_EQ(5, newItem->getCount());
}

TEST(itemTest, itemAddCount2) {
    Item *newItem = new Item("name", 4);
    newItem->addCount(3);
    EXPECT_EQ(7, newItem->getCount());
}

// int main(int argc, char **argv) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }