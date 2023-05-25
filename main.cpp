#include <iostream>
// #include "../headers/character.hpp"
#include "headers/difficulty.hpp"
#include "source/choices.cpp"
#include "headers/choicesDog.hpp"
#include "headers/choicesMonkey.hpp"
#include "headers/choicesBird.hpp"
using namespace std;

int main() {
    Difficulty level;
    level.promptForLvl();
  
    ChoicesDog meetDog;
    meetDog.question();
    meetDog.question();

    ChoicesMonkey meetMonkey;
    meetMonkey.question();
    meetMonkey.question();

    ChoicesBird meetBird;
    meetBird.question();
    meetBird.question();    

    return 0;
}