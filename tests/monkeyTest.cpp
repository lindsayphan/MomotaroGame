#include "../source/monkey.cpp"
#include "../source/enemy.cpp"
#include "gtest/gtest.h"

TEST(MonkeyTest, constructorTest) {
    Monkey *testMonkey = new Monkey("Monkey", 10, 10, 7, 3);
    EXPECT_EQ("Monkey",testMonkey->getName());
    EXPECT_EQ(10,testMonkey->getHP());
    EXPECT_EQ(10,testMonkey->getMaxHP());
    EXPECT_EQ(7,testMonkey->getAtk());
    EXPECT_EQ(3,testMonkey->getDef());
}

TEST(MonkeyTest, constructorTest2) {
    Monkey *testMonkey = new Monkey("Monkey", 5, 10, 7, 3);
    EXPECT_EQ("Monkey",testMonkey->getName());
    EXPECT_EQ(5,testMonkey->getHP());
    EXPECT_EQ(10,testMonkey->getMaxHP());
    EXPECT_EQ(7,testMonkey->getAtk());
    EXPECT_EQ(3,testMonkey->getDef());
}

TEST(MonkeyTest, callConstructor) {
    EXPECT_NO_THROW(Monkey *testMonkey = new Monkey("Monkey", 10, 10, 7, 3));
}

TEST(MonkeyTest, callConstructor2) {
    EXPECT_NO_THROW(Monkey *testMonkey = new Monkey("Monkey", 8, 10, 7, 3));
}

TEST(MonkeyTest, testDefense) {
    Monkey *m = new Monkey("Monkey", 8, 10, 7, 3);
    m->defend(3);
    EXPECT_EQ(7, m->getAtk());
}

TEST(MonkeyTest, testDefense2) {
    Monkey *m = new Monkey("Monkey", 5, 10, 7, 3); 
    m->defend(9);
    EXPECT_EQ(13, m->getAtk());
}

TEST(MonkeyTest, testAttack) {
    Monkey *m = new Monkey("Monkey", 10, 10, 7, 3);
    Enemy *enemy = new Enemy("ONI", 50, 5, 0);
    m->attack(enemy);
    EXPECT_EQ(43, enemy->getHP());
}

TEST(MonkeyTest, testAttack2) {
    Monkey *m = new Monkey("Monkey", 10, 10, 7, 3);
    Enemy *enemy = new Enemy("ONI", 20, 5, 0);
    m->attack(enemy);
    EXPECT_EQ(13, enemy->getHP());
}