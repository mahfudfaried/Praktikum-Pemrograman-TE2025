#include <stdio.h>

int contains(int arr[], int n, int value) {
    for (int i=0; i<n; i++)
        if (arr[i] == value) return 1;
    return 0;
}

int main() {
    int arr[] = {3,5,2,9};
    int n = 4;
    printf("%d\n", contains(arr,n,5)); // 1
    printf("%d\n", contains(arr,n,7)); // 0
    return 0;
}
