#include "raylib.h"

#include "GameUi.h"


//Private Functions
void GameUi::initVariables()
{
    player_score = 0;
    cpu_score = 0;
}


//Constructor & Destructor
GameUi::GameUi()
{
    this->initVariables();
}

GameUi::~GameUi()
{

}


// Functions
void GameUi::increasePlayerScore(int score)
{
   player_score += score;
}

void GameUi::increaseCpuScore(int score)
{
    cpu_score += score;
}


void GameUi::Update()
{
    increasePlayerScore(score);
    increaseCpuScore(score);

}

void GameUi::Render()
{
    DrawText(TextFormat("%i", cpu_score), GetScreenWidth()*1/4, 20, 80, WHITE);
    DrawText(TextFormat("%i", player_score), GetScreenWidth()*3/4, 20, 80, WHITE);
}


