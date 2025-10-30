x = int(input("Masukkan bilangan bulat: "))

if 1 <= x <= 9:
    print("Satuan")
elif 10 <= x <= 99:
    print("Puluhan")
elif 100 <= x <= 999:
    print("Ratusan")
elif 1000 <= x <= 9999:
    print("Ribuan")
elif 10000 <= x <= 99999:
    print("Puluh Ribuan")
else:
    print("Bilangan di luar jangkauan")
