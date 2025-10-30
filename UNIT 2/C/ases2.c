#include <stdio.h>

int main() {
    char nama[50], nim[20];
    float uts, uas, tugas, nilaiAkhir;
    char grade;

    printf("Masukkan NIM: ");
    scanf("%s", nim);
    printf("Masukkan Nama: ");
    scanf("%s", nama);
    printf("Masukkan Nilai UTS: ");
    scanf("%f", &uts);
    printf("Masukkan Nilai UAS: ");
    scanf("%f", &uas);
    printf("Masukkan Nilai Tugas: ");
    scanf("%f", &tugas);

    // Proses hitung nilai akhir
    nilaiAkhir = 0.3 * uts + 0.5 * uas + 0.2 * tugas;

    // Tentukan nilai huruf
    if (nilaiAkhir >= 90) grade = 'A';
    else if (nilaiAkhir >= 70) grade = 'B';
    else if (nilaiAkhir >= 60) grade = 'C';
    else if (nilaiAkhir >= 50) grade = 'D';
    else grade = 'E';

    // Output
    printf("\nLAPORAN NILAI MAHASISWA\n");
    printf("NIM   : %s\n", nim);
    printf("Nama  : %s\n", nama);
    printf("Nilai Akhir : %.2f\n", nilaiAkhir);
    printf("Nilai Huruf : %c\n", grade);

    return 0;
}