#ifndef STORYPARTS_HPP
#define STORYPARTS_HPP
#include <iostream>
// #include <vector>
#include <sstream>
using namespace std;

class StoryParts {
    protected:
        // vector<Choices> options;
        virtual void printNarrative() = 0;
};

#endif