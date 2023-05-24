#include <sstream>
#include "../source/difficulty.cpp"
#include "gtest/gtest.h"

TEST(DifficultyTest, testConstructor1) {
    Difficulty *lvlTest = new Difficulty();
    EXPECT_EQ(0, lvlTest->getLvl());
}

TEST(DifficultyTest, testSetLvl1) {
    Difficulty *lvlTest = new Difficulty();
    stringstream in("1");
    lvlTest->setLvl(in);
    EXPECT_EQ(1, lvlTest->getLvl());
}

TEST(DifficultyTest, testSetLvl2) {
    Difficulty *lvlTest = new Difficulty();
    stringstream in("2");
    lvlTest->setLvl(in);
    EXPECT_EQ(2, lvlTest->getLvl());
}