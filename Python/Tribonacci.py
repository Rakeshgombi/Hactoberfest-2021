
# This code will return the nth element of the Tribonacci sequence where
# for n=0 it prints 0, for n=1 it prints 1

class NegativeNumber(Exception):
    pass


def tribonacci_iter(n):

    
        
    if n < 0:
        raise NegativeNumber("Fibonacci not defined for negative numbers!")
    if n==0:
        return 0
    if n==1:
        return 1
    
    
    
    # Assigning variables to first 3 elements of Tribonacci sequence
    a, b ,c = 0, 1, 1

    
    # For loop for finding the nth number in sequence 
    for i in range(2, n ):
        a, b, c = b, c, a + b + c
        
    return c


if __name__ == "__main__":
    n = int(input("Enter number: "))
    print(tribonacci_iter(n))
