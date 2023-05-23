#ifndef DIFFICULTY_HPP
#define DIFFICULTY_HPP

#include <iostream>
using namespace std;

class Difficulty {
    private:
        int gameLvl;

    public:
        Difficulty();
        void setLvl();
        int getLvl();
};

#endif