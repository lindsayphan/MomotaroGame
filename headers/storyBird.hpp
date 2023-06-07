#ifndef STORYBIRD_HPP
#define STORYBIRD_HPP
#include <iostream>
#include "../headers/choices.hpp"
#include "../headers/choicesBird.hpp"
#include "../headers/storyParts.hpp"
using namespace std;

class StoryBird: public StoryParts {
    private:
        ChoicesBird meetBird;
    public:
        void sendGameLvl(int level);
        void printNarrative();
};

#endif