//
//  Player.hpp
//  CardGame
//

#ifndef Player_hpp
#define Player_hpp

#include "Cards.hpp"
#include "Deck.hpp"

#define PLAYER_CARD_COUNT   5
#define MAX_PLAYER_COUNT	(MAX_DECK_COUNT / PLAYER_CARD_COUNT)

// represents card player
class Player {
public:
    Player();
    ~Player();
    
    bool addCard(Card *card);
    void printPlayerCards();
    
    int getCardCount() { return cardCount; }
    
private:
    Card *playerCards[PLAYER_CARD_COUNT];
    int cardCount;
    
};

#endif /* Player_hpp */
