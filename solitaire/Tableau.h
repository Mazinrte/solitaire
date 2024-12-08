#pragma once
using namespace std;
#include<list>
#include <string>
#include"Card.h"
class Tableau
{
public:
	Tableau();
	void setTableau(list<Card>&,int);
	list<Card>& getTableau();
private:
	list<Card> tableauToReturn;

};

