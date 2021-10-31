def BubbleSort(array):
    for i in range(len(array) - 1):
        for j in range(len(array) - 1 - i):
            if(array[j] > array[j + 1]):
                array[j], array[j + 1] = array[j + 1], array[j]
    return array

array=[9, 3, 1, 7, 4, 10, 53, 23, 12, 44]
result=BubbleSort(array)
print(result)
