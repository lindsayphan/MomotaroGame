#include <iostream>
#include <limits>
#include "headers/narrative.hpp"
#include "headers/battle.hpp"
#include "headers/afterBattles.hpp"
#include "headers/inventoryMenu.hpp"
#include "headers/battleOutput.hpp"
#include "headers/statsOutput.hpp"
#include "headers/character.hpp"
#include "headers/momotaro.hpp"
#include "headers/enemy.hpp"
#include "headers/dog.hpp"
#include "headers/monkey.hpp"
#include "headers/bird.hpp"
#include "headers/inventoryMenu.hpp"
using namespace std;

Inventory* gameInventory = new Inventory();
Momotaro* momotaro = new Momotaro();
Dog* dog = new Dog();
Monkey* monkey = new Monkey();
Bird* bird = new Bird();
bool startOverPrompt();
void doBattle(Momotaro *momotaro, Character *companion, Enemy *enemy);

int main() {
    cout << "Please press the CAPS LOCK key" << endl << endl;
    AfterBattles additionalNarrations;
    bool gameIsPlaying = true;

    while (gameIsPlaying) {
        Narrative storyline;
        bool battleLost = false;
        bool repeat = true;

        storyline.beginning();

        // BATTLE 1
        Enemy *enemy1 = new Enemy("SMALL ONI", 30, 8, 5);
        // Momotaro *momotaro = new Momotaro();
        // Dog *dog = new Dog();

        while (enemy1->getHP() > 0 && momotaro->getHP() > 0) {
            doBattle(momotaro, dog, enemy1);
        }

        delete enemy1;
        
        if (momotaro->getHP() <= 0) {
            cout << endl << "MOMOTARO DIED" << endl << endl;
            battleLost = true;
        }

        additionalNarrations.afterBattleNarrations(battleLost);

        if (battleLost == true) {
            repeat = startOverPrompt();
                if (!repeat) {
                    cout << "Thank you for playing!" << endl << endl;
                    gameIsPlaying = false;
                    continue;
                }
        }

        storyline.middle1();
        //BATTLE 2
        Enemy *enemy2 = new Enemy("MEDIUM ONI", 50, 10, 10);
        // Monkey *monkey = new Monkey();

        while (enemy2->getHP() > 0 && momotaro->getHP() > 0) {
            doBattle(momotaro, monkey, enemy2);
        }

       delete enemy2; 
        
        if (momotaro->getHP() <= 0) {
            cout << endl << "MOMOTARO DIED" << endl << endl;
            battleLost = true;
        }

        additionalNarrations.afterBattleNarrations(battleLost);

        if (battleLost == true) {
            repeat = startOverPrompt();
                if (!repeat) {
                    cout << "Thank you for playing!" << endl << endl;
                    gameIsPlaying = false;
                    continue;
                }
        }
    
        storyline.middle2();
        // BATTLE 3
        Enemy *enemy3 = new Enemy("LARGE ONI", 75, 15, 10);
        // Bird *bird = new Bird();

        while (enemy3->getHP() > 0 && momotaro->getHP() > 0) {
            doBattle(momotaro, bird, enemy3);
        }

        delete enemy3;

        if (momotaro->getHP() <= 0) {
            cout << endl << "MOMOTARO DIED" << endl << endl;
            battleLost = true;
        }

        additionalNarrations.afterBattleNarrations(battleLost);

        if (battleLost == true) {
            repeat = startOverPrompt();
                if (!repeat) {
                    cout << "Thank you for playing!" << endl << endl;
                    gameIsPlaying = false;
                    continue;
                }
        }

        storyline.finale();
        // FINAL BATTLE
        Enemy *enemy4 = new Enemy("BOSS ONI", 100, 18, 10);

        while (enemy4->getHP() > 0 && momotaro->getHP() > 0) {
            doBattle(momotaro, bird, enemy4);
        }

        delete enemy4;

        if (momotaro->getHP() <= 0) {
            cout << endl << "MOMOTARO DIED" << endl << endl;
            battleLost = true;
        }

        additionalNarrations.afterFinalBattleNarrations(battleLost);

        if (battleLost == true) {
            repeat = startOverPrompt();
                if (!repeat) {
                    cout << "Thank you for playing!" << endl << endl;
                    gameIsPlaying = false;
                    continue;
                }
        }

        storyline.epilogue();
        repeat = startOverPrompt();
            if (!repeat) {
                cout << "Thank you for playing!" << endl << endl;
                gameIsPlaying = false;
                continue;
            }
    
        delete gameInventory;
        gameInventory = new Inventory();
        delete momotaro;
        momotaro = new Momotaro();
        delete dog;
        dog = new Dog();
        delete monkey;
        monkey = new Monkey();
        delete bird;
        bird = new Bird();
        // gameInventory->deleteInventory();
    }
    
    delete momotaro;
    delete dog;
    delete monkey;
    delete bird;
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

void doBattle(Momotaro *momotaro, Character *companion, Enemy *enemy) {
    BattleOutput fightOutput;
    Battle fight;
    fightOutput.doubleLineBreak();
    fightOutput.printHealthBar(enemy->getName(), enemy->getHP(), enemy->getMaxHP());
    fightOutput.printHealthBar(momotaro->getName(), momotaro->getHP(), momotaro->getMaxHP());
    fightOutput.printHealthBar(companion->getName(), companion->getHP(), companion->getMaxHP());
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
        InventoryMenu menu;
        menu.displayInventoryMenu();
    } else if (choice == "STATS") {
        StatsOutput stats;
        stats.printStats(momotaro, companion);
    } else {
        cout << "Invalid action, turn forfeited" << endl;
    }

    if (companion->getHP() > 0) {
        fightOutput.printCompanionChoices();
        cout << "Choose action for " << companion->getName() << ": ";
        cin >> choice;
        cout << endl;
        if (choice == "ATTACK") {
            totalDamageDealt += companion->getAtk();
        } else if (choice == "DEFEND") {
            totalDamageTaken -= companion->getDef();
        } else if (choice == "SWAP") {
            // FIXME
        } else if (choice == "STATS") {
            StatsOutput stats;
            stats.printStats(momotaro, companion);
        } else {
            cout << "Invalid action, turn forfeited" << endl << endl;
        }
    }

    fight.damageDealt(enemy,totalDamageDealt);
    fightOutput.out(32,0, to_string(totalDamageDealt) + " DAMAGE dealt to " + enemy->getName());
    fightOutput.singleLineBreak();
    fight.damageTaken(momotaro, companion, enemy);
    if (enemy->getHP() > 0) {
        if (totalDamageTaken < 0) {
            totalDamageTaken = 0;
        }
        fightOutput.out(31,0, to_string(totalDamageTaken/2) + " DAMAGE dealt to " + momotaro->getName());
        if (companion->getHP() > 0) {
            fightOutput.out(31,0, to_string(totalDamageTaken/2) + " DAMAGE dealt to " + companion->getName());
        }
    } else {
        cout << "You defeated " << enemy->getName() << "!" << endl << endl;
    }
}