#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include "../headers/item.hpp"
#include "../headers/character.hpp"
#include "../headers/momotaro.hpp"
#include "../headers/dog.hpp"
#include "../headers/monkey.hpp"
#include "../headers/bird.hpp"
#include <iostream>
#include <sstream>
#include <list>
#include <iterator>
using namespace std;

extern Momotaro* momotaro;
extern Dog* dog;
extern Monkey* monkey;
extern Bird* bird;

class Inventory {
  private:
    list<Item*> inventory;
    list<Item*>::iterator _iterator;
    stringstream in;
  public:
    ~Inventory();
    // void deleteInventory();
    list<Item*> getInventory() const;
    bool alreadyHave(string itemName);
    void addItem(string itemName, int itemCount);
    int healHP(string item);
    void promptForUse(string itemName);
    void useItem(string itemName);
};

#endif