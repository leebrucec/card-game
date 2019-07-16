//
//  Deck.cpp
//  CardGame
//

#include <algorithm>
#include <random>
#include "Deck.hpp"
#include "Cards.hpp"

// constructor for Deck
Deck::Deck() {
    currentPosition = 0;
    cardCount = 0;

    // build the deck
    for (int i = hearts; i <= clubs; i++)
        for (int j = two; j <= ace; j++)
            cards[cardCount++] = new Card((suite)i, (card)j);
};

// destuctor for deck
Deck::~Deck() {
    // cleanup allocated cards
    for (int i; i < MAX_DECK_COUNT; i++) {
        if (cards[i])
            delete cards[i];
    }
};

// shuffle deck of cards, put cards in random order
// return: true or false
bool Deck::shuffleDeck() {
    if (cardCount) {
        std::random_device rd;
        std::mt19937 g(rd());
        
        std::shuffle(&cards[0], &cards[MAX_DECK_COUNT], g);
        
        return true;
    }
    
    return false;
}

// deal card to player from current position
Card * Deck::dealCard() {
    return cards[currentPosition++];
}




