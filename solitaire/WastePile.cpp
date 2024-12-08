#include "WastePile.h"
void WastePile::wastePileFunc(list<string>& listToDelete)
{
    listToDelete.pop_back();
}
void WastePile::displayQueueDelete(queue<string>& queue)
{
    cout << queue.front();
    queue.pop();
}
void WastePile::listTopToQueue(list<string>& cardList, queue<string>& queueToInput)
{
    for (const string& card : cardList)
    {
        queueToInput.push(card);
        cardList.pop_back();
    }
}