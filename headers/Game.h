#ifndef GAME_HEADER_H
#define GAME_HEADER_H

#include <iostream>
#include <Level.h>
#include <LevelFactory.h>
#include "Player.h"
#include <map>
#include "Clue.h"

class Game {
  public:
    Game();
    void start();
    void GameLoop();


  private:
      //factory
      LevelFactory levelFactory;
      std::vector<Level*> maps;
      //player
      Player player;
      int CurrentLevel;
};

#endif