x = [6000, 34, 203, 3, 746, 200, 984, 198, 764, 9, 1]
def bubbleSort(list):
    for i in range(len(list), 0, -1):
        for j in range(0, i-1):
            if (list[j] > list[j+1]):
                temp = list[j]
                list[j] = list[j + 1]
                list[j+1] = temp
    return list
print(bubbleSort(x))