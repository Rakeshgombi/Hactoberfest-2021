#################### Blackjack Project ########################

################# Our Blackjack House Rules ###################

## The deck is unlimited in size. 
## There are no jokers. 
## The Jack/Queen/King all count as 10.
## The Ace can count as 11 or 1.
## The cards in the list have equal probability of being drawn.
## Cards are not removed from the deck as they are drawn.
## The computer is the dealer.

import art
import random
from os import system, name

def clear():
  #clears the screen
  if name == "nt":
    _ = system("cls")
  else:
    _ = system("clear")    

response = "y"
my_card = []
computer_card = []

card = [11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10]

def ace(sample_card):
  #replaces the 11 with 1 if sum > 21
  if 11 in sample_card and sum(sample_card) > 21:
      for n, i in enumerate(sample_card):
        if i == 11:
          sample_card[n] = 1           

def blackjack():
  clear()
  print(art.logo)
  response = "y"
  my_card = []
  computer_card = []
  my_choice = 'y'

  #appends card to list
  for i in range(2):
    my_card.append(random.choice(card))  
  computer_card.append(random.choice(card))

  ace(my_card)

  print(f"Your cards: {my_card}\t Total: {sum(my_card)}")
  print(f"Computer's first card: {computer_card}")

  while my_choice.lower() == 'y' and sum(my_card) <= 21:  
    my_choice = input("Type 'y' to get another card, type 'n' to pass: ")
    if my_choice.lower() == 'y':
      my_card.append(random.choice(card))
   
    ace(my_card)

    print(f"Your cards: {my_card}\t Total: {sum(my_card)}")
    print(f"Computer's first card: {computer_card}")
  computer_card.append(random.choice(card))  

  #appends card to list
  while sum(computer_card) <= 16:
    computer_card.append(random.choice(card))
    ace(computer_card)

  print(f"Your final hand: {my_card}\t Total: {sum(my_card)}")
  print(f"Computer's final hand: {computer_card}\t Total: {sum(computer_card)}")

  #prints result
  if sum(my_card) > 21:
    print("You went over. You lose. :'(")
  elif sum(my_card) == sum(computer_card):
    print("It's a draw.")
  elif sum(my_card) > sum(computer_card):
    print("You win! :)")
  elif sum(computer_card) <= 21:
    print("Computer wins!")
  else:
    print("Opponent went over. You win! :)") 

while response.lower() == "y":
  response = input("Do you want to play a game of Blackjack? Type 'y' or 'n': ")
  if response.lower() == 'y':
    blackjack()
  else:
    print("Thanks for playing!") 
