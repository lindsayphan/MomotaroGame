#include <iostream>
#include "../headers/narrative.hpp"
using namespace std;

Narrative::Narrative() {
    cout << "Game characters & storyline are adapted from the Japanese folktale \"Momotaro\"." << endl
         << "(To read the folktale, see: https://etc.usf.edu/lit2go/72/japanese-fairy-tales/4845/momotaro-or-the-story-of-the-son-of-a-peach/)" << endl << endl;

    level.promptForLvl();
}

void Narrative::beginning() {
    companionDog.sendGameLvl(level.getLvl());
    companionDog.printNarrative();
}

void Narrative::middle1() {
    
    companionMonkey.sendGameLvl(level.getLvl());
    companionMonkey.printNarrative();
}

void Narrative::middle2() {
    companionBird.sendGameLvl(level.getLvl());
    companionBird.printNarrative();
}

void Narrative::finale() {
    finalPages.meetDemonKing();
}

void Narrative::epilogue() {
    finalPages.epilogue();
}