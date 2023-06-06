#ifndef NARRATIVE_HPP
#define NARRATIVE_HPP
#include <iostream>
#include "../headers/difficulty.hpp"
#include "../headers/choices.hpp"
#include "../headers/choicesDog.hpp"
#include "../headers/choicesMonkey.hpp"
#include "../headers/choicesBird.hpp"
#include "../headers/storyParts.hpp"
#include "../headers/storyDog.hpp"
#include "../headers/storyMonkey.hpp"
#include "../headers/storyBird.hpp"
#include "../headers/finalNarrations.hpp"
#include "../headers/inventoryMenu.hpp"
using namespace std;

class Narrative {
    private:
        Difficulty level;
        StoryDog companionDog;
        StoryMonkey companionMonkey;
        StoryBird companionBird;
        FinalNarrations finalPages;
        InventoryMenu inGameInventory;
    public:
        Narrative();
        void beginning();
        void middle();
        void finale();
        void epilogue();
};

#endif