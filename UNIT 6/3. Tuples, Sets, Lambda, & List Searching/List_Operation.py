def times2(num):
    return (num*2)
listNum = [1,2,3,4,5]
listNum = [times2(item) for item in listNum]
print(listNum)