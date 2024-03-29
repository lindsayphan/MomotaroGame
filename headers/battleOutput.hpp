#ifndef BATTLEOUTPUT_HPP
#define BATTLEOUTPUT_HPP
#include "battle.hpp"
#include <string>
using namespace std;

class BattleOutput {
  public:
    void out(int color, int emphasis, string text) const;
    void doubleLineBreak() const;
    void singleLineBreak() const;
    void printHealthBar(string name, int currHealth, int maxHealth) const;
    void printMomotaroChoices();
    void printCompanionChoices();
    // void damageTakenMessage() const;
};

#endif