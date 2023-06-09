#include <iostream>
#include "../headers/afterBattles.hpp"
using namespace std;

void AfterBattles::afterBattleNarrations(bool failedOutcome) {
    if (failedOutcome == false) {
        cout << "The demon kneeled on the last blow, unable to support its weight with the intense pain it must be feeling." << endl
             << "It tried to raise one of its hands, fully intending to deliver another attack, but it vanished in a cloud of dust and smoke before it could do anything else." << endl << endl;

        cout << "YOU WIN." << endl << endl;

        gameInventory->addItem("rice cakes", 1);

        // if (lvl == 1) {
            gameInventory->addItem("green tea", 1);
        // }
    }

    else {
        cout << "You staggered, eyes blinking as you willed them to focus." << endl
             << "Unfortunately, you could not regain your footing as black spots from the corners of your eyes continued to spread." << endl
             << "Before darkness took over your vision, the last thing you saw was your companions' frozen figures and the demon's hellish smirk." << endl << endl;

        cout << "YOU LOSE." << endl << endl;
    }

}

void AfterBattles::afterFinalBattleNarrations(bool failedOutcome) {
    if (failedOutcome == false) {
        cout << "The Demon King kneeled on the last blow, unable to support its weight due to the intense pain from all its wounds." << endl
             << "It roared in agony and a strong final curse before vanishing in a thick cloud of dust and smoke like all its minions that you had killed." << endl << endl;
    
        cout << "YOU: \"Thank you for giving us the honor of taking your life.\"" << endl << endl;

        cout << "YOU WIN." << endl << endl;
    }

    else {
        cout << "You staggered, eyes blinking as you willed them to focus." << endl
             << "Unfortunately, you could not regain your footing as black spots from the corners of your eyes continued to spread." << endl
             << "Before darkness took over your vision, the last thing you saw was your companions' frozen figures and the Demon King's triumphant smirk." << endl << endl;

        cout << "DEMON KING: \"Looks like there will be a feast tonight.\"" << endl << endl;

        cout << "YOU LOSE." << endl << endl;
    }
}