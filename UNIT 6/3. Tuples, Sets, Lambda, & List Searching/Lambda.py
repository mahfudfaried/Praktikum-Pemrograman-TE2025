def f(num):
    return num*3
listNum = [1,2,3,4,5]
listNum = [f(x) for x in listNum]
print(listNum)
listNum = list(map(lambda num: num*3, listNum))
print(listNum)
listNum = list(filter(lambda num: num % 2 == 0, listNum))
print(listNum)