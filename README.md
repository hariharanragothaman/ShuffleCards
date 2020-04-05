### ShuffleCard Problem
This module solves a problem that involves shuffling a deck of cards.

#### Description:
You are given a deck containing n cards.  While holding the deck:

1. Take the top card off the deck and set it on the table
2. Take the next card off the top and put it on the bottom of the deck in your hand.
3. Continue steps 1 and 2 until all cards are on the table.  This is a round.
4. Pick up the deck from the table and repeat steps 1-3 until the deck is in the original order.

Write a program to determine how many rounds it will take to put a deck back into the original order. 

#### Constraints:
1. This will involve creating a data structure to represent the order of the cards.  T
2. This program should be written in C or C++.  Do not use STL.  
3. It should take a number of cards in the deck as a command line argument and write the result to stdout.


#### Steps to run the Program 

```
$ git clone git@github.com:hariharanragothaman/shufflecards.git
$ cd shufflecards/
$ g++ shuffle_cards.cpp -o shuffle
$ ./shuffle 10
```

#### Output

```
1010365@hariharanragothaman-OptiPlex-790:/scratch/shufflecards$ ./shuffle 10
The orignal deck of cards are:  1 2 3 4 5 6 7 8 9 10
The shuffled deck of cards are: 1 3 5 7 9 10 8 6 4 2
The shuffled deck of cards are: 1 5 9 8 4 2 6 10 7 3
The shuffled deck of cards are: 1 9 4 6 7 3 10 2 8 5
The shuffled deck of cards are: 1 4 7 10 8 5 2 3 6 9
The shuffled deck of cards are: 1 7 8 2 6 9 3 5 10 4
The shuffled deck of cards are: 1 8 6 3 10 4 5 9 2 7
The shuffled deck of cards are: 1 6 10 5 2 7 9 4 3 8
The shuffled deck of cards are: 1 10 2 9 3 8 4 7 5 6
The shuffled deck of cards are: 1 2 3 4 5 6 7 8 9 10
The number of rounds is: 9
```


