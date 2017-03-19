#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Tank tank = Tank(65);
    Transmission transmission = Transmission(Manual, 4);
    Engine engine = Engine(120, 1900, Diesel);
    Car car = Car(4, 5, engine, tank, transmission);

    cout << car.calculateEmissions() << endl;
    cout << car.calculateTax() << endl;
    cout << car.calcGear(80) << endl;
    cout << car.fuelConsumption(70) << endl;
    cout << car.maxAvailablePath(60) << endl;
    return 0;
}
