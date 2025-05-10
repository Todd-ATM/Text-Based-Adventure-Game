#include "Inventory.h"

int Inventory::GetInventorySize() {
    return INV.size();
}

Item* Inventory::getItem(int i) {
        if (i >= 0 && i < static_cast<int>(INV.size()) && INV[i] != nullptr) {
            return INV[i];
        }
        std::cout << "Error: Invalid index or null item at index " << i << std::endl;
        return nullptr;
}

void Inventory::placeItem(std::string Type) {
    INV.push_back(factory.createItem(Type));
}

void Inventory::displayItems() {
    if (INV.size() > 0) {
        for (int i = 0; i < INV.size(); i++) {
            std::cout << "*" << INV[i]->getName() << std::endl;
        }
    }
    else {
        std::cout << "No Items to display" << std::endl;
    }

}