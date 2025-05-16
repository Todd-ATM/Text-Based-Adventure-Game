#include "LevelFactory.h"

  LevelFactory::LevelFactory() {
    std::ifstream file("Levels.JSON");
    config = json::parse(file);
  }

  Level* LevelFactory::createLevel(std::string id) {
    //turning JSON data into strings, and arrays
    std::string Name = config[id]["name"];
    std::string Description = config[id]["description"];
    std::vector<std::string> clues = config[id]["Clues"];
    //convert Clues to std::vector<std::string> from JSON object
    return new Level(Name, Description, clues);
  }