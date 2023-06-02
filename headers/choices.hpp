#ifndef CHOICES_HPP
#define CHOICES_HPP
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Choices {
    protected:
        char chosenOne = 'e';
        stringstream in;
        vector<string> answerPrompts;
        int gameLvl = 0;

    public:
        void question();
        void setAnswer(stringstream &in);
        char getAnswer() const;
        void saveGameLvl(int level);
        virtual void executeAnswer1() = 0;
        virtual void executeAnswer2() = 0;
};

#endif