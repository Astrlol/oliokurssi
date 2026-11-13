#include "car.h"
#include <iostream>



void Car::printData(){
    std::cout<<"Car brand: "<<brand <<"\nCar Model: "<<model<<"\nCar yearModel: "<<yearModel<<"\n"<<std::endl;
}

//
Car::Car(std::string brand, std::string model, int yearModel){
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}
