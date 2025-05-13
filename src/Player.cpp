#include "Player.h"

//populate list of commands
Player::Player() {
  commands = {"EXAMINE", "USE", "EQUIP"};
  //default inventory
  placeItem("KNIFE");
}

void Player::placeItem(std::string Type) {
    inventory.placeItem(Type);
}

void Player::listItems() {
  inventory.displayItems();
}

Item* Player::EquipItem(int slot) {
  if (slot >= 0 && slot < inventory.GetInventorySize()) {
       return inventory.getItem(slot);
  }
  else return nullptr;

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

    //Commands
    if (Words[0] == commands[0]) {
      std::cout << "You just used Examine" << std::endl;
    } 
    else if (Words[0] == "USE") {
      for (int i = 0; i < inventory.GetInventorySize(); i++) {
        if (Words[1] == inventory.getItem(i)->getName()) {
          inventory.getItem(i)->Use();
          break;
        }
        else 
          std::cout << "You can't use something that's not in your inventory" << std::endl;
      }
    } 
    else if (Words[0] == "EQUIP") {
      for (int i = 0; i < inventory.GetInventorySize(); i++) {
        if (Words[1] == inventory.getItem(i)->getName()) {
          CurrentItem = inventory.getItem(i);
          std::cout << "You equipped " << CurrentItem->getName() << std::endl;
          break;
        }
        else 
          std::cout << "Invalid Equip: You can only equip item's you have in inventory" << std::endl;
      }
    } else if (Words[0] == "INVENTORY") {
      listItems();
    } else {
      std::cout << "Invalid Command" << std::endl;
      Words.clear();
    }

    Words.clear();
}