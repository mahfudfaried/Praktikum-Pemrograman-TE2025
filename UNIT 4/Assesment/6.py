kata = input("Masukkan kata: ")
terbalik = kata[::-1]

print("Kata terbalik:", terbalik)
if kata == terbalik:
    print("Kata ini PALINDROM")
else:
    print("Kata ini BUKAN palindrom")
