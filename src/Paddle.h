#pragma once

class Paddle
{
private:
    // //Variables
    // float x, y;
    // float width, height;
    // float speed;

    //Private Functions
    void initVariables();
    void initShape();

public:
    //Variables
    float x, y;
    float width, height;
    float speed;

    //Constructor & Destructor
    Paddle();
    ~Paddle();

    //Accessors

    //Functions
    void KeyBoardInputMovement();
    void LimitMovement();

    void Update();
    void Render();


};