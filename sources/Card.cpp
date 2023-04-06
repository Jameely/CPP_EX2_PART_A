#include "card.hpp"

namespace ariel{
    Card::Card(string card, int value):card(card),value(value){} //parametric constructor
    int Card::isGreater(Card Another){return 0;} //The Function That compare the cards
}