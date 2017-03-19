#include "car.h"


Car::Car()
{
    numSeats = 0;
    yearMade = 0;
    engine = Engine();
    tank = Tank();
    transmission = Transmission();
}

Car::Car(int numSeats, int yearMade, Engine engine, Tank tank, Transmission transmmission)
{
    this->numSeats = numSeats;
    this->yearMade = yearMade;
    this->engine = engine;
    this->tank = tank;
    this->transmission = transmission;
}

int Car::getNumSeats() const
{
    return this->numSeats;
}

void Car::setNumSeats(int numSeats)
{
    this->numSeats = numSeats;
}

int Car::getYearMade() const
{
    return this->yearMade;
}

void Car::setYearMade(int yearMade)
{
    this->yearMade = yearMade;
}

Engine Car::getEngine() const
{
    return this->engine;
}

void Car::setEngine(Engine engine)
{
    this->engine = engine;
}

Tank Car::getTank() const
{
    return this->tank;
}

void Car::setTank(Tank tank)
{
    this->tank = tank;
}

Transmission Car::getTransmission() const
{
    return this->transmission;
}

void Car::setTransmission(Transmission transmission)
{
    this->transmission = transmission;
}

double Car::calculateEmissions()
{
    EngineType k = getEngine().getType();
    return getEngine().getHp() * getEngine().getVolume() * k;
}

double Car::calculateTax()
{
   int tax;
   int hp = getEngine().getHp();
   if (hp <= 105)
   {
      tax = hp * 0.8;
   }
   else
   {
       tax = hp * 0.9;
   }
   int year = getYearMade();
   if (year >= 14)
   {
       return tax;
   }
   else if (year <= 5)
   {
       return tax * 2.8;
   }
   else
   {
       return tax * 1.5;
   }
}

int Car::calcGear(int speed)
{
    if (speed <= 20)
    {
        return 1;
    }
    else if (speed > 20 && speed <= 30)
    {
        return 2;
    }
    else if (speed > 30 && speed <= 50)
    {
        return 3;
    }
    else if (speed > 50 && speed <= 80)
    {
        return 4;
    }
    else if (speed > 80 && speed <= 200)
    {
        return 5;
    }
    else
    {
        return 6;
    }
}

double Car::fuelConsumption(int speed)
{
    int hp = getEngine().getHp();
    int volume = getEngine().getVolume();
    return (calcGear(speed) * hp * volume / 1000) / 100;
}

double Car::maxAvailablePath(int speed)
{
    int capacity = getTank().getCapacity();
    double cons = fuelConsumption(speed);
    return (capacity / cons) * 100;
}

Car::~Car()
{

}
