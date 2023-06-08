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

class StatsOutput {
  public:
    void printStats(Momotaro *momotaro, Dog *dog, Monkey *monkey, Bird *bird);
};

#endif
