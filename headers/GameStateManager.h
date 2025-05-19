#ifndef GAME_STATE_H
#define GAME_STATE_H

#include "Game.h"

class GameState {
  public:
    GameState();
    void Subscribe(Item* Listener);
    void Unsubscribe(Item* Listener);
    void Notify(Clue* LastClue);

  private:
    std::vector<Item*> Customers;
};

#endif 