#include <stdio.h>

struct Mahasiswa
{
    char nama[50];
    int umur;
};

int main(){
    struct Mahasiswa m;
    printf("Masukan nama: ");
    fgets(m.nama, sizeof(m.nama),stdin);

    printf("Masukan Umur: ");
    scanf("%d",&m.umur);

    printf("Data Mahasiswa ->\n");
    printf("Nama -> %s",m.nama);
    printf("Umur -> %d\n",m.umur);

   return 0;
}