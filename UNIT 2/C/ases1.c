#include <stdio.h>

int main() {
    int a, b, c;
    printf("Masukkan tiga bilangan: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a, min = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("Bilangan terbesar: %d\n", max);
    printf("Bilangan terkecil: %d\n", min);

    return 0;
}
