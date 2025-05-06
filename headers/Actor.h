#ifndef ACTOR_HEADER_H
#define ACTOR_HEADER_H

#include "Inventory.h"

class Actor {
  public: 
    virtual void Action(std::string Input) = 0;
  
  private:
  Inventory Inventory;
};

#endif