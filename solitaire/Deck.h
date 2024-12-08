#pragma once
#include "Card.h"
using namespace std;
#include<string>
#include <list>
class Deck
{
public:
	// constructor
	Deck();
	// deck storage
	list<Card> deck;
	
	// functions to display 
	void showDeck(list<Card>&);
	void showCard(list<Card>&);
	// shuffle
	void shuffleDeck(list<Card>&);
	// getter
	list<Card>& getDeck();
	Card drawCard();
private:
	string suits[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	string ranking[13] = {"Ace","1","2","3","4","5","6","7","8","9","10","King","Queen"};
	const int numberOfSuits = 4;
	const int numberOfRanks = 13;
};

