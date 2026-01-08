#include <stdio.h>

int main(){
    int jumlah_angka = 5;
    int angka;
    int total = 0;
    for (int i = 0; i < jumlah_angka; i++)
    {
        printf("input angka -> "); scanf("%d",&angka);
        total += angka;
    }   
    printf("Total angka -> %d\n",total);
    


    return 0;
}