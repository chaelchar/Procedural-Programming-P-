#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[200];
    char acronym[50];
    char *kata;
    int index = 0;

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    kalimat[strcspn(kalimat, "\n")] = '\0';

    kata = strtok(kalimat, " ");

    while (kata != NULL) {
        acronym[index] = kata[0];
        index++;
        kata = strtok(NULL, " ");
    }

    acronym[index] = '\0';

    printf("Acronym: %s\n", acronym);
    return 0;
}
