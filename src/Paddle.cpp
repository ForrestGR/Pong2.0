#include <raylib.h>

#include "Paddle.h"


//Variables
void Paddle::initVariables()
{
        this-> width = 25;
        this-> height = 120;
        this-> x = GetScreenWidth() - width - 10;
        this-> y = GetScreenHeight() / 2 - height / 2;
        this->speed = 3;
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


// Functions
void Paddle::KeyBoardInputMovement()
{
    if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) {
        y -= speed;
    }
    if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) {
        y += speed;
    }
    if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) {
        x -= speed;
    }
    if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) {
        x += speed;
    }
}

void Paddle::LimitMovement()
{
    //LimitMovement Top
    if (y <= 0)      
    {
        y = 0;
    } 
    //LimitMovement Bottom
    if (y + height >= GetScreenHeight())
    {
        y = GetScreenHeight() - height;
    }
    //LimitMovement Right
    if (x + width >= GetScreenWidth())
    {
        x = GetScreenWidth() - width;
    }
    //LimitMovement Left
    if (x <= 0)
    {
        x = 0;
    }
}

void Paddle::CheckPlayerBallCollision(Ball& ball)
{
    if (CheckCollisionCircleRec(Vector2{ball.GetX(), ball.GetY()}, ball.GetRadius(), Rectangle{x, y, width, height}))
    {
        ball.ReverseSpeedX();
    }
}

void Paddle::Update(Ball& ball)
{
    this->KeyBoardInputMovement();
    this->LimitMovement();

    this->CheckPlayerBallCollision(ball);
}

void Paddle::Render()
{
    DrawRectangle(static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height), WHITE);
}
