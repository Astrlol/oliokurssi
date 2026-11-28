#include "car.h"
#include <iostream>


Car::Car(std::string model, std::string brand){
    this->brand = brand;
    this->model = model;
}

void Car::setBrand(std::string setBrand){
    brand = setBrand;
}

void Car::setModel(std::string setModel){
    model = setModel;
}

void Car::setEngine(){
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2);
}

// for looppi, jotta ei tarvitse jokaista yksittellen asettaa
void Car::setWheels(){
    Wheel* wheels[] = { &objWheel1, &objWheel2, &objWheel3, &objWheel4};

    for (Wheel* w : wheels){
        w->setSize(17);
        w->setType("kesarengas");
    }

}

std::string Car::getModel(){
    return model;
}

std::string Car::getBrand(){
    return brand;
}

void Car::printDetails(){
    std::cout<<"Auto : "<<model<<" "<<brand<<std::endl;
    std::cout<<"Moottori: "<<objEngine.getHorsepower()<<" hp, "<<objEngine.getDisplacement()<<" L"<<std::endl;

    Wheel* wheels[] = { &objWheel1, &objWheel2, &objWheel3, &objWheel4 };

    for (int x = 0; x < 4; x++){
        std::cout<<"Rengas "<<x + 1<<":"<<wheels[x]->getSize()<<" tuumaa, "<<wheels[x]->getType()<<std::endl;
    }
}