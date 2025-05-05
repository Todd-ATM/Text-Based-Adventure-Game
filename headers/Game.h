#ifndef GAME_HEADER_H
#define GAME_HEADER_H

#include <iostream>
#include <Level.h>
#include <LevelFactory.h>

class Game {
  public:
    Game();
    void start();


  private:
      //factory
      LevelFactory levelFactory;
      std::vector<Level*> maps;
};

#endif