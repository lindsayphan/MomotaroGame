#include <iostream>
#include "../headers/swap.hpp"
#include "../headers/dog.hpp"
#include "../headers/monkey.hpp"
#include "../headers/bird.hpp"
#include "../headers/character.hpp"
#include <string>
#include <limits>
using namespace std;

void Swap::swapChoicePrompt(Dog * &_Dog, Monkey * & _Monkey, Bird * & _Bird){
    cout << "Companions available to swap:" << endl;
    if (_Dog->getHP() != 0) {
        cout << "DOG" << endl;
    }
    if (_Monkey->getHP() != 0) {
        cout << "MONKEY" << endl;
    }
    if (_Bird->getHP() != 0) {
        cout << "BIRD" << endl;
    }
    cout << "Please enter your choice ";
    if (_Dog->getHP() != 0) {
        cout << "('d' for DOG)";
    }
    if (_Monkey->getHP() != 0) {
        cout << "('m' for MONKEY)";
    }
    if (_Bird->getHP() != 0) {
        cout << "('b' for BIRD)";
    }
    cout << ": " << endl;
    char swapAnswer = '.';
    cin.clear();

    cin >> swapAnswer;
    swapAnswer = tolower(swapAnswer);

    if (_Dog->getHP() == 0 && swapAnswer == 'd') {
        cout << "You have lost him already... Please choose another companion: " << endl;
        swapAnswer = '.';
    }
    if (_Monkey->getHP() == 0 && swapAnswer == 'm') {
        cout << "You have lost him already... Please choose another companion: " << endl;
        swapAnswer = '.';
    }
    if (_Bird->getHP() == 0 && swapAnswer == 'b') {
        cout << "You have lost him already... Please choose another companion: " << endl;
        swapAnswer = '.';
    }

    while (!cin.good() || (swapAnswer != 'd' && swapAnswer != 'm' && swapAnswer != 'b')) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter your choice ";
        if (_Dog->getHP() != 0) {
            cout << "('d' for DOG)";
        }
        if (_Monkey->getHP() != 0) {
            cout << "('m' for MONKEY)";
        }
        if (_Bird->getHP() != 0) {
            cout << "('b' for BIRD)";
        }
        cout << ": " << endl;
        cin >> swapAnswer;
        swapAnswer = tolower(swapAnswer);

        if (_Dog->getHP() == 0 && swapAnswer == 'd') {
        cout << "You have lost him already... Please choose another companion" << endl;
        swapAnswer = '.';
        }
        if (_Monkey->getHP() == 0 && swapAnswer == 'm') {
            cout << "You have lost him already... Please choose another companion" << endl;
            swapAnswer = '.';
        }
        if (_Bird->getHP() == 0 && swapAnswer == 'b') {
            cout << "You have lost him already... Please choose another companion" << endl;
            swapAnswer = '.';
        }
    }
    swapSetAnswer(swapAnswer);
    swapAnimals(this->swapGetCurrentAnimal(), this->swapGetAnswer());
}

void Swap::swapSetAnswer(char swapAnswer) {
    this->swapChoice = swapAnswer;
}

char Swap::swapGetAnswer() {
    return this->swapChoice;
}

void Swap::swapSetCurrentAnimal(char swapAnswer) {
    if (swapAnswer == 'd') {
        this->currentAnimal = 'd';
    } else if (swapAnswer == 'm') {
        this->currentAnimal = 'm';
    } else if (swapAnswer == 'b') {
        this->currentAnimal = 'b';
    }
}

char Swap::swapGetCurrentAnimal() {
    return this->currentAnimal;
}

void Swap::swapAnimals(char _currentAnimal, char swapAnswer){
    if (swapAnswer == _currentAnimal) {
        cout << "You've decided not to swap." << endl << endl;
    } else {
        cout << "You are swapping ";
        if (_currentAnimal == 'd') {
            cout << "DOG";
        } else if (_currentAnimal == 'm') {
            cout << "MONKEY";
        } else if (_currentAnimal == 'b') {
            cout << "BIRD";
        }
        cout << " with ";
        if (swapAnswer == 'd') {
            cout << "DOG";
        } else if (swapAnswer == 'm') {
            cout << "MONKEY";
        } else if (swapAnswer == 'b') {
            cout << "BIRD";
        }
        cout << "." << endl << endl;
        this->swapSetCurrentAnimal(swapAnswer);
    }
}