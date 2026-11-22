#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;





int main()
{

    Chef name("Gordon Ramsay");
    name.makeSalad();
    name.makeSoup();

    //ItalianChef
    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    cout<<"name of the Italian Chef is "<<italianChef.getName()<<endl;

    return 0;
}
