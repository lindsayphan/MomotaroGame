#include "../source/battle.cpp"
#include "../source/battleOutput.cpp"
#include "../source/dog.cpp"
#include "../source/monkey.cpp"
#include "../source/bird.cpp"
#include "../source/momotaro.cpp"
#include "gtest/gtest.h"

using namespace std;

TEST(BattleTest, testDamageTaken) {
    Enemy *testEnemy = new Enemy("BOSS", 50, 10, 20);
    Momotaro *testMomotaro = new Momotaro("MOMOTARO", 20, 10, 10);
    Dog *testDog = new Dog("DOG", 10,5,5);
    Battle battle;
    BattleOutput battleOutput;
    battleOutput.printHealthBar("BOSS",testEnemy->getHP(),testEnemy->getMaxHP());
    battleOutput.printHealthBar("MOMOTARO",testMomotaro->getHP(),testMomotaro->getMaxHP());
    battleOutput.printHealthBar("DOG",testDog->getHP(),testDog->getMaxHP());
    battle.damageTaken(testMomotaro, testDog, testEnemy);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
