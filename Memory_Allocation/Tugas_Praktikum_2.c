#include <stdio.h>
int main(){
    int a = 5;
    int b = 10;
    
    printf("Nilai awal variabel a -> %d\n",a);
    printf("Nilai awal variabel b -> %d\n",b);
    
    int *pa;
    int *pb;
    pa = &b;
    pb = &a;
    *pa = 5;
    *pb = 10;

    printf("\n");

    printf("Nilai akhir variabel a -> %d\n",a);
    printf("Nilai akhir variabel b -> %d\n",b);

    return 0;
}