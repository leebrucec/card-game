//
//  Cards.hpp
//  CardGame
//

#ifndef Cards_hpp
#define Cards_hpp

// card value strings
#define CARD_TWO_STRING     "two"
#define CARD_THREE_STRING   "three"
#define CARD_FOUR_STRING    "four"
#define CARD_FIVE_STRING    "five"
#define CARD_SIX_STRING     "six"
#define CARD_SEVEN_STRING   "seven"
#define CARD_EIGHT_STRING   "eight"
#define CARD_NINE_STRING    "nine"
#define CARD_TEN_STRING     "ten"
#define CARD_JACK_STRING    "jack"
#define CARD_QUEEN_STRING   "queen"
#define CARD_KING_STRING    "king"
#define CARD_ACE_STRING     "ace"
#define CARD_UNKNOWN_STRING "unknown"

// card suite strings
#define SUITE_HEARTS_STRING     "hearts"
#define SUITE_DIAMONDS_STRING   "diamonds"
#define SUITE_SPADES_STRING     "spades"
#define SUITE_CLUBS_STRING      "clubs"

enum card {
    two = 2,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
    ace
};

enum suite {
    hearts = 1,
    diamonds,
    spades,
    clubs
};

class Card
{
public:
    Card(suite suitNumber, card cardNumber);
    ~Card();
    
    card getCardValue () { return cardValue; }
    suite getCardSuite() { return suiteValue; }
    
    void printCard ();
    
private:
    suite suiteValue;
    card cardValue;
    
    const char *getCardSuiteString();
    const char *getCardValueString();
    
};


#endif /* Cards_hpp */
