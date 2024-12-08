#include "Board.h"
#include "Deck.h"
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
	cout << "hh";
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