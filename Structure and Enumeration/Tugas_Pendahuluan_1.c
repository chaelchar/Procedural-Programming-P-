#include <stdio.h>
struct Mahasiswa
{
    char Nim[20];
    char Nama[50];
    int Tahun;
    char Program_Studi[30];
};

struct Mahasiswa mhs;

int main(){
    printf("Input Nim Mahasiswa -> ");
    scanf(" %[^\n]",mhs.Nim);

    printf("Input Nama Mahasiswa -> ");
    scanf(" %[^\n]", mhs.Nama);
    
    printf("Input Tahun Masuk -> ");
    scanf("%d",&mhs.Tahun);

    printf("Input Program Studi Mahasiswa -> ");
    scanf(" %[^\n]",mhs.Program_Studi);

    printf("\n===Data Mahasiswa===\n");
    printf("Nama Mahasiswa          > %s\n",mhs.Nama);
    printf("Nim Mahasiswa           > %s\n",mhs.Nim);
    printf("Tahun Masuk Mahasiswa   > %d\n",mhs.Tahun);
    printf("Program Studi Mahasiswa > %s\n",mhs.Program_Studi);

   return 0;
}