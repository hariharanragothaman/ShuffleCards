def check_deck(deck):
    for i in range(len(deck)):
        if deck[i] != i+1:
            return False
    return True

def rounds(deck):
    stack = []
    length = len(deck)
    while len(deck) > 0:
        if len(deck) > 2:
            for i in range(0, len(deck), 2):
                stack.append(deck[i])
            del deck[::2]

        else:
            stack += deck[::-1]
            deck = []
    return stack

def shuffle_cards(n):
    deck = [0]*n

    # Create the deck
    for i in range(0, n):
        deck[i] = i+1

    print("The deck of cards is:", deck)

    in_order = False
    count = 0

    while not in_order:
        result = rounds(deck)
        count += 1
        print("The shuffled deck is:", result)
        if check_deck(result):
            in_order = True
            return count
        
        else:
            deck = result

if __name__ == '__main__':
    for i in range(2, 11):
        num_of_rounds = shuffle_cards(i)
        print("The number of rounds is", num_of_rounds)
        print("****************************************")
