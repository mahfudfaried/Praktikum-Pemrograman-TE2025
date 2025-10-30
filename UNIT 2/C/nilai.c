#include <stdio.h>
#include <stdlib.h>
int main(){
int nilai;
printf("Masukkan Nilai Anda :");
scanf("%d", &nilai);
if (nilai > 60) {
    printf("Selamat, Anda Lulus\n");
} else {
    printf("Maaf, Anda Belum Berhasil\n");
}
system("pause");
return 0;
}