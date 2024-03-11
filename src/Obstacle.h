#pragma once

#include "Paddle.h"


class Obstacle : public Paddle
{
private:
    //Private Functions
    void initVariable();


public:
    //Constructor & Destructor
    Obstacle();
    ~Obstacle();



    //Functions
    void movement();

    void update();
    //void render();
};