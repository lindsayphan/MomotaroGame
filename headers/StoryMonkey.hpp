#ifndef STORYMONKEY_HPP
#define STORYMONKEY_HPP
#include <iostream>
#include "../headers/StoryParts.hpp"
// #include "../headers/ChoicePart2.hpp"
using namespace std;

class StoryMonkey: public StoryParts {
    private:
        // ChoicePart2 ChoicesIn2;
    protected:
        void printNarrative();
};

#endif