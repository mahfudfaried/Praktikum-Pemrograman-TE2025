#include <stdio.h>

int main() {
    int n, i, j;
    printf("Input = ");
    scanf("%d", &n);
    printf("Output =\n");

    for (i = 0; i < n; i += 2) {
        for (j = 0; j <= i; j += 2) {
            if (j % 4 == 0)
                printf("%d", j);
            else
                printf("#");
        }
        printf("\n");
    }
    return 0;
}
