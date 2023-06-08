#include "../source/bird.cpp"
#include "../source/enemy.cpp"
#include "gtest/gtest.h"

TEST(BirdTest, constructorTest) {
    Bird *testBird = new Bird("Bird", 10, 10, 3, 3);
    EXPECT_EQ("Bird",testBird->getName());
    EXPECT_EQ(10,testBird->getHP());
    EXPECT_EQ(10,testBird->getMaxHP());
    EXPECT_EQ(3,testBird->getAtk());
    EXPECT_EQ(3,testBird->getDef());
}

TEST(BirdTest, constructorTest2) {
    Bird *testBird = new Bird("Bird", 7, 10, 3, 3);
    EXPECT_EQ("Bird",testBird->getName());
    EXPECT_EQ(7,testBird->getHP());
    EXPECT_EQ(10,testBird->getMaxHP());
    EXPECT_EQ(3,testBird->getAtk());
    EXPECT_EQ(3,testBird->getDef());
}

TEST(BirdTest, callConstructor) {
    EXPECT_NO_THROW(Bird *testBird = new Bird("Bird", 10, 10, 3, 3));
}

TEST(BirdTest, callConstructor2) {
    EXPECT_NO_THROW(Bird *testBird = new Bird("Bird", 5, 10, 3, 3));
}

TEST(BirdTest, testDefense) {
    Bird *b = new Bird("Bird", 5, 10, 3, 3);
    b->defend(7);
    EXPECT_EQ(7, b->getAtk());
}

TEST(BirdTest, testDefense2) {
    Bird *b = new Bird("Bird", 7, 10, 3, 3); 
    b->defend(10);
    EXPECT_EQ(10, b->getAtk());
}

TEST(BirdTest, testAttack) {
    Bird *b = new Bird("Bird", 10, 10, 3, 3);
    Enemy *enemy = new Enemy("ONI", 50, 5, 0);
    b->attack(enemy);
    EXPECT_EQ(47, enemy->getHP());
}

TEST(BirdTest, testAttack2) {
    Bird *b = new Bird("Bird", 10, 10, 3, 3);
    Enemy *enemy = new Enemy("ONI", 30, 5, 0);
    b->attack(enemy);
    EXPECT_EQ(27, enemy->getHP());
}