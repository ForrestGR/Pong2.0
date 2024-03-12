#pragma once

class Ball
{
private:
    //Variables
    float x;
    float y;
    float movementSpeed_x;
    float movementSpeed_y;
    float radius;

    //Private Functions
    void initVariables();
    void initShape();

public:
    //Constructor & Destructor
    Ball();
    ~Ball();

    //Accessors / Getter 
    float GetY() const {return y;};
    float GetX() const {return x;};
    float GetRadius() const {return radius;};
    float GetSpeedX() const {return movementSpeed_x;};
    float GetSpeedY() const {return movementSpeed_y;};

    //Modifiers / Setter
    void ReverseSpeedX() { movementSpeed_x = -movementSpeed_x; }

    //Functions
    void collision();
    void movement();
    void Resetball();

    void kickdown();

    void Update();
    void Render();

};