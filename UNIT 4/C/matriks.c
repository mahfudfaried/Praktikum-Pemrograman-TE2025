#include "stdio.h"


int main() {
    int m, n, m1, n1, i, j, k;
    int M1[100][100];
    int M2[100][100];
    int M3[100][100];
    
    printf("Operasi Perkalian 2 Buah Matriks\n");
    
    printf("Matriks pertama berorde : ");
    scanf("%d %d", &m, &n);
    
    printf("Matriks kedua berorde : ");
    scanf("%d %d", &m1, &n1);
    
    if (n != m1) {
        printf("Perkalian matriks tidak dapat dilakukan, Karena tidak sesuai dengan aturan perkalian matriks\n");
    } else {
        // Input Matriks 1
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("Masukan elemen M1[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &M1[i][j]);
            }
        }
        
        // Input Matriks 2
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n1; j++) {
                printf("Masukan elemen M2[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &M2[i][j]);
            }
        }
        
        // Proses Perkalian
        for (i = 0; i < m; i++) {
            for (j = 0; j < n1; j++) {
                M3[i][j] = 0;
                for (k = 0; k < n; k++) {
                    M3[i][j] = M3[i][j] + M1[i][k] * M2[k][j];
                }
            }
        }
        
        // Output Hasil
        printf("Hasil perkaliannya adalah: \n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n1; j++) {
                printf("%d ", M3[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}