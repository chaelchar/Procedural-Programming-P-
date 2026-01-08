#include <stdio.h>

int main() {
    int a, r, n;
    int jumlah = 0;
    int suku;

    printf("input suku pertama -> ");
    scanf("%d", &a);

    printf("input rasio -> ");
    scanf("%d", &r);

    printf("input jumlah suku deret -> ");
    scanf("%d", &n);

    suku = a;  

    for (int i = 1; i <= n; i++) {
        jumlah = jumlah + suku;
        suku = suku * r;  
    }
    /*
    suku ke-1 = a
    suku ke-2 = a * r
    suku ke-3 = a * r * r
    suku ke-4 = a * r * r * r
    */

    printf("Jumlah deret geometris = %d\n", jumlah);

    return 0;
}
