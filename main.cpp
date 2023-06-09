#include <iostream>
#include <limits>
#include "headers/narrative.hpp"
#include "headers/battle.hpp"
#include "headers/battleOutput.hpp"
#include "headers/statsOutput.hpp"
#include "headers/character.hpp"
#include "headers/momotaro.hpp"
#include "headers/enemy.hpp"
#include "headers/dog.hpp"

using namespace std;

Inventory* gameInventory = new Inventory();

bool startOverPrompt();

int main() {

    bool gameIsPlaying = true;

    while (gameIsPlaying) {
        Narrative storyline;
        bool battleLost = false;
        bool repeat = true;

        storyline.beginning();

        // BATTLE 1
        BattleOutput fightOutput;
        Battle fight;
        Enemy *enemy = new Enemy("SMALL ONI", 30, 8, 5);
        Momotaro *momotaro = new Momotaro();
        Dog *dog = new Dog();
        while (enemy->getHP() != 0) {
            fightOutput.doubleLineBreak();
            fightOutput.printHealthBar(enemy->getName(), enemy->getHP(), enemy->getMaxHP());
            fightOutput.printHealthBar(momotaro->getName(), momotaro->getHP(), momotaro->getMaxHP());
            fightOutput.printHealthBar(dog->getName(), dog->getHP(), dog->getMaxHP());
            fightOutput.singleLineBreak();
            fightOutput.printMomotaroChoices();
            cout << "Choose action for " << momotaro->getName() << ": ";
            string choice;
            cin >> choice;
            cout << endl;
            int totalDamageDealt = 0;
            int totalDamageTaken = enemy->getAtk();
            if (choice == "ATTACK") {
                totalDamageDealt += momotaro->getAtk();
            } else if (choice == "DEFEND") {
                totalDamageTaken -= momotaro->getDef();
            } else if (choice == "HEAL") {
                // FIXME
            } else if (choice == "STATS") {
                StatsOutput stats;
                stats.printStats(momotaro, dog);
            } else {
                cout << "Invalid action, turn forfeited" << endl;
            }

            fightOutput.printCompanionChoices();
            cout << "Choose action for " << dog->getName() << ": ";
            cin >> choice;
            cout << endl;
            if (choice == "ATTACK") {
                totalDamageDealt += dog->getAtk();
            } else if (choice == "DEFEND") {
                totalDamageTaken -= dog->getDef();
            } else if (choice == "SWAP") {
                // FIXME
            } else if (choice == "STATS") {
                StatsOutput stats;
                stats.printStats(momotaro, dog);
            } else {
                cout << "Invalid action, turn forfeited" << endl;
            }

            fight.damageDealt(enemy,totalDamageDealt);
            fightOutput.out(32,0, to_string(totalDamageDealt) + " DAMAGE dealt to " + enemy->getName());
            fightOutput.singleLineBreak();
            fight.damageTaken(momotaro, dog, enemy);
            fightOutput.out(31,0, to_string(totalDamageTaken/2) + " DAMAGE dealt to " + momotaro->getName());
            fightOutput.out(31,0, to_string(totalDamageTaken/2) + " DAMAGE dealt to " + dog->getName());       
            // FIXME: CHECK IF LOOP WORKS CORRECTLY
            fightOutput.doubleLineBreak();
        }
        // BATTLE 1 [battleLost = battle()];

        // storyline.middle();
        // // BATTLE 2 [battleLost = battle()];
        // if (battleLost == true) {
        //     repeat = startOverPrompt();
        //         if (!repeat) {
        //             cout << "Thank you for playing!" << endl << endl;
        //             gameIsPlaying = false;
        //             continue;
        //         }
        // }
    
        // storyline.finale();
        // // FINAL BATTLE [battleLost = battle()];
        // if (battleLost == true) {
        //     repeat = startOverPrompt();
        //         if (!repeat) {
        //             cout << "Thank you for playing!" << endl << endl;
        //             gameIsPlaying = false;
        //             continue;
        //         }
        // }

        // storyline.epilogue();
        repeat = startOverPrompt();
            if (!repeat) {
                cout << "Thank you for playing!" << endl << endl;
                gameIsPlaying = false;
                continue;
            }
    
        delete gameInventory;
        gameInventory = new Inventory();
        // gameInventory->deleteInventory();
    }
    
    delete gameInventory;
    
    return 0;
}

bool startOverPrompt() {
    string answer;

    cout << "Would you like to play again?   ";
    cin >> answer;
    answer = tolower(answer[0]);

    while (!cin.good() || (answer[0] != 'y' && answer[0] != 'n')) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Would you like to play again?   ";
        cin >> answer;
        answer = tolower(answer[0]);
    }

    cout << endl;

    if (answer[0] == 'y') {
        return true;
    }

    else {
        return false;
    }
}