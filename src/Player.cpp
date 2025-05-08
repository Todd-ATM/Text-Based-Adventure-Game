#include "Player.h"

//populate list of commands
Player::Player() {
  commands = {"EXAMINE", "USE"};
}

void Player::Action(std::string Input)  {
    std::vector<std::string> Words;
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
}