#include <stdio.h>
int main(){

    int a = 10;
    printf("Nilai awal a: %d\n",a);
    int *pa;
    pa = &a;
    *pa = 20;
    printf("Alamat memory varibel a: %p\n",&a);
    printf("Nilai setelah diubah a: %d\n",a);
    

    return 0;
}