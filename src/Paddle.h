#pragma once

class Paddle
{
private:
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
    ~Paddle();

    //Accessors

    //Functions
    void Update();
    void Render();


};