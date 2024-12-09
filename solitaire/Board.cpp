// headers
#include "Board.h"
#include "Deck.h"
#include"Tableau.h"
// regular libraries
#include<list>
#include <iostream>
#include <string>
using namespace std;
Board::Board() {}
void Board::inputDeckProperFormat()
{
	Deck deck;
	list<Card>& deckList = deck.getDeck();
	deck.showCard(deckList);
}

void Board::inputTableauProperFormat()
{
	Deck deck;
	Tableau tab;
	list<Card> tab1, tab2, tab3, tab4, tab5, tab6, tab7;
	tab.setTableau(tab1,deck, 1);
	tab.setTableau(tab2,deck, 2);
	tab.setTableau(tab3,deck, 3);
	tab.setTableau(tab4,deck, 4);
	tab.setTableau(tab5,deck, 5);
	tab.setTableau(tab6,deck, 6);
	tab.setTableau(tab7,deck, 7);
	tab.showTableauTop(tab1, 1);
	tab.showTableauTop(tab2, 1);
	tab.showTableauTop(tab3, 1);
	tab.showTableauTop(tab4, 1);
	tab.showTableauTop(tab5, 1);
	tab.showTableauTop(tab6, 1);
	tab.showTableauTop(tab7, 1);
}

void Board::inputWastePileProperFormat()
{
	cout << "Waste pile";
}

void Board::createBoard()
{
	Deck deck;
	inputDeckProperFormat();
	inputTableauProperFormat();
	inputWastePileProperFormat();
}