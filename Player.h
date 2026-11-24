#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Rubis.h";
using namespace std;


class Player
{
   

public:

    enum Side
    {
       top,
       bottom,
       left,
       right, 
    };


    string getName() const;
    void setActive(bool);
    bool isActive();
    int getNRubies() const;
    void addRubis(const Rubis&);
    void setDisplayMode(bool endOfGame);
       

    Player(/* args */);
    ~Player();
    void setSide(Side);
    Side getSide();
};

Player::Side Player::getSide()
{

}

void Player::setSide(Side)
{

}

Player::Player(/* args */)
{
}

Player::~Player()
{
}


#endif // 0