#include <iostream>
#include <limits>
#include <sstream>
#include "../headers/choices.hpp"
using namespace std;

void Choices::question() {
    string answer = "input";
    
    cout << answerPrompts.at(answerPrompts.size() - 1);
    cin >> answer; 
    answer = tolower(answer[0]);

    while (!cin.good() || (answer[0] != 'y' && answer[0] != 'n')) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << answerPrompts.at(answerPrompts.size() - 1);
        cin >> answer;
        answer = tolower(answer[0]);
    }

    cout << endl;
    
    in.clear();
    in << answer;

    setAnswer(in);

    if (answerPrompts.size() > 1) {
        executeAnswer1();
    }

    else {
        executeAnswer2();
    }

    answerPrompts.pop_back();
}

void Choices::setAnswer(stringstream &in){
    string tempAnswer;
    in >> tempAnswer;
    chosenOne = tempAnswer[0];
}

char Choices::getAnswer() const {
    return this->chosenOne;
}

void Choices::saveGameLvl(int level) {
    this->gameLvl = level;
}