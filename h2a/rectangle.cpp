#include "rectangle.h"

// Setters
void Rectangle::setHeight(double setHeight){
    height = setHeight;
}

void Rectangle::setWidth(double setWeight){
    width = setWeight;
}

// Getters

double Rectangle::getArea(){
    return width * height;
}

double Rectangle::getCircum(){
    return 2 * (width + height);
}