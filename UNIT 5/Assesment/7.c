#include <stdio.h>

int faktorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}

// Prosedur untuk mencetak deret faktorial dari 1 sampai N
void cetakDeretFaktorial(int N) {
    int i;
    for (i = 1; i <= N; i++) {
        printf("%d! = %d\n", i, faktorial(i));
    }
}

int main() {
    int angka;
    printf("Masukkan bilangan: ");
    scanf("%d", &angka);

    // Memanggil prosedur
    cetakDeretFaktorial(angka);

    return 0;
}
