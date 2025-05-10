#ifndef PLAYER_HEADER_H
#define PLAYER_HEADER_H

#include "Actor.h"
#include <iostream>

class Player : public Actor {
  public:
    Player();
    void Action(std::string Input) override;
    Inventory& getInventory() override;

  private: 
    std::vector<std::string> commands;
    std::vector<std::string> Words;
};

#endif