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
class WastePile
{
    // deletes what is in front of list
    void wastePileFunc(list<string>&);
    //displays whats in front of queue and deletes it after
    void displayQueueDelete(queue<string>&);
    // takes from list top card and inputs into waste pile
    void listTopToQueue(list<string>&, queue<string>&);
    /*
     makes waste pile
    string front = queueOfDeck.front();
    wastePileFunc(deck);
    wastePile.push(front);
    wastePile.push("Waste Pile");
    cout << endl;
    displayWhatsInQueue(wastePile);
    */
};

