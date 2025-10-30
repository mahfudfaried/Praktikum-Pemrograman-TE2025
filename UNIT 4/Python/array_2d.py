array = [[None] * 2 for _ in range(3)]
x, y = 0, 0

array[0][0] = 1
array[0][1] = 2
array[1][0] = 3
array[1][1] = 4
array[2][0] = 5
array[2][1] = 6

print("array[{}]".format(0), end=" ")
print("{}".format(array[0][0]), end=" ")
print("{}".format(array[0][1]))

print("array[{}]".format(1), end=" ")
print("{}".format(array[1][0]), end=" ")
print("{}".format(array[1][1]))

print("array[{}]".format(2), end=" ")
print("{}".format(array[2][0]), end=" ")
print("{}".format(array[2][1]))