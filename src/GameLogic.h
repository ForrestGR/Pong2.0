#pragma once


class GameLogic
{
private:
    enum PaddleOwner 
    {
        NONE,
        PLAYER,
        CPU
    };

    PaddleOwner lastHit;

public:
    GameLogic() : lastHit(NONE) {}

    void setLastHit(PaddleOwner owner)
    {
        lastHit = owner;
    }

    PaddleOwner getLastHit() const
    {
        return lastHit;
    }

};