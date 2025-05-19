#include "GameStateManager.h"

GameState::GameState() {
    //do something eventually 
}

void GameState::Subscribe(Item* Listener) {
    Customers.push_back(Listener);
}

void GameState::Unsubscribe(Item* Listener) {
    Customers.erase(find(Customers.begin(), Customers.end(), Listener));
}

void GameState::Notify(Clue* LastUsedClue) {
    for (int i = 0; i < Customers.size(); i++) {
        Customers[i]->UpdateClue(LastUsedClue);
    }
}