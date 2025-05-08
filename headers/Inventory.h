#ifndef INVENTORY_HEADER_H
#define INVENTORY_HEADER_H

#include "Item.h"
#include <string>
#include <vector>

class Inventory {
  public:
    item* getItem(int i);
    void placeItem();
    void removeItem();
    std::vector<item*> getINV();
  private:
    std::vector<item*> INV;
};

#endif