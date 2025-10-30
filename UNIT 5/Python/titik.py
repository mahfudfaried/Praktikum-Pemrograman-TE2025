# Program PengujiFungsiBentukan2;
# Nama File: FBen2.py
# Deskripsi: Menguji fungsi bertype bentukan
# CreateTitik

basedict = {'X': 0, 'Y': 0}
Titik = {}
Titik['NilaiTitik'] = basedict

def CreateTitik(x1, x2):
    Titik['Hsl'] = basedict.copy() # Menggunakan copy() agar tidak mengubah basedict
    Titik['Hsl']['X'] = x1
    Titik['Hsl']['Y'] = x2
    return Titik['Hsl']

NilX, NilY = map(int, input('Masukan Nilai x dan y Sembarang, Lalu Enter: ').split())

print('Sebelum pemanggilan fungsi CreateTitik')
print(' Nilai Ordinat = ', Titik['NilaiTitik']['X'])
print(' Nilai Absis = ', Titik['NilaiTitik']['Y'])

Titik['NilaiTitik'] = CreateTitik(NilX, NilY)

print('Setelah pemanggilan fungsi CreateTitik')
print(' Nilai Ordinat = ', Titik['NilaiTitik']['X'])
print(' Nilai Absis = ', Titik['NilaiTitik']['Y'])