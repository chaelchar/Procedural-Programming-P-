#include <stdio.h>

struct Mata_Kuliat{
    char Kode[30];
    char Nama[30];
    int Jumlah_SKS;
    char Grade_Lulus;
};

int main(){
    int n;
    printf("Masukan Jumlah Mata Kuliah: ");
    scanf("%d",&n);
    struct Mata_Kuliat mk[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n===Data Mata Kuliah ke-%d===\n",i+1);
        printf("Masukan Kode Mata Kuliah       -> ");
        scanf(" %[^\n]",mk->Kode);
    
        printf("Masukan Nama Mata Kuliah       -> ");
        scanf(" %[^\n]",mk->Nama);
        
        printf("Masukan Jumlah SKS Mata Kuliah -> ");
        scanf("%d",&mk->Jumlah_SKS);
        getchar();
        printf("Masukan Grade Minimal Lulus    -> ");
        scanf("%c",&mk->Grade_Lulus);
        getchar();

    }
    printf("\n===Data Mata Kuliah===\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d. Kode: %s | Nama: %s | SKS: %d | Grade Minimum: %c\n",i+1,mk->Kode,mk->Nama,mk->Jumlah_SKS,mk->Grade_Lulus);
    }

   return 0;
}