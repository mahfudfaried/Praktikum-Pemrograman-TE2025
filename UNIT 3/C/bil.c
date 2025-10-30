#include <stdio.h>
#include <stdlib.h>
int main(){
    int baris, kolom, hasil_tambah;
    for (baris = 1; baris <= 5; baris++)
    {
        for (kolom = 1; kolom <= 5; kolom++)
        {
            hasil_tambah = baris + kolom;
            printf(" %d -", hasil_tambah);
        }
        printf("\n \n");
    }
    return 0;
}
        