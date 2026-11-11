#include "car.h"
#include <iostream>

// Setters

void Car::setBrand(std::string setBrand){
    brand = setBrand;
}

void Car::setModel(std::string setModel){
    model = setModel;
}

void Car::setYearModel(int setYearModel){
    yearModel = setYearModel;
}
// Print
void Car::printData(){
    std::cout<<"Auton merkki: "<<brand<<"\nAuton malli: "<<model<<"\nAuton vuosimalli: "<<yearModel<<std::endl;
}
