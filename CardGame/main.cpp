//
//  main.cpp
//  CardGame
//

#include <iostream>
#include "Deck.hpp"
#include "Player.hpp"
#include "Cards.hpp"

// show command line usage
static void printUsage()
{
    printf("Usage: CardGame playerCount(player count cannot exceed %d)\n", MAX_PLAYER_COUNT);
}

// controls operation of the program
int main(int argc, const char * argv[]) {
    int playerCount = 0;
    
    // parse command line, make sure that we have the proper count of arguments
    if (2 == argc)
        playerCount = atoi(argv[1]);
    
    // if we have a player count that does not exceed the maximum player limit
    if (playerCount > 0 && playerCount <= MAX_PLAYER_COUNT)
    {
        Deck *myDeck;
        Player *players[playerCount];
        
        // create the deck of cards
        myDeck = new Deck();
        
        // create player list
        for (int i = 0; i < playerCount; i++)
            players[i] = new Player();
        
        // shuffle deck
        myDeck->shuffleDeck();

        // deal the cards
        for (int i = 0; i < PLAYER_CARD_COUNT; i++)
            for (int j = 0; j < playerCount; j++)
                players[j]->addCard(myDeck->dealCard());
        
        // print player hands
        for (int i = 0; i < playerCount; i++) {
            printf("Player %i\n", i+1);
            players[i]->printPlayerCards();
        }
        
        // cleanup player list
        for (int i = 0; i < playerCount; i++)
                delete players[i];
        
        // clean up deck
        if (myDeck)
            delete myDeck;
        
        
    }
    else // don't have the proper command line parameters
        printUsage();
    
    return 0;
}
