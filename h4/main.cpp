#include "car.h"
#include <memory>


using namespace std;

int main()
{
    std::unique_ptr<Car> c = std::make_unique<Car>();
    c->setBrand("Toyota");
    c->setModel("Corolla");
    c->setEngine();
    c->setWheels();
    c->printDetails();

    return 0;
}
