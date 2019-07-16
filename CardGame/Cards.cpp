//
//  Cards.cpp
//  CardGame
//

#include <iostream>
#include "Cards.hpp"

// card constructor
Card::Card(suite suiteNumber, card cardNumber) :  suiteValue(suiteNumber), cardValue(cardNumber) {
    
}

// card destuctor
Card::~Card(){
    
}

// returns the string for the assigned card value
const char * Card::getCardValueString() {
    switch (getCardValue())
    {
       case two:
            return CARD_TWO_STRING;
            break;
        case three:
            return CARD_THREE_STRING;
            break;
        case four:
            return CARD_FOUR_STRING;
            break;
        case five:
            return CARD_FIVE_STRING;
            break;
        case six:
            return CARD_SIX_STRING;
            break;
        case seven:
            return CARD_SEVEN_STRING;
            break;
        case eight:
            return CARD_EIGHT_STRING;
            break;
        case nine:
            return CARD_NINE_STRING;
            break;
        case ten:
            return CARD_TEN_STRING;
            break;
        case jack:
            return CARD_JACK_STRING;
            break;
        case queen:
            return CARD_QUEEN_STRING;
            break;
        case king:
            return CARD_KING_STRING;
            break;
        case ace:
            return CARD_ACE_STRING;
            break;
        default:
            return CARD_UNKNOWN_STRING;
            break;
      
    }
}

// returns the string for the assigned card suite
const char * Card::getCardSuiteString() {
    switch (getCardSuite())
    {
        case hearts:
            return SUITE_HEARTS_STRING;
            break;
        case diamonds:
            return SUITE_DIAMONDS_STRING;
            break;
        case spades:
            return SUITE_SPADES_STRING;
            break;
        case clubs:
            return SUITE_CLUBS_STRING;
            break;
        default:
            return CARD_UNKNOWN_STRING;
            break;
    }
}

// prints the card suite and value
void Card::printCard () {
    printf("suite = %s, value = %s\n", getCardSuiteString(), getCardValueString());
}


