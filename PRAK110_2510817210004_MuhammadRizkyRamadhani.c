#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;
    int tinggi = 12;
    double miring = sqrt(pow(alas, 2) + pow(tinggi, 2));
    double keliling_segitiga = alas + tinggi + miring;
    double luas_segitiga = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);

    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %.0f cm\n", miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %.0f cm\n", keliling_segitiga);
    printf("Luas = %.0f cm\n", luas_segitiga);

    return 0;
}
