#ifndef CHOICESDOG_HPP
#define CHOICESDOG_HPP
#include <iostream>
#include <sstream>
using namespace std;

class ChoicesDog: public Choices {
    public:
        ChoicesDog();
        void executeAnswer1();
        void executeAnswer2(); 
};

#endif