#ifndef ITEM_HEADER_H
#define ITEM_HEADER_H

#include <string>
#include <iostream>

class Item {
  public:
    virtual void Use() = 0;
    virtual std::string getName() = 0;
    std::string Name;

  private:

};

#endif