//
//  Player.cpp
//  CardGame
//

#include "Player.hpp"

// constructor
Player::Player() {
    cardCount = 0;
}

// destructor
Player::~Player() {
    for (int i = 0; i < cardCount; i++)
        delete playerCards[i];
}

// add card to players hand
bool Player::addCard(Card *card) {
    Card *myCard = new Card(card->getCardSuite(), card->getCardValue());
    playerCards[cardCount++] = myCard;
    
    return true;
}

// print players hand of cards
void Player::printPlayerCards()
{
    for (int i = 0; i < cardCount; i++)
        playerCards[i]->printCard();
}
