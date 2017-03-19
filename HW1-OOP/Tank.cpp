#include "Tank.h"

Tank::Tank()
{
    capacity = 0;
}

Tank::Tank(int capacity)
{
    this->capacity = capacity;
}

int Tank::getCapacity() const
{
    return this->capacity;
}

void Tank::setCapacity(int capacity)
{
    this->capacity = capacity;
}

Tank::~Tank()
{

}
