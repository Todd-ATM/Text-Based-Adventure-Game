#ifndef LEVEL_FACTORY_H
#define LEVEL_FACTORY_H

#include "Level.h"
#include <string>
#include "nlohmann/json.hpp"
#include <iostream>
#include <fstream> 

using json = nlohmann::json;

class LevelFactory {
  public:
    LevelFactory();
    Level* createLevel(std::string id);

  private:
    json config;
};

#endif