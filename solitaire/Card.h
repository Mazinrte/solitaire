#pragma once
using namespace std;
#include <string>
class Card
{
public:
	//setters
	void setSuit(string);
	void setRank(int);
	void setColor(string);
	// getters
	string getSuit();
	int getRank();
	string getColor();
private:
	// constant variables
	
	// variables
	string suit;
	int rank;
	string color;
};

