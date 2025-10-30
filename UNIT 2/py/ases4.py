hari = int(input("Masukkan jumlah hari keterlambatan: "))

if hari == 0:
    print("Tidak ada denda.")
elif hari < 7:
    print("Denda 5000 rupiah.")
elif 7 <= hari <= 14:
    print("Denda 10000 rupiah.")
else:
    print("Denda 20000 rupiah.")
