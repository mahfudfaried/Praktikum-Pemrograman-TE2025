nim = input("Masukkan NIM: ")
nama = input("Masukkan Nama: ")
uts = float(input("Masukkan Nilai UTS: "))
uas = float(input("Masukkan Nilai UAS: "))
tugas = float(input("Masukkan Nilai Tugas: "))

# Proses hitung nilai akhir
nilai_akhir = 0.3 * uts + 0.5 * uas + 0.2 * tugas

# Tentukan nilai huruf
if nilai_akhir >= 90:
    grade = "A"
elif nilai_akhir >= 70:
    grade = "B"
elif nilai_akhir >= 60:
    grade = "C"
elif nilai_akhir >= 50:
    grade = "D"
else:
    grade = "E"

# Output
print("\nLAPORAN NILAI MAHASISWA")
print("NIM   :", nim)
print("Nama  :", nama)
print("Nilai Akhir :", round(nilai_akhir, 2))
print("Nilai Huruf :", grade)
