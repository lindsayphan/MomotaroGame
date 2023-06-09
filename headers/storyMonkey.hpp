#ifndef STORYMONKEY_HPP
#define STORYMONKEY_HPP
#include <iostream>
#include "../headers/choices.hpp"
#include "../headers/choicesMonkey.hpp"
#include "../headers/storyParts.hpp"
#include "../headers/monkey.hpp"
using namespace std;

extern Monkey monkey;

class StoryMonkey: public StoryParts {
    private:
        ChoicesMonkey meetMonkey;
    public:
        void sendGameLvl(int level);
        void printNarrative();
};

#endif