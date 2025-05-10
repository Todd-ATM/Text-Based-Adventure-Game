#include "Game.h"

void Game::start() {
    std::cout << maps[3]->GetName() << std::endl;
    std::cout << maps[3]->DisplayDescription() << std::endl;
    player.placeItem("Knife");
    Item* currentItem = player.EquipItem(0);
    currentItem->Use();
    player.listItems();
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