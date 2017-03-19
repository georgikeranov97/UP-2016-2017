#include "Transmission.h"

Transmission::Transmission()
{
    type = Automatic;
    gearLevel = 0;
}

Transmission::Transmission(TransmissionType type, int gearLevel)
{
    this->type = type;
    this->gearLevel = gearLevel;
}

TransmissionType Transmission::getType() const
{
    return this->type;
}

void Transmission::setType(TransmissionType type)
{
    this->type = type;
}

int Transmission::getGearLevel() const
{
    return this->gearLevel;
}

void Transmission::setGearLevel(int gearLevel)
{
    this->gearLevel = gearLevel;
}

Transmission::~Transmission()
{

}
