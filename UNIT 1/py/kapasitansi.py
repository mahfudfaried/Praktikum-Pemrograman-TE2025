# Program menghitung kapasitansi

# Input muatan
muatan = float(input("Masukkan nilai muatan (dalam coulomb): "))

# Input tegangan
tegangan = float(input("Masukkan nilai tegangan (dalam volt): "))

# Hitung kapasitansi
kapasitansi = muatan / tegangan

# Output hasil dengan 2 angka di belakang koma
print("Kapasitansi = {:.2f} Farad".format(kapasitansi))
