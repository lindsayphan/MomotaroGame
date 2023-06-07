#include "../source/battle.cpp"
#include "../headers/battleOutput.hpp"
#include "../headers/character.hpp"
#include "../headers/dog.hpp"
#include "../headers/monkey.hpp"
#include "../headers/bird.hpp"
#include "../headers/momotaro.hpp"
#include "gtest/gtest.h"

using namespace std;

TEST(BattleTest, testDamageTaken) {
    Enemy *testEnemy = new Enemy("BOSS", 50, 10, 20);
    Momotaro *testMomotaro = new Momotaro();
    Dog *testDog = new Dog();
    Battle battle;
    BattleOutput battleOutput;
    battleOutput.printHealthBar("BOSS",testEnemy->getHP(),testEnemy->getMaxHP());
    battleOutput.printHealthBar("MOMOTARO",testMomotaro->getHP(),testMomotaro->getMaxHP());
    battleOutput.printHealthBar("DOG",testDog->getHP(),testDog->getMaxHP());
    battle.damageTaken(testMomotaro, testDog, testEnemy);
}