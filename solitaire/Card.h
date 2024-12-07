#pragma once
using namespace std;
#include <string>
class Card
{
public:
	// constructor
	Card();
	//setters
	void setSuit(string);
	void setRank(string);
	void setColor(string);
	// getters
	string getSuit();
	string getRank();
	string getColor();
private:
	// constant variables
	
	// variables
	string suit;
	string rank;
	string color;
};

