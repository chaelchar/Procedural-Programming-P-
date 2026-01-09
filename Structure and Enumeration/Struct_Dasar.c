#include <stdio.h>
#include <string.h>

// buat dulu strukturnya
struct Mahasiswa{
    char nama[50];
    int umur;
};

// buat variabel dari strukturnya
struct Mahasiswa mhs;

// isi data datanya


int main(){
    strcpy(mhs.nama, "Michael");
    mhs.umur = 20;

    printf("Nama: %s\n",mhs.nama);
    printf("Umur: %d\n",mhs.umur);

    return 0;
}