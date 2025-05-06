#ifndef ACTOR_HEADER_H
#define ACTOR_HEADER_H

#include "Inventory.h"

class Actor {
  public: 
    virtual void Action() = 0;
  
  private:
  Inventory Inventory;
  
};

#endif