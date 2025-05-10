#include "Player.h"

//populate list of commands
Player::Player() {
  commands = {"EXAMINE", "USE"};
}

Inventory& Player::getInventory() {
  return inventory;
}

void Player::Action(std::string Input)  {
    std::string word;
    for (auto x : Input) {
      if (x == ' ') {
        Words.push_back(word);
        word = "";
      }
      else if (x == Input.back()) {
        word = word + x;
        Words.push_back(word);
      }
      else {
        word = word + x;
      }
    }

    for (int i = 0; i < Words.size(); i++) {
      std::cout << Words[i] << std::endl;
    }

    //Commands
    if (Words[0] == commands[0]) {
      std::cout << "You just used Examine" << std::endl;
    } 
    else if (Words[0] == "USE") {
      std::cout << "You just used Use" << std::endl;
      for (int i = 0; i < inventory.getINV().size(); i++) {
        if (Words[1] == inventory.getItem(i)->Name) {
          std::cout << "found item. Item name : " << inventory.getItem(i);
        }
      }
    } else {
      std::cout << "Invalid Command" << std::endl;
    }
}