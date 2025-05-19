#ifndef ITEM_HEADER_H
#define ITEM_HEADER_H

#include <string>
#include <iostream>
#include "Clue.h"

class Item {
  public:
    virtual void Use() = 0;
    virtual std::string getName() = 0;
    virtual void UpdateClue(Clue* Clue) = 0;
  protected:
      std::string Name;
      Clue* CurrentClue;
};

#endif