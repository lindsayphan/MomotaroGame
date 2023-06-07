#include "../headers/item.hpp"
using namespace std;

Item::Item(string _name, int _count) {
    name = _name;
    count = _count;
}

string Item::getName() const {
    return name;
}

int Item::getCount() const {
    return count;
}

void Item::subtractCount() {
    count -= 1;
}

void Item::addCount(int number) {
    count += number;
}