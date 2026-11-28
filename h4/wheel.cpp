#include "wheel.h"


Wheel::Wheel(int size, std::string type){
    this->size = size;
    this->type = type;
}

void Wheel::setSize(int setSize){
    size = setSize;
}

void Wheel::setType(std::string setType){
    type = setType;
}

int Wheel::getSize(){
    return size;
}

std::string Wheel::getType(){
    return type;
}