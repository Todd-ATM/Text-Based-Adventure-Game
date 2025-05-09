#ifndef INVENTORY_HEADER_H
#define INVENTORY_HEADER_H

#include "Item.h"
#include "ItemFactory.h"
#include <string>
#include <vector>
#include <iostream>

class Inventory {
  public:
    Item* getItem(int i);
    void placeItem(std::string Type);
    void removeItem();
    void displayItems();
    std::vector<Item*> getINV();
  private:
    std::vector<Item*> INV;
    ItemFactory factory;
};

#endif