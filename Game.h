#ifndef GAME_H
#define GAME_H
#include "Player.h";

class Game
{
private:
    /* data */
public:

    int getRound();
    void addPlayer(const Player&);
    Player& getPlayer(Side);
    const Card* getPreviousCard();
    const Card* getCurrentCard();
    void setCurrentCard( const Card*);
    Card* getCard(const Letter&, const Number&);
    void setCard(const Letter&, const Number& );
    void setCurrentCard( const Card*) ; 
    Card* getCard( const Letter&, const Number& );
    void setCard( const Letter&, const Number&, Card* );

    Game(/* args */);
    ~Game();
};

Game::Game(/* args */)
{
}

Game::~Game()
{
}


#endif // 0