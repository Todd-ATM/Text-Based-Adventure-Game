#include "Level.h"

Level::Level(std::string n, std::string d) {
    name = n;
    description = d;
}

std::string Level::GetName() {
    return name;
}

