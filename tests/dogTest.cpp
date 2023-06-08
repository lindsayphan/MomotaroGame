#include "../source/dog.cpp"
#include "../source/enemy.cpp"
#include "gtest/gtest.h"

TEST(DogTest, constructorTest) {
    Dog *testDog = new Dog("Dog", 10, 10, 5, 5);
    EXPECT_EQ("Dog",testDog->getName());
    EXPECT_EQ(10,testDog->getHP());
    EXPECT_EQ(10,testDog->getMaxHP());
    EXPECT_EQ(5,testDog->getAtk());
    EXPECT_EQ(5,testDog->getDef());
}

TEST(DogTest, constructorTest2) {
    Dog *testDog = new Dog("Dog", 2, 10, 5, 5);
    EXPECT_EQ("Dog",testDog->getName());
    EXPECT_EQ(2,testDog->getHP());
    EXPECT_EQ(10,testDog->getMaxHP());
    EXPECT_EQ(5,testDog->getAtk());
    EXPECT_EQ(5,testDog->getDef());
}

TEST(DogTest, callConstructor) {
    EXPECT_NO_THROW(Dog *testDog = new Dog("Dog", 10, 10, 5, 5));
}

TEST(DogTest, callConstructor2) {
    EXPECT_NO_THROW(Dog *testDog = new Dog("Dog", 3, 10, 5, 5));
}

TEST(DogTest, testDefense) {
    Dog *d = new Dog("Dog", 5, 10, 5, 5);
    d->defend(7);
    EXPECT_EQ(7, d->getAtk());
}

TEST(DogTest, testDefense2) {
    Dog *d = new Dog("Dog", 8, 10, 5, 5); 
    d->defend(10);
    EXPECT_EQ(10, d->getAtk());
}

TEST(DogTest, testAttack) {
    Dog *d = new Dog("Dog", 10, 10, 5, 5);
    Enemy *enemy = new Enemy("ONI", 50, 5, 0);
    d->attack(enemy);
    EXPECT_EQ(45, enemy->getHP());
}

TEST(DogTest, testAttack2) {
    Dog *d = new Dog("Dog", 10, 10, 3, 3);
    Enemy *enemy = new Enemy("ONI", 20, 5, 0);
    d->attack(enemy);
    EXPECT_EQ(17, enemy->getHP());
}