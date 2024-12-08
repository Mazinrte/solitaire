#include "Card.h"
//setters
Card::Card(){}

void Card::setSuit(string s)
{
	suit = s;
}
void Card::setRank(string r)
{
	rank = r;
}
void Card::setColor(string c)
{
	color = c;
}
// getters
string Card::getSuit()
{
	return suit;
}
string Card::getRank()
{
	return rank;
}
string Card::getColor()
{
	return color;
}
