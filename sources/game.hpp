#pragma once

#include <stack>
#include "player.hpp"
#include "card.hpp"

using namespace std;

namespace ariel
{
    class Game
    {
    private:
        Player First_player ; //player 1
        Player Second_player; //player 2
        string log; //should print all the game
        string lastturnlog; //should print the last log
        int rounds; //number of rounds
        string winner; // the winner at the end of the game
        stack<Card> stack; // should hold 52 cards .
        //13 Hearts.
        //13 Spades.
        //13 Diamonds.
        //13 Clubs.

    public:
        Game(Player first , Player second);
        void playTurn();                // play turn
        void printLastTurn();           // should print the last turn like "Alice put Q-Hearts , Bob put K-Diamonds . Bob Take The Cards"
        void playAll();                 // play the game
        void printWiner();              // print the winner
        void printLog();                // print all the game 
        void printStats();              // print stats
        void round();                   // play round
        void getRoundsNumber();         // return the rounds 
        void setWinner(string winner);  // hold Winner
        string getWinner();             // Return The Winner
    };

    
}