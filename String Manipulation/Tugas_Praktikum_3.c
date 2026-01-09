#include <stdio.h>
#include <string.h>

int main() {
    char str[100], hasil[100], target;
    int i, j = 0;

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);

    printf("Masukkan karakter yang akan dihapus: ");
    scanf("%c", &target);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != target) {
            hasil[j] = str[i];
            j++;
        }
    }

    hasil[j] = '\0';

    printf("Hasil string: %s\n", hasil);
    return 0;
}
