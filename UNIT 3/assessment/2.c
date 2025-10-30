#include <stdio.h>

int main() {
    int n, sisa, jumlah = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    while (n != 0) {
        sisa = n % 10;      // ambil digit terakhir
        jumlah += sisa;     // tambahkan ke total
        n /= 10;            // buang digit terakhir
    }

    printf("Jumlah angka dari bilangan tersebut adalah: %d\n", jumlah);
    return 0;
}
