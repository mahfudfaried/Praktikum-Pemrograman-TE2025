#include <stdio.h>
#include <math.h>

int main() {
    int angka[] = {1, 2, 3, 4};
    int pangkat[4];
    int i;

    for (i = 0; i < 4; i++) {
        pangkat[i] = pow(angka[i], 2);  // setiap elemen dipangkatkan 2
    }

    printf("Hasil perpangkatan: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", pangkat[i]);
    }

    return 0;
}
