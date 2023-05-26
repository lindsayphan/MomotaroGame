#ifndef STORYDOG_HPP
#define STORYDOG_HPP
#include <iostream>
using namespace std;

class StoryDog: public StoryParts {
    private:
        ChoicesDog meetDog;
    public:
        void sendGameLvl(int level);
        void printNarrative();
};

#endif