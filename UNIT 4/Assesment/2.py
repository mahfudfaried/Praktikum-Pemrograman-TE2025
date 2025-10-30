# input jumlah hari
n = int(input("Masukkan jumlah hari: "))

# pendefinisian array/list
suhu = []

# mengisi list dengan input user
for i in range(n):
    x = float(input(f"Suhu hari ke-{i+1}: "))
    suhu.append(x)   # pengaksesan untuk menambahkan

# proses hitung sum, max, min
total = sum(suhu)
maks = max(suhu)
mini = min(suhu)
rata = total / n

print("\nSuhu maksimum =", maks)
print("Suhu minimum  =", mini)
print("Rata-rata     =", rata)
