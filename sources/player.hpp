#pragma once

#include "card.hpp"
#include <string>
#include <list>

using namespace std;

namespace ariel{
    class Player
    {
    private:
        string Name;
        bool win; //at the end of the game every playet should know if he is the winner or not.
        list <Card> PlayerCards; //The players Cards
        list <Card> PlayerWinningCards; //The Cards that the player win
    public:
        Player(string Name); //parametric constructor , just for testing , we shouldn't have another attributes.
        int stacksize(); //The number of cards left , it should update during the game.
        int cardesTaken(); //The Number of cards win , it shoul update win the player win a round
        void WinCard(Card win); // this is the function that will update the winning cards and the winning rate...
        string getname(); //getter
        bool iswin(); //return True if The Player win 
    };
    
}