teks = input("Masukkan sebuah kalimat: ")
indeks = []

for i in range(len(teks)):
    if teks[i].isupper():
        indeks.append(i)

print("Indeks huruf kapital:", indeks)
