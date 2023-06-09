#include <iostream>
#include <limits>
#include <sstream>
#include "../headers/choicesDog.hpp"
using namespace std;

ChoicesDog::ChoicesDog() {
    answerPrompts.push_back("Do you offer it one?   ");
    answerPrompts.push_back("Should you approach?   ");
}

void ChoicesDog::executeAnswer1() {
    if (getAnswer() == 'y') {
        cout << "You slowly approach the unknown creature when suddenly…" << endl << endl;
    }

    else {
        cout << "You crouch behind the tree in a poor attempt to hide." << endl
             << "Unfortunately, your effort turned out to be futile because the footsteps of the unknown creature still inched closer until it was in front of you." << endl << endl;
    }
}

void ChoicesDog::executeAnswer2() {
    if (getAnswer() == 'y') {
        
        gameInventory->useItem("rice cakes");

        cout << "DOG: \"Oh, thank you! I wasn't expecting you to give it up so easily, I apologize for being so rude. In return for your kindness, I will join you on your journey!\"" << endl << endl;

        cout << "DOG joins your party!" << endl << endl;
        
        if (gameLvl == 1) {
            dog.setHP(dog.getHP() + 3);
        }
    }

    else {
        cout << "YOU: \"Don't you know who I am?\"" << endl << endl;
    
        cout << "The dog's eyes suddenly widen, seemingly realizing who you are: The child born from a peach!" << endl << endl;
        
        cout << "DOG: \"Oh, I apologize. I didn't recognize you!\"" << endl << endl;

        cout << "YOU: \"I accept your apology. I haven't explored beyond my neighborhood before, thus it's reasonable for you to not know my face.\"" << endl << endl;

        cout << "DOG: \"Still, as an apology, I shall accompany you to your destination.\"" << endl << endl;

        cout << "DOG joins your party!" << endl << endl;
    }
}