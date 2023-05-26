#ifndef STORYMONKEY_HPP
#define STORYMONKEY_HPP
#include <iostream>
using namespace std;

class StoryMonkey: public StoryParts {
    private:
        ChoicesMonkey meetMonkey;
    public:
        void sendGameLvl(int level);
        void printNarrative();
};

#endif