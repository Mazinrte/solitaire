#include "Deck.h"
#include "Card.h"
using namespace std;
void Deck::createDeck()
{
	for (int i = 0; i < suits->length(); i++)
	{
		Card::setSuit(suits[i]);
	}
}