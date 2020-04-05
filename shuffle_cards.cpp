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

int* reverse(int cards[], int start, int end)
{
	/* Helper function to reverse the deck */
	while (start < end)
	{
		int temp = cards[start];
		cards[start] = cards[end];
		cards[end] = temp;

		start ++;
		end --;
	}
	return cards;
}


int* append(int cards[], int reversed[], int numOfCards)
{
	/* Helper Function append 2 arrays */
	int* res = new int[2*numOfCards];

	for(int i=0; i< 2*numOfCards; i++)
	{
		if (i < numOfCards)
		{
			res[i] = cards[i];
		}
		else
		{
			res[i] = reversed[i-numOfCards];
		}
	}

	return res;
}

int* ShuffleDeck(int cards[], int numOfCards)
{

	/*Function executes one "round" of shuffle & 
	 * Returns the Shuffled Deck
	 */
	int* reversed = new int[numOfCards];
	int* appended = new int[2*numOfCards];
	int* result = new int[numOfCards];

	std::memcpy(reversed, cards, sizeof(int)*numOfCards);
	reversed = reverse(reversed, 0, numOfCards-1);	
	appended = append(cards, reversed, numOfCards);

	int j = 0;
	int i = 0;
	while (i < 2*numOfCards)
	{
		result[j] = appended[i];
		j += 1;
		i += 2;
	}
	return result;
}

int countRounds(int cards[], int numOfCards)
{
	/*Function that counts - number of rounds
	 * to restore the deck in it's original order */

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

	numOfCards = atoi(argv[1]);
	int cards[numOfCards];

	// Setting the Deck of Cards and Displaying the original deck
	setDeck(cards, numOfCards);
	std::cout <<"The orignal deck of cards are:  ";
	displayDeck(cards,numOfCards);

	// Shuffling the cards and checking for order
	numOfRounds = countRounds(cards, numOfCards);
	std::cout << "The number of rounds is: " << numOfRounds << std::endl;
	return 0;
}
