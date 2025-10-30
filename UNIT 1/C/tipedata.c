#include <stdio.h>
#include <stdlib.h>

int main (){
int a;
float c;
char *s;

a = 250;
c = 2.5;
s = "Halo Unsada";

printf("\nNilai a: %d", a);
printf("\nNilai a: %5d", a);
printf("\nNilai c: %f", c);
printf("\nNilai c: %3f", c);
printf("\nNilai c: %3.1f", c);
printf("\nNilai c: %3.2f", c);
printf("\nNilai c: %3.4f", c);
printf("\nNilai s: %s", s);
printf("\ndata s: %-15s", s);
printf("\nData s: %15s", s);
printf("\nData s: %-25s", s);
printf("\nData s: %25s", s);

system ("pause");
return 0;
}
