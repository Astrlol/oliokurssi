#pragma once
#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
    virtual ~Dog();
    void callOut() override;


};
