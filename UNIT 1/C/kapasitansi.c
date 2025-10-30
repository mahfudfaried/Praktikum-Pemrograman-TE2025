#include <stdio.h>
int main (){
float kapasitansi, tegangan, muatan;
printf("Masukkan nilai muatan (dalam coulomb): ");
scanf("%f", &muatan);
printf("Masukkan nilai tegangan (dalam volt): ");
scanf("%f", &tegangan);
kapasitansi = muatan/tegangan;
printf("Kapasitansi = %.2f Farad\n", kapasitansi);
return 0;
}