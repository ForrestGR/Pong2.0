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


    //Accessors / Getter 
    // float getY() const { return y; };
    // float getHeight() const { return height; };
    // float getSpeed() const { return speed; };

    //Modifiers / Setter


    //Functions
    void movement();

    void CheckObstacleBallCollision(Ball& ball);

    void update(Ball& ball);
    //void render();
};