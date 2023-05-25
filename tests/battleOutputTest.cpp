// #include "../source/battleOutput.cpp"
#include "../source/character.cpp"
// using namespace std;

// int main() {
//     BattleOutput battle;
//     Character* M = new Character("Momotaro",20,10,10);
//     M->setHP(13);
//     battle.printHealthBar(M->getName(), M->getHP(), M->getMaxHP());
    
//     return 0;
// }

/*void out(int color, int emphasis, string text) const;
    void doubleLineBreak() const;
    void singleLineBreak() const;
    void printHealthBar(string name, int currHealth, int maxHealth) const;   */
/* TEXT COLOR CODES
        red         31
        green       32
        yellow      33
        blue        34
        purple      35
        cyan        36
        white       37

        EMPHASIS CODES
        bold        1
        italics     3
        underline   4
        strikethrough 9 */
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
    // M->setHP(13);
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
