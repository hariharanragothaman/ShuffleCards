#include <iostream>
#include <stdlib.h>

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
		std:: cout << cards[i];
	std::cout << std::endl;
} 

bool checkDeck(int cards[], int numOfCards)
{
	/* Function to check if the deck is in order */
	for (int i=0; i<numOfCards;i++)
	{
		if  (cards[i] != i+1)
		{
			return 1;
			break;
		}
	}
	return 0;
}

void reverse(int cards[], int start, int end)
{
	/* Helper function to reverse the deck */
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start ++;
		end --;
	}
}


void append(int cards[], int reverse[])
{
	/* Helper function to append 2 arrays */

}

void ShuffleDeck(int cards[], int numOfCards)
{

	/*Function executes one "round" of shuffle & 
	 * Returns the Shuffled Deck
	 */

	std::cout << "Shuffling Deck";
	result = reverse(cards, 0, numOfCards-1)
	append(cards, result)

	// Get all the odd sequences and return it

}

int countRounds(int cards[], int numOfCards)
{
	/*Function that counts - number of rounds
	 * to restore the deck in it's original order */
	bool inOrder = false;
	

	/*
	while not inOrder
	1. Call Shuffle deck - which does 1 round
	2. Check if returned round is in original order
	3. If it is - return count = else continue




	*/
	return 0;
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

	//std::cout << argc << std::endl;
	//std::cout << argv[0] << std::endl;
	std::cout << argv[1] << std::endl;

	numOfCards = atoi(argv[1]);
	int cards[numOfCards];

	// Setting the Deck of Cards
	setDeck(cards, numOfCards);

	//Displaying the set Deck of cards 
	displayDeck(cards,numOfCards);

	// Shuffling the cards and checking for order
	numOfRounds = countRounds(cards, numOfCards);
	std::cout << "The number of rounds is: " << numOfRounds << std::endl;
	return 0;
}
