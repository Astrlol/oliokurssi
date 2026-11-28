#pragma once


class Engine
{
private:
    // asetetaan nolliksi ettei tule roskaa
    int horsepower = 0;
    double displacement = 0;

public:

    // Käytetään default jotta ei tarvitse turhaa lisätä .cpp tiedostoon
    Engine() = default;

    Engine(int, double);

    void setHorsepower(int);
    void setDisplacement(double);

    int getHorsepower();
    double getDisplacement();

};


