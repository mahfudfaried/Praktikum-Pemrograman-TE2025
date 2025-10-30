#include <stdio.h>
#include <string.h>

int main(){
    char nama[100], nim [20], matkul [100];
    char ans = 'Y', nilaihuruf;
    int nilai;
   while (ans == 'Y'|| ans == 'y') {
    printf("---Nilai Matkul Checker---\n");
    printf("Masukkan nama: ");
    scanf("%s", nama);
    printf("Masukkan NIM: ");
    scanf("%s", nim);
    printf("Masukkan mata kuliah: ");
    scanf("%s", matkul);
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);
    printf("\nData berhasil diinput\n");

    if (nilai >= 85 && nilai <= 100){
        nilaihuruf = 'A';
    }else if (nilai >= 75 && nilai < 85){
        nilaihuruf = 'B';
    }else if (nilai >= 65 && nilai < 75){
        nilaihuruf = 'C';
    }else if (nilai < 65){
        nilaihuruf = 'D';
    }

    printf("\nNilai dari %c\n", nilaihuruf);
    printf("Apakah anda ingin mengulangi? (y/t): ");
    scanf(" %c", &ans);
   
    fflush(stdin);
   }
    return 0;
}