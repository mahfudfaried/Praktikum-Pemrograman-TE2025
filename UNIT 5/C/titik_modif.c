/*
 Program implementasi FBen2_Pointer.c
 Deskripsi: Merealisasikan algoritma CreateTitik dan TambahTitik
            menggunakan pointer (alokasi dinamis).
*/

#include <stdio.h>
#include <stdlib.h> // Diperlukan untuk malloc() dan free()

// Kamus Global
typedef struct {
    int x; // Ordinat
    int y; // Absis
} Titik;

typedef Titik* PTitik; // PTitik adalah pointer ke Titik

/**
 * @brief Fungsi akan membentuk sebuah titik yang elemennya dikirim
 * lewat variabel x1 dan x2, x1 menyatakan ordinat dan x2
 * menyatakan absis.
 * @return Pointer ke Titik yang baru dibuat (PTitik).
 */
PTitik CreateTitik(int x1, int x2) {
    // Alokasikan memori untuk sebuah Titik baru
    PTitik P = (PTitik)malloc(sizeof(Titik));
    
    // Cek apakah alokasi memori berhasil
    if (P != NULL) {
        P->x = x1; // Set nilai ordinat
        P->y = x2; // Set nilai absis
    }
    return P; // Kembalikan pointer ke Titik baru
}

/**
 * @brief Fungsi akan mengembalikan hasil penambahan elemen bersesuaian
 * antara Titik1 dengan Titik2.
 * @param Titik1 Pointer ke titik pertama.
 * @param Titik2 Pointer ke titik kedua.
 * @return Pointer ke Titik baru (hasil penjumlahan).
 */
PTitik TambahTitik(PTitik Titik1, PTitik Titik2) {
    // Cek jika input pointer valid
    if (Titik1 == NULL || Titik2 == NULL) {
        return NULL;
    }
    
    // Alokasikan memori untuk Titik hasil penjumlahan
    PTitik PSum = (PTitik)malloc(sizeof(Titik));
    
    if (PSum != NULL) {
        // Lakukan penjumlahan
        PSum->x = Titik1->x + Titik2->x; // Ordinat + Ordinat
        PSum->y = Titik1->y + Titik2->y; // Absis + Absis
    }
    return PSum; // Kembalikan pointer ke hasil
}


// Program Utama untuk Pengujian
int main() {
    PTitik P1, P2, P3;
    int x1, y1, x2, y2;

    // --- Uji Coba Titik 1 ---
    printf("Masukkan nilai x (ordinat) dan y (absis) Titik 1: ");
    scanf("%d %d", &x1, &y1);
    P1 = CreateTitik(x1, y1);

    // --- Uji Coba Titik 2 ---
    printf("Masukkan nilai x (ordinat) dan y (absis) Titik 2: ");
    scanf("%d %d", &x2, &y2);
    P2 = CreateTitik(x2, y2);

    // --- Uji Coba Penjumlahan ---
    P3 = TambahTitik(P1, P2);

    // Cek jika semua pointer berhasil dibuat
    if (P1 && P2 && P3) {
        printf("\n--- Hasil ---\n");
        printf("Titik 1 (P1): Ordinat=%d, Absis=%d\n", P1->x, P1->y);
        printf("Titik 2 (P2): Ordinat=%d, Absis=%d\n", P2->x, P2->y);
        printf("Titik 3 (P3 = P1 + P2): Ordinat=%d, Absis=%d\n", P3->x, P3->y);
    } else {
        printf("Gagal mengalokasikan memori.\n");
    }

    // --- Penting: Bebaskan memori yang sudah dialokasikan! ---
    free(P1);
    free(P2);
    free(P3);
    
    // Set pointer ke NULL setelah di-free untuk keamanan
    P1 = NULL;
    P2 = NULL;
    P3 = NULL;

    return 0;
}