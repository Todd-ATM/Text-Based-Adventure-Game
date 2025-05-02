#include "Game.h"
#include "nlohmann/json.hpp"
#include <fstream>

using json = nlohmann::json;

void Game::start() {
    //store json data into config
    json config;
    //parse through file
    std::ifstream file("Levels.JSON");
    if (file.is_open()) {
        file >> config;
    }

    std::cout << config.dump(4) << std::endl;
}