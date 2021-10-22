# Python Program to Calculate Electricity Bill
 
units = int(input(" Please enter Number of Units you Consumed : "))

if(units > 500):
    amount = units * 9.65
    surcharge = 85
elif(units >= 300):
    amount = units * 7.75
    surcharge = 75
elif(units >= 200):
    amount = units * 5.26
    surcharge = 55
elif(units >= 100):
    amount = units * 3.76
    surcharge = 35
else:
    amount = units * 2.25
    surcharge = 25

total = amount + surcharge
print("\nElectricity Bill = %.2f"  %total)
