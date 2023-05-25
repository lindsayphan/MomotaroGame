#include <iostream>
// #include "../headers/character.hpp"
#include "headers/difficulty.hpp"
#include "headers/choices.hpp"
#include "headers/choicesDog.hpp"
#include "headers/choicesMonkey.hpp"
#include "headers/choicesBird.hpp"
using namespace std;

int main() {
    Difficulty level;
    level.promptForLvl();
  
    ChoicesDog meetDog;
    meetDog.saveGameLvl(level.getLvl());
    meetDog.question();
    meetDog.question();

    ChoicesMonkey meetMonkey;
    meetMonkey.saveGameLvl(level.getLvl());
    meetMonkey.question();
    meetMonkey.question();

    ChoicesBird meetBird;
    meetBird.saveGameLvl(level.getLvl());
    meetBird.question();
    meetBird.question();    

    return 0;
}