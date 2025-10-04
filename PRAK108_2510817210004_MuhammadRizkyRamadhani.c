#include <stdio.h>
#include <math.h>

int main() {
    int berapa_putaran = 5;
    int berapa_km = 14;
    float jarak_satu_putaran = (float)berapa_km / berapa_putaran;
    float keliling_taman = jarak_satu_putaran;
    const float PI = 3.141592653589793;
    float r = keliling_taman / (2 * PI);

    printf("Diketahui :\n\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n\n", berapa_putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n\n", berapa_km);
    printf("Jawaban :\n\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);

    return 0;
}