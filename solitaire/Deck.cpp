#include "Deck.h"
#include "Card.h"
using namespace std;
#include <string>
#include <iostream>
#include <list>
void Deck::createDeck(list<Card> deck)
{
	Card card = Card();
	for (int i = 0; i < suits->length(); i++)
	{
		string suitValue = suits[i];
		card.setSuit(suitValue);
		for (int j = 0; j < numberOfRanks; j++)
		{
			string rankValue = ranking[j];
			card.setRank(rankValue);
		}
		deck.push_back(card);
	}
}

void Deck::showDeck(list<string>& deckToShow)
{
	for (const string& card : deckToShow)  // Range-based loop to iterate through the list
	{
		cout << card << endl;
	}
	cout << endl;
}

void Deck::showCard(list<string>& deckToShow)
{
	cout << "First card: " << deckToShow.front() << endl;
}
/*
void Deck::shuffleDeck(list<string>& deck) {
	// Initialize random seed
	srand(time(0));
	// Iterate through the list and swap elements
	for (auto it = deck.begin(); it != deck.end(); ++it) {
		// Get a random position
		auto randomPos = next(deck.begin(), rand() % 52);

		// Swap the current element with the random element
		iter_swap(it, randomPos);
	}
}
*/