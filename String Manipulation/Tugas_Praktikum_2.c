#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[200];
    char *kata;
    char terpanjang[50] = "";
    int max = 0;

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    kalimat[strcspn(kalimat, "\n")] = '\0';

    kata = strtok(kalimat, " ");

    while (kata != NULL) {
        if (strlen(kata) > max) {
            max = strlen(kata);
            strcpy(terpanjang, kata);
        }
        kata = strtok(NULL, " ");
    }

    printf("Kata terpanjang adalah \"%s\" dengan panjang %d karakter.\n",
           terpanjang, max);

    return 0;
}
