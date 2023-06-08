#ifndef AFTERBATTLES_HPP
#define AFTERBATTLES_HPP
#include <iostream>
#include "../headers/inventory.hpp"
using namespace std;

extern Inventory* gameInventory;

class AfterBattles {
    public:
        void afterBattleNarrations(int lvl, bool failedOutcome);
        void afterFinalBattleNarrations(int lvl, bool failedOutcome);
};

#endif