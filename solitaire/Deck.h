#pragma once
#include "Card.h"
using namespace std;
#include<string>
#include <list>
class Deck
{
public:
	list<Card&> deck;
	void createDeck(list<Card>);
	void showDeck(list<string>&);
	void showCard(list<string>&);
	void shuffleDeck(list<string>&);
	Card getCard();
private:
	string suits[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	string ranking[13] = {"Ace","1","2","3","4","5","6","7","8","9","10","King","Queen"};
	const int numberOfSuits = 4;
	const int numberOfRanks = 13;
};

