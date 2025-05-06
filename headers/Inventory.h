#ifndef INVENTORY_HEADER_H
#define INVENTORY_HEADER_H

#include "Item.h"
#include <string>
#include <vector>

class Inventory {
  public:
    std::string getItem();
    void placeItem();
    void removeItem();
  private:
    std::vector<item*> INV;
};

#endif