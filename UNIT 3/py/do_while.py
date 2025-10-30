n = 0
while n <= 0:
    n = int(input("Masukkan nilai N > 0: "))

while n > 0:
    print("Anak ayam turunlah " + str(n))
    if n == 1:
        break
    else:
        n = n-1
        print("Mati satu tinggal " + str(n))

print("Mati satu tinggal induknya")