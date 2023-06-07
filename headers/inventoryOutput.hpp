#ifndef INVENTORYOUTPUT_HPP
#define INVENTORYOUTPUT_HPP
#include "../headers/item.hpp"
#include "../headers/inventory.hpp"
#include <list>
#include <iostream>
using namespace std;

class InventoryOutput {
  public:
    void printInventory(list<Item*> inv);
};

#endif