#include <stdio.h>

struct Mahasiswa{
        char nama[50];
        int umur;
    };

struct Mahasiswa mhs[3];

int main(){

    for (int i = 0; i < 3; i++)
    {
        printf("Data Mahasiswa ke-%d ->\n",i);
        printf("Input nama Mahasiswa: ");
        scanf(" %[^\n]",mhs[i].nama);

        printf("Input Umur Mahasiswa: ");
        scanf("%d",&mhs[i].umur);
    }
   return 0;
}