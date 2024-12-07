#pragma once

// extra libr
#include<string>
#include <list>
#include <queue>
#include<iostream>
#include <stack>
//header files
#include "Deck.h"
#include "Tableau.h"
//std libr
using namespace std;
class Board
{
    // function to move around cards -- currently not finished
    void moveCard();
    // deletes what is in front of list
    void wastePileFunc(list<string>& list)
    {
        list.pop_back();
    }
    //displays whats in front of queue and deletes it after
    void displayQueueDelete(queue<string>& queue) 
    {
        cout << queue.front();
        queue.pop();
    }
    // takes from list top card and inputs into waste pile
    void listTopToQueue(list<string>& cardList, queue<string>& queueToInput)
    {
        for (const string& card : cardList)
        {
            queueToInput.push(card);
            cardList.pop_back();
        }
    }
    void createBoard();
	// waste pile
	//    
    /*
     makes waste pile
    string front = queueOfDeck.front();
    wastePileFunc(deck);
    wastePile.push(front);
    wastePile.push("Waste Pile");
    cout << endl;
    displayWhatsInQueue(wastePile);
    */
	// tableaus
	// deck 
	// 
};

