#ifndef STORYMONKEY_HPP
#define STORYMONKEY_HPP
#include <iostream>
#include "../headers/choices.hpp"
#include "../headers/choicesMonkey.hpp"
#include "../headers/storyParts.hpp"
using namespace std;

class StoryMonkey: public StoryParts {
    private:
        ChoicesMonkey meetMonkey;
    public:
        void sendGameLvl(int level);
        void printNarrative();
};

#endif