def pyramid_pattern(n):
    a = 2 * n-2
    for i in range(0, n):
        for j in range(0, a):
            print(end=" ")
        a = a-1
        for j in range(0, i+1):
            print("*", end=" ")
        print("\r")
print(pyramid_pattern(10))
