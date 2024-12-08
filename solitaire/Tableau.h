#pragma once
using namespace std;
#include<list>
#include <string>
#include"Card.h"
class Tableau
{
public:
	// constructor
	Tableau();
	//setter
	void setTableau(list<Card>&,int);
	// getter
	list<Card>& getTableau();
	void showTableau(list<Card>&);
private:
// tableau with value
	list<Card> tableauToReturn;

};

