#include <iostream>
#include "../headers/battleOutput.hpp"
#include <string>
using namespace std;

void BattleOutput::out(int color, int emphasis, string text) const {
    cout << "\033[" + to_string(emphasis) + ";" + to_string(color) + "m" + text + "\033[0m\n";
}

void BattleOutput::doubleLineBreak() const {
    cout << endl << "==============================================================" << endl;
}

void BattleOutput::singleLineBreak() const {
    cout << endl << "--------------------------------------------------------------" << endl;
}

void BattleOutput::printHealthBar(string name, int currHealth, int maxHealth) const {
    int remaining = maxHealth - currHealth;
    if (remaining <= 0) {
        out(37, 9, name);
    } else {
        string healthBar = name + "\t[";
        while (currHealth > 0) {
            healthBar = healthBar + "|";
            if (currHealth == 1) {
                healthBar = healthBar + "/";
            }
            currHealth = currHealth - 2;
        }

        for (int i = 0; i < remaining; i++) {
            healthBar = healthBar + "-";
        }

        int color = 0;
        if (remaining < maxHealth/4) {
            color = 31;
        } else if (remaining < maxHealth/3) {
            color = 33;
        } else {
            color = 32;
        }

        healthBar = healthBar + "]";
        
        out(color, 0, healthBar);
    }
}