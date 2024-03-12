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

void Obstacle::CheckObstacleBallCollision(Ball &ball)
{
    if (CheckCollisionCircleRec(Vector2{ball.GetX(), ball.GetY()}, ball.GetRadius(), Rectangle{this->x, this->y, width, height}))
        {
            ball.ReverseSpeedX();
        }
}

void Obstacle::update(Ball& ball)
{
    this->movement();
    CheckObstacleBallCollision(ball);
}
