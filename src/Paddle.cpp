#include <raylib.h>

#include "Paddle.h"


//Variables
void Paddle::initVariables()
{
        this->width = 25;
        height = 120;
        x = GetScreenWidth() - width - 10;
        y = 100;
        speed = 6;


    // this-> x = GetScreenWidth() - width - 10;
    // this-> y = GetScreenHeight() / 2 - height / 2;
}

void Paddle::initShape()
{
}


//Constructor & Destructor
Paddle::Paddle()
{
    this-> initVariables();
}

Paddle::~Paddle()
{
}


//Functions
void Paddle::Update()
{
}

void Paddle::Render()
{
    DrawRectangle(static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height), WHITE);
}
