#pragma once
using namespace std;
#include<list>
#include <string>
#include"Card.h"
#include"Deck.h"
class Tableau
{
public:
	// constructor
	Tableau();
	//setter
	void setTableau(list<Card>&,Deck& deck,int);
	// getter
	list<Card>& getTableau();
	void showTableauTop(list<Card>&, int);
private:
// tableau with value
	list<Card> tableauToReturn;

};

