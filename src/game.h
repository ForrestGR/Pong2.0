// #pragma one

#include "ball.h"
#include "Paddle.h"
#include "CpuPaddle.h"
#include "Obstacle.h"

class Game
{
private:
    //Window

    //Ressources

    //Objects
    Ball ball;
    Paddle player;
    CpuPaddle cpu;
    Obstacle obstacle;

    //Private Functions
    void initVariables();
    void initWindow();
    

public:
    //Constructor & Destructor
    Game();
    ~Game();

    //Accessors / Getter 

    //Modifiers / Setter

    //Functions
    void run();


    void update();
    void render();




};