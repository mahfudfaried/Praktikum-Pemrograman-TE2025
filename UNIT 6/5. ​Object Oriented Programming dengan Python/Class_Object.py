class Mhs:
    def __init__(self, karakter, nama, nim):
        self.karakter = karakter
        self.nama = nama
        self.nim = nim
    def perkenalan (self, karakter):
        print("Halo nama saya: "+(self.nama))
        print("Status saya: "+(self.karakter))
        print("dan Nim saya: "+(self.nim))

class Gerbong:
    pass

m1 = Mhs("Mahasiswa", "Andreas", "H1A020023")
m1.perkenalan(Mhs)
gbg = Gerbong()
del (Gerbong)