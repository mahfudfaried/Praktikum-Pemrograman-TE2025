#include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    float operand1, operand2;

    printf("Program Kalkulator Sederhana");
    printf("* => Perkalian\n");
    printf("/ => Pembagian\n");
    printf("+ => Penjumlahan\n");
    printf("- => Pengurangan\n");
    printf("Contoh menghitung: 5 / 2. Lalu tekan ENTER\n");

    printf("Silakan masukkan operasi: ");
    if (scanf("%f %c %f", &operand1, &operator, &operand2) !=3) {
        printf("\nInput tidak valid.\n");
        return 1;
    }
    switch (operator)
    {
    case '*':
        printf("Hasil: %.2f\n", operand1 * operand2);
        break;
    case '/':
        if (operand2 == 0) {
            printf("\nError: Pembagian dengan nol tidak diizinkan.\n");
            return 1;
        }
        printf("Hasil: %.2f\n", operand1 / operand2);
        break;
    case '+':
        printf("Hasil: %.2f\n", operand1 + operand2);
        break;
    case '-':
        printf("Hasil: %.2f\n", operand1 - operand2);
        break;
    default:
        break;
    }
}