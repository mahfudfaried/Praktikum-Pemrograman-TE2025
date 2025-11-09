#include <stdio.h>
#include <math.h>

float cariAkar(float a, float b, float c) {
    float D = (b*b) - (4*a*c);
    if (D < 0) {
        return -9999; 
    }
    float akar1 = (-b + sqrt(D)) / (2*a);
    return akar1;
}
float cariAkar(float a, float b, float c);
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Masukkan nilai a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    float hasil = cariAkar(a, b, c);
    printf("Akar persamaan: %.2f", hasil);
    return 0;
}
