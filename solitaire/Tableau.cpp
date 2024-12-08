#include "Tableau.h"
#include "Deck.h"
void Tableau::setTableau(list<Card>& tab, list<Card>& deck, int tabNo)
{
	for (int i = 0; i < tabNo; i++)
	{
		tab.push_back(deck.front());
	}
}
list<Card> Tableau::getTableau(list<Card>& tableauToReturn)
{
	return tableauToReturn;
}
