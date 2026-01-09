#include <stdio.h>

struct Mesin
{
    int cc;
    char Jenis_BB[20];
};

struct Mobil
{
    char Merek[20];
    int Tahun_Produksi;
    struct Mesin mm;
};
    struct Mobil mb;

int main(){
    printf("\n===Input data data mobil===\n");
    printf("Masukan Merek Mobil -> ");
    scanf(" %[^\n]",mb.Merek);

    printf("Masukan Tahun Produksi -> ");
    scanf("%d", &mb.Tahun_Produksi);

    printf("Masukan Kapasitas Mesin -> ");
    scanf("%d",&mb.mm.cc);

    printf("Masukan Kapasitas Jenis Bahan Bakar(Bensin/Diesel) -> ");
    scanf(" %[^\n]",&mb.mm.Jenis_BB);

    printf("\n===Data Mobil===\n");
    printf("Merek Mobil          -> %s\n",mb.Merek);
    printf("Tahun Produksi Mobil -> %d\n",mb.Tahun_Produksi);
    printf("Kapasitas Mesin      -> %d cc\n",mb.mm.cc);
    printf("Jenis Bahan Bakar    -> %s\n",mb.mm.Jenis_BB);

    return 0;
}