#include <stdio.h>

int main() {
    int n, i;
    printf("Masukkan jumlah hari: ");
    scanf("%d", &n);               // baca banyak elemen

    // deklarasi array (pendefinisian ukuran)
    float suhu[n];

    // input: mengakses elemen array untuk menyimpan data
    for (i = 0; i < n; i++) {
        printf("Suhu hari ke-%d: ", i+1);
        scanf("%f", &suhu[i]);     // pengaksesan array
    }

    // inisialisasi untuk perhitungan
    float sum = 0.0f;
    float max = suhu[0];
    float min = suhu[0];

    // proses pengaksesan seluruh elemen untuk hitung sum,max,min
    for (i = 0; i < n; i++) {
        sum += suhu[i];
        if (suhu[i] > max) max = suhu[i];
        if (suhu[i] < min) min = suhu[i];
    }

    float rata = sum / n;
    printf("\nSuhu maksimum = %.2f\n", max);
    printf("Suhu minimum  = %.2f\n", min);
    printf("Rata-rata     = %.2f\n", rata);

    return 0;
}
