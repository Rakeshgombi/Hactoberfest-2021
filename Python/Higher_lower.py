#
#A Higher lower guessing game
# Created by Andrew McDonald
# https://github.com/afmcdnl




import random

game_over = False
last_number = random.randint(1,10)
next_number = 0
score = 0

while not game_over:
    print("Will the next number be (h)igher or (l)ower than " + str(last_number) + "?")
    
    guess = str.upper(input())
    valid_guess = False
    next_number = random.randint(1,10)
    
    while not valid_guess:
        if guess in ['H', 'L']:
            valid_guess = True
            if (next_number > last_number) and guess == 'H':
                score = score + 1
                print ('Correct! The next number was: ' + str(next_number))
                last_number = next_number
            elif (next_number < last_number) and guess == 'L':
                score = score + 1
                print ('Correct! The next number was: ' + str(next_number))
                last_number = next_number
            elif next_number == last_number:
                score = score + 1
                print ('Same number Free round')
            else:
                game_over = True
                print ('Incorrect! The next number was: ' + str(next_number))
                print('GAME OVER. (Final Score: %s)' % str(score))
                break
        else:
            print(guess + ' is not a valid guess. Please type either H or L.')
            guess = str.upper(input())
            
            
            
            
            
            
            
            
            
            
