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


#### Steps to run the C++ Program 

```
$ git clone git@github.com:hariharanragothaman/shufflecards.git
$ cd shufflecards/
$ g++ shuffle_cards.cpp -o shuffle
$ ./shuffle 10
```

#### C++ Output

```
hr1010365@hariharanragothaman-OptiPlex-790:/scratch/shufflecards$ ./shuffle 20
The orignal deck of cards are:  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
The shuffled deck of cards are: 1 3 5 7 9 11 13 15 17 19 2 6 10 14 18 4 12 20 16 8
The shuffled deck of cards are: 1 5 9 13 17 2 10 18 12 16 3 11 19 14 20 7 6 8 4 15
The shuffled deck of cards are: 1 9 17 10 12 3 19 20 6 4 5 2 16 14 8 13 11 15 7 18
The shuffled deck of cards are: 1 17 12 19 6 5 16 8 11 7 9 3 4 14 15 10 2 18 13 20
The shuffled deck of cards are: 1 12 6 16 11 9 4 15 2 13 17 5 7 14 18 19 3 20 10 8
The shuffled deck of cards are: 1 6 11 4 2 17 7 18 3 10 12 9 13 14 20 16 5 8 19 15
The shuffled deck of cards are: 1 11 2 7 3 12 13 20 5 19 6 17 10 14 8 4 9 15 16 18
The shuffled deck of cards are: 1 2 3 13 5 6 10 8 9 16 11 12 19 14 15 7 17 18 4 20
The shuffled deck of cards are: 1 3 5 10 9 11 19 15 17 4 2 6 16 14 18 13 12 20 7 8
The shuffled deck of cards are: 1 5 9 19 17 2 16 18 12 7 3 11 4 14 20 10 6 8 13 15
The shuffled deck of cards are: 1 9 17 16 12 3 4 20 6 13 5 2 7 14 8 19 11 15 10 18
The shuffled deck of cards are: 1 17 12 4 6 5 7 8 11 10 9 3 13 14 15 16 2 18 19 20
The shuffled deck of cards are: 1 12 6 7 11 9 13 15 2 19 17 5 10 14 18 4 3 20 16 8
The shuffled deck of cards are: 1 6 11 13 2 17 10 18 3 16 12 9 19 14 20 7 5 8 4 15
The shuffled deck of cards are: 1 11 2 10 3 12 19 20 5 4 6 17 16 14 8 13 9 15 7 18
The shuffled deck of cards are: 1 2 3 19 5 6 16 8 9 7 11 12 4 14 15 10 17 18 13 20
The shuffled deck of cards are: 1 3 5 16 9 11 4 15 17 13 2 6 7 14 18 19 12 20 10 8
The shuffled deck of cards are: 1 5 9 4 17 2 7 18 12 10 3 11 13 14 20 16 6 8 19 15
The shuffled deck of cards are: 1 9 17 7 12 3 13 20 6 19 5 2 10 14 8 4 11 15 16 18
The shuffled deck of cards are: 1 17 12 13 6 5 10 8 11 16 9 3 19 14 15 7 2 18 4 20
The shuffled deck of cards are: 1 12 6 10 11 9 19 15 2 4 17 5 16 14 18 13 3 20 7 8
The shuffled deck of cards are: 1 6 11 19 2 17 16 18 3 7 12 9 4 14 20 10 5 8 13 15
The shuffled deck of cards are: 1 11 2 16 3 12 4 20 5 13 6 17 7 14 8 19 9 15 10 18
The shuffled deck of cards are: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
The number of rounds is: 24

```

#### Steps to run the Python Program

```
$ git clone git@github.com:hariharanragothaman/shufflecards.git
$ cd shufflecards/
$ python3 shuffle_cards.py --num 5
```

#### Python Output
```
The deck of cards is: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
The shuffled deck is: [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 2, 6, 10, 14, 18, 4, 12, 20, 16, 8]
The shuffled deck is: [1, 5, 9, 13, 17, 2, 10, 18, 12, 16, 3, 11, 19, 14, 20, 7, 6, 8, 4, 15]
The shuffled deck is: [1, 9, 17, 10, 12, 3, 19, 20, 6, 4, 5, 2, 16, 14, 8, 13, 11, 15, 7, 18]
The shuffled deck is: [1, 17, 12, 19, 6, 5, 16, 8, 11, 7, 9, 3, 4, 14, 15, 10, 2, 18, 13, 20]
The shuffled deck is: [1, 12, 6, 16, 11, 9, 4, 15, 2, 13, 17, 5, 7, 14, 18, 19, 3, 20, 10, 8]
The shuffled deck is: [1, 6, 11, 4, 2, 17, 7, 18, 3, 10, 12, 9, 13, 14, 20, 16, 5, 8, 19, 15]
The shuffled deck is: [1, 11, 2, 7, 3, 12, 13, 20, 5, 19, 6, 17, 10, 14, 8, 4, 9, 15, 16, 18]
The shuffled deck is: [1, 2, 3, 13, 5, 6, 10, 8, 9, 16, 11, 12, 19, 14, 15, 7, 17, 18, 4, 20]
The shuffled deck is: [1, 3, 5, 10, 9, 11, 19, 15, 17, 4, 2, 6, 16, 14, 18, 13, 12, 20, 7, 8]
The shuffled deck is: [1, 5, 9, 19, 17, 2, 16, 18, 12, 7, 3, 11, 4, 14, 20, 10, 6, 8, 13, 15]
The shuffled deck is: [1, 9, 17, 16, 12, 3, 4, 20, 6, 13, 5, 2, 7, 14, 8, 19, 11, 15, 10, 18]
The shuffled deck is: [1, 17, 12, 4, 6, 5, 7, 8, 11, 10, 9, 3, 13, 14, 15, 16, 2, 18, 19, 20]
The shuffled deck is: [1, 12, 6, 7, 11, 9, 13, 15, 2, 19, 17, 5, 10, 14, 18, 4, 3, 20, 16, 8]
The shuffled deck is: [1, 6, 11, 13, 2, 17, 10, 18, 3, 16, 12, 9, 19, 14, 20, 7, 5, 8, 4, 15]
The shuffled deck is: [1, 11, 2, 10, 3, 12, 19, 20, 5, 4, 6, 17, 16, 14, 8, 13, 9, 15, 7, 18]
The shuffled deck is: [1, 2, 3, 19, 5, 6, 16, 8, 9, 7, 11, 12, 4, 14, 15, 10, 17, 18, 13, 20]
The shuffled deck is: [1, 3, 5, 16, 9, 11, 4, 15, 17, 13, 2, 6, 7, 14, 18, 19, 12, 20, 10, 8]
The shuffled deck is: [1, 5, 9, 4, 17, 2, 7, 18, 12, 10, 3, 11, 13, 14, 20, 16, 6, 8, 19, 15]
The shuffled deck is: [1, 9, 17, 7, 12, 3, 13, 20, 6, 19, 5, 2, 10, 14, 8, 4, 11, 15, 16, 18]
The shuffled deck is: [1, 17, 12, 13, 6, 5, 10, 8, 11, 16, 9, 3, 19, 14, 15, 7, 2, 18, 4, 20]
The shuffled deck is: [1, 12, 6, 10, 11, 9, 19, 15, 2, 4, 17, 5, 16, 14, 18, 13, 3, 20, 7, 8]
The shuffled deck is: [1, 6, 11, 19, 2, 17, 16, 18, 3, 7, 12, 9, 4, 14, 20, 10, 5, 8, 13, 15]
The shuffled deck is: [1, 11, 2, 16, 3, 12, 4, 20, 5, 13, 6, 17, 7, 14, 8, 19, 9, 15, 10, 18]
The shuffled deck is: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
The number of rounds it takes is:  24

```
