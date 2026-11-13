#include <vector>
#include "car.h"

using namespace std;

int main()
{

    vector<Car> carList;
    // Creating objects to the list
    carList.emplace_back("Volvo", "Farmari", 2009);
    carList.emplace_back("Mercedes", "G-Wagon", 2023);
    carList.emplace_back("Toyota", "Corolla", 2003);

    // Printing the second object
    carList[1].printData();

    // For-loop for printing all of them
     for(int x = 0; x < 3; x++) {
        carList[x].printData();
    }

    return 0;
}
