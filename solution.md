### Explanation of C++ and Python Code

First, these are the high level functions in both the implementations.              
   a. Let's take a closer look into the implemenations of `ShuffleDeck` and `shuffle_deck`                
   b. Also the overall logic behind solving this problem, which drove he implementation.              
   
   
#### Overall Logic:    

Consider the example deck. Let's take a look at one round.

a. Top of the Deck goes into the table.     
b. The next card is put into the botoom of the deck 


```
 DECK                           TABLE
--------------------          -----------------------
| 1 | 2 | 3 | 4 | 5 |         | 1 |
--------------------          -----------------------
-----------------
| 3 | 4 | 5 | 2 |             
-----------------
**********************************************************
-----------------             ---------
| 3 | 4 | 5 | 2 |             | 1 | 3 |
-----------------             ---------
-------------
| 5 | 2 | 4 |
-------------
**********************************************************
-------------                -------------
| 5 | 2 | 4 |                | 1 | 3 | 5 |
-------------                -------------
---------
| 4 | 2 |
---------
**********************************************************
---------                    -----------------
| 4 | 2 |                    | 1 | 3 | 5 | 4 |   
---------                    -----------------
-----
| 2 |
-----
**********************************************************
                             ---------------------
                             | 1 | 3 | 5 | 4 | 2 |
                             ----------------------
**********************************************************
```

__Logic Pointers__:      
1. If we take a large set of cards, say 10 - we observe that cards at odd places are popped out from the deck.   
2. Point 1 is done repeatedly till we have no cards in the deck.            
3. This is essentially the core logic.    

How we implement this in C++ and Python is interesting!


#### C++ Implementation:

__Here, we have a constraint not to use Standard Template Libraries__

1. We have the following functions:     
    a. `setDeck`       : Creates the intial deck of ordered cards                                
    b. `displayDeck`   : Prints out all the cards in the deck              
    c. `checkDeck`     : Check if the deck is in the original order set      
    d. `ShuffleDeck`   : Shuffles the deck for a `single` round and return the deck. (As specified in the problem)            
    e. `countRounds`   : Calls `ShuffleDeck`, till deck is in order and finally returns the count.                
    f.  `main`         : Takes the `number of cards` from user and calls ` countRounds`, and posts results to `stdout`     


#### Python Implementation

1. Here, we have the following functions:     
    a. `check_deck`          : Checks if the Deck is in order      
    b. `shuffle_deck`        : Shuffles the deck for a `single` round and return the deck. (As specified in the problem)       
    c. `get_number_of_rounds`: Calls `shuffle_deck` & checks if deck is in order. Returns the number of rounds it takes.        
    d. `main`                : Uses the `argparse` module to get number of cards from the user.       
