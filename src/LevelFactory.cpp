#include "LevelFactory.h"

  LevelFactory::LevelFactory() {
    std::ifstream file("Levels.JSON");
    config = json::parse(file);
  }

  Level* LevelFactory::createLevel(std::string id) {
    return new Level(config[id]["name"], config[id]["description"]);
  }