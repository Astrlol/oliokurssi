#pragma once
#include <string>

class Car
{
    private:
        std::string brand;
        std::string model;
        int yearModel;
    public:
        void printData();
        Car(std::string brand, std::string model, int yearModel);

};
