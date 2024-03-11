#include <raylib.h>

#include "Obstacle.h"


//Private Functions
void Obstacle::initVariable()
{
    this-> width = 25;
    height = 120;
    x = GetScreenWidth() /  2 - width / 2;
    y = 40;
    speed = 3;
}


//Constructor & Destructor
Obstacle::Obstacle()
{
    this->initVariable();
}

Obstacle::~Obstacle()
{
}


// Functions
void Obstacle::movement()
{
    y += speed;

    if(y <= 0)
    {
        speed *= -1;
    } else if (y + height >= GetScreenHeight())
    {
        speed *= -1;
    }
}


void Obstacle::update()
{
    this->movement();
}
