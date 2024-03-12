#pragma once

#include "Paddle.h"

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

    void CheckCpuBallCollision(Ball& ball);

    void Update(Ball& ball) override;
    // void Render();
};