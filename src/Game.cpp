#include "Game.h"

void Game::start() {
    std::cout << maps[0]->GetName() << std::endl;
    std::cout << maps[0]->DisplayDescription();
    std::cout << maps[1]->GetName() << std::endl;
    std::cout << maps[1]->DisplayDescription();
}

//default constructor
Game::Game() {
    int num = 1;
    //iterates through our json config size, then creates each level and stores in our maps vector
    //might actually be better to use a map... probably actually but this will be for later
    for (int i = 0; i < levelFactory.config.size(); i++) {
        std::string final = "Room";
        final += std::to_string(num);
        maps.push_back(levelFactory.createLevel(final));
        num++;
    }
}