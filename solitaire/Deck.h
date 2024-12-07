#pragma once
#include "Card.h"
using namespace std;
#include<string>
class Deck
{
	void createDeck();
	string suits[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	string ranking[13] = {"Ace","1","2","3","4","5","6","7","8","9","10","King","Queen","Jack"};
	const int numberOfSuits = 4;
	const int numberOfRanks = 13;
};

