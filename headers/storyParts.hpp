#ifndef STORYPARTS_HPP
#define STORYPARTS_HPP
#include <iostream>
#include <sstream>
#include "../headers/inventory.hpp"
using namespace std;

extern Inventory* gameInventory;

class StoryParts {
    protected:
        virtual void printNarrative() = 0;
    public:
        virtual void sendGameLvl(int level) = 0;
};

#endif