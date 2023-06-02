#include "../headers/item.hpp"
using namespace std;

Item::Item(string _name, int _healthBoost, int _count) {
    name = _name;
    healthBoost = _healthBoost;
    count = _count;
}

string Item::getName() const {
    return name;
}

int Item::getHealthBoost() const {
    return healthBoost;
}

int Item::getCount() const {
    return count;
}