#include <raylib.h>

#include "Ball.h"


//Variables
void Ball::initVariables()
{
    this->x = GetScreenWidth()/2;
    this->y = GetScreenHeight()/2;
    movementSpeed_x = 4.f;
    movementSpeed_y = 4.f;
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
    
    //Collision Left
    if (x - radius <= 0)
    {
        Resetball();
    //Collision Right
    } else if (x + radius >= GetScreenWidth())
    {
        Resetball();
    }
}

void Ball::movement()
{
    x += movementSpeed_x;
    y += movementSpeed_y;
}

void Ball::Resetball()
{
    x = GetScreenWidth() / 2;
    y = GetScreenHeight() / 2;
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