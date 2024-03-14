#pragma once

#include "Paddle.h"


class CpuPaddle : public Paddle
{
public:
    //Referenzen / Pointer
    //GameLogic& gameLogic;

    //Private Functions
    void initVariables();


    //Constructor & Destructor
    CpuPaddle(/*GameLogic& gameLogic*/);
    ~CpuPaddle();

    //Accessors

    //Functions
    void CpuAi(float ball_ywert);

    void CheckCpuBallCollision(Ball& ball);

    void Update(Ball& ball/*, const GameLogic& gameLogic*/) override;
    // void Render();
};



