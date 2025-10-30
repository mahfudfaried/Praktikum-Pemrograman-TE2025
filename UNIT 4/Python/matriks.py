def main():
    print("Operasi Perkalian 2 Buah Matriks")
    
    m, n = map(int, input("Matriks pertama berorde: ").strip().split())
    m1, n1 = map(int, input("Matriks kedua berorde: ").strip().split())
    
    # Inisialisasi matriks
    M1 = [[0 for _ in range(n)] for _ in range(m)]
    M2 = [[0 for _ in range(n1)] for _ in range(m1)]
    M3 = [[0 for _ in range(n1)] for _ in range(m)]
    
    if n != m1:
        print("Perkalian matriks tidak dapat dilakukan, karena tidak sesuai dengan aturan perkalian matriks")
        return
        
    # Input Matriks 1
    for i in range(m):
        for j in range(n):
            M1[i][j] = int(input(f"Masukan elemen M1[{i + 1}][{j + 1}]: "))
            
    # Input Matriks 2
    for i in range(m1):
        for j in range(n1):
            M2[i][j] = int(input(f"Masukan elemen M2[{i + 1}][{j + 1}]: "))
            
    # Proses Perkalian
    for i in range(m):
        for j in range(n1):
            for k in range(n): # n (kolom M1) atau m1 (baris M2)
                M3[i][j] += M1[i][k] * M2[k][j]
                
    # Output Hasil
    print("Hasil perkaliannya adalah: ")
    for i in range(m):
        for j in range(n1):
            # Output di modul sedikit berbeda, ini format yang lebih rapi
            print(f"{M3[i][j]} ", end="")
        print()

if __name__ == "__main__":
    main()