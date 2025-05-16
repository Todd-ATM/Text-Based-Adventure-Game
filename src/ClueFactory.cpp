#include "ClueFactory.h"

Clue* ClueFactory::createClue(std::string name) {
    std::string text;
    if (name == "Vines") {
        text = "upon inspecting the door you notice a mysteriuous stone tablet, covered in thick layer of vines\nmaybe somehow you can cut it?";
        return new Clue("Vines", text);
        std::cout << "Created Clue with Vines Name" << std::endl;
    } else if (name == "Door") {
        text = "this is a test to see if two different clues are actually loaded";
        return new Clue(name, text);
    }
    else std::cout << "returned nullptr for clue creation" << std::endl;
    return nullptr;
}