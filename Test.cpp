#include "sources/player.hpp"
#include "sources/card.hpp"
#include "sources/game.hpp"
#include "doctest.h"

using namespace std;
using namespace ariel;

    TEST_CASE("Cards Test")
    {
        Card T1("Jack-Diamonds", 11);
        Card T2("9-Hearts", 9);
        Card T3("King-Spades", 13);
        Card T4("Ace-Clubs", 1);
        Card T5("9-Diamonds", 9);
        Card T6("2-Clubs", 2);
        Card T7("Ace-Hearts", 1);

        CHECK(T1.isGreater(T2)==  1);
        CHECK(T3.isGreater(T4)==  1);
        CHECK(T6.isGreater(T2)== -1);
        CHECK(T4.isGreater(T6)== -1);
        CHECK(T2.isGreater(T5)==  0);
        CHECK(T4.isGreater(T7)==  0);
    }

    TEST_CASE("Game And Player Test")
    {
        Player A("Alice");
        Player B("Bob");
        CHECK_THROWS(new Player(""));
        CHECK_THROWS(new Player("Alice!"));
        CHECK_THROWS(new Player("Bob1"));
        CHECK_THROWS(new Game(A,A));
        CHECK_NOTHROW(new Game(A,B));
        Game game(A,B);
        CHECK_EQ(A.getname(),"Alice");
        CHECK_EQ(A.stacksize(),26);
        CHECK_EQ(B.stacksize(),26);
        CHECK_FALSE(A.cardesTaken()!=0);
        for (size_t i = 0; i < 5; i++)
        {
            game.playTurn();
        }
        CHECK_NE(A.cardesTaken()+B.cardesTaken(),0);
        CHECK_EQ(A.stacksize(),B.stacksize());
        CHECK(A.stacksize()==21);
        
        game.playAll();
        CHECK_EQ(A.stacksize(),B.stacksize());
        CHECK(B.stacksize()==0);
        CHECK(A.cardesTaken()+B.cardesTaken()==52);
        CHECK((A.iswin() || B.iswin())==1);
        string winner =game.getWinner();
        if(winner==A.getname()){
            CHECK_GT(A.cardesTaken(),B.cardesTaken());
        }
        if(winner==B.getname()){
            CHECK_LT(A.cardesTaken(),B.cardesTaken());
        }
    }
