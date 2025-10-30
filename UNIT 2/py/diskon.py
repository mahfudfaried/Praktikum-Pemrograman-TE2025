beli= int(input("Jumlah pembelian: Rp"))
if beli >= 100000:
    diskon = 10000
else:
    diskon = 0
bayar = beli - diskon

print("Total pembelian: Rp", beli)
print("Jumlah diskon: Rp", diskon)
print("Total pembayaran: Rp", bayar)