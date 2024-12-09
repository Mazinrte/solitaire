// headers
#include "Tableau.h"
#include "Card.h"
#include "Deck.h"
// libraries
#include <iostream>
Tableau::Tableau(){}
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

void Tableau::showTableauTop(list<Card>& tabToShow, int tabNo) 
{
	for (int i = 0; i < tabNo; i++) 
	{  
		Card card = tabToShow.front();
		// Loop over each card in the tableau
		cout << card.getRank() << card.getSuit()<< endl;  // Print the card using the overloaded << operator
	}
	cout << endl;  // Print a newline at the end for better readability
}