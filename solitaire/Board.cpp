// headers
#include "Board.h"
#include "Deck.h"
#include"Tableau.h"
// regular libraries
#include<list>
#include <iostream>
#include <string>
using namespace std;

void Board::inputDeckProperFormat()
{
	Deck deck;
	list<Card>& deckList = deck.getDeck();
	deck.showCard(deckList);
}

void Board::inputTableauProperFormat()
{
	Tableau tab;
	list<Card> tab1, tab2, tab3, tab4, tab5, tab6, tab7;
	tab.setTableau(tab1, 1);
	tab.setTableau(tab2, 2);
	tab.setTableau(tab3, 3);
	tab.setTableau(tab4, 4);
	tab.setTableau(tab5, 5);
	tab.setTableau(tab6, 6);
	tab.setTableau(tab7, 6);
	tab.showTableauTop(tab1, 1);
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