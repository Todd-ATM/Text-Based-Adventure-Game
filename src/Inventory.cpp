#include "Inventory.h"

std::vector<Item*> Inventory::getINV() {
    return INV;
}

Item* Inventory::getItem(int i) {
    return INV[i];
}

void Inventory::placeItem(std::string Type) {
    INV.push_back(factory.createItem(Type));
}

void Inventory::displayItems() {
    for (int i = 0; i < INV.size(); i++) {
        std::cout << INV[i] << std::endl;
    }
}