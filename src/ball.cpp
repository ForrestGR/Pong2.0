#include <raylib.h>

#include "ball.h"


//Variables
void Ball::initVariables()
{
    this->x = GetScreenWidth()/2;
    y = GetScreenHeight()/2;
    movementSpeed_x = 5;
    movementSpeed_y = 5;
    radius = 15.f;
}

void Ball::initShape()
{
    
}


//Constructor & Destructor
Ball::Ball()
{
    initVariables();
    initShape();
}

Ball::~Ball()
{
}


//Accessors


// Functions
void Ball::collision()
{
    //Collision Top or Bottom
    if (y + radius >= GetScreenHeight() || y - radius <= 0)
        movementSpeed_y *= -1;
    
    
    if (x + radius >= GetScreenWidth() || x - radius <= 0)
        movementSpeed_x *= -1;


}

void Ball::movement()
{
    x += movementSpeed_x;
    y += movementSpeed_y;
}

void Ball::kickdown()
{
    if(IsKeyPressed(KEY_O))
    {
        movementSpeed_x *= 2;
    }
    if(IsKeyPressed(KEY_P))
    {
        movementSpeed_x = 7;
    }
}

void Ball::Update()
{

    this->movement();
    this->collision();

    this->kickdown();


}

void Ball::Render()
{
    DrawCircle(x, y, radius, WHITE);
}