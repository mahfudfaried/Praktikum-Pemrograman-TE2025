#include <stdio.h>
int main(){
    int i;
    for (i = 1; i <= 20; i++){
        if (i < 20){
            printf("H1A02000");
            printf("%d, ", i);
            printf("\n");
        }else{
            printf("H1A0200");
            printf("%d", i);
            printf("\n");
        }
    }
    return 0;
}