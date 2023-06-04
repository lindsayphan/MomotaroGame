#ifndef STORYPARTS_HPP
#define STORYPARTS_HPP
#include <iostream>
#include <sstream>
using namespace std;

class StoryParts {
    protected:
        virtual void printNarrative() = 0;
    public:
        virtual void sendGameLvl(int level) = 0;
};

#endif