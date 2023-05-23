#include <iostream>
#include "../headers/narrative.hpp"
using namespace std;

Narrative::Narrative() {
    cout << "Game characters & storyline are adapted from the Japanese folktale \"Momotaro\"." << endl
         << "(To read the folktale, see: https://etc.usf.edu/lit2go/72/japanese-fairy-tales/4845/momotaro-or-the-story-of-the-son-of-a-peach/)" << endl << endl;
}

void Narrative::storyline() {
    meetDog.Part1Narration();
}