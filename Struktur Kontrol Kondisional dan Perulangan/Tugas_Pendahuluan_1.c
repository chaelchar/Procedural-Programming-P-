#include <stdio.h>

int main() {
    int tahun;

    do {
        printf("Masukkan tahun: ");
        scanf("%d", &tahun);

        if (tahun <= 0) {
            printf("Tahun tidak valid! Silakan masukkan ulang.\n");
        }
    } while (tahun <= 0);

    if (tahun % 400 == 0) {
        printf("Tahun %d adalah tahun kabisat.\n", tahun);
    } 
    else if (tahun % 100 == 0) {
        printf("Tahun %d bukan tahun kabisat.\n", tahun);
    } 
    else if (tahun % 4 == 0) {
        printf("Tahun %d adalah tahun kabisat.\n", tahun);
    } 
    else {
        printf("Tahun %d bukan tahun kabisat.\n", tahun);
    }

    return 0;
}
