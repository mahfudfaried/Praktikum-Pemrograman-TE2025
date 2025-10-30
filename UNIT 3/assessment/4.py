n = int(input("Input = "))
print("Output =")

for i in range(0, n, 2):
    for j in range(0, i + 1, 2):
        if j % 4 == 0:
            print(j, end="")
        else:
            print("#", end="")
    print()
