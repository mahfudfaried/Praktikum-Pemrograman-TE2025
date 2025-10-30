#include <stdio.h>
#include <math.h>

// Fungsi untuk melakukan kuantisasi
void quantizeSignal(double analogSignal[], int quantizedSignal[], int count, int numBits) {
    int numLevels = (int)pow(2, numBits);  // jumlah level diskret
    double maxVoltage = 5.0;               // asumsi sinyal analog maksimum 5V
    double step = maxVoltage / (numLevels - 1);

    for (int i = 0; i < count; i++) {
        double value = analogSignal[i];
        // Pastikan tidak melebihi batas
        if (value < 0.0) value = 0.0;
        if (value > maxVoltage) value = maxVoltage;

        // Hitung level terdekat
        int level = (int)round(value / step);
        quantizedSignal[i] = level;
    }
}

// Fungsi untuk mencetak sinyal analog
void printAnalogSignal(char title[], double signal[], int count) {
    printf("%s\n", title);
    for (int i = 0; i < count; i++) {
        printf("%6.3f ", signal[i]);
    }
    printf("\n\n");
}

// Fungsi untuk mencetak sinyal digital (kuantisasi)
void printDigitalSignal(char title[], int signal[], int count) {
    printf("%s\n", title);
    for (int i = 0; i < count; i++) {
        printf("%3d ", signal[i]);
    }
    printf("\n\n");
}

int main() {
    // Contoh sinyal analog (misalnya hasil sampling dari sinyal 0-5V)
    double analogSignal[] = {0.2, 1.0, 2.3, 3.1, 3.9, 4.7, 5.0};
    int count = sizeof(analogSignal) / sizeof(analogSignal[0]);
    int quantizedSignal[count];

    int numBits;
    printf("Masukkan jumlah bit kuantisasi: ");
    scanf("%d", &numBits);

    quantizeSignal(analogSignal, quantizedSignal, count, numBits);

    printAnalogSignal("Sinyal Analog (Volt):", analogSignal, count);
    printDigitalSignal("Sinyal Terkunatiasi (Level Diskret):", quantizedSignal, count);

    return 0;
}