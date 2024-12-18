//headers
#include "Deck.h"
#include "Card.h"
// libraries
#include <string>
#include <iostream>
#include <list>
#include <iterator>
#include<algorithm>
using namespace std;
Deck::Deck()
{
	
	for (int i = 0; i < suits->length(); i++)
	{
		for (int j = 0; j < numberOfRanks; j++)
		{
			Card card;
			card.setSuit(suits[i]);
			card.setRank(ranking[j]);
			deck.push_back(card);
		}
		
	}
}
void Deck::pop()
{
	deck.pop_back();
}

void Deck::showDeck(list<Card>& deckToShow)
{
	if (deckToShow.empty()) {
		cout << "Deck is empty!" << endl;
		return;
	}
	for (Card& card : deckToShow)  // Range-based loop to iterate through the list
	{
		cout << card.getSuit() << " of " << card.getRank() << endl;
	}
	cout << endl;
}
list<Card>& Deck::getDeck()
{
	return deck;
}
void Deck::showCard(list<Card>& deck)
{
	Card firstCard = deck.front();
	cout << "First card in deck: " << firstCard.getRank() << " of " << firstCard.getSuit()  << endl;
}

void Deck::shuffleDeck(list<Card>& deck) 
{
	// Check if the list is empty
	if (deck.empty()) 
	{
		cout << "Deck is empty. Cannot shuffle." << endl;
		return;
	}
	// Initialize random seed
	srand(static_cast<unsigned>(time(0)));
	// Iterate through the list and swap elements
	for (auto it = deck.begin(); it != deck.end(); ++it) 
	{
		// Get a random position
		auto randomPos = next(deck.begin(), rand() % deck.size());
		// Swap the current element with the random element
		std::iter_swap(it, randomPos);
	}
}
Card Deck::drawCard()
{
	Card topCard = deck.front();  // Get the top card
	deck.pop_front();             // Remove the top card from the list
	return topCard;
}
