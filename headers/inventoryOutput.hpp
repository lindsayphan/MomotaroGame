#ifndef INVENTORYOUTPUT_HPP
#define INVENTORYOUTPUT_HPP

#include "../headers/item.hpp"
#include <vector>
#include <iostream>
using namespace std;

class InventoryOutput {
  public:
    void printInventory(vector<Item> inv);
};

#endif