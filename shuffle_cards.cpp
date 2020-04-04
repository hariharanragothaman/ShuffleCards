#include <iostream>
#include <stdlib.h>


void displayDeck(int cards[], int numOfCards)
{
	for (int i =0; i < numOfCards; i++)
		std:: cout << cards[i];
	std::cout << std::endl;
} 

bool checkDeck(int cards[], int numOfCards)
{
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

void ShuffleDeck(int cards[], int numOfCards)
{

	// This executes one "round" of shuffle
	std::cout << "Shuffling Deck";


}

void setDeck(int cards[], int numOfCards)
{
	for (int i=0;i<numOfCards; i++)
	{
		cards[i] = i+1;
	}
}


int countRounds(int cards[], int numOfCards)
{
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
