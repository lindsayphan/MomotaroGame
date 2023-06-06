#ifndef AFTERBATTLES_HPP
#define AFTERBATTLES_HPP
#include <iostream>
#include "../headers/inventory.hpp"
using namespace std;

class AfterBattles {
    private:
        Inventory* gameInventory;
    public:
        void getInventory(Inventory* inv);
        Inventory sendInventory();
        void afterBattleNarrations(int lvl, bool failedOutcome);
        void afterFinalBattleNarrations(int lvl, bool failedOutcome);
};

#endif