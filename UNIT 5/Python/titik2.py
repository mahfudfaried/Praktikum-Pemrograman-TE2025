# Deskripsi : Contoh untuk mendefinisikan objek Jam
# (Nama File : jam.py)

basedict = {'HH': 0, 'MM': 0, 'SS': 0}
jam = {}
jam['J'] = basedict.copy()

# Prototype
# Body Prototype
def ResetJam(j_dict):
    """ I.S : j_dict variabel dict jam, sembarang
        F.S : Mengisi sebuah variabel dict jam J dengan 00:00:00 """
    # Algoritma
    j_dict['HH'] = 0
    j_dict['MM'] = 0
    j_dict['SS'] = 0
    # Python dictionaries are mutable, so this modifies jam['J1'] in place

def TulisJam(HH, MM, SS):
    """ I.S : HH, MM, SS terdefinisi
        F.S : menuliskan sebuah jam """
    # Algoritma
    print(f"Jam : {HH:02d}:{MM:02d}:{SS:02d}")

def JamToDetik(HH, MM, SS):
    """ Precond : HH, MM, SS berisi jam secara sembarang
        Fungsi mengembalikan hasil konversi jam ke detik """
    # Algoritma
    return (HH * 3600 + MM * 60 + SS)

def DetikToJam(d):
    """ Precond : d berisi detik secara sembarang
        Fungsi mengembalikan hasil konversi dari detik menjadi jam """
    # Kamus Lokal
    jam_hasil = basedict.copy()
    
    # Algoritma
    jam_hasil['HH'] = d // 3600
    sisa = d % 3600
    jam_hasil['MM'] = sisa // 60
    jam_hasil['SS'] = sisa % 60
    return jam_hasil

def main():
    # KAMUS LOKAL
    jam['J1'] = basedict.copy()
    jam['J2'] = basedict.copy()
    dt = 30000 # Nilai di PDF 390000, tapi di C 36000. Saya gunakan 390000 sesuai gambar python
    
    # Algoritma
    print('Asalamualaikum')
    
    ResetJam(jam['J1'])
    
    jam['J1']['HH'] = 8
    jam['J1']['MM'] = 50
    
    TulisJam(**jam['J1'])
    
    print('Konversi jam ke detik:', JamToDetik(**jam['J1']))
    print('\n')
    
    print('d detik =', dt)
    jam['J2'] = DetikToJam(dt)
    TulisJam(**jam['J2'])

if __name__ == "__main__":
    main()