#ifndef STORYBIRD_HPP
#define STORYBIRD_HPP
#include <iostream>
using namespace std;

class StoryBird: public StoryParts {
    private:
        ChoicesBird meetBird;
    public:
        void sendGameLvl(int level);
        void printNarrative();
};

#endif