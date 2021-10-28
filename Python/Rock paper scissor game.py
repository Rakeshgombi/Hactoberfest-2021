# Game to play rock, paper scissors
import random


def gamewin(comp, you):
    if comp == you:
        return None

    elif comp == 'r':
        if you == 'p':
            return False
        elif you == 's':
            return True

    elif comp == 'p':
        if you == 'r':
            return True
        elif you == 's':
            return False

    elif comp == 's':
        if you == 'r':
            return False
        elif you == 'p':
            return True


randno = random.randint(1, 3)
if randno == 1:
    comp = 'r'
elif randno == 2:
    comp = 'p'
elif randno == 3:
    comp = 's'

you = input("Player's turn: Rock(r), Paper(p) or Scissor(s)?\n")

result = gamewin(comp, you)
print(f"The computer chose {comp}")

if result is None:
    print("The game is a tie!")
elif result is True:
    print("You win!")
elif result is False:
    print("You lose!")
