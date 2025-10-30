#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    
    do {
        printf("Masukkan nilai N > 0: ");
        scanf("%d", &n);
    }while (n <= 0);

    do {
        printf("\nAnak ayam turun lah %d \n", n);
        if (n==1){
            break;
        } else {
            n= n-1;
            printf ("Mati satu tinggal lah %d \n", n);
        }
        
    }while (n > 0);

    printf("Mati satu tinggal induknya\n");
    system("Pause");
}