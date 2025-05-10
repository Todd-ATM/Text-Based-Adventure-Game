#ifndef ITEM_FACTORY_HEADER_H
#define ITEM_FACTORY_HEADER_H

#include <Item.h>
#include "Knife.h"
#include <string>
#include <iostream>

class ItemFactory {
  public:
    Item* createItem(std::string Type) {
      if (Type == "Knife") {
        std::cout << "item type Knife read" << std::endl;
        return new Knife;
      }
      return nullptr;
    }
};

#endif 