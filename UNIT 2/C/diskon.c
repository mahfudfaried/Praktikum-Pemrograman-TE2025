#include <stdio.h>

int main() {
double beli, diskon, bayar;
printf("jumlah pembelian = Rp. ");
scanf("%lf", &beli);
if (beli >= 100000)
diskon = 10000;
else
diskon = 0;
bayar = beli - diskon;
printf("jumlah pembelian = Rp. %.21f\n", beli);
printf("besar diskon = Rp. %.21f\n", diskon);
printf("total pembayaran - Rp. %.21f\n", bayar);
return 0;
}