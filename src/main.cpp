#include <raylib.h>

#include "game.h"

int main()
{

    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "My Pong Game");
    
    SetTargetFPS(144);

    //Initializie Game Object
    Game game;

    //Game Loob
    game.run();

    return 0;

}