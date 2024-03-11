#pragma once

class Ball
{
private:
    //Variables
    float x;
    float y;
    int movementSpeed_x;
    int movementSpeed_y;
    float radius;

    //Private Functions
    void initVariables();
    void initShape();
    

  
public:
    //Constructor & Destructor
    Ball();
    ~Ball();

    //Accessors

    //Functions
    void collision();
    void movement();

    void kickdown();

    void Update();
    void Render();

};