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
    ~Inventory();
    // void deleteInventory();
    list<Item*> getInventory() const;
    bool alreadyHave(string itemName);
    void addItem(string itemName, int itemCount);
    void useItem(string itemName);
};

#endif