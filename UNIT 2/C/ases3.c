#include <stdio.h>

int main() {
    int x;
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &x);

    if (x >= 1 && x <= 9) {
        printf("Satuan\n");
    } else if (x >= 10 && x <= 99) {
        printf("Puluhan\n");
    } else if (x >= 100 && x <= 999) {
        printf("Ratusan\n");
    } else if (x >= 1000 && x <= 9999) {
        printf("Ribuan\n");
    } else if (x >= 10000 && x <= 99999) {
        printf("Puluh Ribuan\n");
    } else {
        printf("Bilangan di luar jangkauan\n");
    }

    return 0;
}
