#pragma once

// extra libr
#include<string>
#include <list>
#include <queue>
#include<iostream>
#include <stack>
//header files
#include "Deck.h"
#include "Card.h"
#include "Tableau.h"
//std libr
using namespace std;
class Board
{
public:
    Board();
    //input deck on board
    void inputDeckProperFormat();
    // input tableaus
    void inputTableauProperFormat();
    // input waste pile
    void inputWastePileProperFormat();
    // compiles everything into complete board
    void createBoard();
};

