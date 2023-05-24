#ifndef DIFFICULTY_HPP
#define DIFFICULTY_HPP

#include <iostream>
#include <sstream>
using namespace std;

class Difficulty {
    private:
        int gameLvl;
        stringstream in;

    public:
        Difficulty();
        void promptForLvl();
        void setLvl(stringstream &in);
        int getLvl() const;
};

#endif