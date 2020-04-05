"""
Solution Module to determine how many rounds it takes to restore deck to original order
How is shuffling done?
"""


def check_deck(deck):
    """
    @brief: Function to check if deck is in order
    :param: deck (type: list)
    """
    for i in range(len(deck)):
        if deck[i] != i+1:
            return False
    return True

def shuffle_deck(deck):
    """
    @brief: Function to shuffle the deck and return it after a single round
    :param: deck (type: list)
    """
    stack = []
    while len(deck) > 0:
        if len(deck) > 2:
            for i in range(0, len(deck), 2):
                stack.append(deck[i])
            del deck[::2]

        else:
            stack += deck[::-1]
            deck = []
    return stack

def get_number_of_rounds(num_of_cards):
    """
    @brief: Core Function get number of rounds it takes to restore original order
    @param: num_of_cards - number of cards, type: int
    """
    deck = [0] * num_of_cards
    for i in range(0, num_of_cards):
        deck[i] = i+1
    print("The deck of cards is:", deck)

    in_order = False
    count = 0

    while not in_order:
        result = shuffle_deck(deck)
        count += 1
        print("The shuffled deck is:", result)
        if check_deck(result):
            in_order = True
            return count
        else:
            deck = result

if __name__ == '__main__':
    for i in range(2, 11):
        num_of_rounds = get_number_of_rounds(i)
        print("The number of rounds is", num_of_rounds)
        print("****************************************")
