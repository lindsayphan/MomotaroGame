#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>
using namespace std;

class Item {
  private:
    string name = "";
    int healthBoost = 0;
    int count = 0;
  public:
    Item(string _name, int _healthBoost, int _count);
    string getName() const;
    int getHealthBoost() const;
    int getCount() const;
};

#endif