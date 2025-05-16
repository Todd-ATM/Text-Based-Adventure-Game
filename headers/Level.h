#ifndef LEVEL_HEADER_H
#define LEVEL_HEADER_H

#include <string>
#include <map>
#include "ClueFactory.h"
#include <vector>

class Level {
  public:
    Level(std::string name, std::string description, std::vector<std::string> clueNames);

    std::string DisplayDescription();

    void SetDescription(std::string D);

    std::string GetName();

    std::string DisplayClue(int i);


  private:
    std::string description;
    std::string name;
    //set of clues
    std::vector<Clue*> ClueObjects;
    ClueFactory factory;

    
};

#endif