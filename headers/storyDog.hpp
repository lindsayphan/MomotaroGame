#ifndef STORYDOG_HPP
#define STORYDOG_HPP
#include <iostream>
#include "../headers/choices.hpp"
#include "../headers/choicesDog.hpp"
#include "../headers/storyParts.hpp"
#include "../headers/dog.hpp"
using namespace std;

extern Dog dog;

class StoryDog: public StoryParts {
    private:
        ChoicesDog meetDog;
    public:
        void sendGameLvl(int level);
        void printNarrative();
};

#endif