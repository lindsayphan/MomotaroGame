#ifndef CHOICESMONKEY_HPP
#define CHOICESMONKEY_HPP
#include <iostream>
#include <sstream>
#include "../headers/choices.hpp"
#include "../headers/monkey.hpp"
using namespace std;

extern Monkey* monkey;

class ChoicesMonkey: public Choices {
    public:
        ChoicesMonkey();
        void executeAnswer1();
        void executeAnswer2(); 
};

#endif