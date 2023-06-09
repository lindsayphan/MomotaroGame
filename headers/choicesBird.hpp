#ifndef CHOICESBIRD_HPP
#define CHOICESBIRD_HPP
#include <iostream>
#include <sstream>
#include "../headers/choices.hpp"
#include "../headers/bird.hpp"
using namespace std;

extern Bird* bird;

class ChoicesBird: public Choices {
    public:
        ChoicesBird();
        void executeAnswer1();
        void executeAnswer2(); 
};

#endif