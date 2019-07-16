//
//  Deck.hpp
//  CardGame
//

#ifndef Deck_hpp
#define Deck_hpp

#include "Cards.hpp"

#define MAX_DECK_COUNT      52

// represnts deck of playing cards and allows for
// creation, shuffling, and reseting
class Deck {
    
public:
    Deck();
    ~Deck();
    
    bool shuffleDeck();
    Card *dealCard();
    
    int getCurrentPosition() { return currentPosition; }
    int getCardCount() { return cardCount; }


private:
    Card *cards[MAX_DECK_COUNT];
    int currentPosition;
    int cardCount;
    
};

#endif /* Deck_hpp */
