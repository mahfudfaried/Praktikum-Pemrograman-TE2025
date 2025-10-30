#include <stdio.h>
#include <math.h>

int main() {
    float sisi_a, sisi_b, sisi_miring;
    printf("Masukkan panjang sisi a (dalam satuan yang sama): ");
    scanf("%f", &sisi_a);
    printf("Masukkan panjang sisi b (dalam satuan yang sama): ");
    scanf("%f", &sisi_b);
    sisi_miring = sqrt((sisi_a * sisi_a) + (sisi_b * sisi_b));
    printf("Panjang sisi miring adalah: %.2f\n", sisi_miring);
    return 0;
}