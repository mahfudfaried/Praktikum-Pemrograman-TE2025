#include <stdio.h>

typedef struct {
    int ukuran;
    int lebar_total;
} KonfigurasiPola;

void cetakBarisHuruf(int jumlah_huruf, int lebar_total) {
    int jumlah_bintang = (lebar_total - jumlah_huruf) / 2;
    int i;

    for (i = 0; i < jumlah_bintang; i++) {
        printf("*");
    }

    for (i = 0; i < jumlah_huruf; i++) {
        printf("%c", 'a' + i);
    }

    for (i = 0; i < jumlah_bintang; i++) {
        printf("*");
    }

    printf("\n");
}

int main() {
    KonfigurasiPola konfigurasi;
    konfigurasi.ukuran = 13; 
    konfigurasi.lebar_total = 27; 

    int i;

    printf("\n--- HASIL PROGRAM (Gambar 1) ---\n\n");

    for (i = 1; i <= konfigurasi.ukuran; i++) {
        int jumlah_karakter = (i * 2) - 1; 
        cetakBarisHuruf(jumlah_karakter, konfigurasi.lebar_total);
    }

    for (i = konfigurasi.ukuran - 1; i >= 1; i--) {
        int jumlah_karakter = (i * 2) - 1; 
        cetakBarisHuruf(jumlah_karakter, konfigurasi.lebar_total);
    }

    return 0;
}