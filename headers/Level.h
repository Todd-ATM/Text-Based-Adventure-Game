#ifndef LEVEL_HEADER_H
#define LEVEL_HEADER_H

#include<string>

class Level {
  public:
    Level();

    void DisplayDescription();

    void SetDescription(std::string D);

    void SetName();


  private:
    std::string description;
    std::string name;
    
};

#endif