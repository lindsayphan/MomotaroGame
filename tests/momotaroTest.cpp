#include "../source/momotaro.cpp"
#include "../source/enemy.cpp"
#include "gtest/gtest.h"

TEST(MomotaroTest, constructorTest) {
    Momotaro *testCharacter = new Momotaro("Momotaro", 20, 20, 10, 5);
    EXPECT_EQ("Momotaro",testCharacter->getName());
    EXPECT_EQ(20,testCharacter->getHP());
    EXPECT_EQ(20,testCharacter->getMaxHP());
    EXPECT_EQ(10,testCharacter->getAtk());
    EXPECT_EQ(5,testCharacter->getDef());
}

TEST(MomotaroTest, constructorTest2) {
    Momotaro *testCharacter = new Momotaro("Momotaro", 5, 20, 10, 5);
    EXPECT_EQ("Momotaro",testCharacter->getName());
    EXPECT_EQ(5,testCharacter->getHP());
    EXPECT_EQ(20,testCharacter->getMaxHP());
    EXPECT_EQ(10,testCharacter->getAtk());
    EXPECT_EQ(5,testCharacter->getDef());
}

TEST(MomotaroTest, callConstructor) {
    EXPECT_NO_THROW(Momotaro *testCharacter = new Momotaro("Momotaro", 20, 20, 10, 5));
}

TEST(MomotaroTest, callConstructor2) {
    EXPECT_NO_THROW(Momotaro *testCharacter = new Momotaro("Momotaro", 10, 20, 10, 5));
}

TEST(MomotaroTest, testHealFunc) {
    Momotaro *c = new Momotaro("Momotaro", 10, 20, 10, 5);
    c->heal("green tea");
    EXPECT_EQ(20, c->getHP());
}

TEST(MomotaroTest, testHealFunc2) {
    Momotaro *c = new Momotaro("Momotaro", 5, 20, 10, 5);
    c->heal("rice cakes");
    EXPECT_EQ(20, c->getHP());
}

TEST(MomotaroTest, testDefense) {
    Momotaro *m = new Momotaro("Momotaro", 10, 20, 10, 5); 
    m->defend(8);
    EXPECT_EQ(13, m->getAtk());
}

TEST(MomotaroTest, testDefense2) {
    Momotaro *m = new Momotaro("Momotaro", 10, 20, 10, 5); 
    m->defend(10);
    EXPECT_EQ(15, m->getAtk());
}

TEST(MomotaroTest, testAttack) {
    Momotaro *m = new Momotaro("Momotaro", 20, 20, 10, 5);
    Enemy *enemy = new Enemy("ONI", 50, 5, 0);
    m->attack(enemy);
    EXPECT_EQ(40, enemy->getHP());
}

TEST(MomotaroTest, testAttack2) {
    Momotaro *m = new Momotaro("Momotaro", 20, 20, 10, 5);
    Enemy *enemy = new Enemy("ONI", 30, 5, 0);
    m->attack(enemy);
    EXPECT_EQ(20, enemy->getHP());
}

TEST(MomotaroTest, testSetAndGetAnimal) {
    Momotaro *m = new Momotaro("Momotaro", 20, 20, 10, 5);
    m->setAnimal("Dog");
    EXPECT_EQ("Dog", m->getAnimal());
}

TEST(MomotaroTest, testSetAndGetAnimal2) {
    Momotaro *m = new Momotaro("Momotaro", 20, 20, 10, 5);
    m->setAnimal("Bird");
    m->setAnimal("Monkey");
    EXPECT_EQ("Monkey", m->getAnimal());
}