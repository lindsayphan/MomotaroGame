#ifndef CHOICESDOG_HPP
#define CHOICESDOG_HPP
#include <iostream>
#include <sstream>
#include "../headers/choices.hpp"
#include "../headers/dog.hpp"
using namespace std;

extern Dog* dog;

class ChoicesDog: public Choices {
    public:
        ChoicesDog();
        void executeAnswer1();
        void executeAnswer2(); 
};

#endif