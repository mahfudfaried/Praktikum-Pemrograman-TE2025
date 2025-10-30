#include <stdio.h>

int main() {
    int hari;
    printf("Masukkan jumlah hari keterlambatan: ");
    scanf("%d", &hari);

    if (hari == 0) {
        printf("Tidak ada denda.\n");
    } else if (hari < 7) {
        printf("Denda 5000 rupiah.\n");
    } else if (hari >= 7 && hari <= 14) {
        printf("Denda 10000 rupiah.\n");
    } else {
        printf("Denda 20000 rupiah.\n");
    }

    return 0;
}
