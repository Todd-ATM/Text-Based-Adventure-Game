#ifndef CLUE_FACTORY_H
#define CLUE_FACTORY_H

#include "Clue.h"
#include <iostream>

class ClueFactory {
  public:
    Clue* createClue(std::string ID);
};

#endif 