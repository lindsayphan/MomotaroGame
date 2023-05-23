#include "../source/difficulty.cpp"
#include "gtest/gtest.h"

TEST(DifficultyTest, testConstructor1) {    // pass
    Difficulty *lvlTest = new Difficulty();
    EXPECT_EQ(0, lvlTest->getLvl());
}

TEST(DifficultyTest, testConstructor2) {    // fail
    Difficulty *lvlTest = new Difficulty();
    EXPECT_EQ(3, lvlTest->getLvl());
}

TEST(DifficultyTest, testSetLvl1) {    // should pass if input is 1, fail otherwise
    Difficulty *lvlTest = new Difficulty();
    lvlTest->setLvl();
    EXPECT_EQ(1, lvlTest->getLvl());
}

TEST(DifficultyTest, testSetLvl2) {    // should pass if input is 2, fail otherwise
    Difficulty *lvlTest = new Difficulty();
    lvlTest->setLvl();
    EXPECT_EQ(2, lvlTest->getLvl());
}