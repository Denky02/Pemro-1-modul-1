#include <stdio.h>

int main() {
    int sisi_a = 4;
    int sisi_b = 5;
    int sisi_c = 7;
    int keliling = sisi_a + sisi_b + sisi_c;
    int harga_tanah_permeter = 85000;
    int Total_biaya = keliling * harga_tanah_permeter;

    printf("Diketahui :\n\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n\n", sisi_a, sisi_b, sisi_c);
    printf("Keliling Tanah Pak Dengklek adalah %d \n\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n\n", harga_tanah_permeter);
    printf("Jawaban :\n\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", Total_biaya);

    return 0;
}