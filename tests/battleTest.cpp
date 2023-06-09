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
    Enemy *testEnemy = new Enemy("BOSS", 50, 15, 20);
    Momotaro *testMomotaro = new Momotaro();
    Dog *testDog = new Dog();
    Battle battle;
    BattleOutput battleOutput;
    battleOutput.printHealthBar("BOSS",testEnemy->getHP(),testEnemy->getMaxHP());
    battleOutput.printHealthBar("MOMOTARO",testMomotaro->getHP(),testMomotaro->getMaxHP());
    battleOutput.printHealthBar("DOG",testDog->getHP(),testDog->getMaxHP());
    battle.damageTaken(testMomotaro, testDog, testEnemy);
    battleOutput.singleLineBreak();
    battleOutput.out(31,0,to_string(testEnemy->getAtk()/2) + " DAMAGE dealt to MOMOTARO");
    battleOutput.out(31,0,to_string(testEnemy->getAtk()/2) + " DAMAGE dealt to " + testDog->getName());
    battleOutput.printHealthBar("BOSS",testEnemy->getHP(),testEnemy->getMaxHP());
    battleOutput.printHealthBar("MOMOTARO",testMomotaro->getHP(),testMomotaro->getMaxHP());
    battleOutput.printHealthBar("DOG",testDog->getHP(),testDog->getMaxHP());
    battleOutput.singleLineBreak();
}

TEST(BattleTest, testDamageTaken2) {
    Enemy *testEnemy = new Enemy("BOSS", 50, 15, 20);
    Momotaro *testMomotaro = new Momotaro();
    Dog *testDog = new Dog();
    Battle battle;
    BattleOutput battleOutput;
    battleOutput.printHealthBar("BOSS",testEnemy->getHP(),testEnemy->getMaxHP());
    battleOutput.printHealthBar("MOMOTARO",testMomotaro->getHP(),testMomotaro->getMaxHP());
    battleOutput.printHealthBar("DOG",testDog->getHP(),testDog->getMaxHP());
    battle.damageTaken(testMomotaro, testDog, testEnemy);
    battle.damageTaken(testMomotaro, testDog, testEnemy);
    battleOutput.singleLineBreak();
    battleOutput.out(31,0,to_string(testEnemy->getAtk()) + " DAMAGE dealt to MOMOTARO");
    battleOutput.out(31,0,to_string(testEnemy->getAtk()) + " DAMAGE dealt to " + testDog->getName());
    battleOutput.printHealthBar("BOSS",testEnemy->getHP(),testEnemy->getMaxHP());
    battleOutput.printHealthBar("MOMOTARO",testMomotaro->getHP(),testMomotaro->getMaxHP());
    battleOutput.printHealthBar("DOG",testDog->getHP(),testDog->getMaxHP());
    battleOutput.singleLineBreak();
}

TEST(BattleTest, testDamageDealt) {
    Enemy *testEnemy = new Enemy("BOSS", 50, 15, 20);
    Momotaro *testMomotaro = new Momotaro();
    Monkey *testMonkey = new Monkey();
    Battle battle;
    BattleOutput battleOutput;
    battleOutput.printHealthBar("BOSS",testEnemy->getHP(),testEnemy->getMaxHP());
    battleOutput.printHealthBar("MOMOTARO",testMomotaro->getHP(),testMomotaro->getMaxHP());
    battleOutput.printHealthBar("MONKEY",testMonkey->getHP(),testMonkey->getMaxHP());
    int dmg = battle.damageDealt(testMomotaro, testMonkey, testEnemy);
    battleOutput.singleLineBreak();
    battleOutput.out(34,0,to_string(testEnemy->getAtk()/2) + " DAMAGE dealt to " + testEnemy->getName());
    battleOutput.printHealthBar("BOSS",testEnemy->getHP(),testEnemy->getMaxHP());
    battleOutput.printHealthBar("MOMOTARO",testMomotaro->getHP(),testMomotaro->getMaxHP());
    battleOutput.printHealthBar("MONKEY",testMonkey->getHP(),testMonkey->getMaxHP());
    battleOutput.singleLineBreak();
}

// TEST(BattleTest, callInventoryUseItem) {
//     Inventory *newInventory = new Inventory();
//     newInventory->addItem("name", 1);
//     Battle battle;
//     battle.battleUseItem("name");
// }