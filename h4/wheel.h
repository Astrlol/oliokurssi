#pragma once
#include <string>


class Wheel
{
private:
    // asetetaan size nollaksi, ettei tule roskaa
    int size = 0;
    std::string type;

public:

    // Käytetään default jotta ei tarvitse turhaan lisätä .cpp tiedostoon
    Wheel() = default;


    Wheel(int, std::string);

    void setSize(int);
    void setType(std::string);

    int getSize();
    std::string getType();



};
