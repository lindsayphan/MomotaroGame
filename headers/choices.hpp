#ifndef CHOICES_HPP
#define CHOICES_HPP
#include <iostream>
#include <sstream>
#include <vector>
#include "../headers/character.hpp"
#include "../headers/inventory.hpp"
using namespace std;

extern Inventory* gameInventory;

class Choices {
    protected:
        char chosenOne = 'e';
        int gameLvl = 0;
        stringstream in;
        vector<string> answerPrompts;
    public:
        void question();
        void setAnswer(stringstream &in);
        char getAnswer() const;
        void saveGameLvl(int level);
        virtual void executeAnswer1() = 0;
        virtual void executeAnswer2() = 0;
        int getLvl() const;
};

#endif