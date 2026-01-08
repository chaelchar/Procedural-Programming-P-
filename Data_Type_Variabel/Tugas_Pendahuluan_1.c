#include <stdio.h>

int main() {
    int detik;
    int jam, menit, sisa;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &detik);

    jam = detik / 3600;
    sisa = detik % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    printf("%d jam %d menit %d detik\n", jam, menit, detik);

    return 0;
}
