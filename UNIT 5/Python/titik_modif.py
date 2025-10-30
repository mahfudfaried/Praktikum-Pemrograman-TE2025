# Program implementasi FBen2_Pointer.py
# Deskripsi: Merealisasikan algoritma CreateTitik dan TambahTitik
#            menggunakan dictionary (setara 'pointer' di Python).

def CreateTitik(x1, x2):
    """
    Fungsi akan membentuk sebuah titik yang elemennya dikirim
    lewat variabel x1 dan x2, x1 menyatakan ordinat dan x2
    menyatakan absis.
    Mengembalikan dictionary Titik yang baru.
    """
    # Buat dictionary baru
    Hsl = {'X': x1, 'Y': x2}
    return Hsl

def TambahTitik(Titik1, Titik2):
    """
    Fungsi akan mengembalikan hasil penambahan elemen bersesuaian
    antara Titik1 dengan Titik2.
    Mengembalikan dictionary Titik baru (hasil penjumlahan).
    """
    if Titik1 is None or Titik2 is None:
        return None
        
    # Buat dictionary baru untuk hasil penjumlahan
    PSum = {
        'X': Titik1['X'] + Titik2['X'], # Ordinat + Ordinat
        'Y': Titik1['Y'] + Titik2['Y']  # Absis + Absis
    }
    return PSum

# Program Utama untuk Pengujian
if __name__ == "__main__":
    # --- Uji Coba Titik 1 ---
    x1, y1 = map(int, input("Masukkan nilai x (ordinat) dan y (absis) Titik 1: ").split())
    P1 = CreateTitik(x1, y1)

    # --- Uji Coba Titik 2 ---
    x2, y2 = map(int, input("Masukkan nilai x (ordinat) dan y (absis) Titik 2: ").split())
    P2 = CreateTitik(x2, y2)

    # --- Uji Coba Penjumlahan ---
    P3 = TambahTitik(P1, P2)

    # --- Hasil ---
    print("\n--- Hasil ---")
    print(f"Titik 1 (P1): Ordinat={P1['X']}, Absis={P1['Y']}")
    print(f"Titik 2 (P2): Ordinat={P2['X']}, Absis={P2['Y']}")
    print(f"Titik 3 (P3 = P1 + P2): Ordinat={P3['X']}, Absis={P3['Y']}")
    
    # Di Python, kita tidak perlu free() memori secara manual