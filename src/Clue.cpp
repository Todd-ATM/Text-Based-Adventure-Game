#include "Clue.h"

    Clue::Clue(std::string n, std::string ct) {
        Name = n;
        ClueString = ct;
    }

std::string Clue::DisplayClueText() {
    return ClueString;
}

std::string Clue::GetName() {
    return Name;
}