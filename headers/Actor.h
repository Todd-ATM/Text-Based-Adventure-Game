#ifndef ACTOR_HEADER_H
#define ACTOR_HEADER_H

#include "Inventory.h"

class Actor {
  public: 
    virtual void Action(std::string Input) = 0;
    virtual void placeItem(std::string Type) = 0;
    virtual void listItems() = 0;
    virtual Item* EquipItem(int i) = 0;
  
  private:

  protected:
    Inventory inventory;
};

#endif