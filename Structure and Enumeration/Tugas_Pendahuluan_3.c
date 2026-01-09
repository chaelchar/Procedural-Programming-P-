#include <stdio.h>

enum Hari{
    SENIN = 1,
    SELASA,
    RABU,
    KAMIS,
    JUMAT,
    SABTU,
    MINGGU

};

int main(){
    enum Hari Nomor;
    printf("Masukan Nomor Hari(1-7): ");
    scanf("%d",&Nomor);
    
    switch (Nomor)
{
    case SENIN:
        printf("Hari ke-%d adalah Hari Senin, Ini adalah hari Kerja\n", Nomor);
        break;
    case SELASA:
        printf("Hari ke-%d adalah Hari Selasa, Ini adalah hari Kerja\n", Nomor);
        break;
    case RABU:
        printf("Hari ke-%d adalah Hari Rabu, Ini adalah hari Kerja\n", Nomor);
        break;
    case KAMIS:
        printf("Hari ke-%d adalah Hari Kamis, Ini adalah hari Kerja\n", Nomor);
        break;
    case JUMAT:
        printf("Hari ke-%d adalah Hari Jumat, Ini adalah hari Kerja\n", Nomor);
        break;
    case SABTU:
        printf("Hari ke-%d adalah Hari Sabtu, Ini adalah hari Libur\n", Nomor);
        break;
    case MINGGU:
        printf("Hari ke-%d adalah Hari Minggu, Ini adalah hari Libur\n", Nomor);
        break;
    default:
        printf("Error Code Anda\n");
}


   return 0;
}