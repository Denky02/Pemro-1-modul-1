#include <stdio.h>
#include <math.h>

int main() {
    int a = 5;
    int b = 12;
    float c = sqrt(a * a + b * b);
    float keliling_segitiga = a + b + c;
    float luas_segitiga = 0.5 * a * b;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", a);
    printf("Tinggi = %d cm\n\n", b);

    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", a);
    printf("Sisi B = %d cm\n", b);
    printf("Sisi C = %.0f cm\n", c);
    printf("Keliling = %.0f cm\n", keliling_segitiga);
    printf("Luas = %.0f cm\n", luas_segitiga);

    return 0;
}