#pragma once

enum EngineType
{
    Electrical,
    Hybrid,
    Gasoline,
    Diesel,
};

class Engine
{
private:
    int hp;
    int volume;
    EngineType type;

public:
    Engine();
    Engine(int, int, EngineType);

    void setHp(int);
    int getHp() const;

    void setVolume(int);
    int getVolume() const;

    void setType(EngineType);
    EngineType getType() const;

    ~Engine();
};
