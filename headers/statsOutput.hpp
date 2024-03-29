#ifndef STATSOUTPUT_HPP
#define STATSOUTPUT_HPP
#include <iostream>
#include "../headers/statsOutput.hpp"
#include "../headers/character.hpp"
#include "../headers/momotaro.hpp"
#include "../headers/monkey.hpp"
#include "../headers/dog.hpp"
#include "../headers/bird.hpp"
using namespace std;

extern Momotaro* momotaro;
extern Dog* dog;
extern Monkey* monkey;
extern Bird* bird;

class StatsOutput {
  public:
    void printStats(int numCompanions);
    void printStats(Momotaro *s_momotaro, Character *s_companion);
    void printStats(Momotaro *momotaro, Dog *dog, Monkey *monkey, Bird *bird);
};

#endif
