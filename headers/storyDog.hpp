#ifndef STORYDOG_HPP
#define STORYDOG_HPP
#include <iostream>
#include "../headers/choices.hpp"
#include "../headers/choicesDog.hpp"
#include "../headers/storyParts.hpp"
using namespace std;

class StoryDog: public StoryParts {
    private:
        ChoicesDog meetDog;
    public:
        void sendGameLvl(int level);
        void printNarrative();
};

#endif