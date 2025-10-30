#include <stdio.h>
#include <stdbool.h>

bool cekPrima(int n) {
    if (n < 2) return false; // bilangan kurang dari 2 bukan prima
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;    // jika ada pembagi habis, bukan prima
    }
    return true;             // jika tidak ada pembagi, maka prima
}

int main() {
    int i = 1;
    printf("Angka dari 1 sampai 100 (kecuali bilangan prima):\n");

    while (i <= 100) {
        if (!cekPrima(i)) {
            printf("%d ", i); // cetak hanya bilangan bukan prima
        }
        i++; // jangan lupa menaikkan nilai i agar tidak infinite loop
    }

    return 0;
}
