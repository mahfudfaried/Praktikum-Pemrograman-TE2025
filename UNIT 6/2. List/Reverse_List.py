import math
def reverselist (theList):
    for i in range(0, math.floor(len(theList)/2)):
        tempList = theList[i]
        theList[i] = theList[len(theList) -1-i]
        theList[len(theList) -1-i] = tempList
    return theList
print(reverselist ([1,2,3,4,5,6,7,8]))