#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Masukkan jumlah kata: ");
    scanf("%d", &n);

    char teks[n][50];          // array string
    char hasil[500] = "";      // hasil gabungan

    for (int i = 0; i < n; i++) {
        printf("Kata ke-%d: ", i+1);
        scanf("%s", teks[i]);  // baca satu kata
        if (i == 0)
            strcpy(hasil, teks[i]);
        else {
            strcat(hasil, " ");
            strcat(hasil, teks[i]);
        }
    }

    printf("\nHasil gabungan: %s\n", hasil);
    return 0;
}
