#pragma once
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string name);
    std::string getName();
    void makePasta();
    ~ItalianChef();
};


