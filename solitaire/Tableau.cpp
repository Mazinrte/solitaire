#include "Tableau.h"
#include "Card.h"
#include "Deck.h"
void Tableau::setTableau(list<Card>& tab, int tabNo)
{
	Deck deck;
	for (int i = 0; i < tabNo; i++)
	{
		Card cardToPush = deck.drawCard();
		tab.push_back(cardToPush);
	}
}
list<Card>& Tableau::getTableau()
{
	return tableauToReturn;
}
