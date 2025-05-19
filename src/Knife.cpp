#include "Knife.h"

Knife::Knife() {
    Name = "KNIFE";
    CurrentClue = nullptr;
}

std::string Knife::getName() {
    return Name;
}

void Knife::Use() {
    if (CurrentClue->GetName() == "Vines") {
        std::cout << "You cut the vines, revealing a hidden switch. Pressing the switch\n causes the door to open and you enter" << std::endl;
    } else {
        std::cout << "You're knife does nothing" << std::endl;
    }
}

void Knife::UpdateClue(Clue* Clue) {
    CurrentClue = Clue;
}