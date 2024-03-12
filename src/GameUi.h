#pragma once


class GameUi
{
private:
    //Variables
    int player_score, cpu_score;
    int score;

    //Private Functions
    void initVariables();

public:
    //Constructor & Destructor
    GameUi();
    ~GameUi();


    //Functions
    void increasePlayerScore(int score);
    void increaseCpuScore(int score);


    void Update();
    void Render();

};



