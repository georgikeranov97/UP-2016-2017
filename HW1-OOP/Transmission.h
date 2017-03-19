#pragma once

enum TransmissionType
{
    Automatic,
    Manual,
};

class Transmission
{
private:
    TransmissionType type;
    int gearLevel;

public:
    Transmission();
    Transmission(TransmissionType, int);

    void setType(TransmissionType);
    TransmissionType getType() const;

    void setGearLevel(int);
    int getGearLevel() const;

    ~Transmission();
};
