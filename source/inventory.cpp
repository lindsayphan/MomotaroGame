#include <iostream>
#include <sstream>
#include <limits>
#include "../headers/inventory.hpp"
using namespace std;

Inventory::~Inventory() {
    
    for (list<Item*>::iterator _iterator = inventory.begin(); _iterator != inventory.end(); ) {
        delete *_iterator;
        _iterator = inventory.erase(_iterator);
    }
}

// void Inventory::deleteInventory() {
//     for (list<Item*>::iterator _iterator = inventory.begin(); _iterator != inventory.end(); ) {
//         _iterator = inventory.erase(_iterator);
//     }
// }

list<Item*> Inventory::getInventory() const {
    return this->inventory;
}

bool Inventory::alreadyHave(string itemName) {
    if (inventory.empty() == 1) {
        return false;
    }

    else {
    
        for (_iterator = inventory.begin(); _iterator != inventory.end(); _iterator++) {
            if ((*_iterator)->getName() == itemName) {
                return true;
            }
        }

        return false;
        
    }
}

void Inventory::addItem(string itemName, int itemCount) {
    bool alreadyAvailable = alreadyHave(itemName);

    if (alreadyAvailable == false) {
        Item *newItem = new Item(itemName, itemCount);
        inventory.push_back(newItem);
    }

    else {
        for (_iterator = inventory.begin(); _iterator != inventory.end(); _iterator++) {
            if ((*_iterator)->getName() == itemName) {
                (*_iterator)->addCount(itemCount);
            }
        }   
    }

    cout << "+" << itemCount << " " << itemName << " to inventory!" << endl << endl;
}

int Inventory::healHP(string item) {
    int HP = 0;
    
    if (item == "green tea") {
       HP = 10;
    }

    else if(item == "rice cakes") {
        HP = 15;
    }

    return HP;
}

void Inventory::promptForUse(string itemName) {
    cout << "Who do you want to use " << itemName << "on? Type \'y\' for YOU, \'d\' for DOG, \'m\' for MONKEY, \'b\' for BIRD. ";

    string answer = "input";
    cin >> answer; 
    answer = tolower(answer[0]);

    while (!cin.good() || (answer[0] != 'y' && answer[0] != 'd' && answer[0] != 'm' && answer[0] != 'b')) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Who do you want to use " << itemName << "on? Type \'y\' for YOU, \'d\' for DOG, \'m\' for MONKEY, \'b\' for BIRD. ";
        cin >> answer;
        answer = tolower(answer[0]);
    }

    cout << endl;

    in.clear();
    in << answer;

    useItem(itemName);
    int heal = healHP(itemName);

    if (answer[0] == 'y') {
        momotaro.setHP(momotaro.getHP() + heal);
        cout << "MOMOTARO HEALTH " << momotaro.getHP() << "!" << endl << endl;
    }

    else if (answer[0] == 'd') {
        dog.setHP(dog.getHP() + heal);
        cout << "DOG HEALTH " << dog.getHP() << "!" << endl << endl;
    }

    else if (answer[0] == 'm') {
        monkey.setHP(monkey.getHP() + heal);
        cout << "MONKEY HEALTH " << monkey.getHP() << "!" << endl << endl;
    }

    else if (answer[0] == 'b') {
        bird.setHP(bird.getHP() + heal);
        cout << "BIRD HEALTH " << bird.getHP() << "!" << endl << endl;
    }
}

void Inventory::useItem(string itemName) {
    list<Item*>::iterator _placeHolder = inventory.begin();
    int placeCounter = 0;

    for (_iterator = inventory.begin(); _iterator != inventory.end(); _iterator++) {
        
        placeCounter++;

        if ((*_iterator)->getName() == itemName) {
            (*_iterator)->subtractCount();

            if ((*_iterator)->getCount() == 0) {
                placeCounter--;
                advance(_placeHolder, placeCounter);
                delete *_placeHolder;
                _iterator = inventory.erase(_placeHolder);
            }

            cout << "-1 " << itemName << " from inventory." << endl << endl;
        }
    } 
}