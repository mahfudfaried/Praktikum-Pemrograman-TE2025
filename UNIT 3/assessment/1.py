def cek_prima(n):
    if n < 2:
        return False
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True

print("Angka dari 1 sampai 100 (kecuali bilangan prima):")

i = 1
while i <= 100:
    if not cek_prima(i):
        print(i, end=" ")
    i += 1
