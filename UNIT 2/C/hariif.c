#include <stdio.h>
int main() {
    int code;
    printf("Masukan kode hari ini [1..7]: ");
    scanf("%d", &code);
    if (code == 1) {
        printf("Ini adalah kode hari untuk hari SENIN\n");
    } else if (code == 2) {
        printf("ini adalah kode hari SELASA\n");
    } else if (code == 3) {
        printf("Ini adalah kode hari RABU\n");
    } else if (code == 4) {
        printf("Ini adalah kode hari KAMIS\n");
    } else if (code == 5) {
        printf("Ini adalah kode hari ini JUMAT\n");
    } else if (code == 6) {
        printf("Ini adalah kode hari SABTU\n");
    } else if (code == 7) {
        printf("Ini adalah kode hari ini MINGGU\n");
    } else {
        printf("Kode yang Anda masukkan tidak dikenali\n");
    }
    return 0;
}