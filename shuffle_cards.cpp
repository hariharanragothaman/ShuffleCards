#include <iostream>
#include <stdlib.h>
#include <cstring>

/* This solution should not use STL */

void setDeck(int cards[], int numOfCards)
{
	/* Function to set the deck of cards initially */
	for (int i=0;i<numOfCards; i++)
	{
		cards[i] = i+1;
	}
}

void displayDeck(int cards[], int numOfCards)
{
	/* Function to display the deck of cards */
	for (int i =0; i < numOfCards; i++)
		std::cout << cards[i] <<" ";
	std::cout << std::endl;
} 

bool checkDeck(int cards[], int numOfCards)
{
	/* Function to check if the deck is in order */
	for (int i=0; i<numOfCards;i++)
	{
		if  (cards[i] != i+1)
		{
			return false;
		}
	}
	return true;
}

int*  ShuffleDeck(int cards[], int numOfCards)
{

	/*Function executes one "round" of shuffle & 
	 * Returns the Shuffled Deck
	 */
	int* result = new int[numOfCards];
	int size = numOfCards;

	for (int j=0; j < numOfCards; j++)
	{
		// Putting the top cards into the result deck
		result[j] = cards[0];

		// Delete the top card from the list
		for (int k=0; k < numOfCards; k++)
		{
			cards[k] = cards[k+1];
		}

		// "Putting the next top of deck in the end"
		cards[size-1] = cards[0];

		// Delete the top card from the list
		for (int k=0; k < numOfCards; k++)
		{
			cards[k] = cards[k+1];
		}

		size -= 1;
	}
	return result;
}

int countRounds(int cards[], int numOfCards)
{
	bool inOrder = false;
	bool check = false;
	int count = 0;

	int* temp = new int[numOfCards];
	while (not inOrder)
	{
		temp = ShuffleDeck(cards, numOfCards);
		count += 1;

		std::cout <<"The shuffled deck of cards are: ";
		displayDeck(temp, numOfCards);

		check = checkDeck(temp, numOfCards);
		if (check)
		{
			inOrder = true;
			return count;
		}

		else
		{
			cards = temp;
		}

	}
}

int main(int argc, char *argv[])
{
	int numOfCards;
	int numOfRounds;
	
	if (argc > 2)
	{
		std::cerr << "Usage: " << argv[0] << std::endl;
		return 1;
	}

	numOfCards = atoi(argv[1]);
	int cards[numOfCards];

	// Setting the Deck of Cards and Displaying the original deck
	setDeck(cards, numOfCards);
	std::cout <<"The orignal deck of cards are:  ";
	displayDeck(cards,numOfCards);

	//Shuffling the cards and checking for order
	numOfRounds = countRounds(cards, numOfCards);
	std::cout << "The number of rounds is: " << numOfRounds << std::endl;
	return 0;
}
