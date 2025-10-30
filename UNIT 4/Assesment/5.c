#include <stdio.h>

int main() {
    int arr[] = {1,5,6,7};
    int i = 1, j = 2;
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
    for (int k=0; k<4; k++) printf("%d ", arr[k]);
    return 0;
}
