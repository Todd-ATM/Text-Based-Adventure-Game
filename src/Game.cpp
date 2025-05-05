#include "Game.h"

void Game::start() {
    //factory
    LevelFactory levelFactory;
    std::vector<Level*> maps;

    maps.push_back(levelFactory.createLevel("Room2"));
    std::cout << maps[0]->GetName();
}