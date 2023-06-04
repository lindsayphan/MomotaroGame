#include "../source/character.cpp"
#include "gtest/gtest.h"

TEST(CharacterTest, testConstructor) {
    Character *testCharacter = new Character("Name", 10, 5, 3);
    EXPECT_EQ("Name",testCharacter->getName());
    EXPECT_EQ(10,testCharacter->getHP());
    EXPECT_EQ(5,testCharacter->getAtk());
    EXPECT_EQ(3,testCharacter->getDef());
}

TEST(CharacterTest, checkConstructorNoThrow) {
    EXPECT_NO_THROW(Character *testCharacter = new Character("Name", 100, 50, 30));
}

TEST(CharacterTest, SetNameTest) {
    Character *testCharacter = new Character();
    testCharacter->setHP(20);
    EXPECT_EQ(20, testCharacter->getHP());
}

// upon constructing, hp should equal maxhp
TEST(CharacterTest, TestHPEqual) {
    Character *testCharacter = new Character();
    EXPECT_EQ(testCharacter->getMaxHP(), testCharacter->getHP());
}

// int main(int argc, char **argv) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }
