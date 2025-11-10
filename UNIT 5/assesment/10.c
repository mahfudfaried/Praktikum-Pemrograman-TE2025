#include <stdio.h>

typedef struct {
    int size;
    int total_width;
} PatternConfig;

void printLetterRow(int num_letters, int total_width) {
    int num_asterisks = (total_width - num_letters) / 2;
    int i;

    for (i = 0; i < num_asterisks; i++) {
        printf("*");
    }

    for (i = 0; i < num_letters; i++) {
        printf("%c", 'a' + i);
    }

    for (i = 0; i < num_asterisks; i++) {
        printf("*");
    }

    printf("\n");
}

void printHashRow(int num_hashes, int total_width) {
    int num_asterisks = (total_width - num_hashes) / 2;
    int i;

    for (i = 0; i < num_asterisks; i++) {
        printf("*");
    }

    for (i = 0; i < num_hashes; i++) {
        printf("#");
    }

    for (i = 0; i < num_asterisks; i++) {
        printf("*");
    }

    printf("\n");
}

int main() {
    PatternConfig config;
    config.size = 13; 
    config.total_width = 27; 

    int choice;
    int i;

    printf("Pilih gambar yang ingin Anda buat:\n");
    printf("1. Gambar 1 (Huruf)\n");
    printf("2. Gambar 2 (Pagar)\n");
    printf("Pilihan Anda (1 atau 2): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("Pilihan tidak valid. Program akan mencetak Gambar 1.\n");
        choice = 1;
    }

    printf("\n--- HASIL PROGRAM ---\n\n");

    for (i = 1; i <= config.size; i++) {
        int num_chars = (i * 2) - 1; 

        if (choice == 1) {
            printLetterRow(num_chars, config.total_width);
        } else {
            printHashRow(num_chars, config.total_width);
        }
    }

    for (i = config.size - 1; i >= 1; i--) {
        int num_chars = (i * 2) - 1; 

        if (choice == 1) {
            printLetterRow(num_chars, config.total_width);
        } else {
            printHashRow(num_chars, config.total_width);
        }
    }

    return 0;
}