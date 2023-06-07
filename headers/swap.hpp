#ifndef SWAP_HPP
#define SWAP_HPP
#include <string>
#include "../headers/dog.hpp"
#include "../headers/monkey.hpp"
#include "../headers/bird.hpp"
#include "../headers/momotaro.hpp"
#include "../headers/character.hpp"
using namespace std;

class Swap {
    public: 
        void swapChoicePrompt(Dog * &, Monkey * &, Bird * &);
        void swapSetAnswer(char);
        char swapGetAnswer();
        void swapSetCurrentAnimal(char);
        char swapGetCurrentAnimal();
        void swapAnimals(char, char);
    private:
        char swapChoice;
        char currentAnimal;
};

#endif