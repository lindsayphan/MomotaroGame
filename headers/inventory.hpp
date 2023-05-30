#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "../headers/item.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Inventory {
  private:
    vector<Item> inventory;
  public:
    Inventory();
    void useItem(int listNum);
    void addItem(int listNum); 
};

#endif