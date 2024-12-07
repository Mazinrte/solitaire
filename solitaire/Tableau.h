#pragma once
using namespace std;
#include<list>
#include <string>
#include "Card.h"
class Tableau
{
	void setTableau(list<Card>&, int);
	list<Card> getTableau(list<Card>& tableauToReturn);
	Card card;
	list<Card> tab1;
	list<Card> tab2;
	list<Card> tab3;
	list<Card> tab4;
	list<Card> tab5;
	list<Card> tab6;
	list<Card> tab7;
};

