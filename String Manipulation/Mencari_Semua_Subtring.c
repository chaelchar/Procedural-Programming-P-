#include <stdio.h>
#include <string.h>
int main() {
    char str[200], substr[50];
    char *pos;
    int index, found = 0;
    
    // Input string utama dan substring yang dicari
    printf("Masukkan string utama: ");
    fgets(str, sizeof(str), stdin);
    printf("Masukkan substring yang dicari: ");
    fgets(substr, sizeof(substr), stdin);

    str[strcspn(str, "\n")] = '\0';
    substr[strcspn(substr, "\n")] = '\0';
   
    pos = strstr(str, substr);
    // pos = strstr(str[0], substr[o])
    // pos = mengembalikan alamat

    // Mencari semua kemunculan substring
    while (pos != NULL) 
    // selama posnya berisi
    {
    
    // e l e k t r o
    // 0 1 2 3 4 5 6
    //         t r o
    // 
    index = pos - str;
    // index = 4 - str[0]
    // index = 4 - 0
    // index = 4
    printf("Substring \"%s\" ditemukan di posisi: %d\n", substr, index);
    // 
    found = 1;
    pos = strstr(pos + 1, substr);
    // index = 5 - str[0]
    // index = 5
    }
    
    if (!found) 
    {
    printf("Substring tidak ditemukan.\n");
    }
    return 0;
}