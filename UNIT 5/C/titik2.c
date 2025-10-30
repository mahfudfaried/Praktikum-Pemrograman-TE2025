/* Deskripsi : Contoh untuk mendefinisikan objek jam */
/* (Nama File : jam.c) */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int HH;
    int MM;
    int SS;
} jam;

/* Prototype */
void ResetJam(jam *J);
/* I.S : J variabel bertipe jam, telah terdefinisi dengan
 benar, sembarang */
/* F.S : Mengisi sebuah variabel bertipe jam J dengan
 00:00:00 */

void TulisJam(jam J);
/* I.S : J telah terdefinisi dengan benar secara sembarang */
/* F.S : menuliskan sebuah jam */

int JamToDetik(jam J);
/* Precond : J berisi jam secara sembarang */
/* Fungsi mengembalikan hasil konversi jam ke detik */

jam DetikToJam(int d);
/* Precond : d berisi detik secara sembarang */
/* Fungsi mengembalikan hasil konversi dari detik menjadi jam */

/* Body Prototype */
void ResetJam(jam *J) {
    /* I.S : J variabel bertipe jam, telah terdefinisi dengan
    benar, sembarang */
    /* F.S : Mengisi sebuah variabel bertipe jam J dengan
    00:00:00 */
    
    /* Kamus Lokal */
    /* Algoritma */
    (*J).HH = 0;
    (*J).MM = 0;
    (*J).SS = 0;
}

void TulisJam(jam J) {
    /* I.S : J telah terdefinisi dengan benar secara sembarang */
    /* F.S : menuliskan sebuah jam */
    
    /* Kamus Lokal */
    /* Algoritma */
    printf("Jam : %02d:%02d:%02d\n", J.HH, J.MM, J.SS);
}

int JamToDetik(jam J) {
    /* Precond : J berisi jam secara sembarang */
    /* Fungsi mengembalikan hasil konversi jam ke detik */
    
    /* Kamus Lokal */
    /* Algoritma */
    return (J.HH * 3600 + J.MM * 60 + J.SS);
}

jam DetikToJam(int d) {
    /* Precond : d berisi jam secara sembarang */
    /* Fungsi mengembalikan hasil konversi dari detik menjadi jam */
    
    /* Kamus Lokal */
    jam J;
    int sisa;
    
    /* Algoritma */
    J.HH = d / 3600;
    sisa = d % 3600;
    J.MM = sisa / 60;
    J.SS = sisa % 60;
    return J;
}

/* Driver Jam */
int main() {
    /* Kamus Lokal */
    jam J1;
    jam J2;
    int dt = 36000;
    
    /* Algoritma */
    printf("Asalamualaikum\n");
    ResetJam(&J1);
    
    J1.HH = 8;
    J1.MM = 50;
    TulisJam(J1);
    
    printf("Konversi jam ke detik: %d\n", JamToDetik(J1));
    printf("\n");
    
    printf("d detik = %d\n", dt);
    J2 = DetikToJam(dt);
    TulisJam(J2);
    
    system("pause");
    return 0;
}