#include "Level.h"

Level::Level(std::string n, std::string d, std::vector<std::string> ClueNames) {
    name = n;
    description = d;
    for (int i = 0; i < ClueNames.size(); i++) {
        ClueObjects.push_back(factory.createClue(ClueNames[i]));
    }
}

std::string Level::GetName() {
    return name;
}

std::string Level::DisplayDescription() {
    return description;
}

std::string Level::DisplayClue(int i) {
    //scope checking,
    if (i >= 0 && i < ClueObjects.size()) {
        return ClueObjects[i]->DisplayClueText();
    } else {
        std::cout << "Invalid Clue does not exist. Couldn't display" <<std::endl;
        return nullptr;
    }

}

