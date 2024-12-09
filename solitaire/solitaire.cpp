/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

 /*
  * File:   main.cpp
  * Author: huda8
  *
  * Created on November 9, 2024, 3:15 PM
  */


/*
 *
 */

// you can use map to assign player name and score

#include "Board.h"



/*
* // assign node
* 1. make card header file
* 2. incorporate randomized deck to draw from
* 3. incorporate tableau
* 5. incorporate waste pile
* 6. incorporate being able to move and place cards onto board (general board function)
 */




int main()
{
    Board board = Board();
    board.createBoard();
}
/*
*

// make a list of the proper order for getting points for  (forward iterator)
    // make a set for cards that are on the board
    // use map for the suit keywords
    // make a stack that the is of the discarded cards the player has decided to get rid of
    // make a queue for the deck the player can pull from
    // can use search function for non mutating algorithms
    // use random_shuffle for mutating algorithms
    // have minimum and maximum for organization
// container classes
    // will need a list, slist,or bit_vector for sequence category (1 needed) -- done
    // will need a set, map, or hash for associative containers category (2 needed)
    // will need a stack, queue, or priority queue for container adaptors (2 needed)
//iterators
    // concepts (you need to describe the iterators utilized for each container)
            // trivial iterator, input iterator, output iterator, forward iterator, bidirectional iterator, or ram iterator
// algorithms (choose one from each category)
    // non mutating algorithms
            // for_each, find, count, equal, search
    // mutating algorithms
            // copy, Swap, Transform, Replace, fill, Remove, Random_Shuffle
    // Organization
            // Sort, Binary search, merge, inplace_merge, minimum and maximum
/*
The rank of cards in Solitaire games is: K (high), Q, J, 10, 9, 8, 7, 6, 5, 4, 3, 2, A (low).

There are four different types of piles in Solitaire:

The Tableau: Seven piles that make up the main table.

The Foundations: Four piles on which a whole suit or sequence must be built up. In most Solitaire games, the four aces are the bottom card or base of the foundations. The foundation piles are hearts, diamonds, spades, and clubs.

The Stock (or “Hand”) Pile: If the entire pack is not laid out in a tableau at the beginning of a game, the remaining cards form the stock pile from which additional cards are brought into play according to the rules.

The Talon (or “Waste”) Pile: Cards from the stock pile that have no place in the tableau or on foundations are laid face up in the waste pile.


The initial array may be changed by "building" - transferring cards among the face-up cards in the tableau. Certain cards of the tableau can be played at once, while others may not be played until certain blocking cards are removed. For example, of the seven cards facing up in the tableau, if one is a nine and another is a ten, you may transfer the nine to on top of the ten to begin building that pile in sequence. Since you have moved the nine from one of the seven piles, you have now unblocked a face down card; this card can be turned over and now is in play.

As you transfer cards in the tableau and begin building sequences, if you uncover an ace, the ace should be placed in one of the foundation piles. The foundations get built by suit and in sequence from ace to king.

Continue to transfer cards on top of each other in the tableau in sequence. If you can’t move any more face up cards, you can utilize the stock pile by flipping over the first card. This card can be played in the foundations or tableau. If you cannot play the card in the tableau or the foundations piles, move the card to the waste pile and turn over another card in the stock pile.

If a vacancy in the tableau is created by the removal of cards elsewhere it is called a “space”, and it is of major importance in manipulating the tableau. If a space is created, it can only be filled in with a king. Filling a space with a king could potentially unblock one of the face down cards in another pile in the tableau.

Continue to transfer cards in the tableau and bring cards into play from the stock pile until all the cards are built in suit sequences in the foundation piles to win!
*/

