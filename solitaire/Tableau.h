#pragma once
using namespace std;
#include<list>
#include <string>
#include "Card.h"
class Tableau
{
public:
	void setTableau(list<Card>&, list<Card>&, int);
	list<Card> getTableau(list<Card>&);

};

