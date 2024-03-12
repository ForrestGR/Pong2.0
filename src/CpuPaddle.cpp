#include <raylib.h>

#include "CpuPaddle.h"



//Private Functions
void CpuPaddle::initVariables()
{
    this-> width = 25;
    height = 120;
    x = 10;
    y = GetScreenHeight() / 2 - height / 2;
    speed = 3;
}

// Constructor & Destructor
CpuPaddle::CpuPaddle() : Paddle()
{
    this->initVariables();
}

CpuPaddle::~CpuPaddle()
{
}


// Functions
void CpuPaddle::CpuAi(float ball_y)
{
    if (ball_y >= y + height*3/4)
    {
        y += speed;
    } else if (ball_y < y + height*1/4)
    {
        y -= speed;
    }
}


void CpuPaddle::CheckCpuBallCollision(Ball& ball)
{
    if (CheckCollisionCircleRec(Vector2{ball.GetX(), ball.GetY()}, ball.GetRadius(), Rectangle{this->x, this->y, width, height}))
    {
        ball.ReverseSpeedX();
    }
}



void CpuPaddle::Update(Ball& ball)
{
    this->CpuAi(ball.GetY());
    LimitMovement();

    CheckCpuBallCollision(ball);
}

// void CpuPaddle::Render()
// {
// }
