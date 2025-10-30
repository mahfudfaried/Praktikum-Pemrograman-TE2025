#include "stdio.h"


int main() {
    /*Kamus Lokal*/
    int baris, kolom, matriks[3][4];
    
    /*Algoritma*/
    printf("Program Output Matriks\n\n");
    printf("Input elemen Array: \n");
    
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 4; kolom++) {
            printf("matriks[%i][%i]>>> ", baris + 1, kolom + 1);
            scanf("%i", &matriks[baris][kolom]);
        }
        printf("\n");
    }
    
    printf("matriks :\n");
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 4; kolom++) {
            printf("%i ", matriks[baris][kolom]);
        }
        printf("\n\n");
    }
    
   
    return 0;
}