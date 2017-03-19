#pragma once
#include "Engine.h"
#include "Tank.h"
#include "Transmission.h"

class Car
{
private:
    int numSeats;
    int yearMade;
    Engine engine;
    Tank tank;
    Transmission transmission;

public:
    Car();
    Car(int, int, Engine, Tank, Transmission);

    void setNumSeats(int);
    int getNumSeats() const;

    void setYearMade(int);
    int getYearMade() const;

    void setEngine(Engine);
    Engine getEngine() const;

    void setTank(Tank);
    Tank getTank() const;

    void setTransmission(Transmission);
    Transmission getTransmission() const;

    ~Car();

    double calculateEmissions();
    double calculateTax();
    double fuelConsumption(int);
    double maxAvailablePath(int);
    int calcGear(int);

};
