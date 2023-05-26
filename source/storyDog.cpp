#include <iostream>
#include "../headers/choices.hpp"
#include "../headers/choicesDog.hpp"
#include "../headers/storyParts.hpp"
#include "../headers/storyDog.hpp"
using namespace std;

void StoryDog::sendGameLvl(int level) {
     meetDog.saveGameLvl(level);
}

void StoryDog::printNarrative() {

    cout << "Once upon a time, in a land far away, you were found inside a floating peach as a baby. "
         << "You eventually grew up to be a strong and courageous person." << endl
         << "Once you came of age, you decided to go on a journey to defeat the demons that were causing trouble in your village." << endl << endl;

    cout << "Although your parents were not ecstatic with your decision to leave, they still sent you off with rice cakes and green tea for your trip." << endl << endl;

    cout << "FATHER: \"Take these with you.\"" << endl << endl;

    // ADJUST INVENTORY

    cout << "You said thank you and goodbye to your parents before beginning your long journey." << endl << endl;

    cout << "After walking for miles, your feet had grown tired of walking." << endl
         << "Once you heard your stomach grumble in hunger, you sat under a tree to rest and eat the food your parents packed for you." << endl
         << "However, as you were about to dig in, a presence decided to make itself known." << endl << endl;

    cout << "???: *BARK* *BARK*" << endl << endl;

    meetDog.question();

    cout << "DOG: \"How dare you pass my field without asking permission first. "
         << "If you give me one of your rice cakes, I will let you go; otherwise, I will bite you 'til I kill you!\"" << endl << endl;
    
    meetDog.question();

    cout << "Once you were ready, you resumed your journey — now with the dog following your trail. "
         << "At least, that was the plan until a dark ominous figure blocked your path." << endl
         << "Fortunately, you overheard enough stories from your neighbors to realize that you were now facing a demon." << endl << endl;

     cout << "You felt brave before, but now faced with your first demon encounter, you began to fear." << endl
          << "You took a few steps backwards and tried to run, but the demon was faster. It grabbed you and essentially forced you to fight." << endl << endl;
}