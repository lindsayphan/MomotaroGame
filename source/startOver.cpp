#include <iostream>
#include <string>
#include <limits>
#include "../headers/startOver.hpp"
using namespace std;

bool startOver::restartPrompt(bool battleLost) {
    if (battleLost == true) {
        if (this->restartGetAnswer() == 'y') {
            restartTrue();
            return true;
        } else {
            restartFalse();
            return false;
        }
    } else {
        return false;
    }
}

void startOver::restartAnswerInput(){
    char answer ='.';

    cin.clear();

    cout << "Would you like to play again? ('y' for yes, 'n' for no): ";
    cin >> answer;
    answer = tolower(answer);

    while (!cin.good() || (answer != 'y' && answer != 'n')) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Would you like to play again? ('y' for yes, 'n' for no): ";
        cin >> answer;
        answer = tolower(answer);
    }

    restartSetAnswer(answer);
}

void startOver::restartSetAnswer(char getAnswer) {
    this->restartAnswer = getAnswer;
}

char startOver::restartGetAnswer() {
    return this->restartAnswer;
}

void startOver::restartTrue() {
    cout << "Starting new game..." << endl;
}

void startOver::restartFalse() {
    cout << "Thank you for playing!" << endl;
}