#include <stdio.h>

enum Hari{
    SENIN = 1,
    SELASA,
    RABU,
    KAMIS,
    JUMAT,
    SABTU,
    MINGGU,
};

int main(){
    enum Hari hari;
    hari = RABU;    
    printf("Nilai enum RABU adalah %d\n",hari);

    if (hari == SENIN)
    {
        printf("Hari ini adalah SENIN\n");
    } else if (hari == SELASA)
    {
        printf("Hari ini adalah SELASA\n");
    } else if (hari == RABU)
    {
        printf("Hari ini adalah RABU\n");
    } else if (hari == KAMIS)
    {
        printf("Hari ini adalah KAMIS\n");
    } else if (hari == JUMAT)
    {
        printf("Hari ini adalah JUMAT\n");
    } else if (hari == SABTU)
    {
        printf("Hari ini adalah SABTU\n");
    } else if (hari == MINGGU)
    {
        printf("Hari ini adalah MINGGU\n");
    } else{
        printf("Tidak Valid\n");
    }
    
    

   return 0;
}