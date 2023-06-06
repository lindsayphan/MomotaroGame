#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include "../headers/item.hpp"
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

class Inventory {
  private:
    list<Item*> inventory;
    list<Item*>::iterator _iterator;
  public:
    list<Item*> getInventory() const;
    bool alreadyHave(string itemName);
    void addItem(string itemName, int healthBoost, int itemCount);
    void useItem(string itemName);
    void deleteInventory();
     
};

#endif