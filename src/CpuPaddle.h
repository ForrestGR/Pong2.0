#pragma once

#include "Paddle.h"
#include "ball.h"

class CpuPaddle : public Paddle
{
private:

    //Private Functions
    void initVariables();

public:
    //Constructor & Destructor
    CpuPaddle();
    ~CpuPaddle();

    //Accessors

    //Functions
    void CpuAi(float ball_ywert);

    void Update(Ball& ball);
    // void Render();
};