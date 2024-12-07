#include "Card.h"
//setters
void Card::setSuit(string s)
{
	suit = s;
}
void Card::setRank(int r)
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
int Card::getRank()
{
	return rank;
}
string Card::getColor()
{
	return color;
}