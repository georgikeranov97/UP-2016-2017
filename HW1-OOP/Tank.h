#pragma once


class Tank
{
private:
    int capacity;

public:
    Tank();
    Tank(int);

    void setCapacity(int);
    int getCapacity() const;

    ~Tank();
};
