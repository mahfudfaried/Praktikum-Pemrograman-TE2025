#include <stdio.h>
#include <stdlib.h>

int main(){
    int kode;
    
    printf("Masukan kode hari ini (1,2,...,7): ");
    scanf("%d", &kode);

    switch (kode)
    {
    case 1:
        printf("\nIni kode hari SENIN");
        break;
    case 2:
        printf("\nIni kode hari SELASA");
        break;
    case 3:
        printf("\nIni kode hari RABU");
        break;
    case 4:
        printf("\nIni kode hari KAMIS");
        break;
    case 5:
        printf("\nIni kode hari JUMAT");
        break;
    case 6:
        printf("\nIni kode hari SABTU");
        break;
    case 7:
        printf("\nIni kode hari MINGGU");
        break;
    default:
        printf("\nKode yang Anda masukkan tidak dikenali\n");
    }
    
    return 0;
}