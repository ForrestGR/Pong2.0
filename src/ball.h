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

    //Modifiers / Setter

    //Functions
    void collision();
    void movement();

    void kickdown();

    void Update();
    void Render();

};