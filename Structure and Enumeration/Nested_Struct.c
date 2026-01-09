#include <stdio.h>

struct Mesin{
    int cc;
};

struct Mobil {
    char merk[20];
    struct Mesin mesin;
};

int main(){
    struct Mobil m;
    printf("Masukan merk mobil: ");
    scanf("%s", m.merk);

    printf("Masukan cc mesin: ");
    scanf("%d", &m.mesin.cc);

    printf("\nMobil %s dengan mesin %d cc\n",m.merk,m.mesin.cc);

   return 0;
}