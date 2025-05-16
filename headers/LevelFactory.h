#ifndef LEVEL_FACTORY_H
#define LEVEL_FACTORY_H

#include "Level.h"
#include <string>
#include "nlohmann/json.hpp"
#include <iostream>
#include <fstream> 
#include <vector>

using json = nlohmann::json;


class LevelFactory {
  public:
    LevelFactory();
    Level* createLevel(std::string id);

    json config;

  private:

};

#endif