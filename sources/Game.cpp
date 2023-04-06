#include "game.hpp"

namespace ariel
{
    Game::Game(Player First , Player Second):First_player(First),Second_player(Second){}
    void Game::playAll(){}
    void Game::playTurn(){}
    void Game::printWiner(){}
    void Game::printLog(){}
    void Game::printStats(){}
    void Game::printLastTurn(){}
    void Game::round(){rounds++;}
    void Game::setWinner(string w){winner=w;}
    string Game::getWinner(){return winner;}
}