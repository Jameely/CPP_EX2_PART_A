#include "player.hpp"

using namespace std;

namespace ariel
{
    Player::Player(string Name):Name(Name){}
    int Player::stacksize(){return 0;}
    int Player::cardesTaken(){return 0;}
    string Player::getname(){return Name;}
    void Player::WinCard(Card win){PlayerWinningCards.push_back(win);}
    bool Player::iswin(){return false;}

}