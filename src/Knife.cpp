#include "Knife.h"

Knife::Knife() {
    Name = "Knife";
}

std::string Knife::getName() {
    return Name;
}

void Knife::Use() {
    //do nothing for now
    std::cout << "Used knife" << std::endl;
}