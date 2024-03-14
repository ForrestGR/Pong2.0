#pragma once





class GameLogic
{
private:
    enum PaddleOwner 
    {
        NONE,
        PLAYER,
        CPU
    };

    PaddleOwner lastHit;

public:
    GameLogic();
    void setLastHit(PaddleOwner owner);
    PaddleOwner getLastHit() const;

};


// #ifndef GAME_H
// #define GAME_H

// #include "ball.h"
// #include "paddle.h"
// #include "cpupaddle.h"


// enum PaddleOwner
// {
//     NONE,
//     PLAYER,
//     CPU
// };

// extern PaddleOwner lastHit;


// #endif