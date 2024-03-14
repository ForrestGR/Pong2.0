#include <raylib.h>

#include "GameLogic.h"


GameLogic::GameLogic() : lastHit(NONE) {}   //Der Konstruktor initialisiert lastHit mit None


void GameLogic::setLastHit(PaddleOwner owner)
{
    lastHit = owner;
}


GameLogic::PaddleOwner GameLogic::getLastHit() const
{
    return lastHit;
}





// PaddleOwner lastHit = NONE;

// void setLastHit(PaddleOwner owner) 
// {
//     lastHit = owner;
// }

// PaddleOwner getLastHit() 
// {
//     return lastHit;
// }
