a = int(input("Masukkan bilangan pertama: "))
b = int(input("Masukkan bilangan kedua: "))
c = int(input("Masukkan bilangan ketiga: "))

# Asumsikan a sebagai terbesar dan terkecil
terbesar = a
terkecil = a

# Cek untuk nilai terbesar
if b > terbesar:
    terbesar = b
if c > terbesar:
    terbesar = c

# Cek untuk nilai terkecil
if b < terkecil:
    terkecil = b
if c < terkecil:
    terkecil = c

print("Bilangan terbesar:", terbesar)
print("Bilangan terkecil:", terkecil)
