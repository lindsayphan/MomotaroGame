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
    if (currHealth <= 0) {
        out(30, 9, name);
    } else {
        int remaining = maxHealth - currHealth;
        int copyOfCurrHealth = currHealth;
        string healthBar = "\t[";
        while (copyOfCurrHealth > 0) {
            healthBar = healthBar + "|";
            copyOfCurrHealth = copyOfCurrHealth - 2;
        }

        for (int i = 0; i < remaining/2; i++) {
            healthBar = healthBar + "-";
        }

        int color = 0;
        if (currHealth < maxHealth/4) {
            color = 31;
        } else if (currHealth < maxHealth/2) {
            color = 33;
        } else {
            color = 32;
        }

        healthBar = healthBar + "]  (" + to_string(currHealth) + "/" + to_string(maxHealth) + ")";
        
        cout << name;
        out(color, 0, healthBar);
    }
}