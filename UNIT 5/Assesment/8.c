#include <stdio.h>

typedef struct {
    char nama[50];
    int umur;
    float ipk;
} DataMahasiswa;

int main() {
    int i, jumlah;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);

    DataMahasiswa mhs[jumlah];

    // Input data mahasiswa
    for (i = 0; i < jumlah; i++) {
        printf("\nMasukkan data untuk mahasiswa %d:\n", i + 1);

        printf("Nama: ");
        scanf("%s", mhs[i].nama);

        printf("Umur: ");
        scanf("%d", &mhs[i].umur);

        printf("IPK: ");
        scanf("%f", &mhs[i].ipk);
    }

    // Output data mahasiswa
    printf("\nData Mahasiswa:\n\n");
    for (i = 0; i < jumlah; i++) {
        printf("Mahasiswa %d:\n", i + 1);
        printf("Nama: %s\n", mhs[i].nama);
        printf("Umur: %d\n", mhs[i].umur);
        printf("IPK: %.2f\n\n", mhs[i].ipk);
    }

    return 0;
}
