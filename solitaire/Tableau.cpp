// headers
#include "Tableau.h"
#include "Card.h"
#include "Deck.h"
// libraries
#include <iostream>
Tableau::Tableau(){}
void Tableau::setTableau(list<Card>& tab, Deck& deck, int tabNo) {
	for (int i = 0; i < tabNo; i++) {
		Card cardToPush = deck.drawCard();  // drawCard() removes and returns the top card
		tab.push_back(cardToPush);         // Add the card to the tableau
	}
}

list<Card>& Tableau::getTableau()
{
	return tableauToReturn;
}

void Tableau::showTableauTop(list<Card>& tabToShow, int tabNo) 
{
	Deck deck = Deck();
	int i;
	for (i = 0; i < tabNo; i++)
	{
		Card card = tabToShow.front();
		cout << "Card in tab"  << " : " << card.getRank() << card.getSuit() << endl;  // Print the card using the overloaded << operator
		
	}

	
	// Loop over each card in the tableau
	

	
	cout << endl;  // Print a newline at the end for better readability
}