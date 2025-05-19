#ifndef CLUE_HEADER_H
#define CLUE_HEADER_H

#include <string>

class Clue {
  public:
    Clue(std::string n, std::string ClueText);

    std::string DisplayClueText();
    std::string GetName();
  protected:
    std::string ClueString;
    std::string Name;
};

#endif