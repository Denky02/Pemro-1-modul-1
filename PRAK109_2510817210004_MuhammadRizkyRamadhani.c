#include <stdio.h>

int main() {
    int jumlah_pasukan_yz = 958730;
    int jumlah_pahlawan_altar = 5; //(Zilong, Ling, Baxia, Wanwan, Chang’e)
    int jumlah_pasukan_yang_harus_dikalahkan = jumlah_pasukan_yz / jumlah_pahlawan_altar;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n\n", jumlah_pasukan_yz);
    printf("Jumlah pahlawan = %d\n\n", jumlah_pahlawan_altar);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", jumlah_pasukan_yang_harus_dikalahkan);

    return 0;
}
