#include <stdio.h>

enum Kelulusan{
    LULUS = 1,
    MENGULANG,
    TIDAK_LULUS
};

struct Mahasiswa{
    char Nama[30];
    char Nim[30];
    int Nilai;
};

int main(){
    enum Kelulusan takdir;
    int n;
    printf("Masukan Jumlah Mahasiswa: ");
    scanf("%d",&n);
    struct Mahasiswa mh[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n===Data Mahasiswa  ke-%d===\n",i+1);
        printf("Masukan Nama Mahasiswa  -> ");
        scanf(" %[^\n]",mh[i].Nama);
    
        printf("Masukan Nim Mahasiswa   -> ");
        scanf(" %[^\n]",mh[i].Nim);
        
        printf("Masukan Nilai Mahasiswa -> ");
        scanf("%d",&mh[i].Nilai);
        getchar();

    }

    printf("\n===Hasil Kelulusan Mahasiswa===\n");

    for (int i = 0; i < n; i++)
    {
        printf("Nama : %s\n",mh[i].Nama);
        printf("Nim  : %s\n",mh[i].Nim);
        printf("Nilai: %d\n",mh[i].Nilai);
        if (mh[i].Nilai>= 80)
        {
            takdir = LULUS;    
        } else if (mh[i].Nilai >=55 && mh[i].Nilai < 80)
        {
            takdir = MENGULANG;
        } else if (mh[i].Nilai >= 40 && mh[i].Nilai < 55)
        {
            takdir = TIDAK_LULUS;
        }
        
        if (takdir == 1)
        {
            printf("Status: LULUS\n");
        } else if (takdir == 2)
        {
            printf("Status: MENGULANG\n");
        } else if (takdir == 3)
        {
            printf("Status: TIDAK LULUS\n");
        }
    }
   return 0;
}