money = 0
water = 0
milk = 0
coffee = 0
cups = 0
def set_state(_money, _water, _milk, _coffee, _cups):
    global money
    money = _money
    global water
    water = _water
    global milk
    milk = _milk
    global coffee
    coffee= _coffee
    global cups
    cups = _cups



def print_state():
    print()
    print(f"""The Coffee machine has
    {water} of water
    {milk} of milk
    {coffee} of coffee beans
    {cups} of disposable cups
    {money} of money
    """)
    
set_state(550, 400, 540, 120, 9)



def make_coffee():
    global money
    global water
    global milk
    global coffee
    global cups
    print("What do you want to buy? 1 - espresso, 2 - latte , 3 - cappucino, back - to main menu")
    kind = input()
    if kind == "1":
        if water < 250:
            print("Sorry, not enough water.")
            pass
        elif coffee < 16:
            print("Sorry, not enough coffee")
            pass
        elif cups < 1:
            print("Sorry, not enough cups")
            pass
        else:
            print("I have the resources, I can make your coffee")
            money += 4
            water -= 250
            coffee -= 16
            cups -= 1
    if kind == "3":
        if water < 200:
            print("Sorry, not enough water.")
            pass
        elif coffee < 12:
            print("Sorry, not enough coffee")
            pass
        elif cups < 1:
            print("Sorry, not enough cups")
            pass
        elif milk < 100:
            print("Sorry, not enough milk")
            pass
        else:
            print("I have the resources, I can make your coffee")
                
            money += 6
            water -= 200
            coffee -= 12
            cups -= 1
            milk -= 100
    if kind == "2":
        if water < 350:
            print("Sorry, not enough water.")
            pass
        elif coffee < 20:
            print("Sorry, not enough coffee")
            pass
        elif cups < 1:
            print("Sorry, not enough cups")
            pass
        elif milk < 75:
            print("Sorry, not enough milk")
            pass
        else:
            print("I have the resources, I can make your coffee")
            money += 7
            water -= 350
            coffee -= 20
            cups -= 1
            milk -= 75
    if kind == "back":
        pass
    
def fill():
    global water
    global milk
    global coffee
    global cups
    print('Write how many ml of water do you want to add:')
    water += int(input())
    print('Write how many ml of milk do you want to add:')
    milk += int(input())
    print('Write how many grams of coffee beans do you want to add:')
    coffee += int(input())
    print('Write how many disposable cups of coffee do you want to add:')
    cups += int(input())

def take():
    global money
    print(f"I gave you ${money}")
    money = 0

def get_input():
    print("Write action (buy, fill, take, remaining, exit):")
    action = input()
    if action == "buy":
        make_coffee()
    if action == "fill":
                fill()
    if action == "take":
        take()
    if action == 'exit':
        return 'exit'
    if action == 'remaining':
        print_state()

while True:
    x = get_input()
    if x == 'exit':
        break
