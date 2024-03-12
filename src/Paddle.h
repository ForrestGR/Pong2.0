#pragma once

#include "Ball.h"

class Paddle
{
private:

protected:
    //Variables
    float x, y;
    float width, height;
    float speed;

    //Private Functions
    void initVariables();
    void initShape();

public:
    //Constructor & Destructor
    Paddle();
    virtual ~Paddle();

    //Accessors

    //Functions
    void KeyBoardInputMovement();
    void LimitMovement();

    void CheckPlayerBallCollision(Ball& ball);

    virtual void Update(Ball& ball);
    void Render();


};