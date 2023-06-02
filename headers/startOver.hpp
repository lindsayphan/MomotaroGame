#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
using namespace std;

class startOver {
    public:
        bool restartPrompt(bool);
        void restartAnswerInput();
        void restartSetAnswer(char);
        char restartGetAnswer();
        void restartTrue();
        void restartFalse();
    private:
        char restartAnswer ='.';
};

#endif