#pragma once
#include "engine.h"
#include "wheel.h"


class Car
{

private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    std::string model;
    std::string brand;

public:


    Car() = default;
    Car(std::string, std::string);

    void setEngine();
    void setWheels();
    void setModel(std::string);
    void setBrand(std::string);

    std::string getModel();
    std::string getBrand();

    void printDetails();



};

