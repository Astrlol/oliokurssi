#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b){
    int add;
    add = a + b;
    cout<<"Yhteenlasku: "<<add<<endl;
}

void calcDiv(int a, int b){
    float divide;
    if(b == 0){
        cout<<"Jakaja ei saa olla nolla"<<endl;
    }
    else {
            divide = a / (float)b;
            cout<<setprecision(2)<<fixed<<"Jakaminen "<<divide<<endl;
        }
}
int retSum(int a, int b){
    return a + b;
}

float retDiv(int a,int b){
    float divide;
    if(b == 0){
        throw std::runtime_error("Jakaja ei saa olla nolla!");
    }
    else{
        divide = a / (float)b;
        return divide;
    }
}


int main()
{
    int a, b;
    cout<<"Anna 2 lukua"<<endl;
    cin >>a>>b;
    calcSum(a, b);
    calcDiv(a, b);
    int v1 = retSum(a, b);
    cout<<a<< "+" << b << "=" << v1 <<endl;
    try {
        float v2 = retDiv(a, b);
        cout<< a << "/" << b << "=" <<setprecision(2)<<fixed<< v2 <<endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<<e.what()<<endl;
    }


    return 0;
}
