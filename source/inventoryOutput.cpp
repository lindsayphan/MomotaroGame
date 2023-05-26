#include "../headers/inventoryOutput.hpp"
#include "../headers/item.hpp"
using namespace std;

void InventoryOutput::printInventory(vector<Item> inv) {
    cout << "============== INVENTORY ===============" << endl; 
    for (int i = 0; i < inv.size(); i++) {
        cout << i << ") ";
        cout << inv.at(i).getName() << "\t";
        cout << inv.at(i).getCount() << endl;
    }
    cout << "----------------------------------------" << endl;
    cout  << "Select an item or 'EXIT' to exit: ";
    cout << endl << "=========================================" << endl << endl;
}