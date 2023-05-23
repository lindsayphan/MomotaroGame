#ifndef STORYDOG_HPP
#define STORYDOG_HPP
#include <iostream>
#include "../headers/StoryParts.hpp"
// #include "../headers/ChoicePart1.hpp"
using namespace std;

class StoryDog:public StoryParts {
    private:
        // ChoicePart1 ChoicesIn1;
    public:
        void printNarrative();
};

#endif