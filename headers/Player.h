#ifndef PLAYER_HEADER_H
#define PLAYER_HEADER_H

#include "Actor.h"
#include <iostream>

class Player : Actor {
  public:
    Player();
    void Action(std::string Input) override;

  private: 
    std::vector<std::string> commands;
};

#endif