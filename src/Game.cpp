#include "Game.h"

void Game::start() {
    //factory
    LevelFactory levelFactory;
    std::vector<Level*> maps;

    maps.push_back(levelFactory.createLevel("Heisenberg"));
    std::cout << maps[0]->GetName() << std::endl;
    std::cout << maps[0]->DisplayDescription();
}