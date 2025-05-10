#include "Knife.h"

Knife::Knife() {
    Name = "Knife";
    std::cout << "Item created with name " << Name;
}

std::string Knife::getName() {
    return Name;
}

void Knife::Use() {
    //do nothing for now
}