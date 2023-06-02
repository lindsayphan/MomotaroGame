#ifndef CHOICESMONKEY_HPP
#define CHOICESMONKEY_HPP
#include <iostream>
#include <sstream>
using namespace std;

class ChoicesMonkey: public Choices {
    public:
        ChoicesMonkey();
        void executeAnswer1();
        void executeAnswer2(); 
};

#endif