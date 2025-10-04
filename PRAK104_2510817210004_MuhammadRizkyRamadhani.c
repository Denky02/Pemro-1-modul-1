#include <stdio.h>

int main() {
    int A = 400000;
    int diskon_A = 13;
    int nilai_diskon_A = A * diskon_A / 100;
    int harga_diskon_A = A - nilai_diskon_A;

    int B = 350000;
    int diskon_B = 21;
    int nilai_diskon_B = B * diskon_B / 100;
    int harga_diskon_B = B - nilai_diskon_B;

    printf("Harga sepatu A adalah %d\n\n", A);
    printf("Harga sepatu B adalah %d\n\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n\n", harga_diskon_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", harga_diskon_B);

    return 0;
}