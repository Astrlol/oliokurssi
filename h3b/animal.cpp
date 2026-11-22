#include "animal.h"
#include <iostream>

Animal::Animal(){
    std::cout<<"Animal konstruktori"<<std::endl;
}

void Animal::callOut(){
    std::cout<<"Eläin ääntelee."<<std::endl;
}

Animal::~Animal(){
    std::cout<<"Animal destruktori"<<std::endl;
}