#include <memory>
#include <vector>
#include "dog.h"
#include "animal.h"
#include <locale.h>
#include <stdlib.h>


using namespace std;

int main()
{


    // Asetetaan konsoli UTF-8 tilaan, jotta ääkköset näkyvät
    system("chcp 65001 > nul");
    setlocale(LC_ALL,"fi-FI");




    vector<unique_ptr<Animal>> a;

    a.push_back(make_unique<Dog>());
    a.push_back(make_unique<Animal>());

    for (const auto& animal : a){
        animal->callOut();
    }

    return 0;
}
