#include "../source/enemy.cpp"
#include "../headers/character.hpp"
#include "gtest/gtest.h"

using namespace std;

TEST(EnemyTest, testConstructor) {
    Enemy *testEnemy1 = new Enemy("Boss1", 50, 55, 60);
    EXPECT_EQ("Boss1", testEnemy1->getName());
    EXPECT_EQ(50, testEnemy1->getHP());
    EXPECT_EQ(55, testEnemy1->getAtk());
    EXPECT_EQ(60, testEnemy1->getDef());
}

TEST(EnemyTest, checkConstructorNoThrow) {
    EXPECT_NO_THROW(Enemy *testEnemy2 = new Enemy("Boss2", 55, 60, 70));
}

TEST(EnemyTest, SetHPTest) {
    Enemy *testEnemy3= new Enemy("Boss3", 60, 65, 70);
    testEnemy3->setHP(40);
    EXPECT_EQ(40, testEnemy3->getHP());
}

// upon constructing, hp should equal maxhp
TEST(EnemyTest, TestHPEqual) {
    Enemy *testEnemy4 = new Enemy("Boss4", 55, 60, 70);
    EXPECT_EQ(testEnemy4->getMaxHP(), testEnemy4 ->getHP());
}

TEST(EnemyTest, checkAttackNoThrow) {
    Enemy *testEnemy5 = new Enemy("Boss5", 55, 60, 70);
    Character *testOpponent = new Character("testOpponent1", 55, 60, 30);
    EXPECT_NO_THROW(testEnemy5->attack(testOpponent));
}

TEST(EnemyTest, checkAttackChangeHP) {
    Enemy *testEnemy6 = new Enemy("Boss6", 55, 35, 70);
    Character *testOpponent = new Character("testOpponent2", 55, 60, 30);
    testEnemy6->attack(testOpponent);
    EXPECT_EQ(20, testOpponent->getHP());
}

// int main(int argc, char **argv) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }
