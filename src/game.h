// #pragma one

#include "ball.h"
#include "Paddle.h"

class Game
{
private:
    //Window

    //Ressources

    //Objects
    Ball ball;
    Paddle player;

    //Private Functions
    void initVariables();
    void initWindow();
    

public:
    //Constructor & Destructor
    Game();
    ~Game();

    //Accessors / Getter & Setter

    //Modifiers

    //Functions
    void run();


    void update();
    void render();




};