n = int(input("Masukkan bilangan: "))
jumlah = 0

while n != 0:
    sisa = n % 10       # ambil digit terakhir
    jumlah += sisa      # tambahkan ke total
    n //= 10            # hapus digit terakhir

print("Jumlah angka dari bilangan tersebut adalah:", jumlah)
