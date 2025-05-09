#ifndef ITEM_FACTORY_HEADER_H
#define ITEM_FACTORY_HEADER_H

#include <Item.h>
#include "Knife.h"
#include <string>

class ItemFactory {
  public:
    Item* createItem(std::string Type) {
      if (Type == "Knife") {
        return new Knife;
      }
      return nullptr;
    }
};

#endif 