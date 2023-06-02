#include <iostream>
#include "../headers/choices.hpp"
#include "../headers/choicesBird.hpp"
#include "../headers/storyParts.hpp"
#include "../headers/storyBird.hpp"
using namespace std;

void StoryBird::sendGameLvl(int level) {
     meetBird.saveGameLvl(level);
}

void StoryBird::printNarrative() {
    cout << "YOU: \"Hah… Are you guys okay?\"" << endl << endl;

    cout << "Rather than worrying about yourself first, you opted to check your companions' states." << endl
         << "Your most recent kill was more challenging than your first, so you were understandably more concerned with what the battle had left you." << endl << endl;

    cout << "DOG: \"I'm a bit tired, but I'll live.\"" << endl << endl;

    cout << "MONKEY: \"Yeah, me too. It honestly feels nice to finally fight back after being hopeless all this time.\"" << endl << endl;

    cout << "You nodded, with a ghost of a smile on the corners of your lips." << endl << endl;

    cout << "YOU: “Can you two walk? We should probably get away from here before more demons arrive.\"" << endl << endl;

    cout << "Once you got affirmations from both of your companions, you set out to resume your journey." << endl
         << "Soon, the river and flat lands were replaced by hills. And, along the way, DOG and MONKEY started getting along" << endl
         << "— at least, enough to play around with each other to fill in the boredom." << endl << endl;

    cout << "MONKEY: \"Let's see if we can hit that bird with a stone. First one to touch it wins.\"" << endl << endl;

    cout << "DOG: \"You're on!\"" << endl << endl;

    cout << "You were quite unsure if you should let them continue their game. You did not want to stop them from their fun," << endl
         << "especially without knowing that exactly lies ahead. On the other hand, you did not want them to hurt the bird" << endl
         << "they were targeting — even for the sake of fun." << endl << endl;

    meetBird.question();

    cout << "As if the bird could sense that it was being talked about, it suddenly swooped down to where you all were." << endl << endl;

    cout << "BIRD: \"What is your purpose for crossing these hills?\"" << endl << endl;

    cout << "YOU: \"We're trying to reach the Demon's lair located on the other side.\"" << endl << endl;

    cout << "BIRD: \"Respectfully, but do you have a death wish?\"" << endl << endl;

    cout << "YOU: \"Perhaps, but I find greeting death is better when it's on my terms.\"" << endl << endl;

    cout << "BIRD: “Such bravery. Makes me wonder if all that courage actually amounts to something worthwhile." << endl << endl;

    meetBird.question();

    cout << "With another member recruited to your party, you and your three companions set out once more." << endl
         << "As you travel for miles on end, the destruction around you seems to have become greater in magnitude." << endl
         << "Each street you passed by had less and less life the more you walked on." << endl << endl;

    cout << "At this point of your journey, with two defeated demons under your belt, you were not even surprised "
         << "to encounter another one when you least expect it." << endl << endl;

    cout << "YOU: \"Incoming!\"" << endl << endl;
}
