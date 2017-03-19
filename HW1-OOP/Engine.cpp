#include "Engine.h"

Engine::Engine()
{
    hp = 0;
    volume = 0;
    type = Electrical;
}

Engine::Engine(int hp, int volume, EngineType type)
{
    this->hp = hp;
    this->volume = volume;
    this->type = type;
}

int Engine::getHp() const
{
    return this->hp;
}

void Engine::setHp(int hp)
{
    this->hp = hp;
}

int Engine::getVolume() const
{
    return this->volume;
}

void Engine::setVolume(int volume)
{
    this->volume = volume;
}

EngineType Engine::getType() const
{
    return this->type;
}

void Engine::setType(EngineType type)
{
    this->type = type;
}
Engine::~Engine()
{

}
