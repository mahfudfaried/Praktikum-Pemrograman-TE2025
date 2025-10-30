/*
 Program PengujiFungsiBentukan2
 (Nama File: FBen2.c)
 Deskripsi: Menguji fungsi bertype bentukan
 CreateTitik
*/

#include <stdio.h>

// Kamus Global
typedef struct {
    int x, y;
} Titik;

int NilX, NilY;
Titik NilaiTitik;

/* Definisi Prototipe Fungsi */
Titik CreateTitik(int x1, int x2) {
    /* Fungsi akan membentuk sebuah titik yang elemennya
     dikirim lewat variabel x1 dan x2 (x1 menyatakan
     ordinat dan x2 menyatakan absis) */
    
    // Kamus Lokal
    Titik Hsl;
    
    // Algoritma
    Hsl.x = x1; 
    Hsl.y = x2;
    return Hsl;
}

int main() {
    /* Algoritma (Program utama) */
    printf("Masukan Nilai x dan y Sembarang, lalu Enter \n");
    scanf("%d %d", &NilX, &NilY);
    
    printf("Sebelum pemanggilan fungsi CreateTitik \n");
    printf(" Nilai Ordinat= %d Nilai Absis= %d", NilaiTitik.x, NilaiTitik.y);
    
    NilaiTitik = CreateTitik(NilX, NilY);
    
    printf("\nSetelah pemanggilan fungsi CreateTitik \n");
    printf("Nilai Ordinat= %d Nilai Absis= %d", NilaiTitik.x, NilaiTitik.y);
    
    return 0;
}