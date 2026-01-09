#include <stdio.h>
int main(){

    char stringUtama[100];
    char substring[50];
    printf("masukan string utama: ");
    fgets(stringUtama,sizeof(stringUtama),stdin);
    
    printf("masukan string yang dicari: ");
    fgets(substring,sizeof(substring),stdin);

    stringUtama[ strcspn(stringUtama, "\n")] = '\0';
    // michael lumbantobing\n\0
    // michael lumbantobing\0\0

    substring[strcspn(substring, "\n")] = '\0';
    
    char *hasil = strstr(stringUtama,substring);

    if (hasil != NULL)
    {
        int posisi = hasil - stringUtama;
        printf("substring ditemukan pada posisi index ke-%d\n",posisi);
    }else{
        printf("Substring tidak ditemukan\n");
    }

    

    return 0;
}