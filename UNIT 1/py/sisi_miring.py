import math

# Input sisi a
sisi_a = float(input("Masukkan panjang sisi a (dalam satuan yang sama): "))

# Input sisi b
sisi_b = float(input("Masukkan panjang sisi b (dalam satuan yang sama): "))

# Hitung sisi miring dengan Teorema Pythagoras
sisi_miring = math.sqrt((sisi_a * sisi_a) + (sisi_b * sisi_b))

# Output hasil dengan 2 angka di belakang koma
print("Panjang sisi miring adalah: {:.2f}".format(sisi_miring))
