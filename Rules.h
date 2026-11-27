#ifndef RULES_H
#define RULES_H
#include "Game.h";
#include "Player.h";

class Rules
{
private:
    
public:

    bool isValid(const Game&); 
    bool gameOver(const Game&);
    bool roundOver(const Game&);
    const Player& Rules::getNextPlayer(const Game&);
    
    Rules(/* args */);
    ~Rules();
};

Rules::Rules(/* args */)
{

}

Rules::~Rules()
{

}


#endif