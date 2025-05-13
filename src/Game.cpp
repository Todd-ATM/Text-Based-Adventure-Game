#include "Game.h"

void Game::start() {
    //Game Start and introductions
    std::cout << "This is a text based, adventure game.\nyou have been on the track of discovering the ruins of an ancient lost society's whereabouts\nmonths of searching have led you to a remote location in the middle of the vietnam jungle" << std::endl;
    std::cout << "To learn the commands of the game type HELP" << std::endl;
    GameLoop();
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
    CurrentLevel = 0;
}

void Game::GameLoop() {
    bool isPlaying = true;
    bool playerInput = false;
    std::string Input;

    while (isPlaying) {
        //load current level
        std:: cout << maps[CurrentLevel]->GetName() << std::endl;
        std:: cout << maps[CurrentLevel]->DisplayDescription() << std::endl;
        //loop for player input
        playerInput = true;
        while (playerInput) {
            std::cout << "What would you like to do?" << std::endl;
            std::cin >> Input;

            //exception handling
            if (!std::cin) { //if user enters non string
                std::cin.clear(); //clear fail state
                std::cin.ignore(100, '\n'); //flush bad input
                std::cout << "Please enter valid command" << std::endl;
                continue; //restart loop
            }

            //convert Input to uppercase
            for (int i = 0; i < Input.length(); i++) {
                Input[i] = std::toupper(Input[i]);
            }

            std::cout << Input;

            player.Action(Input);
        }

    }
}