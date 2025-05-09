#ifndef KNIFE_ITEM_H
#define KNIFE_ITEM_H

#include "Item.h"

class Knife : public Item {
  public:
    void Use() override;
    std::string getName() override;
};

#endif