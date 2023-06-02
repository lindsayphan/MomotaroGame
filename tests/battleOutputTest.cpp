#include "../source/character.cpp"
#include "../source/battleOutput.cpp"
#include "gtest/gtest.h"

// check in terminal if description matches appearance
TEST(battleOutputTest, testCustomText) {
    BattleOutput battle;
    battle.out(31, 3, "italicized red");
    battle.out(34, 9, "strikethough blue");
    battle.out(36, 1, "bold cyan");
    battle.out(35, 4, "underlined purple");
}

TEST(battleOutputTest, testFullHealthBar) {
    BattleOutput battle;
    Character* M = new Character("Momotaro",20,10,10);
    battle.printHealthBar(M->getName(), M->getHP(), M->getMaxHP());
}

TEST(battleOutputTest, testHighHealthBar) {
    BattleOutput battle;
    Character* M = new Character("Momotaro",20,10,10);
    M->setHP(16);
    battle.printHealthBar(M->getName(), M->getHP(), M->getMaxHP());
}

TEST(battleOutputTest, testLowHealthBar) {
    BattleOutput battle;
    Character* M = new Character("Momotaro",20,10,10);
    M->setHP(7);
    battle.printHealthBar(M->getName(), M->getHP(), M->getMaxHP());
}

TEST(battleOutputTest, testVeryLowHealthBar) {
    BattleOutput battle;
    Character* M = new Character("Momotaro",20,10,10);
    M->setHP(3);
    battle.printHealthBar(M->getName(), M->getHP(), M->getMaxHP());
}

TEST(battleOutputTest, testZeroHealthBar) {
    BattleOutput battle;
    Character* M = new Character("Momotaro",20,10,10);
    M->setHP(0);
    battle.printHealthBar(M->getName(), M->getHP(), M->getMaxHP());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
