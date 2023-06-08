#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>
using namespace std;

class Item {
  private:
    string name = "";
    int count = 0;
  public:
    Item(string _name, int _count);
    string getName() const;
    int getCount() const;
    void subtractCount();
    void addCount(int number);
};

#endif