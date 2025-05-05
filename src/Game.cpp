#include "Game.h"
#include "nlohmann/json.hpp"
#include <fstream>

using json = nlohmann::json;

void Game::start() {
    //store json data into config
    json config;
    //parse through file
    std::ifstream file("Levels.JSON");
    config = json::parse(file);
    std::cout << config["Room1"]["description"] << std::endl;
    std::cout << config["Room2"]["description"];
}