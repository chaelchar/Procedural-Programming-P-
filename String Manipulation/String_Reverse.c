#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp;
    int i, length;
    
    // Input string dari pengguna
    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);

    // Menghilangkan newline jika ada
    str[strcspn(str, "\n")] = '\0';
    length = strlen(str);
    
    for (i = 0; i < length / 2; i++) 
    // e l e k t r o
    // 0 1 2 3 4 5 6

    // i = 0; i < 3

    {
    // 0
    temp = str[i];
    // i = 0
    // temp = str[i];
    // temp = str[0];
    // temp = e

    str[i] = str[length - i - 1];
    // str[0] = str[length - i - 1];
    // str[0] = str[7 - 0 - 1];
    // str[0] = str[7 - 0 - 1];
    // str[0] = str[6];
    // str[0] = o;
    
    str[length - i - 1] = temp;
    // str[length - i - 1] = temp;
    // str[7 - 0 - 1] = temp;
    // str[6] = temp;
    // str[6] = e;
    // e l e k t r o
    // o l e k t r e
    // o r e k t l e
    // o r t k e l e
    
    // : elektro -> e l e | k | t r o -> 3 kali loop
    }
    
    printf("String setelah dibalik: %s\n", str);
    return 0;
}