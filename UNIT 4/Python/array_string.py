nama = input('Masukan nama anda : ')
jk = 0
jb = 0

for ch in nama:
    if (ord(ch) >= 97 and ord(ch) <= 122):
        jk += 1
    elif (ord(ch) >= 65 and ord(ch) <= 90):
        jb += 1

print("Nama :", nama)
print("Jumlah huruf kecil :", jk)
print("Jumlah huruf besar :", jb)
print("Jumlah huruf dan spasi :", len(nama))