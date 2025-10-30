def contains(arr, value):
    for x in arr:
        if x == value:
            return True
    return False

# contoh pemakaian
lst = [3,5,2,9]
print(contains(lst,5))   # True
print(contains(lst,7))   # False
