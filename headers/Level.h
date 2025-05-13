#ifndef LEVEL_HEADER_H
#define LEVEL_HEADER_H

#include <string>
#include <map>
#include "Clue.h"

class Level {
  public:
    Level(std::string name, std::string description);

    std::string DisplayDescription();

    void SetDescription(std::string D);

    std::string GetName();


  private:
    std::string description;
    std::string name;
    //set of clues
    std::map<std::string, Clue*> Clues;
    
    
};

#endif