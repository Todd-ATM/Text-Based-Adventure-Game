#include "Inventory.h"

std::vector<item*> Inventory::getINV() {
    return INV;
}

item* Inventory::getItem(int i) {
    return INV[i];
}