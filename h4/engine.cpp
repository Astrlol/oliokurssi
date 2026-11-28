#include "engine.h"


Engine::Engine(int horsepower, double displacement){
    this->horsepower = horsepower;
    this->displacement = displacement;
}

void Engine::setHorsepower(int setHorsepower){
    horsepower = setHorsepower;
}

void Engine::setDisplacement(double setDisplacement){
    displacement = setDisplacement;
}

int Engine::getHorsepower(){
    return horsepower;
}

double Engine::getDisplacement(){
    return displacement;
}
