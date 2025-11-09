class Mhs:
    def __init__(self, info, nama, nim, univ, jurusan, angkatan):
        self.info = info
        self.nama = nama
        self.nim = nim
        self.univ = univ
        self.jurusan = jurusan
        self.angkatan = angkatan
    def identitas(self, info):
        print("Menampilkan Bagian Identitas")
        print("Nama:" + self.nama)
        print("NIM: " + self.nim)
        print("\n")

class Status (Mhs):
    def detail(self, info):
        print("Menampilkan Bagian Detail")
        print("Universitas:", self.univ)
        print("Jurusan:", self.jurusan)
        print("Angkatan:", self.angkatan)

p1 = Mhs('Mahasiswa', 'Andreas', 'H1A020023',
    "Universitas Jenderal Soedirman", "Teknik Elektro", "2020")
p1.identitas('Mahasiswa')
p1 = Status ('Mahasiswa', 'Andreas', 'H1A020023',
    "Universitas Jenderal Soedirman", "Teknik Elektro", "2020")
p1.detail('Kuliah')