#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100]; //string
    int freq1[26] = {0}, freq2[26] = {0}; // array
    int i; // bilangan bulat

    printf("Masukkan string pertama: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Masukkan string kedua: ");
    fgets(s2, sizeof(s2), stdin);

    // hapus newline
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // cek panjang
    if (strlen(s1) != strlen(s2)) {
        printf("Kedua string bukan anagram.\n");
        return 0;
    }

    // hitung frekuensi
    for (i = 0; s1[i] != '\0'; i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    // s1 -> kulkas\0\0
    // s2 -> lukkas\0\0
    // i=0; s1[0] != '\0'
    // freq1[s1[0] - 'a']++;
    // freq1['k' - 'a']++;
    // freq2[s2[0] - 'a']++;
    // freq2['l' - 'a']++;


    // bandingkan frekuensi
    for (i = 0; i < 26; i++) {
        // i=0; 0 < 26; i++
        if (freq1[i] != freq2[i]) {
            // jika freq-1 & freq-2 tidak sama
            printf("Kedua string bukan anagram.\n");
            return 0;
        }
    }

    printf("Kedua string adalah anagram.\n");
    return 0;
}
